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
async def scan_g1_devices() -> Dict[str, Any]:
    """Scan for available G1 devices.
    
    Returns:
        Dict[str, Any]: JSON response with scan results including:
            - result: "success" or "error"
            - devices: List of discovered devices with their properties
            - count: Number of devices found
            - error: Error message if scan failed
        
    Note:
        This performs an actual BLE scan for devices with names containing "G1_" pattern.
        Returns a structured list of discovered devices with their addresses and signal strength.
    """
    try:
        devices = await ble_manager.scan_for_devices(filter_pattern="G1_")
    except Exception as e:
        logger.error(f"Scan failed: {e}")
        return {
            "result": "error",
            "error": str(e),
            "devices": [],
            "count": 0
        }
    
    # Process devices to extract side information and format properly
    processed_devices = []
    for device in devices:
        device_info = {
            "name": device['name'],
            "id": device['address'],
            "side": "right" if "_R_" in device['name'] else "left" if "_L_" in device['name'] else "unknown",
            "rssi": device.get('rssi') if device.get('rssi') != 'N/A' else None
        }
        processed_devices.append(device_info)
    
    return {
        "result": "success",
        "devices": processed_devices,
        "count": len(processed_devices)
    }
    

@server.tool()
async def connect_g1_device(address: str) -> Dict[str, Any]:
    """Connect to a G1 device by address.
    
    Args:
        address (str): The Bluetooth MAC address of the G1 device to connect to.
                      Format should be XX:XX:XX:XX:XX:XX where X are hexadecimal characters.
                      Example: "AA:BB:CC:DD:EE:FF"
    
    Returns:
        Dict[str, Any]: JSON response with connection status including:
            - result: "success" or "error"
            - connected: Boolean indicating connection state
            - device_name: Name of connected device (if successful)
            - device_address: Address of connected device (if successful)
            - error: Error message if connection failed
        
    Note:
        This establishes a BLE connection to the specified device and discovers
        the Nordic UART service and characteristics.
    """
    # Validate address format - accept both MAC addresses and CoreBluetooth UUIDs
    
    # Check if it's a MAC address (XX:XX:XX:XX:XX:XX) or CoreBluetooth UUID (XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX)
    mac_pattern = r'^([0-9A-Fa-f]{2}:){5}[0-9A-Fa-f]{2}$'
    uuid_pattern = r'^[0-9A-Fa-f]{8}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{12}$'

    if not address or (not re.match(mac_pattern, address) and not re.match(uuid_pattern, address)):
        return {
            "result": "error",
            "connected": False,
            "error": "Invalid address format. Expected format:\n- MAC address: XX:XX:XX:XX:XX:XX\n- CoreBluetooth UUID: XXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX"
        }
    
    # Check if already connected
    if ble_manager.is_connected:
        return {
            "result": "error",
            "connected": True,
            "device_name": ble_manager.target_device.name if ble_manager.target_device else "Unknown",
            "device_address": address,
            "error": "Already connected to a device. Disconnect first."
        }

    try:
        success = await ble_manager.connect_to_device(address)
    except Exception as e:
        logger.error(f"Connection failed: {e}")
        return {
            "result": "error",
            "connected": False,
            "error": f"Connection failed: {str(e)}"
        }

    if success:
        device_name = ble_manager.target_device.name if ble_manager.target_device else "Unknown"
        return {
            "result": "success",
            "connected": True,
            "device_name": device_name,
            "device_address": address
        }
    else:
        return {
            "result": "error",
            "connected": False,
            "error": f"Failed to connect to device {address}"
        }
        

@server.tool()
async def disconnect_g1_device() -> Dict[str, Any]:
    """Disconnect from the current G1 device.
    
    Returns:
        Dict[str, Any]: JSON response with disconnection status including:
            - result: "success" or "error"
            - disconnected: Boolean indicating disconnection state
            - device_name: Name of previously connected device (if successful)
            - error: Error message if disconnection failed
        
    Note:
        This closes the BLE connection to the currently connected device,
        cleans up resources, stops the heartbeat mechanism, and resets connection state.
    """
    if not ble_manager.is_connected:
        return {
            "result": "error",
            "disconnected": False,
            "error": "Not connected to any device"
        }

    device_name = ble_manager.target_device.name if ble_manager.target_device else "Unknown"

    try:        
        await ble_manager.disconnect()
        return {
            "result": "success",
            "disconnected": True,
            "device_name": device_name
        }
    except Exception as e:
        logger.error(f"Disconnection failed: {e}")
        return {
            "result": "error",
            "disconnected": False,
            "error": f"Disconnection failed: {str(e)}"
        }

