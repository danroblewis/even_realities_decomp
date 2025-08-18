#!/usr/bin/env python3
"""
BLE UART Manager - Minimal Stub
"""

import asyncio
import logging
from typing import Dict, List, Any

import bleak
from bleak import BleakScanner
from bleak.backends.device import BLEDevice

logger = logging.getLogger(__name__)

class NordicBLEUARTManager:
    """Minimal stub for BLE UART Manager"""
    
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
            # Perform BLE scan
            devices = await BleakScanner.discover(timeout=10.0)
            device_list = []
            self.scanned_devices = []  # Clear previous scan results
            
            for device in devices:
                if device.name:
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
            
        except Exception as e:
            logger.error(f"Scan failed: {e}")
            return []
    
    async def connect_to_device(self, address: str) -> bool:
        """Connect to a BLE device by address and discover UART service"""
        try:
            logger.info(f"Connecting to device {address}...")
            
            # Try to find device in previously scanned devices first
            target_device = None
            for device in self.scanned_devices:
                if device.address == address:
                    target_device = device
                    logger.info(f"Found target device in previous scan: {target_device.name} ({target_device.address})")
                    break
            
            # If not found in previous scan, do a new scan
            if not target_device:
                logger.info("Device not found in previous scan, performing new scan...")
                devices = await BleakScanner.discover(timeout=5.0)
                for device in devices:
                    if device.address == address:
                        target_device = device
                        break
                
                if not target_device:
                    logger.error(f"Device {address} not found")
                    return False
                
                logger.info(f"Found target device in new scan: {target_device.name} ({target_device.address})")
            
            # Connect to the device
            from bleak import BleakClient
            self.client = BleakClient(target_device)
            logger.info("Attempting to connect...")
            logger.info("Note: On macOS, you may see a pairing prompt. Please accept it if it appears.")
            
            # Use a longer timeout to account for macOS pairing prompts
            try:
                await asyncio.wait_for(self.client.connect(), timeout=30.0)  # 30 second timeout
                logger.info(f"Connected to {target_device.name}")
            except asyncio.TimeoutError:
                logger.error("Connection timed out after 30 seconds. This might be due to:")
                logger.error("1. macOS pairing prompt not being accepted")
                logger.error("2. Device being out of range")
                logger.error("3. Device being busy or in use by another app")
                return False
            
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
            import traceback
            logger.error(f"Connection error traceback: {traceback.format_exc()}")
            self.is_connected = False
            return False
    
    async def _discover_uart_service(self) -> bool:
        """Discover the Nordic UART service and characteristics"""
        try:
            if not self.client or not self.client.services:
                logger.error("No services available")
                return False
            
            # Nordic BLE UART Service UUID (standard for Nordic devices)
            UART_SERVICE_UUID = "6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
            UART_TX_CHARACTERISTIC_UUID = "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"  # Write
            UART_RX_CHARACTERISTIC_UUID = "6E400003-B5A3-F393-E0A9-E50E24DCCA9E"  # Notify
            
            # Look for the Nordic UART service
            uart_service = None
            for service in self.client.services:
                if service.uuid.lower() == UART_SERVICE_UUID.lower():
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
                if char.uuid.lower() == UART_TX_CHARACTERISTIC_UUID.lower():
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
                if char.uuid.lower() == UART_RX_CHARACTERISTIC_UUID.lower():
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
    
    async def _notification_handler(self, characteristic, data: bytearray):
        """Handle incoming notifications from the UART RX characteristic"""
        try:
            hex_data = data.hex()
            logger.info(f"Received UART notification: {hex_data}")
            # TODO: Implement response matching logic
        except Exception as e:
            logger.error(f"Error handling notification: {e}")
    
    async def disconnect(self):
        """Disconnect from the current device"""
        try:
            if self.client and self.is_connected:
                await self.client.disconnect()
                logger.info("Disconnected from device")
            
            self.is_connected = False
            self.client = None
            self.uart_service = None
            self.tx_characteristic = None
            self.rx_characteristic = None
            self.target_device = None
            
        except Exception as e:
            logger.error(f"Error during disconnect: {e}")
            self.is_connected = False
    
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
    
    async def send_message(self, hex_data: str) -> Dict[str, Any]:
        """Stub: send_message"""
        logger.info(f"Stub: send_message {hex_data}")
        return {
            "status": "timeout",
            "message_id": "stub_0",
            "message": "Stub implementation"
        }
