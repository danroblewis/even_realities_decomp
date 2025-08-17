#!/usr/bin/env python3
"""
BLE UART Manager for Nordic Semiconductor BLE UART Protocol

This module implements the proprietary Nordic BLE UART protocol which uses
specific GATT characteristics for transmit/receive communication.
"""

import asyncio
import logging
import time
import uuid
from datetime import datetime, timedelta
from typing import Dict, List, Optional, Any, Callable
from dataclasses import dataclass
from enum import Enum

import bleak
from bleak import BleakScanner, BleakClient
from bleak.backends.device import BLEDevice
from bleak.backends.characteristic import BleakGATTCharacteristic

# Configure logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

class MessageStatus(Enum):
    """Status of a UART message"""
    PENDING = "pending"
    SENT = "sent"
    RESPONDED = "responded"
    TIMEOUT = "timeout"
    ERROR = "error"

class MessageType(Enum):
    """Type of UART message"""
    COMMAND = "command"
    STATUS = "status"
    HEARTBEAT = "heartbeat"
    UNKNOWN = "unknown"

@dataclass
class UARTMessage:
    """Represents a UART message sent or received"""
    id: str
    timestamp: datetime
    direction: str  # "sent" or "received"
    data: bytes
    hex_data: str
    message_type: MessageType
    command_code: str  # First 2 hex characters
    response_to: Optional[str] = None
    response_time_ms: Optional[int] = None
    status: MessageStatus = MessageStatus.PENDING
    sequence_id: Optional[str] = None
    is_status_update: bool = False

