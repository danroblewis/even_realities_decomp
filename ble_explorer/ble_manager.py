import asyncio
import logging
from typing import Optional, Dict, List, Callable, Any
from bleak import BleakScanner, BleakClient
from bleak.backends.device import BLEDevice
from bleak.backends.characteristic import BleakGATTCharacteristic
from bleak.backends.descriptor import BleakGATTDescriptor
import json
import time
from dataclasses import dataclass
from datetime import datetime

# Set up logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

@dataclass
class BLEMessage:
    """Represents a BLE message sent or received"""
    id: str
    timestamp: datetime
    direction: str  # "sent" or "received"
    data: bytes
    hex_data: str
    message_name: Optional[str] = None
    sequence_name: Optional[str] = None
    message_id: Optional[str] = None  # Actual message ID for linking
    sequence_id: Optional[str] = None  # Actual sequence ID for linking
    response_to: Optional[str] = None
    response_time_ms: Optional[int] = None
    status: Optional[str] = None  # "pending", "success", "error", "in_progress"
    command_code: Optional[str] = None  # First byte/2 hex chars of sent message
    response_data: Optional[str] = None  # Response data for sent messages
    parsed_data: Optional[Dict[str, Any]] = None  # Parsed attribute-value mappings
    message_type_info: Optional[Dict[str, Any]] = None  # Message type information
    response_parsed_data: Optional[Dict[str, Any]] = None # Parsed data for responses
    response_message_type_info: Optional[Dict[str, Any]] = None # Message type info for responses

