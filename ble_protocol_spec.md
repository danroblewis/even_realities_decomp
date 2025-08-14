# Bluetooth Low Energy Protocol Specification
## Even Realities G1 Smart Glasses

### Overview
The Even Realities G1 smart glasses use Nordic Semiconductor's proprietary BLE UART serial protocol for communication. The protocol follows a command-based structure where the first byte is a command identifier, and some commands support subcommands and parameters.

### Protocol Format

#### Basic Command Format
```
#cmd@<command_id>@<parameters>
```

#### Notification Command Format
```
#cmd@<command_id>@<subcommand>#<title>@<message>
```

### Command Reference

## GET Commands (0x29-0x3E)

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **GET_BRIGHTNESS** | 0x29 | Get display brightness level | None | Brightness level (1 byte) |
| **GET_ANTI_SHAKE_ENABLE** | 0x2A | Get anti-shake feature status | None | Anti-shake state (1 byte) |
| **GET_DISPLAY_MODE** | 0x2B | Get current display mode | None | Display mode (2 bytes) |
| **GET_DEVICE_INFO** | 0x2C | Get device information | Platform type (1 byte: 0x01=iOS, 0x02=Android) | Device info (24 bytes: charging status, software versions, etc.) |
| **GET_M_N_S_MAC** | 0x2D | Get master/slave MAC addresses | None | MAC addresses (12 bytes) |
| **GET_WAKEUP_ANGLE** | 0x32 | Get wake-up angle settings | None | Wake-up angle (4 bytes) |
| **GET_GLASSES_SN** | 0x33 | Get glasses serial number | None | Serial number (variable length) |
| **GET_DEVICE_SN** | 0x34 | Get device serial number | None | Device serial (variable length) |
| **GET_ESB_CHANNEL** | 0x35 | Get ESB channel | None | Channel number (1 byte) |
| **GET_NOTIFICATION_COUNTS** | 0x36 | Get notification counts | None | Count data |
| **GET_SYSTEM_STATUS** | 0x37 | Get system status | None | System status (4 bytes) |
| **GET_ANCS_ENABLE** | 0x38 | Get ANCS notification status | None | ANCS state (1 byte) |
| **GET_CHECK_MODE** | 0x3A | Get check mode status | None | Check mode (1 byte) |
| **GET_RASTER_CONFIG** | 0x3B | Get raster configuration | None | Raster height and canvas distance (2 bytes) |
| **GET_MESSAGE_MODE** | 0x3C | Get message mode | None | Message mode (1 byte) |
| **GET_BURIAL_POINT_DATA** | 0x3E | Get burial point data | None | Burial point data (192 bytes) |

## PUT Commands (0x01-0x3E)

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **PUT_BRIGHTNESS** | 0x01 | Set display brightness | Brightness level (1 byte) | Success/failure |
| **PUT_ANTI_SHAKE_ENABLE** | 0x02 | Enable/disable anti-shake | State (1 byte) | Success/failure |
| **PUT_DISPLAY_MODE** | 0x03 | Set display mode | Mode (1 byte) | Success/failure |
| **PUT_INTERNAL_DEBUG** | 0x04 | Set internal debug options | Op code + value (2 bytes) | Success/failure |
| **PUT_COUNTDOWN_TIMER** | 0x05 | Set countdown timer | Timer data (8 bytes) | Success/failure |
| **PUT_SCHEDULE_TASK** | 0x06 | Set scheduled task | Task data | Success/failure |
| **PUT_TELEPROMPTER_INFO** | 0x09 | Set teleprompter information | Teleprompter data | Success/failure |
| **PUT_NAVIGATION_INFO** | 0x0A | Set navigation information | Navigation data | Success/failure |
| **PUT_WAKEUP_ANGLE** | 0x0B | Set wake-up angle | Angle + offset (2 bytes) | Success/failure |
| **PUT_NOTIFY_EN** | 0x0C | Enable/disable notifications | Enable state (1 byte) | Success/failure |
| **PUT_GLASSES_SETTING** | 0x0D | Set glasses settings | Setting data | Success/failure |
| **PUT_DEVICE_SN** | 0x0E | Set device serial number | Serial number | Success/failure |

## Special Commands

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **POST_BT_UNPAIR** | 0x47 | Unpair Bluetooth device | None | Success/failure |
| **POST_NOTIFICATION_MSG** | 0x4B | Post notification message | Title + message | Success/failure |
| **SYSTEM_REBOOT** | 0x58 | Reboot system | None | None (reboots) |
| **AUDIO_TEST** | 0x6E | Test audio callback | None | Audio data |
| **SET_ESB_CHANNEL** | 0x6F | Set ESB channel | Channel number | Success/failure |
| **SET_DISPLAY_MODE** | 0x70 | Set display mode | Mode number | Success/failure |
| **SET_WORK_MODE** | 0x71 | Set work mode | Mode number | Success/failure |
| **SET_BRIGHTNESS** | 0x72 | Set brightness | Level | Success/failure |
| **SET_PITCH** | 0x73 | Set pitch | Pitch value | Success/failure |
| **GET_VERSION_INFO** | 0x74 | Get version information | None | Version data |
| **GET_BATTERY_INFO** | 0x75 | Get battery information | None | Battery status |
| **GET_VADC_TMR** | 0x76 | Get VADC and timer | None | VADC + timer data |
| **FLASH_OPERATION** | 0x77 | Flash operations | Operation type | Success/failure |
| **MAC_ADDRESS_OPS** | 0x78 | MAC address operations | Operation type | Success/failure |
| **LOG_LEVEL_SET** | 0x79 | Set log level | Level number | Success/failure |
| **SCREEN_ID_SET** | 0x7A | Set screen ID | Screen ID | Success/failure |

