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
        """Stub: connect_to_device"""
        logger.info(f"Stub: connect_to_device {address}")
        return False
    
    async def disconnect(self):
        """Stub: disconnect"""
        logger.info("Stub: disconnect")
        self.is_connected = False
    
    def get_connection_status(self) -> Dict[str, Any]:
        """Stub: get_connection_status"""
        return {
            "connected": self.is_connected,
            "device_name": None,
            "device_address": None,
            "uart_service_available": False,
            "tx_characteristic_available": False,
            "rx_characteristic_available": False,
            "pending_messages_count": 0,
            "total_messages": 0
        }
    
    async def send_message(self, hex_data: str) -> Dict[str, Any]:
        """Stub: send_message"""
        logger.info(f"Stub: send_message {hex_data}")
        return {
            "status": "timeout",
            "message_id": "stub_0",
            "message": "Stub implementation"
        }