class BLEManager:
    def __init__(self):
        self.target_device: Optional[BLEDevice] = None
        self.client: Optional[BleakClient] = None
        self.is_connected = False
        self.connection_task: Optional[asyncio.Task] = None
        self.message_queue: asyncio.Queue = asyncio.Queue()
        self.communication_log: List[BLEMessage] = []
        self.response_callbacks: Dict[str, Callable] = {}
        self.message_id_counter = 0
        self.characteristics: Dict[str, BleakGATTCharacteristic] = {}
        
    async def scan_for_devices(self) -> List[BLEDevice]:
        """Scan for BLE devices and return those matching 'Even G1_' pattern, sorted with _R_ first"""
        logger.info("Starting BLE device scan...")
        devices = await BleakScanner.discover(timeout=10.0)
        
        target_devices = []
        for device in devices:
            if device.name and "Even G1_" in device.name:
                logger.info(f"Found target device: {device.name} ({device.address})")
                target_devices.append(device)
        
        # Sort devices: _R_ devices first, then _L_ devices
        target_devices.sort(key=lambda x: (0 if "_R_" in x.name else 1, x.name))
        
        return target_devices
    
    async def connect_to_device(self, device: BLEDevice) -> bool:
        """Connect to the specified BLE device"""
        try:
            logger.info(f"Connecting to {device.name} ({device.address})...")
            self.client = BleakClient(device)
            await self.client.connect()
            
            # Discover services and characteristics
            # Note: In newer versions of Bleak, services are automatically discovered on connection
            # We need to wait a moment for the discovery to complete
            await asyncio.sleep(1)
            
            # Get services from the connected client
            if hasattr(self.client, 'services') and self.client.services:
                for service in self.client.services:
                    for char in service.characteristics:
                        if "write" in char.properties:
                            self.characteristics[char.uuid] = char
                            logger.info(f"Found writable characteristic: {char.uuid}")
            else:
                logger.warning("No services discovered, trying to discover manually")
                try:
                    # Fallback: try to discover services manually
                    services = await self.client.discover_services()
                    for service in services:
                        for char in service.characteristics:
                            if "write" in char.properties:
                                self.characteristics[char.uuid] = char
                                logger.info(f"Found writable characteristic: {char.uuid}")
                except Exception as e:
                    logger.warning(f"Manual service discovery failed: {e}")
            
            self.target_device = device
            self.is_connected = True
            logger.info(f"Successfully connected to {device.name}")
            
            # Start listening for notifications
            await self._start_notification_listener()
            
            return True
            
        except Exception as e:
            logger.error(f"Failed to connect to {device.name}: {e}")
            self.is_connected = False
            return False
    
    async def _start_notification_listener(self):
        """Start listening for notifications from the device"""
        if not self.client or not self.is_connected:
            return
            
        try:
            # Find characteristics that support notifications
            if hasattr(self.client, 'services') and self.client.services:
                for service in self.client.services:
                    for char in service.characteristics:
                        if "notify" in char.properties:
                            await self.client.start_notify(char.uuid, self._notification_handler)
                            logger.info(f"Started listening to notifications on {char.uuid}")
            else:
                logger.warning("No services available for notification setup")
                    
        except Exception as e:
            logger.error(f"Failed to start notification listener: {e}")
    
    def _extract_command_code(self, hex_data: str) -> str:
        """Extract the command code (first 2 hex characters) from a hex string"""
        if len(hex_data) >= 2:
            return hex_data[:2].upper()
        return ""
    
    def _is_status_response(self, hex_data: str) -> bool:
        """Check if the received data is a status response (C9, CA, CB, 06)"""
        if len(hex_data) >= 2:
            status = hex_data[:2].upper()
            return status in ["C9", "CA", "CB", "06"]
        return False
    
    async def _parse_packet(self, hex_data: str) -> Optional[Dict[str, Any]]:
        """Parse a hex packet using the main application's parsing logic"""
        try:
            # Try to parse locally first
            local_result = self._parse_packet_local(hex_data)
            if local_result:
                return local_result
            
            # If local parsing fails, try to call the main app's parsing
            try:
                # Import main app functions
                from main import find_matching_message_types, deserialize_packet
                
                # Convert hex to bytes
                packet_bytes = bytes.fromhex(hex_data)
                if len(packet_bytes) < 1:
                    return None
                
                # Extract command code
                command_code = f"{packet_bytes[0]:02x}"
                
                # Find matching message types
                matching_types = find_matching_message_types(command_code, len(packet_bytes))
                if not matching_types:
                    return None
                
                # Get the best match
                best_match = matching_types[0]
                
                # Deserialize the packet
                parsed_data = deserialize_packet(packet_bytes, best_match)
                
                return {
                    'parsed_data': parsed_data,
                    'message_type': {
                        'id': best_match.id,
                        'name': best_match.name,
                        'description': best_match.description
                    }
                }
                
            except ImportError:
                # If main app functions aren't available, fall back to local parsing
                return self._parse_packet_local(hex_data)
            
        except Exception as e:
            logger.error(f"Local packet parsing failed for {hex_data}: {e}")
            return None
    
    async def ensure_message_parsed(self, message: BLEMessage) -> bool:
        """Ensure a message has parsed data, re-parsing if necessary"""
        if message.parsed_data is not None:
            return True  # Already parsed
        
        try:
            # Re-parse the packet
            parsed_info = await self._parse_packet(message.hex_data)
            if parsed_info:
                message.parsed_data = parsed_info.get('parsed_data')
                message.message_type_info = parsed_info.get('message_type')
                return True
        except Exception as e:
            logger.error(f"Failed to re-parse message {message.id}: {e}")
        
        return False
    
    def _parse_packet_local(self, hex_data: str) -> Optional[Dict[str, Any]]:
        """Local packet parsing fallback that doesn't require HTTP requests."""
        try:
            # Convert hex to bytes
            packet_bytes = bytes.fromhex(hex_data)
            
            if len(packet_bytes) < 1:
                return None
            
            # Extract command code
            command_code = f"{packet_bytes[0]:02x}"
            
            # Basic parsing based on known command codes
            if command_code == "25":
                # Heartbeat command
                if len(packet_bytes) >= 6:
                    return {
                        "parsed_data": {
                            "command": f"0x{command_code}",
                            "unknown_1": f"0x{packet_bytes[1]:02x}",
                            "unknown_2": f"0x{packet_bytes[2]:02x}",
                            "seq_1": f"0x{packet_bytes[3]:02x}",
                            "constant": f"0x{packet_bytes[4]:02x}",
                            "seq_2": f"0x{packet_bytes[5]:02x}"
                        },
                        "message_type": {
                            "id": "heartbeat",
                            "name": "heartbeat",
                            "description": "Heartbeat message"
                        }
                    }
            elif command_code == "4e":
                # Text command - check if it matches text_4e pattern
                if len(packet_bytes) >= 11:  # Minimum length for text_4e
                    # Check if it looks like text_4e format
                    if len(packet_bytes) >= 11:
                        # Parse as text_4e: command(1) + length(2) + flags(1) + width(2) + height(2) + xpos(2) + ypos(2) + text_data(variable)
                        length_bytes = packet_bytes[1:3]
                        flags = packet_bytes[3]
                        width_bytes = packet_bytes[4:6]
                        height_bytes = packet_bytes[6:8]
                        xpos_bytes = packet_bytes[8:10]
                        ypos_bytes = packet_bytes[10:12]
                        text_data = packet_bytes[12:] if len(packet_bytes) > 12 else b''
                        
                        # Convert to readable values
                        length = int.from_bytes(length_bytes, byteorder='big')
                        width = int.from_bytes(width_bytes, byteorder='big')
                        height = int.from_bytes(height_bytes, byteorder='big')
                        xpos = int.from_bytes(xpos_bytes, byteorder='big')
                        ypos = int.from_bytes(ypos_bytes, byteorder='big')
                        
                        # Try to decode text data
                        try:
                            text_str = text_data.decode('utf-8').rstrip('\x00')
                        except:
                            text_str = text_data.hex()
                        
                        return {
                            "parsed_data": {
                                "command": f"0x{command_code}",
                                "length": f"0x{length:04x}",
                                "flags": f"0x{flags:02x}",
                                "width": f"0x{width:04x}",
                                "height": f"0x{height:04x}",
                                "xpos": f"0x{xpos:04x}",
                                "ypos": f"0x{ypos:04x}",
                                "text_data": text_str
                            },
                            "message_type": {
                                "id": "text_4e",
                                "name": "text_4e",
                                "description": "Text display command with positioning"
                            }
                        }
                    else:
                        # Fallback to basic text command parsing
                        return {
                            "parsed_data": {
                                "command": f"0x{command_code}",
                                "data": packet_bytes[1:].hex()
                            },
                            "message_type": {
                                "id": "text_command",
                                "name": "text_command",
                                "description": "Text display command"
                            }
                        }
            elif command_code == "18":
                # Clear screen command
                if len(packet_bytes) >= 4:
                    length_bytes = packet_bytes[1:3]
                    data = packet_bytes[3]
                    length = int.from_bytes(length_bytes, byteorder='big')
                    
                    return {
                        "parsed_data": {
                            "command": f"0x{command_code}",
                            "length": f"0x{length:04x}",
                            "data": f"0x{data:02x}"
                        },
                        "message_type": {
                            "id": "clear_screen",
                            "name": "clear_screen",
                            "description": "Clear screen command"
                        }
                    }
                elif len(packet_bytes) >= 3:
                    # Handle case where data field might be missing
                    length_bytes = packet_bytes[1:3]
                    length = int.from_bytes(length_bytes, byteorder='big')
                    
                    return {
                        "parsed_data": {
                            "command": f"0x{command_code}",
                            "length": f"0x{length:04x}"
                        },
                        "message_type": {
                            "id": "clear_screen",
                            "name": "clear_screen",
                            "description": "Clear screen command (partial)"
                        }
                    }
            
            # Generic parsing for unknown commands
            return {
                "parsed_data": {
                    "command": f"0x{command_code}",
                    "data": packet_bytes[1:].hex()
                },
                "message_type": {
                    "id": "unknown",
                    "name": "unknown",
                    "description": f"Unknown command {command_code}"
                }
            }
            
        except Exception as e:
            logger.error(f"Local packet parsing failed for {hex_data}: {e}")
            return None
    
    async def _notification_handler(self, characteristic: BleakGATTCharacteristic, data: bytearray):
        """Handle incoming notifications from the device"""
        try:
            timestamp = datetime.now()
            hex_data = data.hex()
            
            # Extract the command code from the received packet (first 2 hex characters)
            received_command_code = self._extract_command_code(hex_data)
            
            if not received_command_code:
                logger.warning(f"Received packet with invalid command code: {hex_data}")
                return
            
            # Try to parse the packet
            parsed_info = await self._parse_packet(hex_data)
            
            # Look for a matching sent message in the communication log
            matching_sent = self._find_matching_sent_message(received_command_code, timestamp)
            
            if matching_sent:
                # This is a response to a sent message - update the sent message
                response_time_ms = int((timestamp - matching_sent.timestamp).total_seconds() * 1000)
                
                # Ensure the sent message has parsed data before we potentially overwrite it
                if matching_sent.parsed_data is None:
                    await self.ensure_message_parsed(matching_sent)
                
                # Update the sent message with response info
                matching_sent.response_to = f"response_{self.message_id_counter}"
                matching_sent.response_time_ms = response_time_ms
                matching_sent.response_data = hex_data
                
                # Store response parsed data separately, don't overwrite the original sent message parsed data
                if parsed_info:
                    matching_sent.response_parsed_data = parsed_info.get('parsed_data')
                    matching_sent.response_message_type_info = parsed_info.get('message_type')
                
                # Determine status based on response
                status_code = hex_data[:2].upper()
                if status_code == "C9":
                    matching_sent.status = "success"
                elif status_code == "CA":
                    matching_sent.status = "error"
                elif status_code == "CB":
                    matching_sent.status = "in_progress"
                elif status_code == "06":
                    matching_sent.status = "heartbeat"
                else:
                    # Check if it's a command code match (like 2506 response to 2506 command)
                    if received_command_code == matching_sent.command_code:
                        matching_sent.status = "acknowledged"
                    else:
                        matching_sent.status = "unknown"
                
                logger.info(f"Associated response {hex_data} with sent message {matching_sent.id} ({matching_sent.command_code}) - Status: {matching_sent.status} in {response_time_ms}ms")
                
                # DON'T add this as a separate received message - it's now part of the sent message
                return
            else:
                # This is an unmatched received packet - add it to the log
                received_msg = BLEMessage(
                    id=f"recv_{self.message_id_counter}",
                    timestamp=timestamp,
                    direction="received",
                    data=bytes(data),
                    hex_data=hex_data,
                    command_code=received_command_code,
                    parsed_data=parsed_info.get('parsed_data') if parsed_info else None,
                    message_type_info=parsed_info.get('message_type') if parsed_info else None
                )
                
                self.message_id_counter += 1
                self.communication_log.append(received_msg)
                
                logger.info(f"Received unmatched notification: {hex_data} (Command: {received_command_code})")
            
        except Exception as e:
            logger.error(f"Error handling notification: {e}")
    
    def _find_matching_sent_message(self, received_command_code: str, timestamp: datetime) -> Optional[BLEMessage]:
        """Find a sent message that matches the received response within the last 2 seconds"""
        current_time = timestamp
        
        # Look back through the last 2 seconds of sent messages
        for msg in reversed(self.communication_log):
            if msg.direction == "sent" and not msg.response_to:
                # Check if within 2 seconds
                time_diff = (current_time - msg.timestamp).total_seconds()
                if time_diff <= 2.0:
                    # Check if command codes match
                    if msg.command_code == received_command_code:
                        return msg
                elif time_diff > 2.0:
                    # Stop searching if we're beyond 2 seconds
                    break
        
        return None
    
    async def send_message(self, data: bytes, message_name: str = None, sequence_name: str = None, message_id: str = None, sequence_id: str = None) -> str:
        """Send a message to the connected device"""
        if not self.client or not self.is_connected:
            raise Exception("Not connected to any device")
        
        try:
            # Find a writable characteristic
            write_char = None
            for char in self.characteristics.values():
                if "write" in char.properties:
                    write_char = char
                    break
            
            if not write_char:
                raise Exception("No writable characteristic found")
            
            # Try to parse the packet before sending
            parsed_info = await self._parse_packet(data.hex())
            
            # Create sent message record
            sent_msg = BLEMessage(
                id=f"sent_{self.message_id_counter}",
                timestamp=datetime.now(),
                direction="sent",
                data=data,
                hex_data=data.hex(),
                message_name=message_name,
                sequence_name=sequence_name,
                message_id=message_id,
                sequence_id=sequence_id,
                status="pending",  # Start with pending status
                command_code=self._extract_command_code(data.hex()),
                parsed_data=parsed_info.get('parsed_data') if parsed_info else None,
                message_type_info=parsed_info.get('message_type') if parsed_info else None
            )
            
            self.message_id_counter += 1
            self.communication_log.append(sent_msg)
            
            # Send the data
            await self.client.write_gatt_char(write_char.uuid, data)
            logger.info(f"Sent message: {data.hex()} ({message_name or 'unnamed'}) - Command: {sent_msg.command_code}")
            
            return sent_msg.id
            
        except Exception as e:
            logger.error(f"Failed to send message: {e}")
            raise
    
    async def send_message_sequence(self, messages: List[Dict], sequence_name: str) -> List[str]:
        """Send a sequence of messages with delays"""
        if not self.client or not self.is_connected:
            raise Exception("Not connected to any device")
        
        sent_message_ids = []
        
        for msg_info in messages:
            try:
                # Convert hex string to bytes
                hex_data = msg_info.get("hex", "")
                if hex_data:
                    data = bytes.fromhex(hex_data)
                    
                    # Send the message
                    message_id = await self.send_message(
                        data=data,
                        message_name=msg_info.get("message_name", "Unknown"),
                        sequence_name=sequence_name
                    )
                    sent_message_ids.append(message_id)
                    
                    # Wait for the specified delay
                    delay_ms = msg_info.get("delay_ms", 1000)
                    await asyncio.sleep(delay_ms / 1000.0)
                    
            except Exception as e:
                logger.error(f"Failed to send message in sequence: {e}")
                break
        
        return sent_message_ids
    
    async def get_message_by_id(self, message_id: str) -> Optional[BLEMessage]:
        """Get a specific message by ID, ensuring it has parsed data"""
        for msg in self.communication_log:
            if msg.id == message_id:
                if msg.parsed_data is None:
                    await self.ensure_message_parsed(msg)
                return msg
        return None
    
    async def get_communication_log(self) -> List[Dict]:
        """Get the communication log as a list of dictionaries, ensuring all messages have parsed data"""
        # Ensure all messages have parsed data
        for msg in self.communication_log:
            if msg.parsed_data is None:
                await self.ensure_message_parsed(msg)
        
        return [
            {
                "id": msg.id,
                "timestamp": msg.timestamp.isoformat(),
                "direction": msg.direction,
                "hex_data": msg.hex_data,
                "message_name": msg.message_name,
                "sequence_name": msg.sequence_name,
                "response_to": msg.response_to,
                "response_time_ms": msg.response_time_ms,
                "status": msg.status,
                "command_code": msg.command_code,
                "response_data": msg.response_data,
                "parsed_data": msg.parsed_data,
                "message_type_info": msg.message_type_info,
                "response_parsed_data": msg.response_parsed_data,
                "response_message_type_info": msg.response_message_type_info
            }
            for msg in self.communication_log
        ]
    
    def clear_communication_log(self):
        """Clear the communication log"""
        self.communication_log.clear()
        self.message_id_counter = 0
        logger.info("Communication log cleared")
    
    async def disconnect(self):
        """Disconnect from the current device"""
        if self.client and self.is_connected:
            try:
                await self.client.disconnect()
                self.is_connected = False
                self.target_device = None
                logger.info("Disconnected from device")
            except Exception as e:
                logger.error(f"Error disconnecting: {e}")
    
    async def maintain_connection(self):
        """Maintain connection to the device"""
        while True:
            try:
                if self.client and self.is_connected:
                    # Check if still connected
                    if not self.client.is_connected:
                        logger.warning("Connection lost, attempting to reconnect...")
                        self.is_connected = False
                        await self.connect_to_device(self.target_device)
                
                await asyncio.sleep(5)  # Check every 5 seconds
                
            except Exception as e:
                logger.error(f"Error in connection maintenance: {e}")
                await asyncio.sleep(10)  # Wait longer on error

# Global BLE manager instance
ble_manager = BLEManager()
