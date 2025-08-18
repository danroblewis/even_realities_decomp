#!/usr/bin/env python3
"""
MCP Server for G1 Device Operations using Nordic BLE UART Protocol

This server provides tools for:
- scan_g1_devices
- connect_g1_device
- disconnect_g1_device
- get_g1_connection_status
- send_g1_message
"""

import asyncio
import logging
from typing import Dict, List, Any
import re
from datetime import datetime, timedelta

from mcp.server.fastmcp import FastMCP
from mcp.types import TextContent

from ble_uart_manager import NordicBLEUARTManager

# Configure logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

# Create FastMCP server
server = FastMCP("g1-device-mcp")

# Global BLE UART manager instance
ble_manager = NordicBLEUARTManager()

@server.tool()
async def scan_g1_devices() -> str:
    """Scan for available G1 devices.
    
    Returns:
        str: Status message indicating the scan operation and results
        
    Note:
        This performs an actual BLE scan for devices with names containing "G1_" pattern.
        Returns a list of discovered devices with their addresses and signal strength.
    """
    try:
        devices = await ble_manager.scan_for_devices(filter_pattern="G1_")
        
        if not devices:
            return "No G1 devices found during scan"
        
        result = f"Found {len(devices)} G1 device(s):\n"
        for device in devices:
            rssi = device.get('rssi', 'N/A')
            result += f"- {device['name']} ({device['address']}) RSSI: {rssi}\n"
        
        return result
        
    except Exception as e:
        logger.error(f"Scan failed: {e}")
        return f"Scan failed: {str(e)}"

@server.tool()
async def connect_g1_device(address: str) -> str:
    """Connect to a G1 device by address.
    
    Args:
        address (str): The Bluetooth MAC address of the G1 device to connect to.
                      Format should be XX:XX:XX:XX:XX:XX where X are hexadecimal characters.
                      Example: "AA:BB:CC:DD:EE:FF"
    
    Returns:
        str: Status message indicating connection success or failure
        
    Note:
        This establishes a BLE connection to the specified device and discovers
        the Nordic UART service and characteristics.
    """
    try:
        # Validate address format - accept both MAC addresses and CoreBluetooth UUIDs
        
        # Check if it's a MAC address (XX:XX:XX:XX:XX:XX) or CoreBluetooth UUID (XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX)
        mac_pattern = r'^([0-9A-Fa-f]{2}:){5}[0-9A-Fa-f]{2}$'
        uuid_pattern = r'^[0-9A-Fa-f]{8}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{12}$'
        
        if not address or (not re.match(mac_pattern, address) and not re.match(uuid_pattern, address)):
            return "Invalid address format. Expected format:\n- MAC address: XX:XX:XX:XX:XX:XX\n- CoreBluetooth UUID: XXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX"
        
        # Check if already connected
        if ble_manager.is_connected:
            return f"Already connected to {ble_manager.target_device.name if ble_manager.target_device else 'device'}. Disconnect first."
        
        # Attempt connection
        success = await ble_manager.connect_to_device(address)
        
        if success:
            device_name = ble_manager.target_device.name if ble_manager.target_device else "Unknown"
            return f"Successfully connected to G1 device: {device_name} ({address})"
        else:
            return f"Failed to connect to device {address}"
            
    except Exception as e:
        logger.error(f"Connection failed: {e}")
        return f"Connection failed: {str(e)}"

@server.tool()
async def disconnect_g1_device() -> str:
    """Disconnect from the current G1 device.
    
    Returns:
        str: Status message indicating disconnection success or failure
        
    Note:
        This closes the BLE connection to the currently connected device,
        cleans up resources, stops the heartbeat mechanism, and resets connection state.
    """
    try:
        if not ble_manager.is_connected:
            return "Not connected to any device"
        
        device_name = ble_manager.target_device.name if ble_manager.target_device else "Unknown"
        await ble_manager.disconnect()
        return f"Successfully disconnected from G1 device: {device_name}"
        
    except Exception as e:
        logger.error(f"Disconnection failed: {e}")
        return f"Disconnection failed: {str(e)}"

@server.tool()
async def get_g1_connection_status() -> str:
    """Get current connection status and device info.
    
    Returns:
        str: Detailed status information including:
             - Connection state (connected/disconnected)
             - Device name and address (if connected)
             - UART service availability
             - Number of pending messages
             - Total message count
    """
    try:
        status = ble_manager.get_connection_status()
        
        result = "G1 Device Connection Status:\n"
        result += f"Connected: {status['connected']}\n"
        
        if status['connected']:
            result += f"Device Name: {status['device_name']}\n"
            result += f"Device Address: {status['device_address']}\n"
            result += f"UART Service: {'Available' if status['uart_service_available'] else 'Not Available'}\n"
            result += f"TX Characteristic: {'Available' if status['tx_characteristic_available'] else 'Not Available'}\n"
            result += f"RX Characteristic: {'Available' if status['rx_characteristic_available'] else 'Not Available'}\n"
            result += f"Pending Messages: {status['pending_messages_count']}\n"
            result += f"Total Messages: {status['total_messages']}\n"
        else:
            result += "Device: None\n"
            result += "Address: None\n"
        
        return result
        
    except Exception as e:
        logger.error(f"Status check failed: {e}")
        return f"Status check failed: {str(e)}"

@server.tool()
async def send_g1_message(hex_data: str) -> str:
    """Send a message to the connected G1 device.
    
    Args:
        hex_data (str): Hexadecimal string representation of the message to send.
                       Should contain only valid hexadecimal characters (0-9, A-F, a-f).
                       No spaces, colons, or other separators should be included.
                       Example: "2506" for a command with command code 0x25 and data 0x06
                       Example: "ABCD1234" for a longer message
    
    Returns:
        str: Status message indicating whether the message was sent successfully
             and if a response was received within the 1-second timeout period
        
    Note:
        This sends the hex_data as bytes to the connected G1 device using the
        Nordic BLE UART protocol and waits for a response up to 1 second.
        All messages are treated as commands and will timeout after 1 second if no response is received.
        
    Examples:
        - send_g1_message("2506") -> Sends command 0x25 with data 0x06
        - send_g1_message("ABCD") -> Sends 0xABCD
        - send_g1_message("1234567890ABCDEF") -> Sends longer message
    """
    try:
        # Validate hex data format
        if not hex_data or not all(c in '0123456789ABCDEFabcdef' for c in hex_data):
            return "Invalid hex data format. Use only hexadecimal characters (0-9, A-F, a-f)"
        
        # Check connection
        if not ble_manager.is_connected:
            return "Not connected to any device. Connect first using connect_g1_device."
        
        # Send message
        response_data = await ble_manager.send_message(hex_data)
        
        # Format response based on what was returned
        if response_data:
            # Format response data as space-separated hex pairs
            hex_pairs = ' '.join([response_data[i:i+2] for i in range(0, len(response_data), 2)])
            return f"Message sent successfully. Response received: {hex_pairs}"
        else:
            return "Message sent but timed out after 1 second (no response received)"
            
    except Exception as e:
        logger.error(f"Failed to send message: {e}")
        return f"Failed to send message: {str(e)}"

if __name__ == "__main__":
    server.run()
