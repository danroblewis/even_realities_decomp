# Custom Bitmap Rendering for Even Realities G1 Smart Glasses

## Overview
This document describes how to send custom bitmap data over BLE to be rendered by the Even Realities G1 smart glasses display. The device supports 4-bit color depth with a 640x200 pixel resolution.

## Display Specifications
- **Screen Resolution**: 640x200 pixels (0x280 x 0xC8)
- **Color Depth**: 4-bit per pixel (16 colors)
- **Framebuffer**: Main framebuffer at `MAIN_FRAMEBUFFER` address
- **Coordinate System**: X: 0-639 (0x0-0x27F), Y: 0-199 (0x0-0xC7)
- **Pixel Format**: 2 pixels per byte (upper 4 bits = even pixel, lower 4 bits = odd pixel)

## Available Rendering Commands

### 1. Direct Framebuffer Commands

#### Command 0x4E - Work Mode Configuration (with Bitmap Data)
- **Function**: Configures work mode and can include bitmap data
- **Data Structure**:
  ```
  [0x4E][Mode_ID][Config_Flags][Param_Count][Mode_Params...][Bitmap_Data...]
  ```
- **Usage**: Can be used to send bitmap data along with mode configuration

#### Command 0x4A - Data Storage Command
- **Function**: Stores data in device memory buffers
- **Data**: Variable length data payload
- **Usage**: Can store bitmap data for later rendering

### 2. Custom Bitmap Rendering Commands

#### Command 0x2002 - Control Message with Bitmap Data
- **Function**: Sends control messages that can include bitmap data
- **Usage**: General purpose command for sending custom data

#### Command 0x2003 - System Initialization with Bitmap
- **Function**: System initialization that can include bitmap data
- **Usage**: For setting up custom display configurations

### 3. Framebuffer Direct Access Commands

#### Command 0x2018 - Extended Data Command
- **Function**: Sends extended data packets
- **Data Size**: Variable
- **Usage**: Can send large bitmap data packets

#### Command 0x2026 - Resource Management
- **Function**: Manages display resources and bitmap data
- **Usage**: For custom bitmap resource management

## How to Send Custom Bitmap Data

### Method 1: Using Command 0x4E (Recommended)
```python
# Send custom bitmap data using work mode configuration
def send_custom_bitmap(device_address, bitmap_data, x_pos, y_pos, width, height):
    # Command structure: [0x4E][Mode_ID][Config_Flags][Param_Count][Params...][Bitmap...]
    mode_id = 0x01  # Custom bitmap mode
    config_flags = 0x02  # Bitmap rendering flag
    param_count = 0x05  # 5 parameters
    
    # Parameters: [x_pos_low][x_pos_high][y_pos_low][y_pos_high][width][height]
    params = struct.pack('<HHHH', x_pos, y_pos, width, height)
    
    # Prepare command data
    data = [0x4E, mode_id, config_flags, param_count] + list(params) + list(bitmap_data)
    
    # Format with proprietary protocol
    frame = [0x5A, 0xA5, 0x7F, len(data) + 5] + data
    checksum = sum(frame) & 0xFF
    frame.append(checksum)
    
    # Send via BLE
    send_ble_frame(device_address, frame)
```

### Method 2: Using Command 0x4A (Data Storage)
```python
# Store bitmap data for later rendering
def store_bitmap_data(device_address, bitmap_data, bitmap_id):
    # Command structure: [0x4A][Bitmap_ID][Data_Length][Bitmap_Data...]
    data = [0x4A, bitmap_id, len(bitmap_data)] + list(bitmap_data)
    
    # Format with proprietary protocol
    frame = [0x5A, 0xA5, 0x7F, len(data) + 5] + data
    checksum = sum(frame) & 0xFF
    frame.append(checksum)
    
    # Send via BLE
    send_ble_frame(device_address, frame)
```

### Method 3: Using Extended Data Command 0x2018
```python
# Send large bitmap data using extended data command
def send_extended_bitmap(device_address, bitmap_data, x_pos, y_pos):
    # Command structure: [0x18][0x20][X_Low][X_High][Y_Low][Y_High][Data...]
    data = [0x18, 0x20, x_pos & 0xFF, (x_pos >> 8) & 0xFF, 
            y_pos & 0xFF, (y_pos >> 8) & 0xFF] + list(bitmap_data)
    
    # Format with proprietary protocol
    frame = [0x5A, 0xA5, 0x7F, len(data) + 5] + data
    checksum = sum(frame) & 0xFF
    frame.append(checksum)
    
    # Send via BLE
    send_ble_frame(device_address, frame)
```

## Bitmap Data Format Requirements

### 4-Bit Color Format
- **Pixel Depth**: 4 bits per pixel (16 colors)
- **Byte Layout**: 2 pixels per byte
  - Upper 4 bits: Even pixel
  - Lower 4 bits: Odd pixel
- **Color Palette**: 16 predefined colors (0x0-0xF)

