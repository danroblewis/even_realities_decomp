#!/usr/bin/env python3
"""
BLE UART Manager - Minimal Stub
"""

import asyncio
import logging
import traceback
from datetime import datetime
from typing import Dict, List, Any

import bleak
from bleak import BleakScanner, BleakClient
from bleak.backends.device import BLEDevice

logger = logging.getLogger(__name__)

class NordicBLEUARTManager:
    """Minimal stub for BLE UART Manager"""
    
    # Nordic BLE UART Service UUIDs
    UART_SERVICE_UUID = "6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
    UART_TX_CHARACTERISTIC_UUID = "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"  # Write
    UART_RX_CHARACTERISTIC_UUID = "6E400003-B5A3-F393-E0A9-E50E24DCCA9E"  # Notify
    
    def __init__(self):
        self.is_connected = False
        self.target_device = None
        self.scanned_devices: List[BLEDevice] = []
        self.client = None
        self.uart_service = None
        self.tx_characteristic = None
        self.rx_characteristic = None
        self.communication_log = []
        self.message_id_counter = 0
        self.pending_messages = {}
    
    async def scan_for_devices(self, filter_pattern: str = "G1_") -> List[Dict[str, Any]]:
        """Scan for BLE devices, optionally filtering by name pattern"""
        logger.info("Starting BLE device scan...")
        
        try:
            # Perform BLE scan - this is the only operation that could throw an exception
            devices = await BleakScanner.discover(timeout=10.0)
        except Exception as e:
            logger.error(f"Scan failed: {e}")
            return []
        
        # Process scan results - this won't throw exceptions
        device_list = []
        self.scanned_devices = []  # Clear previous scan results
        
        for device in devices:
            if not device.name:
                continue
                
            # Filter by pattern if specified
            if filter_pattern and filter_pattern not in device.name:
                continue
            
            # Store the actual BLEDevice object for reuse
            self.scanned_devices.append(device)
            
            device_info = {
                "name": device.name,
                "address": device.address,
                "rssi": getattr(device, 'rssi', 'N/A'),
                "metadata": getattr(device, 'metadata', {})
            }
            device_list.append(device_info)
            logger.info(f"Found device: {device.name} ({device.address})")
        
        logger.info(f"Scan complete. Found {len(device_list)} devices")
        return device_list

    def _find_device_by_address(self, address: str) -> BLEDevice:
        """Find a device by address in the scanned devices list"""
        return next((d for d in self.scanned_devices if d.address == address), None)
    
    def _find_characteristic(self, service, uuid: str, required_property: str) -> Any:
        """Find a characteristic by UUID with required property"""
        for char in service.characteristics:
            if char.uuid.lower() == uuid.lower() and required_property in char.properties:
                return char
        return None

    async def connect_to_device(self, address: str) -> bool:
        """Connect to a BLE device by address and discover UART service"""
        logger.info(f"Connecting to device {address}...")
        
        target_device = self._find_device_by_address(address)

        if not target_device:
            try:
                await self.scan_for_devices()
                target_device = self._find_device_by_address(address)
            except Exception as e:
                logger.error(f"Scan failed: {e}")
                return False

        if not target_device:
            logger.error(f"Device {address} not found")
            return False
            
        logger.info(f"Found target device: {target_device.name} ({target_device.address})")
        
        # Connect to the device - this is where exceptions could occur
        try:
            self.client = BleakClient(target_device)
            logger.info("Attempting to connect...")
            logger.info("Note: On macOS, you may see a pairing prompt. Please accept it if it appears.")
            
            # Use a longer timeout to account for macOS pairing prompts
            await asyncio.wait_for(self.client.connect(), timeout=30.0)  # 30 second timeout
            logger.info(f"Connected to {target_device.name}")
            
            # Wait for services to be discovered
            logger.info("Waiting for services to be discovered...")
            await asyncio.sleep(1)
            
            # Discover the UART service and characteristics
            logger.info("Discovering UART service...")
            if not await self._discover_uart_service():
                logger.error("Failed to discover UART service")
                await self.disconnect()
                return False
            
            self.target_device = target_device
            self.is_connected = True
            
            logger.info(f"Successfully connected to {target_device.name} with UART service")
            return True

        except Exception as e:
            logger.error(f"Failed to connect: {e}")
            logger.error(f"Connection error traceback: {traceback.format_exc()}")
            logger.error("This might be due to:")
            logger.error("1. macOS pairing prompt not being accepted")
            logger.error("2. Device being out of range")
            logger.error("3. Device being busy or in use by another app")
            self.is_connected = False
            return False
    
    async def _discover_uart_service(self) -> bool:
        """Discover the Nordic UART service and characteristics"""
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
        self.tx_characteristic = self._find_characteristic(uart_service, self.UART_TX_CHARACTERISTIC_UUID, "write")        
        if not self.tx_characteristic:
            logger.error("UART TX characteristic not found or not writable")
            return False
        
        logger.info("Found UART TX characteristic (write)")
        
        # Find RX characteristic (notify)
        self.rx_characteristic = self._find_characteristic(uart_service, self.UART_RX_CHARACTERISTIC_UUID, "notify")
        if not self.rx_characteristic:
            logger.error("UART RX characteristic not found or not notifiable")
            return False
        
        logger.info("Found UART RX characteristic (notify)")
        
        # Start listening for notifications
        await self.client.start_notify(self.rx_characteristic.uuid, self._notification_handler)
        logger.info("Started listening to UART RX notifications")
        
        return True
    
    async def _notification_handler(self, characteristic, data: bytearray):
        """Handle incoming notifications from the UART RX characteristic"""
        timestamp = datetime.now()
        hex_data = data.hex()
        received_command_code = hex_data[:2].upper() if len(hex_data) >= 2 else ""
        
        logger.info(f"Received UART notification: {hex_data}")
        
        # Look for a matching sent message
        matching_sent = None
        for msg_id, sent_msg in self.pending_messages.items():
            if sent_msg["command_code"] == received_command_code:
                matching_sent = sent_msg
                break
        
        # If no matching message found, log and return early
        if not matching_sent:
            logger.info(f"No matching sent message found for response {hex_data}")
            return
        
        # This is a response to a sent message
        response_time_ms = int((timestamp - matching_sent["timestamp"]).total_seconds() * 1000)
        
        logger.info(f"Found matching sent message: {matching_sent['id']}")
        
        # Update the sent message with response info
        matching_sent["response_data"] = hex_data
        matching_sent["response_time_ms"] = response_time_ms
        
        # Signal that response has been received
        if "response_event" in matching_sent:
            matching_sent["response_event"].set()
        
        # Remove from pending messages
        if matching_sent["id"] in self.pending_messages:
            del self.pending_messages[matching_sent["id"]]
        
        logger.info(f"Matched response {hex_data} with sent message {matching_sent['id']} in {response_time_ms}ms")
    
    async def disconnect(self):
        """Disconnect from the current device"""
        if self.client and self.is_connected:
            try:
                await self.client.disconnect()
                logger.info("Disconnected from device")
            except Exception as e:
                logger.error(f"Error during disconnect: {e}")
        
        # Always clean up state
        self.is_connected = False
        self.client = None
        self.uart_service = None
        self.tx_characteristic = None
        self.rx_characteristic = None
        self.target_device = None
    
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
    
    async def send_message(self, hex_data: str) -> str:
        """Send a UART message and return the hex response packet or empty string"""
        if not self.client or not self.is_connected:
            raise Exception("Not connected to any device")
        
        if not self.tx_characteristic:
            raise Exception("UART TX characteristic not available")
        
        # Convert hex string to bytes
        data = bytes.fromhex(hex_data)
        command_code = hex_data[:2].upper() if len(hex_data) >= 2 else ""
        
        # Create sent message record
        sent_msg = {
            "id": f"sent_{self.message_id_counter}",
            "timestamp": datetime.now(),
            "direction": "sent",
            "data": data,
            "command_code": command_code
        }
        
        self.message_id_counter += 1
        self.communication_log.append(sent_msg)
        
        # Add to pending messages
        self.pending_messages[sent_msg["id"]] = sent_msg
        
        response_event = asyncio.Event()
        sent_msg["response_event"] = response_event

        try:
            # Send the data
            await self.client.write_gatt_char(self.tx_characteristic.uuid, data)
            logger.info(f"Sent UART message: {hex_data} (Command: {command_code})")
            
            # Wait for response with 1-second timeout
            await asyncio.wait_for(response_event.wait(), timeout=1.0)
            
            # Response received - return the hex data
            response_data = sent_msg.get("response_data", "")
            return response_data
            
        except asyncio.TimeoutError:
            # Timeout reached
            if sent_msg["id"] in self.pending_messages:
                del self.pending_messages[sent_msg["id"]]
            return ""  # Return empty string on timeout
            
        except Exception as e:
            logger.error(f"Failed to send message: {e}")
            # Clean up pending message on error
            if sent_msg["id"] in self.pending_messages:
                del self.pending_messages[sent_msg["id"]]
            raise
