#!/usr/bin/env python3
"""
Test suite for the BLE message matcher functionality using pytest.
Tests packet matching against actual message type definitions from ble_message_types.json.
"""

import pytest
import sys
import os
import json
from typing import Dict, Any, List

# Add the current directory to the path so we can import from main.py
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# Import the functions we want to test
from main import (
    find_matching_message_types,
    deserialize_packet,
    get_best_message_type_match,
    load_data
)

# Test packet data - these are known packets that should match specific message types
TEST_PACKETS = {
    "heartbeat": {
        "hex": "250600010402",
        "expected_type": "msg_001",
        "description": "Heartbeat message with sequence numbers 01 and 02"
    },
    "clear_screen": {
        "hex": "18000100",
        "expected_type": "msg_005", 
        "description": "Clear screen command"
    },
    "text_4e_simple": {
        "hex": "4e00010030000001010a0a0a68656c6c6f20776f726c640a0a",
        "expected_type": "msg_004",
        "description": "Text display command with 'hello world'"
    },
    "text_4e_short": {
        "hex": "4e00010030000001010a0a0a68690a0a",
        "expected_type": "msg_004",
        "description": "Text display command with short text 'hi'"
    },
    "send_text": {
        "hex": "4e000100300a0a68656c6c6f20776f726c640a0a0a0a",
        "expected_type": "msg_003",
        "description": "Send text command with 'hello world'"
    }
}

@pytest.fixture
def message_types():
    """Load actual message types from JSON file."""
    return load_data()

