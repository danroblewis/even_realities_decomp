# Navigation Protocol Specification
## Even Realities G1 Smart Glasses

### Overview
The navigation system in the Even Realities G1 smart glasses supports two main map types: overview maps and panoramic maps. The protocol is designed to handle large map data through packet-based transmission with error checking and supports real-time navigation information including directions, distances, and phone rotation-based arrow overlays.

### Navigation Command Structure

#### Main Navigation Command
```
#cmd@0A@<subcommand>@<parameters>
```

**Command**: `0x0A` - `PUT_NAVIGATION_INFO`

### Subcommands

#### 0x00 - Navigation Startup
**Purpose**: Initialize navigation mode and set basic parameters

**Parameters**:
- Byte 3: Navigation type/configuration
- Additional configuration data

**Response**: Success/failure confirmation

**Example**:
```
#cmd@0A@00@<nav_config>
```

#### 0x01 - Navigation Data Update
**Purpose**: Update real-time navigation information including coordinates, text, and status

**Parameters**:
- Byte 3: Navigation status
- Byte 5: X coordinate (0-488 range, 0x1E8 max)
- Byte 6-7: Y coordinate (0-136 range, 0x88 max)
- Byte 8-9: Time remaining string (max 24 chars)
- Byte 10+: Kilometer remaining string (max 24 chars)
- Byte 25+: Road name string (max 64 chars)
- Byte 65+: Remaining distance string (max 24 chars)
- Byte 89+: Current speed string (max 24 chars)

**Data Structure**:
```
[Status][X][Y][TimeRemaining][KmRemaining][RoadName][Distance][Speed]
```

**Coordinate Limits**:
- X: 0-488 (0x1E8)
- Y: 0-136 (0x88)

**String Limits**:
- Time remaining: 24 characters max
- Kilometer remaining: 24 characters max
- Road name: 64 characters max
- Remaining distance: 24 characters max
- Current speed: 24 characters max

**Response**: Success/failure confirmation

**Example**:
```
#cmd@0A@01@<status>@<x>@<y>@<time>@<km>@<road>@<distance>@<speed>
```

#### 0x02 - Overview Map Data
**Purpose**: Transmit overview map data with packet-based delivery

**Parameters**:
- Byte 3: Map type/format
- Byte 4-5: Total packet count
- Byte 6-7: Current packet number
- Byte 8: Data format (0x01=raw, 0x02=RLE compressed)
- Byte 9+: Map data

**Data Format**:
- **Raw Format**: Direct pixel data (0x1210 = 4624 bytes)
- **RLE Compressed**: Run-length encoded data

**Packet Structure**:
```
[MapType][TotalPackets][CurrentPacket][Format][MapData...]
```

**Buffer Size**: 0x1210 (4624 bytes) for overview maps

**Response**: Success/failure confirmation

**Example**:
```
#cmd@0A@02@<type>@<total>@<current>@<format>@<map_data>
```

#### 0x03 - Panoramic Map Data
**Purpose**: Transmit panoramic map data with packet-based delivery

**Parameters**:
- Byte 3: Map type/format
- Byte 4-5: Total packet count
- Byte 6-7: Current packet number
- Byte 8: Data format
- Byte 9: Navigation status
- Byte 10+: Map data

**Data Format**:
- **Raw Format**: Direct pixel data (0x40D0 = 16592 bytes)
- **Compressed**: Compressed data format

**Packet Structure**:
```
[MapType][TotalPackets][CurrentPacket][Format][Status][MapData...]
```

**Buffer Size**: 0x40D0 (16592 bytes) for panoramic maps

**Response**: Success/failure confirmation

**Example**:
```
#cmd@0A@03@<type>@<total>@<current>@<format>@<status>@<map_data>
```

#### 0x05 - Navigation Exit
**Purpose**: Exit navigation mode and clean up resources

**Parameters**:
- Byte 3: Exit reason/status

**Response**: Success/failure confirmation

**Example**:
```
#cmd@0A@05@<reason>
```

#### 0x06 - Arrival Status
**Purpose**: Update arrival status and display prompt messages

**Parameters**:
- Byte 3: Navigation status
- Byte 5: Arrival status code
- Byte 6+: Prompt message (max 64 characters)

**Response**: Success/failure confirmation

**Example**:
```
#cmd@0A@06@<status>@<arrival_code>@<prompt_message>
```

### Map Data Formats

#### Overview Maps
- **Resolution**: 320x199 pixels (0x140 x 0xC7)
- **Buffer Size**: 4624 bytes (0x1210)
- **Format**: Raw pixel data or RLE compressed
- **Display**: Full overview of navigation area

#### Panoramic Maps
- **Resolution**: 320x199 pixels (0x140 x 0xC7)
- **Buffer Size**: 16592 bytes (0x40D0)
- **Format**: Raw pixel data or compressed
- **Display**: Detailed panoramic view with navigation overlays

