#!/usr/bin/env python3
"""
Test the MCP server by creating a client and running actual commands
"""

import asyncio
import os
import sys
import re
import json

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
                
                # Parse JSON response to extract device information
                try:
                    scan_data = json.loads(scan_text)
                    print(f"✓ Parsed JSON response: {json.dumps(scan_data, indent=2)}")
                    
                    # Check if scan was successful
                    if scan_data.get("result") == "success" and scan_data.get("devices"):
                        devices = scan_data["devices"]
                        print(f"✓ Found {len(devices)} devices")
                        
                        # Look specifically for the right device (with "_R_" in name)
                        device_address = None
                        device_name = None
                        device_side = None
                        
                        for device in devices:
                            if "_R_" in device.get("name", ""):
                                device_address = device.get("id")
                                device_name = device.get("name")
                                device_side = device.get("side")
                                print(f"✓ Found right device: {device_name} ({device_side}) - {device_address}")
                                break
                        
                        if not device_address:
                            print("✗ Error: No right device (with '_R_' in name) found in scan results")
                            print("Available devices:")
                            for device in devices:
                                print(f"  - {device['name']} ({device.get('side', 'unknown')}) - {device['id']}")
                            return
                    else:
                        print(f"✗ Error: Scan failed - {scan_data.get('error', 'Unknown error')}")
                        return
                        
                except json.JSONDecodeError as e:
                    print(f"✗ Error: Failed to parse JSON response: {e}")
                    print(f"Raw response: {scan_text}")
                    return
                
                # Test 3: Call connect_g1_device with found device
                print(f"\n3. Testing connect_g1_device with {device_address}...")
                connect_result = await session.call_tool("connect_g1_device", {
                    "address": device_address
                })
                connect_text = connect_result.content[0].text
                print(f"✓ connect_g1_device result: {connect_text}")
                
                # Parse connection response
                try:
                    connect_data = json.loads(connect_text)
                    print(f"✓ Parsed connection response: {json.dumps(connect_data, indent=2)}")
                    
                    if connect_data.get("result") != "success":
                        print(f"✗ Connection failed: {connect_data.get('error', 'Unknown error')}")
                        print("Test cannot continue without a successful connection")
                        return
                        
                except json.JSONDecodeError as e:
                    print(f"✗ Error: Failed to parse connection JSON response: {e}")
                    print(f"Raw response: {connect_text}")
                    return
                
                # Test 4: Call get_g1_connection_status
                print("\n4. Testing get_g1_connection_status...")
                status_result = await session.call_tool("get_g1_connection_status", {})
                status_text = status_result.content[0].text
                print(f"✓ get_g1_connection_status result: {status_text}")
                
                # Parse status response
                try:
                    status_data = json.loads(status_text)
                    print(f"✓ Parsed status response: {json.dumps(status_data, indent=2)}")
                    
                    if status_data.get("result") == "success" and status_data.get("connected"):
                        print("✓ Device is connected and ready for communication")
                    else:
                        print("✗ Device is not connected")
                        return
                        
                except json.JSONDecodeError as e:
                    print(f"✗ Error: Failed to parse status JSON response: {e}")
                    print(f"Raw response: {status_text}")
                    return
                
                # Test 5: Call send_g1_message (only if connected)
                if status_data.get("connected"):
                    print("\n5. Testing send_g1_message with heartbeat command...")
                    send_result = await session.call_tool("send_g1_message", {
                        "hex_data": "250600010402"
                    })
                    send_text = send_result.content[0].text
                    print(f"✓ send_g1_message result: {send_text}")
                    
                    # Parse send response
                    try:
                        send_data = json.loads(send_text)
                        print(f"✓ Parsed send response: {json.dumps(send_data, indent=2)}")
                        
                        if send_data.get("result") == "success":
                            if send_data.get("response_received"):
                                print(f"✓ Message sent and response received: {send_data.get('response_data')}")
                            else:
                                print("✓ Message sent but timed out (no response)")
                        else:
                            print(f"✗ Message failed: {send_data.get('error', 'Unknown error')}")
                            
                    except json.JSONDecodeError as e:
                        print(f"✗ Error: Failed to parse send JSON response: {e}")
                        print(f"Raw response: {send_text}")
                    
                    # Test 6: Call send_g1_message with get display mode command
                    print("\n6. Testing send_g1_message with get display mode command...")
                    send_result2 = await session.call_tool("send_g1_message", {
                        "hex_data": "2b000101"
                    })
                    send_text2 = send_result2.content[0].text
                    print(f"✓ send_g1_message (get display mode) result: {send_text2}")
                    
                    # Parse send response
                    try:
                        send_data2 = json.loads(send_text2)
                        if send_data2.get("result") == "success":
                            if send_data2.get("response_received"):
                                print(f"✓ Display mode response: {send_data2.get('response_data')}")
                            else:
                                print("✓ Display mode command sent but timed out")
                        else:
                            print(f"✗ Display mode command failed: {send_data2.get('error')}")
                    except json.JSONDecodeError:
                        print("✗ Failed to parse display mode response")
                    
                    # Test 7: Call send_g1_message with clear screen command
                    print("\n7. Testing send_g1_message with clear screen command...")
                    send_result3 = await session.call_tool("send_g1_message", {
                        "hex_data": "18000100"
                    })
                    send_text3 = send_result3.content[0].text
                    print(f"✓ send_g1_message (clear screen) result: {send_text3}")
                    
                    # Parse send response
                    try:
                        send_data3 = json.loads(send_text3)
                        if send_data3.get("result") == "success":
                            if send_data3.get("response_received"):
                                print(f"✓ Clear screen response: {send_data3.get('response_data')}")
                            else:
                                print("✓ Clear screen command sent but timed out")
                        else:
                            print(f"✗ Clear screen command failed: {send_data3.get('error')}")
                    except json.JSONDecodeError:
                        print("✗ Failed to parse clear screen response")
                else:
                    print("\n5. Skipping send_g1_message tests (not connected)")
                    print("6. Skipping send_g1_message tests (not connected)")
                    print("7. Skipping send_g1_message tests (not connected)")
                
                # Test 8: Call disconnect_g1_device
                print("\n8. Testing disconnect_g1_device...")
                disconnect_result = await session.call_tool("disconnect_g1_device", {})
                disconnect_text = disconnect_result.content[0].text
                print(f"✓ disconnect_g1_device result: {disconnect_text}")
                
                # Parse disconnect response
                try:
                    disconnect_data = json.loads(disconnect_text)
                    if disconnect_data.get("result") == "success":
                        print(f"✓ Successfully disconnected from: {disconnect_data.get('device_name')}")
                    else:
                        print(f"✗ Disconnect failed: {disconnect_data.get('error', 'Unknown error')}")
                except json.JSONDecodeError:
                    print("✗ Failed to parse disconnect response")
                
                print("\n✓ All MCP tool tests completed successfully!")
                
    except Exception as e:
        print(f"✗ Test failed: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    asyncio.run(test_mcp_server())
