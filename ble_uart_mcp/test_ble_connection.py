#!/usr/bin/env python3
"""
Test script for BLE UART connection

This script:
1. Scans for BLE devices with "_R_" in the name
2. Connects to the first matching device
3. Sends a clear screen packet (18000100)
4. Monitors for responses
"""

import asyncio
import logging
import sys
from typing import Dict, Any

from ble_uart_manager import NordicBLEUARTManager

# Configure logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
logger = logging.getLogger(__name__)

async def test_ble_connection():
    """Test BLE UART connection and send clear screen packet"""
    
    print("Starting BLE UART connection test...")
    
    # Create BLE UART manager
    manager = NordicBLEUARTManager()
    
    try:
        # Step 1: Scan for devices with "_R_" in the name
        print("\n1. Scanning for devices with '_R_' in name...")
        devices = await manager.scan_for_devices("_R_")
        
        # Also scan for all devices to show what's available
        print("\n1a. Scanning for all devices...")
        all_devices = await manager.scan_for_devices("")  # Empty filter to get all devices
        
        if all_devices:
            print(f"✓ Found {len(all_devices)} total devices:")
            for i, device in enumerate(all_devices):
                print(f"  {i+1}. {device['name']} ({device['address']}) RSSI: {device['rssi']}")
        else:
            print("❌ No devices found at all")
        
        if not devices:
            print(f"\n❌ No devices found with '_R_' in the name")
            return
        
        print(f"✓ Found {len(devices)} device(s) with '_R_' in name:")
        for i, device in enumerate(devices):
            print(f"  {i+1}. {device['name']} ({device['address']}) RSSI: {device['address']}")
        
        # Use the first device found
        target_device = devices[0]
        print(f"\n2. Connecting to device: {target_device['name']} ({target_device['address']})")
        
        # Step 2: Connect to the device
        success = await manager.connect_to_device(target_device['address'])
        
        if not success:
            print("❌ Failed to connect to device")
            return
        
        print("✓ Successfully connected to device!")
        
        # Step 3: Get connection status
        status = manager.get_connection_status()
        print(f"\n3. Connection status:")
        print(f"   Device: {status['device_name']}")
        print(f"   Address: {status['device_address']}")
        print(f"   UART Service: {'✓' if status['uart_service_available'] else '❌'}")
        print(f"   TX Characteristic: {'✓' if status['tx_characteristic_available'] else '❌'}")
        print(f"   RX Characteristic: {'✓' if status['rx_characteristic_available'] else '❌'}")
        
        # Step 4: Send clear screen packet
        print(f"\n4. Sending clear screen packet: 18000100")
        
        # Send the clear screen packet
        result = await manager.send_message("18000100")
        
        print(f"✓ Clear screen packet sent!")
        if result:
            print(f"   Response received: {result}")
        else:
            print("   No response received (timeout)")
        
        # Step 5: Wait a bit to see if we get any responses
        print(f"\n5. Waiting for responses (10 seconds)...")
        await asyncio.sleep(10)
        
        # Step 6: Show final status
        final_status = manager.get_connection_status()
        print(f"\n6. Final status:")
        print(f"   Total messages: {final_status['total_messages']}")
        print(f"   Pending messages: {final_status['pending_messages_count']}")
        
        # Show communication log
        if manager.communication_log:
            print(f"\n7. Communication log:")
            for msg in manager.communication_log:
                direction_icon = "📤" if msg['direction'] == "sent" else "📥"
                hex_data = msg['data'].hex() if msg['direction'] == "sent" else msg.get('response_data', 'N/A')
                print(f"   {direction_icon} {hex_data} | {msg['direction']}")
        
        print(f"\n✓ Test completed successfully!")
        
    except Exception as e:
        print(f"❌ Test failed: {e}")
        import traceback
        traceback.print_exc()
    
    finally:
        # Clean up
        print(f"\n8. Cleaning up...")
        if manager.is_connected:
            await manager.disconnect()
            print("✓ Disconnected from device")
        
        print("✓ Test cleanup completed")

async def main():
    """Main entry point"""
    await test_ble_connection()

if __name__ == "__main__":
    try:
        asyncio.run(main())
    except KeyboardInterrupt:
        print("\n\n⚠️  Test interrupted by user")
        sys.exit(1)
    except Exception as e:
        print(f"\n❌ Unexpected error: {e}")
        sys.exit(1)
