#!/usr/bin/env python3
"""
Test the scan_for_devices method
"""

import asyncio
import logging
from ble_uart_manager import NordicBLEUARTManager

# Set logging to INFO to see the scan output
logging.basicConfig(level=logging.INFO)

async def test_scan():
    """Test the scan functionality"""
    print("Testing scan_for_devices...")
    
    ble_manager = NordicBLEUARTManager()
    
    try:
        # Test scanning
        devices = await ble_manager.scan_for_devices(filter_pattern="G1_")
        
        print(f"\nScan results:")
        print(f"Found {len(devices)} devices")
        
        for device in devices:
            print(f"  - {device['name']} ({device['address']}) RSSI: {device['rssi']}")
        
        # Test that scanned_devices was populated
        print(f"\nScanned devices stored: {len(ble_manager.scanned_devices)}")
        for device in ble_manager.scanned_devices:
            print(f"  - {device.name} ({device.address})")
            
    except Exception as e:
        print(f"Test failed: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    asyncio.run(test_scan())
