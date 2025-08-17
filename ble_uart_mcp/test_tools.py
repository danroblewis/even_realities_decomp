#!/usr/bin/env python3
"""
Test the MCP server by creating a client and running actual commands
"""

import asyncio
import os
import sys

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
                print(f"✓ scan_g1_devices result: {scan_result.content[0].text}")
                
                # Test 3: Call connect_g1_device
                print("\n3. Testing connect_g1_device...")
                connect_result = await session.call_tool("connect_g1_device", {
                    "address": "AA:BB:CC:DD:EE:FF"
                })
                print(f"✓ connect_g1_device result: {connect_result.content[0].text}")
                
                # Test 4: Call get_g1_connection_status
                print("\n4. Testing get_g1_connection_status...")
                status_result = await session.call_tool("get_g1_connection_status", {})
                print(f"✓ get_g1_connection_status result: {status_result.content[0].text}")
                
                # Test 5: Call send_g1_message
                print("\n5. Testing send_g1_message...")
                send_result = await session.call_tool("send_g1_message", {
                    "hex_data": "2506",
                    "timeout": 2.0
                })
                print(f"✓ send_g1_message result: {send_result.content[0].text}")
                
                # Test 6: Call send_g1_message with different parameters
                print("\n6. Testing send_g1_message with different parameters...")
                send_result2 = await session.call_tool("send_g1_message", {
                    "hex_data": "ABCD1234"
                })
                print(f"✓ send_g1_message (default timeout) result: {send_result2.content[0].text}")
                
                # Test 7: Call disconnect_g1_device
                print("\n7. Testing disconnect_g1_device...")
                disconnect_result = await session.call_tool("disconnect_g1_device", {})
                print(f"✓ disconnect_g1_device result: {disconnect_result.content[0].text}")
                
                print("\n✓ All MCP tool tests completed successfully!")
                
    except Exception as e:
        print(f"✗ Test failed: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    asyncio.run(test_mcp_server())
