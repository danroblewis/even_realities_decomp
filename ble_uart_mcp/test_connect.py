#!/usr/bin/env python3
"""
Test the connect_to_device method
"""

import asyncio
import logging
from ble_uart_manager import NordicBLEUARTManager

# Set logging to INFO to see the connection output
logging.basicConfig(level=logging.INFO)

async def test_connect():
    """Test the connection functionality"""
    print("Testing connect_to_device...")
    
    ble_manager = NordicBLEUARTManager()
    
    try:
        # First scan for devices
        print("1. Scanning for devices...")
        devices = await ble_manager.scan_for_devices(filter_pattern="G1_")
        
        if not devices:
            print("No devices found, cannot test connection")
            return
        
        # Find the device with "_R_" in the name (which we know works better)
        target_device = None
        for device in devices:
            if "_R_" in device['name']:
                target_device = device
                break
        
        if not target_device:
            print("No device with '_R_' found, using first device")
            target_device = devices[0]
        
        device_address = target_device['address']
        device_name = target_device['name']
        print(f"2. Testing connection to: {device_name} ({device_address})")
        
        # Verify we're targeting the right device
        if "_R_" in device_name:
            print("✓ Targeting device with '_R_' in name")
        else:
            print("Warning: Not targeting the known working device type")
        
        # Test connection
        success = await ble_manager.connect_to_device(device_address)
        
        if success:
            print("✓ Connection successful!")
            
            # Wait for notifications - try tilting your head up/down or other movements
            print("Waiting 15 seconds to observe notifications...")
            print("Try tilting your head up/down or making other movements to trigger notifications")
            print("Notifications should appear in the logs above...")
            
            for i in range(15):
                await asyncio.sleep(1)
                print(f"Waiting... {i+1}/15 seconds")
            
            print("Wait complete")
            
            # Test connection status
            status = ble_manager.get_connection_status()
            print(f"Connection status: {status}")
            
            # Test disconnect
            print("3. Testing disconnect...")
            await ble_manager.disconnect()
            
            # Check status after disconnect
            status_after = ble_manager.get_connection_status()
            print(f"Status after disconnect: {status_after}")
            
        else:
            print("✗ Connection failed")
            
    except Exception as e:
        print(f"Test failed: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    asyncio.run(test_connect())