@server.tool()
async def get_g1_connection_status() -> Dict[str, Any]:
    """Get current connection status and device info.
    
    Returns:
        Dict[str, Any]: JSON response with detailed connection status including:
            - result: "success" or "error"
            - connected: Boolean indicating connection state
            - device_name: Name of connected device (if connected)
            - device_address: Address of connected device (if connected)
            - uart_service_available: Boolean indicating UART service availability
            - tx_characteristic_available: Boolean indicating TX characteristic availability
            - rx_characteristic_available: Boolean indicating RX characteristic availability
            - pending_messages_count: Number of pending messages
            - total_messages: Total message count
            - error: Error message if status check failed
        
    Note:
        This returns detailed status information including:
         - Connection state (connected/disconnected)
         - Device name and address (if connected)
         - UART service availability
         - Number of pending messages
         - Total message count
    """
    try:
        status = ble_manager.get_connection_status()
    except Exception as e:
        logger.error(f"Status check failed: {e}")
        return {
            "result": "error",
            "connected": False,
            "error": f"Status check failed: {str(e)}"
        }

    return {
        "result": "success",
        "connected": status['connected'],
        "device_name": status.get('device_name'),
        "device_address": status.get('device_address'),
        "uart_service_available": status.get('uart_service_available', False),
        "tx_characteristic_available": status.get('tx_characteristic_available', False),
        "rx_characteristic_available": status.get('rx_characteristic_available', False),
        "pending_messages_count": status.get('pending_messages_count', 0),
        "total_messages": status.get('total_messages', 0)
    }
    

@server.tool()
async def send_g1_message(hex_data: str) -> Dict[str, Any]:
    """Send a message to the connected G1 device.
    
    Args:
        hex_data (str): Hexadecimal string representation of the message to send.
                       Can contain spaces, tabs, or other whitespace which will be automatically removed.
                       Should contain only valid hexadecimal characters (0-9, A-F, a-f).
                       Examples: "2506", "25 06", "25 06 00 01", "25 06 00 01 04 02"
    
    Returns:
        Dict[str, Any]: JSON response with message status including:
            - result: "success" or "error"
            - message_sent: Boolean indicating if message was sent
            - response_received: Boolean indicating if response was received
            - response_data: Response data in hex format (if received)
            - timeout: Boolean indicating if message timed out
            - error: Error message if sending failed
        
    Note:
        This sends the hex_data as bytes to the connected G1 device using the
        Nordic BLE UART protocol and waits for a response up to 1 second.
        All messages are treated as commands and will timeout after 1 second if no response is received.
        Spaces, tabs, and other whitespace in hex_data are automatically removed before processing.
        
    Examples:
        - send_g1_message("2506") -> Sends command 0x25 with data 0x06
        - send_g1_message("25 06") -> Same as above (spaces removed)
        - send_g1_message("25 06 00 01") -> Sends 0x25060001
        - send_g1_message("ABCD 1234") -> Sends 0xABCD1234
        - send_g1_message("1234567890ABCDEF") -> Sends longer message
    """
    # Validate hex data format and remove spaces/whitespace
    if not hex_data:
        return {
            "result": "error",
            "message_sent": False,
            "error": "Hex data cannot be empty"
        }
    
    # Remove all spaces, tabs, newlines, and other whitespace
    cleaned_hex = ''.join(hex_data.split())
    
    # Validate that cleaned hex data contains only valid hexadecimal characters
    if not cleaned_hex or not all(c in '0123456789ABCDEFabcdef' for c in cleaned_hex):
        return {
            "result": "error",
            "message_sent": False,
            "error": "Invalid hex data format. Use only hexadecimal characters (0-9, A-F, a-f). Spaces and whitespace are automatically removed."
        }
    
    # Check connection
    if not ble_manager.is_connected:
        return {
            "result": "error",
            "message_sent": False,
            "error": "Not connected to any device. Connect first using connect_g1_device."
        }
    
    try:
        # Send message using cleaned hex data
        response_data = await ble_manager.send_message(cleaned_hex)
    except Exception as e:
        logger.error(f"Failed to send message: {e}")
        return {
            "result": "error",
            "message_sent": False,
            "error": f"Failed to send message: {str(e)}"
        }

    # Format response based on what was returned
    if response_data:
        # Format response data as space-separated hex pairs
        hex_pairs = ' '.join([response_data[i:i+2] for i in range(0, len(response_data), 2)])
        return {
            "result": "success",
            "message_sent": True,
            "response_received": True,
            "response_data": hex_pairs,
            "timeout": False
        }
    else:
        return {
            "result": "success",
            "message_sent": True,
            "response_received": False,
            "response_data": None,
            "timeout": True
        }
        
if __name__ == "__main__":
    server.run()