class NordicBLEUARTManager:
    """Manages Nordic BLE UART communication using GATT characteristics"""
    
    # Nordic BLE UART Service UUID (standard for Nordic devices)
    UART_SERVICE_UUID = "6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
    
    # Nordic BLE UART Characteristics
    UART_TX_CHARACTERISTIC_UUID = "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"  # Write
    UART_RX_CHARACTERISTIC_UUID = "6E400003-B5A3-F393-E0A9-E50E24DCCA9E"  # Notify
    
    def __init__(self):
        self.target_device: Optional[BLEDevice] = None
        self.client: Optional[BleakClient] = None
        self.is_connected = False
        self.uart_service = None
        self.tx_characteristic: Optional[BleakGATTCharacteristic] = None
        self.rx_characteristic: Optional[BleakGATTCharacteristic] = None
        
        # Message tracking
        self.communication_log: List[UARTMessage] = []
        self.message_id_counter = 0
        self.pending_messages: Dict[str, UARTMessage] = {}
        
        # Callbacks
        self.message_received_callback: Optional[Callable[[UARTMessage], None]] = None
        self.status_update_callback: Optional[Callable[[UARTMessage], None]] = None
        
        # Configuration
        self.command_timeout = 1.0  # 1 second timeout for commands
        self.heartbeat_interval = 25  # 25 seconds for heartbeat
        self.heartbeat_task: Optional[asyncio.Task] = None
        
        # Status codes that indicate device status updates (not responses to commands)
        self.status_codes = {
            "C9": "success",
            "CA": "error", 
            "CB": "in_progress",
            "06": "heartbeat"
        }
    
    async def scan_for_devices(self, filter_pattern: str = "G1_") -> List[Dict[str, Any]]:
        """Scan for BLE devices, optionally filtering by name pattern"""
        logger.info("Starting BLE device scan...")
        try:
            devices = await BleakScanner.discover(timeout=10.0)
            device_list = []
            
            for device in devices:
                if device.name:
                    # Filter by pattern if specified
                    if filter_pattern and filter_pattern not in device.name:
                        continue
                    
                    device_info = {
                        "name": device.name,
                        "address": device.address,
                        "rssi": getattr(device, 'rssi', 'N/A'),  # Handle missing rssi gracefully
                        "metadata": getattr(device, 'metadata', {})
                    }
                    device_list.append(device_info)
                    logger.info(f"Found device: {device.name} ({device.address})")
            
            logger.info(f"Scan complete. Found {len(device_list)} devices")
            return device_list
            
        except Exception as e:
            logger.error(f"Scan failed: {e}")
            return []
    
    async def connect_to_device(self, address: str) -> bool:
        """Connect to a BLE device by address and discover UART service"""
        try:
            logger.info(f"Connecting to device {address}...")
            
            # Find the device
            devices = await BleakScanner.discover(timeout=5.0)
            target_device = None
            for device in devices:
                if device.address == address:
                    target_device = device
                    break
            
            if not target_device:
                logger.error(f"Device {address} not found")
                return False
            
            # Connect to the device
            self.client = BleakClient(target_device)
            await self.client.connect()
            logger.info(f"Connected to {target_device.name}")
            
            # Wait for services to be discovered
            await asyncio.sleep(1)
            
            # Discover the UART service and characteristics
            if not await self._discover_uart_service():
                logger.error("Failed to discover UART service")
                await self.disconnect()
                return False
            
            self.target_device = target_device
            self.is_connected = True
            
            # Start heartbeat task
            self.heartbeat_task = asyncio.create_task(self._heartbeat_loop())
            
            logger.info(f"Successfully connected to {target_device.name} with UART service")
            return True
            
        except Exception as e:
            logger.error(f"Failed to connect: {e}")
            self.is_connected = False
            return False
    
    async def _discover_uart_service(self) -> bool:
        """Discover the Nordic UART service and characteristics"""
        try:
            if not self.client or not self.client.services:
                logger.error("No services available")
                return False
            
            # Look for the Nordic UART service
            uart_service = None
            for service in self.client.services:
                if service.uuid.lower() == self.UART_SERVICE_UUID.lower():
                    uart_service = service
                    break
            
            if not uart_service:
                logger.error("Nordic UART service not found")
                return False
            
            self.uart_service = uart_service
            logger.info("Found Nordic UART service")
            
            # Find TX characteristic (write)
            self.tx_characteristic = None
            for char in uart_service.characteristics:
                if char.uuid.lower() == self.UART_TX_CHARACTERISTIC_UUID.lower():
                    if "write" in char.properties:
                        self.tx_characteristic = char
                        logger.info("Found UART TX characteristic (write)")
                        break
            
            if not self.tx_characteristic:
                logger.error("UART TX characteristic not found or not writable")
                return False
            
            # Find RX characteristic (notify)
            self.rx_characteristic = None
            for char in uart_service.characteristics:
                if char.uuid.lower() == self.UART_RX_CHARACTERISTIC_UUID.lower():
                    if "notify" in char.properties:
                        self.rx_characteristic = char
                        logger.info("Found UART RX characteristic (notify)")
                        break
            
            if not self.rx_characteristic:
                logger.error("UART RX characteristic not found or not notifiable")
                return False
            
            # Start listening for notifications
            await self.client.start_notify(
                self.rx_characteristic.uuid, 
                self._notification_handler
            )
            logger.info("Started listening to UART RX notifications")
            
            return True
            
        except Exception as e:
            logger.error(f"Failed to discover UART service: {e}")
            return False
    
    async def disconnect(self):
        """Disconnect from the current device"""
        if self.heartbeat_task:
            self.heartbeat_task.cancel()
            self.heartbeat_task = None
        
        if self.client and self.is_connected:
            await self.client.disconnect()
            self.is_connected = False
            self.client = None
            self.uart_service = None
            self.tx_characteristic = None
            self.rx_characteristic = None
            logger.info("Disconnected from device")
    
    def _extract_command_code(self, hex_data: str) -> str:
        """Extract the command code (first 2 hex characters) from a hex string"""
        if len(hex_data) >= 2:
            return hex_data[:2].upper()
        return ""
    
    def _determine_message_type(self, hex_data: str) -> MessageType:
        """Determine the type of message based on content"""
        if len(hex_data) < 2:
            return MessageType.UNKNOWN
        
        command_code = hex_data[:2].upper()
        
        if command_code in self.status_codes:
            if command_code == "06":
                return MessageType.HEARTBEAT
            else:
                return MessageType.STATUS
        
        return MessageType.COMMAND
    
    def _is_status_update(self, hex_data: str) -> bool:
        """Check if a received message is a status update (not a response to a command)"""
        if len(hex_data) < 2:
            return False
        
        command_code = hex_data[:2].upper()
        return command_code in self.status_codes
    
    def _find_matching_sent_message(self, received_command_code: str, timestamp: datetime) -> Optional[UARTMessage]:
        """Find a sent message that matches the received response within timeout period"""
        current_time = timestamp
        
        # Look through pending messages for a match
        for msg_id, sent_msg in self.pending_messages.items():
            if sent_msg.status == MessageStatus.PENDING:
                # Check if within timeout period
                time_diff = (current_time - sent_msg.timestamp).total_seconds()
                if time_diff <= self.command_timeout:
                    # Check if command codes match
                    if sent_msg.command_code == received_command_code:
                        return sent_msg
                elif time_diff > self.command_timeout:
                    # Mark as timeout
                    sent_msg.status = MessageStatus.TIMEOUT
                    logger.warning(f"Message {msg_id} timed out after {time_diff:.2f}s")
        
        return None
    
    async def _notification_handler(self, characteristic: BleakGATTCharacteristic, data: bytearray):
        """Handle incoming notifications from the UART RX characteristic"""
        try:
            timestamp = datetime.now()
            hex_data = data.hex()
            received_command_code = self._extract_command_code(hex_data)
            message_type = self._determine_message_type(hex_data)
            
            logger.info(f"Received UART notification: {hex_data} (Type: {message_type.value})")
            
            # Check if this is a status update (not a response to a command)
            is_status_update = self._is_status_update(hex_data)
            
            if is_status_update:
                # This is a status update from the device
                status_msg = UARTMessage(
                    id=f"status_{self.message_id_counter}",
                    timestamp=timestamp,
                    direction="received",
                    data=bytes(data),
                    hex_data=hex_data,
                    message_type=message_type,
                    command_code=received_command_code,
                    status=MessageStatus.RESPONDED,
                    is_status_update=True
                )
                
                self.message_id_counter += 1
                self.communication_log.append(status_msg)
                
                # Call status update callback if set
                if self.status_update_callback:
                    self.status_update_callback(status_msg)
                
                logger.info(f"Status update received: {hex_data}")
                return
            
            # Look for a matching sent message
            matching_sent = self._find_matching_sent_message(received_command_code, timestamp)
            
            if matching_sent:
                # This is a response to a sent message
                response_time_ms = int((timestamp - matching_sent.timestamp).total_seconds() * 1000)
                
                # Update the sent message with response info
                matching_sent.response_to = f"response_{self.message_id_counter}"
                matching_sent.response_time_ms = response_time_ms
                matching_sent.status = MessageStatus.RESPONDED
                
                # Remove from pending messages
                if matching_sent.id in self.pending_messages:
                    del self.pending_messages[matching_sent.id]
                
                logger.info(f"Matched response {hex_data} with sent message {matching_sent.id} in {response_time_ms}ms")
                
                # Call message received callback if set
                if self.message_received_callback:
                    self.message_received_callback(matching_sent)
            else:
                # This is an unmatched received message
                received_msg = UARTMessage(
                    id=f"recv_{self.message_id_counter}",
                    timestamp=timestamp,
                    direction="received",
                    data=bytes(data),
                    hex_data=hex_data,
                    message_type=message_type,
                    command_code=received_command_code,
                    status=MessageStatus.RESPONDED
                )
                
                self.message_id_counter += 1
                self.communication_log.append(received_msg)
                logger.info(f"Received unmatched message: {hex_data}")
                
        except Exception as e:
            logger.error(f"Error handling notification: {e}")
    
    async def send_message(self, hex_data: str, timeout: float = None) -> Dict[str, Any]:
        """Send a UART message and optionally wait for response"""
        if not self.client or not self.is_connected:
            raise Exception("Not connected to any device")
        
        if not self.tx_characteristic:
            raise Exception("UART TX characteristic not available")
        
        try:
            # Convert hex string to bytes
            data = bytes.fromhex(hex_data)
            command_code = self._extract_command_code(hex_data)
            message_type = self._determine_message_type(hex_data)
            
            # Create sent message record
            sent_msg = UARTMessage(
                id=f"sent_{self.message_id_counter}",
                timestamp=datetime.now(),
                direction="sent",
                data=data,
                hex_data=hex_data,
                message_type=message_type,
                command_code=command_code,
                status=MessageStatus.PENDING
            )
            
            self.message_id_counter += 1
            self.communication_log.append(sent_msg)
            
            # Send the data
            await self.client.write_gatt_char(self.tx_characteristic.uuid, data)
            logger.info(f"Sent UART message: {hex_data} (Command: {command_code})")
            
            # If this is a command that expects a response, add to pending and wait
            if message_type == MessageType.COMMAND and timeout is not None:
                self.pending_messages[sent_msg.id] = sent_msg
                
                # Wait for response with timeout
                start_time = time.time()
                while time.time() - start_time < timeout:
                    if sent_msg.status == MessageStatus.RESPONDED:
                        return {
                            "status": "success",
                            "message_id": sent_msg.id,
                            "response_data": sent_msg.response_to,
                            "response_time_ms": sent_msg.response_time_ms
                        }
                    await asyncio.sleep(0.1)
                
                # Timeout reached
                sent_msg.status = MessageStatus.TIMEOUT
                if sent_msg.id in self.pending_messages:
                    del self.pending_messages[sent_msg.id]
                
                return {
                    "status": "timeout",
                    "message_id": sent_msg.id,
                    "message": "Command sent but no response received within timeout period"
                }
            else:
                # No response expected, mark as sent
                sent_msg.status = MessageStatus.SENT
                return {
                    "status": "sent",
                    "message_id": sent_msg.id,
                    "message": "Message sent successfully"
                }
            
        except Exception as e:
            logger.error(f"Failed to send message: {e}")
            raise
    
    async def send_command(self, hex_data: str, timeout: float = None) -> Dict[str, Any]:
        """Send a command and wait for response with default timeout"""
        if timeout is None:
            timeout = self.command_timeout
        
        return await self.send_message(hex_data, timeout)
    
    async def send_status_request(self, hex_data: str) -> Dict[str, Any]:
        """Send a status request (no response expected)"""
        return await self.send_message(hex_data, timeout=None)
    
    async def _heartbeat_loop(self):
        """Send heartbeat packets every 25 seconds to maintain connection"""
        while self.is_connected:
            try:
                await asyncio.sleep(self.heartbeat_interval)
                if self.is_connected:
                    # Send a valid heartbeat packet (250600010402)
                    await self.send_status_request("250600010402")
                    logger.debug("Sent heartbeat packet")
            except asyncio.CancelledError:
                break
            except Exception as e:
                logger.error(f"Heartbeat failed: {e}")
                break
    
    def get_connection_status(self) -> Dict[str, Any]:
        """Get current connection status and device info"""
        return {
            "connected": self.is_connected,
            "device_name": self.target_device.name if self.target_device else None,
            "device_address": self.target_device.address if self.target_device else None,
            "uart_service_available": self.uart_service is not None,
            "tx_characteristic_available": self.tx_characteristic is not None,
            "rx_characteristic_available": self.rx_characteristic is not None,
            "pending_messages_count": len(self.pending_messages),
            "total_messages": len(self.communication_log)
        }
    
    def set_message_received_callback(self, callback: Callable[[UARTMessage], None]):
        """Set callback for when messages are received"""
        self.message_received_callback = callback
    
    def set_status_update_callback(self, callback: Callable[[UARTMessage], None]):
        """Set callback for when status updates are received"""
        self.status_update_callback = callback
