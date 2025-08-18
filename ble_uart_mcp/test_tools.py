#!/usr/bin/env python3
"""
Test the MCP server by creating a client and running actual commands
"""

import asyncio
import os
import sys
import re

from mcp import ClientSession, StdioServerParameters
from mcp.client.stdio import stdio_client

async def test_mcp_server():
    """Test the MCP server by creating a client and running commands"""
    
    print("Starting MCP server test...")
    
    # Create server parameters for stdio connection
    server_params = StdioServerParameters(
        command=sys.executable,  # Use the current Python interpreter
        args=["mcp_server.py"],  # Our MCP server script
        cwd=os.getcwd(),  # Current working directory
    )
    
    try:
        print("✓ Creating MCP client...")
        
        # Create MCP client and connect to the server
        async with stdio_client(server_params) as (read_stream, write_stream):
            
            # Create client session
            async with ClientSession(read_stream, write_stream) as session:
                
                print("✓ Connected to MCP server")
                
                # Initialize the connection
                await session.initialize()
                print("✓ Session initialized")
                
                # Test 1: List available tools
                print("\n1. Testing list_tools...")
                tools = await session.list_tools()
                print(f"✓ Found {len(tools.tools)} tools:")
                for tool in tools.tools:
                    print(f"  - {tool.name}: {tool.description}")
                
                # Test 2: Call scan_g1_devices
                print("\n2. Testing scan_g1_devices...")
                scan_result = await session.call_tool("scan_g1_devices", {})
                scan_text = scan_result.content[0].text
                print(f"✓ scan_g1_devices result: {scan_text}")
                
                # Extract device address from scan results for testing
                device_address = None
                if "Found" in scan_text and "device(s)" in scan_text:
                    # Parse the scan results to find a device address
                    # Handle both MAC addresses (XX:XX:XX:XX:XX:XX) and CoreBluetooth UUIDs (XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX)
                    address_match = re.search(r'\(([0-9A-Fa-f:]{17}|[0-9A-Fa-f]{8}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{12})\)', scan_text)
                    if address_match:
                        device_address = address_match.group(1)
                        print(f"✓ Found device address for testing: {device_address}")
                    else:
                        print("✗ Error: No device address found in scan results")
                        print("Test cannot continue without a valid device address")
                        return
                else:
                    print("✗ Error: No G1 devices found during scan")
                    print("Test cannot continue without available devices")
                    print("Please ensure G1 devices are powered on and in range")
                    return
                
                # Test 3: Call connect_g1_device with found device
                print(f"\n3. Testing connect_g1_device with {device_address}...")
                connect_result = await session.call_tool("connect_g1_device", {
                    "address": device_address
                })
                print(f"✓ connect_g1_device result: {connect_result.content[0].text}")
                
                # Test 4: Call get_g1_connection_status
                print("\n4. Testing get_g1_connection_status...")
                status_result = await session.call_tool("get_g1_connection_status", {})
                print(f"✓ get_g1_connection_status result: {status_result.content[0].text}")
                
                # Test 5: Call send_g1_message (only if connected)
                if "Successfully connected" in connect_result.content[0].text:
                    print("\n5. Testing send_g1_message with heartbeat command...")
                    send_result = await session.call_tool("send_g1_message", {
                        "hex_data": "250600010402"
                    })
                    print(f"✓ send_g1_message result: {send_result.content[0].text}")
                    
                    # Test 6: Call send_g1_message with get display mode command
                    print("\n6. Testing send_g1_message with get display mode command...")
                    send_result2 = await session.call_tool("send_g1_message", {
                        "hex_data": "2b000101"
                    })
                    print(f"✓ send_g1_message (get display mode) result: {send_result2.content[0].text}")
                    
                    # Test 7: Call send_g1_message with clear screen command
                    print("\n7. Testing send_g1_message with clear screen command...")
                    send_result3 = await session.call_tool("send_g1_message", {
                        "hex_data": "18000100"
                    })
                    print(f"✓ send_g1_message (clear screen) result: {send_result3.content[0].text}")
                else:
                    print("\n5. Skipping send_g1_message tests (not connected)")
                    print("6. Skipping send_g1_message tests (not connected)")
                    print("7. Skipping send_g1_message tests (not connected)")
                
                # Test 8: Call disconnect_g1_device
                print("\n8. Testing disconnect_g1_device...")
                disconnect_result = await session.call_tool("disconnect_g1_device", {})
                print(f"✓ disconnect_g1_device result: {disconnect_result.content[0].text}")
                
                print("\n✓ All MCP tool tests completed successfully!")
                
    except Exception as e:
        print(f"✗ Test failed: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    asyncio.run(test_mcp_server())