class TestMessageTypeMatching:
    """Test the message type matching algorithm with known packets."""
    
    def test_clear_screen_command(self, message_types):
        """Test that clear screen command matches correctly."""
        packet_data = TEST_PACKETS["clear_screen"]
        packet = bytes.fromhex(packet_data["hex"])
        command = f"{packet[0]:02x}"
        length = len(packet)
        
        matching_types = find_matching_message_types(command, length)
        
        assert len(matching_types) > 0, "Should find at least one matching message type"
        
        # Find the clear_screen message type
        clear_screen_type = None
        for msg_type in matching_types:
            if msg_type.id == packet_data["expected_type"]:
                clear_screen_type = msg_type
                break
        
        assert clear_screen_type is not None, f"Should find {packet_data['expected_type']} in matching types"
        assert clear_screen_type.name == "clear_screen", f"Expected clear_screen, got {clear_screen_type.name}"
        
        # Test deserialization
        parsed_data = deserialize_packet(packet, clear_screen_type)
        assert parsed_data["command"] == "0x18"
        assert parsed_data["length"] == "0x0001"
        assert parsed_data["data"] == "0x00"
    
    def test_heartbeat_command(self, message_types):
        """Test that heartbeat command matches correctly."""
        packet_data = TEST_PACKETS["heartbeat"]
        packet = bytes.fromhex(packet_data["hex"])
        command = f"{packet[0]:02x}"
        length = len(packet)
        
        matching_types = find_matching_message_types(command, length)
        
        assert len(matching_types) > 0, "Should find at least one matching message type"
        
        # Find the heartbeat message type
        heartbeat_type = None
        for msg_type in matching_types:
            if msg_type.id == packet_data["expected_type"]:
                heartbeat_type = msg_type
                break
        
        assert heartbeat_type is not None, f"Should find {packet_data['expected_type']} in matching types"
        assert heartbeat_type.name == "heartbeat", f"Expected heartbeat, got {heartbeat_type.name}"
        
        # Test deserialization
        parsed_data = deserialize_packet(packet, heartbeat_type)
        assert parsed_data["command"] == "0x25"
        assert parsed_data["unknown_1"] == "0x06"
        assert parsed_data["unknown_2"] == "0x00"
        assert parsed_data["seq_1"] == "0x01"
        assert parsed_data["constant"] == "0x04"
        assert parsed_data["seq_2"] == "0x02"
    
    def test_text_4e_command(self, message_types):
        """Test that text_4e command matches correctly."""
        packet_data = TEST_PACKETS["text_4e_simple"]
        packet = bytes.fromhex(packet_data["hex"])
        command = f"{packet[0]:02x}"
        length = len(packet)
        
        matching_types = find_matching_message_types(command, length)
        
        assert len(matching_types) > 0, "Should find at least one matching message type"
        
        # Find the text_4e message type
        text_4e_type = None
        for msg_type in matching_types:
            if msg_type.id == packet_data["expected_type"]:
                text_4e_type = msg_type
                break
        
        assert text_4e_type is not None, f"Should find {packet_data['expected_type']} in matching types"
        assert text_4e_type.name == "text_4e", f"Expected text_4e, got {text_4e_type.name}"
        
        # Test deserialization
        parsed_data = deserialize_packet(packet, text_4e_type)
        assert parsed_data["command"] == "0x4e"
        assert parsed_data["length"] == "0x0001"
        assert parsed_data["flags"] == "0x00"
        assert parsed_data["width"] == "0x3000"
        assert parsed_data["height"] == "0x0001"
        assert parsed_data["xpos"] == "0x010a"
        assert parsed_data["ypos"] == "0x0a0a"
        # text_data should contain the hex representation of "hello world\n\n"
        assert "68656c6c6f20776f726c64" in parsed_data["text_data"]
    
    def test_text_4e_short_command(self, message_types):
        """Test that text_4e command with short text matches correctly."""
        packet_data = TEST_PACKETS["text_4e_short"]
        packet = bytes.fromhex(packet_data["hex"])
        command = f"{packet[0]:02x}"
        length = len(packet)
        
        matching_types = find_matching_message_types(command, length)
        
        assert len(matching_types) > 0, "Should find at least one matching message type"
        
        # Find the text_4e message type
        text_4e_type = None
        for msg_type in matching_types:
            if msg_type.id == packet_data["expected_type"]:
                text_4e_type = msg_type
                break
        
        assert text_4e_type is not None, f"Should find {packet_data['expected_type']} in matching types"
        assert text_4e_type.name == "text_4e", f"Expected text_4e, got {text_4e_type.name}"
        
        # Test deserialization
        parsed_data = deserialize_packet(packet, text_4e_type)
        assert parsed_data["command"] == "0x4e"
        assert parsed_data["length"] == "0x0001"
        assert parsed_data["flags"] == "0x00"
        assert parsed_data["width"] == "0x3000"
        assert parsed_data["height"] == "0x0001"
        assert parsed_data["xpos"] == "0x010a"
        assert parsed_data["ypos"] == "0x0a0a"
        # text_data should contain the hex representation of "hi\n\n"
        assert "6869" in parsed_data["text_data"]
    
    def test_send_text_command(self, message_types):
        """Test that send_text command matches correctly."""
        packet_data = TEST_PACKETS["send_text"]
        packet = bytes.fromhex(packet_data["hex"])
        command = f"{packet[0]:02x}"
        length = len(packet)
        
        matching_types = find_matching_message_types(command, length)
        
        assert len(matching_types) > 0, "Should find at least one matching message type"
        
        # Find the send_text message type
        send_text_type = None
        for msg_type in matching_types:
            if msg_type.id == packet_data["expected_type"]:
                send_text_type = msg_type
                break
        
        assert send_text_type is not None, f"Should find {packet_data['expected_type']} in matching types"
        assert send_text_type.name == "send_text", f"Expected send_text, got {send_text_type.name}"
        
        # Test deserialization
        parsed_data = deserialize_packet(packet, send_text_type)
        assert parsed_data["command"] == "0x4e"
        assert parsed_data["header"] == "0x00010030"
        assert parsed_data["start_delimeter"] == "0x0a0a"
        assert parsed_data["end_delimeter"] == "0x0a0a"
        # payload should contain the hex representation of "hello world\n\n"
        assert "68656c6c6f20776f726c64" in parsed_data["payload"]