### Navigation Overlay System

#### Direction Arrows
- **Function**: `navigation_direction_img_display()`
- **Parameters**: Direction code (0x01-0x23 = 35 directions)
- **Positioning**: Based on phone rotation and GPS coordinates
- **Rendering**: Overlaid on top of map data

#### Text Overlays
- **Time Remaining**: Displayed at specific screen coordinates
- **Distance**: Shown with remaining kilometers
- **Road Names**: Current street/road information
- **Speed**: Current navigation speed

### Packet Transmission Protocol

#### Multi-Packet Support
- **Overview Maps**: Up to 255 packets
- **Panoramic Maps**: Up to 255 packets
- **Sequence Validation**: Packet order checking
- **Error Recovery**: Automatic retransmission on sequence errors

#### Packet Validation
- **Sequence Numbers**: Sequential packet ordering
- **Size Limits**: Buffer overflow protection
- **Format Checking**: Data format validation
- **CRC/Checksum**: Data integrity verification

### Coordinate System

#### Display Coordinates
- **X Range**: 0-488 pixels (0x1E8)
- **Y Range**: 0-136 pixels (0x88)
- **Origin**: Top-left corner
- **Units**: Pixels

#### Navigation Coordinates
- **GPS Integration**: Real-time coordinate updates
- **Phone Rotation**: Gyroscope-based orientation
- **Arrow Positioning**: Dynamic overlay positioning
- **Map Centering**: Automatic map centering on current position

### Error Handling

#### Packet Errors
- **Sequence Mismatch**: Automatic reset and retransmission
- **Buffer Overflow**: Data truncation with error reporting
- **Format Errors**: Invalid data format handling
- **Timeout Handling**: Packet delivery timeout management

#### Coordinate Errors
- **Out of Range**: X/Y coordinate validation
- **Invalid Data**: Data format validation
- **Overflow Protection**: String length limits
- **Error Reporting**: Detailed error messages

### Response Codes

#### Success Codes
- **0xC9**: Operation successful
- **0xCA**: Operation failed

#### Error Codes
- **0x01**: Parameter validation error
- **0x02**: Buffer overflow error
- **0x03**: Sequence error
- **0x04**: Format error

### Implementation Details

#### Memory Management
- **Overview Map Buffer**: 0x1210 bytes (4624 bytes)
- **Panoramic Map Buffer**: 0x40D0 bytes (16592 bytes)
- **Text Buffers**: Variable size based on content
- **Coordinate Buffers**: Fixed size coordinate storage

#### Display Functions
- **Overview Map**: `navigation_overview_map_display()`
- **Panoramic Map**: `navigation_panoramic_map_display()`
- **Direction Arrows**: `navigation_direction_img_display()`
- **Text Rendering**: Integrated text overlay system

#### State Management
- **Navigation Mode**: Active/inactive state tracking
- **Map Loading**: Map data loading status
- **Packet State**: Multi-packet transmission state
- **Display State**: Current display mode and content

### Example Usage Scenarios

#### Starting Navigation
```
#cmd@0A@00@01
```

#### Updating Navigation Data
```
#cmd@0A@01@01@100@50@5 min@2.3 km@Main Street@1.2 km@35 km/h
```

#### Sending Overview Map (Single Packet)
```
#cmd@0A@02@01@01@01@01@<map_data_4624_bytes>
```

#### Sending Panoramic Map (Multiple Packets)
```
#cmd@0A@03@01@03@01@01@01@<map_data_16592_bytes>
```

#### Exiting Navigation
```
#cmd@0A@05@01
```

### Performance Characteristics

#### Data Transfer
- **Overview Maps**: 4624 bytes per transmission
- **Panoramic Maps**: 16592 bytes per transmission
- **Text Updates**: Variable size based on content
- **Coordinate Updates**: Real-time with minimal latency

#### Display Performance
- **Refresh Rate**: Optimized for smooth navigation
- **Overlay Rendering**: Hardware-accelerated graphics
- **Memory Usage**: Efficient buffer management
- **Battery Impact**: Optimized for extended use

### Integration Points

#### Phone App Integration
- **GPS Data**: Real-time coordinate updates
- **Gyroscope**: Phone rotation detection
- **Map Sources**: External map data providers
- **Navigation Engine**: Route calculation and guidance

#### Hardware Integration
- **Display Controller**: Direct display memory access
- **Graphics Engine**: Hardware-accelerated rendering
- **Memory Management**: Efficient buffer allocation
- **Power Management**: Optimized power consumption

This specification provides the complete navigation protocol for the Even Realities G1 smart glasses, enabling rich navigation experiences with real-time updates, multi-packet map transmission, and dynamic overlay rendering. 