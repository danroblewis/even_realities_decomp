#!/usr/bin/env python3
"""
Simple test runner for testing individual BLE packets.
Usage: python test_single_packet.py <hex_packet>
"""

import sys
import os

# Add the current directory to the path so we can import from main.py
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from main import find_matching_message_types, deserialize_packet, load_data

def test_single_packet(hex_packet: str):
    """Test a single packet and show detailed matching information."""
    
    print(f"🧪 Testing Packet: {hex_packet}")
    print("=" * 60)
    
    try:
        # Convert hex to bytes
        packet_bytes = bytes.fromhex(hex_packet)
        command_code = f"{packet_bytes[0]:02x}"
        packet_length = len(packet_bytes)
        
        print(f"Command Code: {command_code}")
        print(f"Packet Length: {packet_length} bytes")
        print(f"Raw Bytes: {packet_bytes.hex()}")
        print()
        
        # Find matching message types
        matching_types = find_matching_message_types(command_code, packet_length)
        
        if not matching_types:
            print("❌ No matching message types found!")
            print("\nAvailable message types:")
            data = load_data()
            for msg_id, msg_type in data.items():
                if msg_type.attributes and msg_type.attributes[0].name == "command":
                    cmd_attr = msg_type.attributes[0]
                    if cmd_attr.default_value:
                        print(f"  - {msg_type.name} (ID: {msg_id}): command={cmd_attr.default_value}")
            return
        
        print(f"✅ Found {len(matching_types)} matching message types:")
        print()
        
        for i, msg_type in enumerate(matching_types):
            print(f"📋 {i+1}. {msg_type.name} (ID: {msg_type.id})")
            print(f"   Description: {msg_type.description}")
            
            # Calculate expected length
            expected_length = 0
            has_max_width = False
            
            for attr in msg_type.attributes:
                if attr.width and not attr.is_computed:
                    if attr.is_max_width:
                        has_max_width = True
                        expected_length += attr.width
                        print(f"     {attr.name}: {attr.width} bytes (max_width)")
                    else:
                        expected_length += attr.width
                        print(f"     {attr.name}: {attr.width} bytes (fixed)")
                elif attr.is_computed:
                    print(f"     {attr.name}: computed from {attr.computed_from}")
            
            print(f"   Expected Length: {expected_length} bytes")
            print(f"   Has Max Width: {has_max_width}")
            print(f"   Length Match: {'✅' if packet_length == expected_length else '❌'}")
            
            # Test deserialization
            try:
                parsed_data = deserialize_packet(packet_bytes, msg_type)
                print(f"   Parsed Data: {parsed_data}")
            except Exception as e:
                print(f"   ❌ Deserialization failed: {e}")
            
            print()
        
        # Show the best match
        best_match = matching_types[0]
        print(f"🏆 Best Match: {best_match.name}")
        
    except Exception as e:
        print(f"💥 Error testing packet: {e}")
        import traceback
        traceback.print_exc()

def main():
    if len(sys.argv) != 2:
        print("Usage: python test_single_packet.py <hex_packet>")
        print("Examples:")
        print("  python test_single_packet.py 18000100")
        print("  python test_single_packet.py 4e00010030000001010a0a68656c6c6f20776f726c640a0a")
        print("  python test_single_packet.py 250600010402")
        sys.exit(1)
    
    hex_packet = sys.argv[1]
    
    # Remove any spaces or common separators
    hex_packet = hex_packet.replace(" ", "").replace(":", "").replace("-", "")
    
    if not all(c in '0123456789abcdefABCDEF' for c in hex_packet):
        print("❌ Invalid hex string. Only 0-9, a-f, A-F allowed.")
        sys.exit(1)
    
    test_single_packet(hex_packet)

if __name__ == "__main__":
    main()