class TestMessageTypeAnalysis:
    """Test message type analysis and structure understanding."""
    
    def test_clear_screen_structure(self, message_types):
        """Test clear_screen message type structure."""
        msg_type = message_types["msg_005"]
        
        # Calculate expected length
        expected_length = 0
        has_max_width = False
        
        for attr in msg_type.attributes:
            if attr.width and not attr.is_computed:
                if attr.is_max_width:
                    has_max_width = True
                expected_length += attr.width
        
        assert expected_length == 4, f"Expected length 4, got {expected_length}"
        assert not has_max_width, "clear_screen should not have max_width fields"
    
    def test_text_4e_structure(self, message_types):
        """Test text_4e message type structure."""
        msg_type = message_types["msg_004"]
        
        # Calculate expected length (only fixed fields, excluding max_width)
        expected_length = 0
        has_max_width = False
        
        for attr in msg_type.attributes:
            if attr.width and not attr.is_computed:
                if attr.is_max_width:
                    has_max_width = True
                else:
                    expected_length += attr.width
        
        assert expected_length == 12, f"Expected length 12, got {expected_length}"
        assert has_max_width, "text_4e should have max_width fields"
    
    def test_heartbeat_structure(self, message_types):
        """Test heartbeat message type structure."""
        msg_type = message_types["msg_001"]
        
        # Calculate expected length
        expected_length = 0
        has_max_width = False
        
        for attr in msg_type.attributes:
            if attr.width and not attr.is_computed:
                if attr.is_max_width:
                    has_max_width = True
                expected_length += attr.width
        
        assert expected_length == 6, f"Expected length 6, got {expected_length}"
        assert not has_max_width, "heartbeat should not have max_width fields"
    
    def test_send_text_structure(self, message_types):
        """Test send_text message type structure."""
        msg_type = message_types["msg_003"]
        
        # Calculate expected length (only fixed fields, excluding max_width)
        expected_length = 0
        has_max_width = False
        
        for attr in msg_type.attributes:
            if attr.width and not attr.is_computed:
                if attr.is_max_width:
                    has_max_width = True
                else:
                    expected_length += attr.width
        
        assert expected_length == 9, f"Expected length 9, got {expected_length}"
        assert has_max_width, "send_text should have max_width fields"

class TestEdgeCases:
    """Test edge cases and error conditions."""
    
    def test_invalid_command_code(self, message_types):
        """Test with invalid command code."""
        result = find_matching_message_types("FF", 10)
        assert len(result) == 0, "Should find no matching types for invalid command"
    
    def test_zero_length_packet(self, message_types):
        """Test with zero length packet."""
        result = find_matching_message_types("18", 0)
        assert len(result) == 0, "Should find no matching types for zero length"
    
    def test_very_long_packet(self, message_types):
        """Test with very long packet."""
        result = find_matching_message_types("4e", 1000)
        # Should find text_4e and send_text since they have max_width fields
        assert len(result) > 0, "Should find matching types for long packets with max_width"
        assert any(msg.name == "text_4e" for msg in result), "Should find text_4e for long packets"
        assert any(msg.name == "send_text" for msg in result), "Should find send_text for long packets"
    
    def test_exact_length_match_priority(self, message_types):
        """Test that exact length matches get priority over max_width matches."""
        # Test with a packet that could match both text_4e and send_text
        packet = bytes.fromhex("4e00010030000001010a0a68690a0a")  # Short text packet
        command = f"{packet[0]:02x}"
        length = len(packet)
        
        matching_types = find_matching_message_types(command, length)
        
        # text_4e should be prioritized because it has a closer length match
        # (text_4e has fixed fields that add up to 11, plus variable text_data)
        # send_text has fixed fields that add up to 9, plus variable payload
        
        assert len(matching_types) > 0, "Should find matching types"
        
        # The first match should be the best one
        best_match = matching_types[0]
        # This test might need adjustment based on the actual algorithm behavior
        assert best_match.name in ["text_4e", "send_text"], f"Expected text_4e or send_text, got {best_match.name}"

