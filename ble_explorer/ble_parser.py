#!/usr/bin/env python3
"""
BLE Message Parser Module
Contains the parsing functions to avoid circular imports
"""

import json
from typing import List, Dict, Any, Optional
from pathlib import Path

# Data file path
DATA_FILE = "ble_message_types.json"

class Attribute:
    def __init__(self, data: Dict[str, Any]):
        self.name = data.get("name", "")
        self.width = data.get("width")
        self.is_max_width = data.get("is_max_width", False)
        self.description = data.get("description", "")
        self.default_value = data.get("default_value")
        self.is_computed = data.get("is_computed", False)
        self.computed_from = data.get("computed_from")

class MessageType:
    def __init__(self, data: Dict[str, Any]):
        self.id = data.get("id", "")
        self.name = data.get("name", "")
        self.description = data.get("description", "")
        self.attributes = [Attribute(attr) for attr in data.get("attributes", [])]

def load_message_types() -> Dict[str, MessageType]:
    """Load message types from JSON file"""
    try:
        with open(DATA_FILE, 'r') as f:
            data = json.load(f)
        
        message_types = {}
        for msg_id, msg_data in data.items():
            message_types[msg_id] = MessageType(msg_data)
        
        return message_types
    except Exception as e:
        print(f"Error loading message types: {e}")
        return {}

def find_matching_message_types(command_code: str, packet_length: int, packet_bytes: bytes = None) -> List[MessageType]:
    """Find message types that match the given command code and packet length"""
    message_types = load_message_types()
    matching_types = []
    
    # Detect if this is likely a response packet
    is_response_packet = False
    if packet_bytes and len(packet_bytes) >= 2:
        # Check if second byte is a known response status code (0x65, 0xC9, 0xCA, 0xCB, 0x06, 0x65)
        second_byte = packet_bytes[1]
        if second_byte in [0x65, 0xC9, 0xCA, 0xCB, 0x06, 0x65]:
            is_response_packet = True
    
    for msg_type in message_types.values():
        # Check if command code matches
        if msg_type.attributes and msg_type.attributes[0].default_value == command_code:
            # Check if packet length is reasonable for this message type
            # This is a simplified check - you might want to make it more sophisticated
            matching_types.append(msg_type)
    
    # Sort by relevance - prioritize response message types for response packets
    if is_response_packet:
        # For response packets, prioritize message types ending with "_response"
        matching_types.sort(key=lambda x: (0 if x.name.endswith('_response') else 1, x.name))
    else:
        # For request packets, prioritize message types NOT ending with "_response"
        matching_types.sort(key=lambda x: (0 if not x.name.endswith('_response') else 1, x.name))
    
    return matching_types

def deserialize_packet(packet_bytes: bytes, message_type: MessageType) -> Dict[str, Any]:
    """Deserialize a packet according to the message type definition"""
    result = {}
    offset = 0
    
    for attr in message_type.attributes:
        if offset >= len(packet_bytes):
            break
            
        if attr.width:
            if attr.is_max_width:
                # Variable width - read remaining bytes
                value = packet_bytes[offset:].hex()
                result[attr.name] = value
                break
            else:
                # Fixed width
                width = int(attr.width)
                if offset + width <= len(packet_bytes):
                    value = packet_bytes[offset:offset + width].hex()
                    result[attr.name] = value
                    offset += width
                else:
                    # Not enough bytes
                    result[attr.name] = "insufficient_data"
                    break
        else:
            # No width specified, skip
            continue
    
    return result