### Data Size Calculation
```python
def calculate_bitmap_size(width, height):
    # 4-bit per pixel = 2 pixels per byte
    bytes_per_row = (width + 1) // 2  # Round up for odd widths
    total_bytes = bytes_per_row * height
    return total_bytes

# Example: 64x32 bitmap
width, height = 64, 32
data_size = calculate_bitmap_size(width, height)  # 1024 bytes
```

### Coordinate Validation
```python
def validate_coordinates(x, y, width, height):
    # Screen bounds: 640x200 (0x280 x 0xC8)
    if x < 0 or x >= 0x280 or y < 0 or y >= 0xC8:
        return False
    if x + width > 0x280 or y + height > 0xC8:
        return False
    return True
```

## Complete Example: Send Custom Icon

```python
import struct

def send_custom_icon(device_address, icon_data, x_pos, y_pos):
    """
    Send a custom icon to be displayed on the smart glasses
    
    Args:
        device_address: BLE device address
        icon_data: 4-bit bitmap data (2 pixels per byte)
        x_pos, y_pos: Display coordinates
    """
    
    # Validate coordinates
    if not validate_coordinates(x_pos, y_pos, len(icon_data) * 2, 16):
        raise ValueError("Invalid coordinates or icon size")
    
    # Prepare command data
    mode_id = 0x01  # Custom bitmap mode
    config_flags = 0x02  # Bitmap rendering
    param_count = 0x05  # 5 parameters
    
    # Parameters: x_pos, y_pos, width, height, data_length
    width = len(icon_data) * 2  # 2 pixels per byte
    height = 16  # Fixed height for icons
    
    params = struct.pack('<HHHH', x_pos, y_pos, width, height)
    
    # Command: [0x4E][Mode_ID][Config_Flags][Param_Count][Params...][Bitmap_Data...]
    data = [0x4E, mode_id, config_flags, param_count] + list(params) + list(icon_data)
    
    # Format with proprietary protocol
    frame = [0x5A, 0xA5, 0x7F, len(data) + 5] + data
    checksum = sum(frame) & 0xFF
    frame.append(checksum)
    
    # Send via BLE
    send_ble_frame(device_address, frame)
    
    print(f"Sent custom icon: {width}x{height} at ({x_pos}, {y_pos})")
    print(f"Data size: {len(icon_data)} bytes")
```

## BLE Protocol Frame Format

All commands use the proprietary data frame format:
```
[0x5A][0xA5][0x7F][Length][Command_ID][Data...][Checksum]

Where:
- Length = actual data length + 5
- Checksum = sum of all bytes from 0x5A through the last data byte
```

## Important Notes

1. **Framebuffer Management**: The device automatically manages framebuffer memory and LCD refresh
2. **Coordinate System**: X coordinates must be even numbers for proper 4-bit alignment
3. **Data Limits**: Maximum command data size is 256 bytes (0x100)
4. **Refresh Timing**: LCD refresh happens automatically after bitmap drawing
5. **Memory Cleanup**: Use `_clean_fb_data` equivalent commands to clear areas before drawing
6. **Error Handling**: Check response codes (0xC9 = success, 0xCA = error)

## Response Codes for Rendering Commands

- **0xC9**: Success - Bitmap rendered successfully
- **0xCA**: Error - Invalid parameters or rendering failed
- **0xCB**: Configuration required - Additional setup needed
- **0xCC**: Special action - Bitmap processed with special handling

## Usage Examples

### Send a 32x32 Icon
```python
# Create a simple 32x32 icon (4-bit data)
icon_data = [0x0F, 0x0F, 0x0F, 0x0F] * 32  # 128 bytes for 32x32 icon

# Send to position (100, 50)
send_custom_icon(device_address, icon_data, 100, 50)
```

### Send a Full-Screen Image
```python
# For a full-screen image (640x200), you'll need to split into chunks
# due to the 256-byte command limit

def send_full_screen_image(device_address, image_data):
    chunk_size = 250  # Leave room for command overhead
    chunks = [image_data[i:i+chunk_size] for i in range(0, len(image_data), chunk_size)]
    
    for i, chunk in enumerate(chunks):
        # Send each chunk with appropriate positioning
        x_offset = (i * chunk_size * 2) % 640  # 2 pixels per byte
        y_offset = (i * chunk_size * 2) // 640
        
        send_custom_bitmap(device_address, chunk, x_offset, y_offset, 
                          len(chunk) * 2, min(200 - y_offset, 16))
```

## Troubleshooting

### Common Issues
1. **Invalid Coordinates**: Ensure x, y coordinates are within screen bounds
2. **Data Size**: Check that bitmap data doesn't exceed 256 bytes per command
3. **Alignment**: X coordinates should be even numbers for proper 4-bit alignment
4. **Checksum Errors**: Verify checksum calculation matches the protocol specification

### Debug Commands
- Use command 0x4E with debug flags to get rendering status
- Check response codes for error details
- Monitor BLE connection state during transmission

## Conclusion

This command set provides comprehensive control over the display, allowing you to send custom bitmap data over BLE and have it rendered directly on the smart glasses' LCD screen. The 4-bit color depth and 640x200 resolution provide sufficient quality for most custom UI elements while maintaining efficient data transmission over BLE.