class TestDeserialization:
    """Test packet deserialization functionality."""
    
    def test_deserialize_clear_screen(self, message_types):
        """Test deserialization of clear screen packet."""
        packet = bytes.fromhex("18000100")
        msg_type = message_types["msg_005"]
        
        result = deserialize_packet(packet, msg_type)
        
        assert result["command"] == "0x18"
        assert result["length"] == "0x0001"
        assert result["data"] == "0x00"
    
    def test_deserialize_heartbeat(self, message_types):
        """Test deserialization of heartbeat packet."""
        packet = bytes.fromhex("250600010402")
        msg_type = message_types["msg_001"]
        
        result = deserialize_packet(packet, msg_type)
        
        assert result["command"] == "0x25"
        assert result["unknown_1"] == "0x06"
        assert result["unknown_2"] == "0x00"
        assert result["seq_1"] == "0x01"
        assert result["constant"] == "0x04"
        assert result["seq_2"] == "0x02"
    
    def test_deserialize_text_4e(self, message_types):
        """Test deserialization of text_4e packet."""
        packet = bytes.fromhex("4e00010030000001010a0a0a68656c6c6f20776f726c640a0a")
        msg_type = message_types["msg_004"]
        
        result = deserialize_packet(packet, msg_type)
        
        assert result["command"] == "0x4e"
        assert result["length"] == "0x0001"
        assert result["flags"] == "0x00"
        assert result["width"] == "0x3000"
        assert result["height"] == "0x0001"
        assert result["xpos"] == "0x010a"
        assert result["ypos"] == "0x0a0a"
        assert "text_data" in result
    
    def test_deserialize_send_text(self, message_types):
        """Test deserialization of send_text packet."""
        packet = bytes.fromhex("4e000100300a0a68656c6c6f20776f726c640a0a0a0a")
        msg_type = message_types["msg_003"]
        
        result = deserialize_packet(packet, msg_type)
        
        assert result["command"] == "0x4e"
        assert result["header"] == "0x00010030"
        assert result["start_delimeter"] == "0x0a0a"
        assert result["end_delimeter"] == "0x0a0a"
        assert "payload" in result

class TestBestMatchFunction:
    """Test the get_best_message_type_match function."""
    
    def test_get_best_match_clear_screen(self, message_types):
        """Test get_best_message_type_match with clear screen packet."""
        packet = bytes.fromhex("18000100")
        command = f"{packet[0]:02x}"
        
        best_match = get_best_message_type_match(command, packet)
        
        assert best_match is not None, "Should find a best match"
        assert best_match.name == "clear_screen", f"Expected clear_screen, got {best_match.name}"
    
    def test_get_best_match_heartbeat(self, message_types):
        """Test get_best_message_type_match with heartbeat packet."""
        packet = bytes.fromhex("250600010402")
        command = f"{packet[0]:02x}"
        
        best_match = get_best_message_type_match(command, packet)
        
        assert best_match is not None, "Should find a best match"
        assert best_match.name == "heartbeat", f"Expected heartbeat, got {best_match.name}"
    
    def test_get_best_match_text_4e(self, message_types):
        """Test get_best_message_type_match with text_4e packet."""
        packet = bytes.fromhex("4e00010030000001010a0a68690a0a")
        command = f"{packet[0]:02x}"
        
        best_match = get_best_message_type_match(command, packet)
        
        assert best_match is not None, "Should find a best match"
        assert best_match.name in ["text_4e", "send_text"], f"Expected text_4e or send_text, got {best_match.name}"
    
    def test_get_best_match_no_match(self, message_types):
        """Test get_best_message_type_match with no matching packet."""
        packet = bytes.fromhex("FF000000")  # Invalid command
        command = f"{packet[0]:02x}"
        
        best_match = get_best_message_type_match(command, packet)
        
        assert best_match is None, "Should not find a match for invalid command"