## Dashboard and Display Commands

### Dashboard Modes
The dashboard supports three display modes:
- **Full Mode**: Complete dashboard display
- **Dual Mode**: Split-screen dashboard
- **Minimal Mode**: Compact dashboard view

### Data Type Commands

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **PUT_STOCKS_DATA** | 0x0B | Set stocks information | Stocks data (company names, prices, changes) | Success/failure |
| **PUT_NEWS_DATA** | 0x14 | Set news information | News data (source, text, timestamps) | Success/failure |
| **PUT_NAVIGATION_DATA** | 0x0A | Set navigation information | Navigation data (maps, directions, coordinates) | Success/failure |
| **PUT_QUICK_NOTES** | 0x06 | Set quick notes | Notes data | Success/failure |

### Bitmap and Image Commands

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **PUT_BITMAP_IMAGE** | 0x15 | **Render full bitmap image** | Image data + package ID | Success/failure |
| **PUT_NAVIGATION_OVERVIEW** | 0x17 | Set navigation overview map | Map data | Success/failure |
| **PUT_PANORAMIC_MAP** | 0x18 | Set panoramic map data | Map data | Success/failure |

**Note**: Command 0x15 is the bitmap image command you mentioned. It supports package-based transmission for large images.

### Teleprompter Commands

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **PUT_TELEPROMPTER_INIT** | 0x09 | Initialize teleprompter | Initialization data | Success/failure |
| **PUT_TELEPROMPTER_TEXT** | 0x09 | Update teleprompter text | Text data | Success/failure |
| **PUT_TELEPROMPTER_SUSPEND** | 0x09 | Suspend teleprompter | Suspend data | Success/failure |
| **PUT_TELEPROMPTER_EXIT** | 0x09 | Exit teleprompter mode | Exit data | Success/failure |

### Even AI Commands

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **PUT_EVEN_AI_START** | 0x0D | Start Even AI functionality | AI configuration | Success/failure |
| **PUT_AUDIO_RECORD** | 0x0F | Start audio recording for AI | Audio settings | Success/failure |
| **PUT_AUDIO_STOP** | 0x10 | Stop audio recording | None | Success/failure |

### Display Control Commands

| Command | Hex | Purpose | Parameters | Response |
|---------|-----|---------|------------|----------|
| **CLEAR_DISPLAY** | 0x16 | Clear the display | Clear type | Success/failure |
| **SET_TEXT_DISPLAY** | 0x1C | Set text display mode | Text settings | Success/failure |
| **SET_DASHBOARD_MODE** | 0x1E | Set dashboard display mode | Mode (0x01=Full, 0x02=Dual, 0x03=Minimal) | Success/failure |

### Response Format

All commands return a response with the following structure:
- **Return Code** (1 byte): Indicates success/failure
- **Data Payload** (variable length): Command-specific response data
- **Status Information** (if applicable): Additional status details

### Platform Detection

The protocol automatically detects the connected platform:
- **0x01**: iOS device
- **0x02**: Android device

This affects how certain commands are processed and what data is returned.

### Key Features

1. **Dashboard System**: Three display modes (Full, Dual, Minimal) with multiple data types
2. **Data Rendering**: Stocks, news, maps, quick notes, and navigation support
3. **Bitmap Images**: Full bitmap image rendering with package-based transmission
4. **Navigation**: Map rendering with phone rotation-based arrow overlays
5. **Teleprompter**: Complete teleprompter functionality with text management
6. **Even AI**: Microphone data transmission and AI interaction
7. **Display Control**: Text display, clear display, and mode switching
8. **Notification System**: Rich notification support with titles and messages
9. **Audio Support**: Audio callback and recording capabilities
10. **System Management**: Reboot, work mode, and configuration management

### Implementation Notes

- Commands are processed through the `spec_ble_command_hook` function
- GET requests are handled by `ble_process_get_req`
- PUT requests are handled by `ble_process_put_req`
- The protocol supports both synchronous and asynchronous operations
- Error handling includes return codes and debug information
- Some commands require specific parameter validation
- The protocol is designed for Nordic Semiconductor nRF5340 BLE stack
- Dashboard modes are stored in flash memory and can be configured
- Bitmap images use package-based transmission for large files
- Navigation supports both overview and panoramic map modes

### Example Usage

#### Get Device Information
```
#cmd@2C@01
```

#### Set Brightness
```
#cmd@01@80
```

#### Post Notification
```
#cmd@4B@01#Alert@New message received
```

#### Render Bitmap Image
```
#cmd@15@<package_id>@<image_data>
```

#### Set Dashboard Mode
```
#cmd@1E@01  # Full mode
#cmd@1E@02  # Dual mode  
#cmd@1E@03  # Minimal mode
```

#### Start Even AI
```
#cmd@0D@<ai_config>
```

#### Set Navigation Data
```
#cmd@0A@<navigation_data>
```

#### Reboot System
```
#cmd@58@
```

### Error Handling

The protocol includes comprehensive error handling:
- Invalid command responses
- Parameter validation
- System state checks
- Connection status verification
- Debug logging for troubleshooting
- Package sequence validation for large data transfers

This specification provides the complete command set for controlling and monitoring the Even Realities G1 smart glasses through the BLE interface, including all the dashboard, rendering, and AI features you mentioned. 