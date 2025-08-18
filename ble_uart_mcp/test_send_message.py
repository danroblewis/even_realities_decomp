#!/usr/bin/env python3
"""
Test the send_message method
"""

import asyncio
import logging
from ble_uart_manager import NordicBLEUARTManager

# Set logging to INFO to see the message sending output
logging.basicConfig(level=logging.INFO)

async def test_send_message():
    """Test sending a message"""
    print("Testing send_message...")
    
    ble_manager = NordicBLEUARTManager()
    
    try:
        # First scan for devices
        print("1. Scanning for devices...")
        devices = await ble_manager.scan_for_devices(filter_pattern="G1_")
        
        if not devices:
            print("No devices found, cannot test")
            return
        
        # Find the device with "_R_" in the name
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
        print(f"2. Connecting to: {device_name} ({device_address})")
        
        # Connect
        success = await ble_manager.connect_to_device(device_address)
        
        if not success:
            print("✗ Connection failed")
            return
        
        print("✓ Connected successfully!")
        
        # Wait a moment for connection to stabilize
        await asyncio.sleep(2)
        
        # Test sending a message
        print("3. Testing send_message...")
        test_hex = "250600010402"  # Example command
        print(f"Sending: {test_hex}")
        
        result = await ble_manager.send_message(test_hex)
        print(f"Result: {result}")
        
        # Wait a bit for response
        await asyncio.sleep(1)
        
        # Test the "get display mode" command
        print("4. Testing 'get display mode' command...")
        display_mode_cmd = "2b000101"  # Get display mode command
        print(f"Sending: {display_mode_cmd}")
        
        result2 = await ble_manager.send_message(display_mode_cmd)
        print(f"Result: {result2}")
        
        # Wait a bit for response
        await asyncio.sleep(1)
        
        # Test the "clear display" command
        print("5. Testing 'clear display' command...")
        clear_display_cmd = "18000100"  # Clear display command
        print(f"Sending: {clear_display_cmd}")
        
        result3 = await ble_manager.send_message(clear_display_cmd)
        print(f"Result: {result3}")
        
        # Wait a bit more to see if any additional notifications arrive
        print("6. Waiting for any additional notifications...")
        await asyncio.sleep(3)
        
        # Check communication log
        print(f"Communication log has {len(ble_manager.communication_log)} messages:")
        for msg in ble_manager.communication_log:
            if msg['direction'] == 'sent':
                hex_data = msg['data'].hex()
                print(f"  {msg['id']}: {msg['direction']} {hex_data}")
            else:
                print(f"  {msg['id']}: {msg['direction']} {msg.get('hex_data', 'N/A')}")
        
        # Disconnect
        print("7. Disconnecting...")
        await ble_manager.disconnect()
        print("✓ Disconnected")
        
    except Exception as e:
        print(f"Test failed: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    asyncio.run(test_send_message())
