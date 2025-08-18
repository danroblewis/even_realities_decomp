#!/usr/bin/env python3
"""
BLE UART Manager - Minimal Stub
"""

import logging
from typing import Dict, List, Any

logger = logging.getLogger(__name__)

class NordicBLEUARTManager:
    """Minimal stub for BLE UART Manager"""
    
    def __init__(self):
        self.is_connected = False
        self.target_device = None
    
    async def scan_for_devices(self, filter_pattern: str = "G1_") -> List[Dict[str, Any]]:
        """Stub: scan_for_devices"""
        logger.info("Stub: scan_for_devices")
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
