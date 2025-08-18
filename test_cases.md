# Test Cases

## Brightness Commands

### GET Commands (0x29)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `29` | `29 65 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get current brightness |
| `29 20 00` | `29 65 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Mid brightness, type 0 |
| `29 3F 00` | `29 65 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Max brightness, type 0 |
| `29 00 00` | `29 65 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Min brightness, type 0 |
| `29 20 01` | `29 65 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Mid brightness, type 1 |
| `29 20 02` | `29 65 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Mid brightness, type 2 |

### PUT Commands (0x01)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `01 20 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set mid brightness, type 0 |
| `01 3F 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set max brightness, type 0 |
| `01 00 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set min brightness, type 0 |
| `01 20 01` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set mid brightness, type 1 |
| `01 20 02` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set mid brightness, type 2 |

## Anti-Shake Commands

### GET Commands (0x2A)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `2A` | `2A 68 [current_state] 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get current anti-shake state |

### PUT Commands (0x02)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `02 00` | `02 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Disable anti-shake |
| `02 01` | `02 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Enable anti-shake |
| `02 FF` | `02 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set anti-shake to 0xFF |

## Display Mode Commands

### GET Commands (0x2B)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `2B` | `2B 69 [current_mode] [system_status] 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get current display mode |

### PUT Commands (0x03) - Functional Modes
| Command | Expected Response | Visual Effect | Behavior |
|---------|------------------|---------------|----------|
| `03 0A 00` | `03 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Sun icon + "Activated" | Enables dashboard with head tilt |
| `03 0B 00` | `03 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Dashboard stays visible | Persistent dashboard mode |
| `03 0C 00` | `03 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Moon icon + "Silent" | Disables dashboard with head tilt |

## Serial Number Commands

### Device Serial Number Commands (0x0D/0x2D)

#### GET Commands (0x2D)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `2D` | `2D 67 [12_bytes_of_data] 00 00 00 00 00 00` | Get device info (MAC addresses, serial data) |

#### PUT Commands (0x0D)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `0D 01 04 54 65 73 74` | `0D CB 01 04 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set device serial "Test" (returns continuation code) |
| `0D 01 08 54 65 73 74 53 4E` | `0D CB 01 08 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set device serial "TestSN" (returns continuation code) |

### Glasses Serial Number Commands (0x0E/0x33)

#### GET Commands (0x33)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `33` | `33 33 [serial_string] [suffix] 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get glasses serial number |

#### PUT Commands (0x0E)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `0E 01 08 54 65 73 74 47 53 4E` | `0E C9 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set glasses serial "TestGSN" |
| `0E 01 0C 4E 65 77 47 6C 61 73 73 53 4E` | `0E C9 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set glasses serial "NewGlassSN" |
| `0E 01 0C 47 31 52 31 46 45 45 30 39 35 38` | `0E C9 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Restore original glasses serial "G1R1FEE0958" |

## Device Info Commands (0x0C/0x2C)

### GET Commands (0x2C)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `2C` | `2C 66 [11_bytes_of_device_info] 00 00 00 00 00 00 00` | Get device info (default info_type) |
| `2C 00` | `2C 66 [11_bytes_of_device_info] 00 00 00 00 00 00 00` | Get device info (info_type 0x00) |
| `2C 01` | `2C 66 [11_bytes_of_device_info] 00 00 00 00 00 00 00` | Get device info (info_type 0x01) |

### PUT Commands (0x0C)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `0C 01 00` | `0C CA 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set device info (returns error - PUT not functional) |
| `0C 02 00` | `0C CA 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Set device info (returns error - PUT not functional) |

### Device Variant Detection
| Info Type | Response Pattern | Device Variant | Notes |
|-----------|------------------|----------------|-------|
| `2C 00` | `25 28 b5 81 24 01 06 02 01 06 02` | **G1B** | Standard device info |
| `2C 02` | `25 28 b5 9e 24 01 06 02 01 06 02` | **G1B** | Alternative configuration |
| `2C 05` | `25 28 b5 87 24 01 06 02 01 06 02` | **G1B** | Different revision |
| `2C 0A` | `25 28 b4 81 24 01 06 02 01 06 02` | **G1A** | Alternative device type |
| `2C 1A` | `25 28 b4 81 24 01 06 02 01 06 02` | **G1A** | Alternative device type |
| `2C 0D` | `25 28 b5 84 24 01 06 02 01 06 02` | **G1B** | Special configuration |
| `2C 10` | `25 28 b5 82 24 01 06 02 01 06 02` | **G1B** | Enhanced features |
| `2C 13` | `25 28 b4 83 24 01 06 02 01 06 02` | **G1A** | Advanced configuration |
| `2C 15` | `25 28 b4 83 24 01 06 02 01 06 02` | **G1A** | Advanced configuration |
| `2C 16` | `25 28 b4 83 24 01 06 02 01 06 02` | **G1A** | Advanced configuration |
| `2C 17` | `25 28 b5 bd 24 01 06 02 01 06 02` | **G1B** | High-performance mode |
| `2C 2D` | `25 28 b5 bd 24 01 06 02 01 06 02` | **G1B** | High-performance mode |
| `2C 32` | `25 28 b5 8a 24 01 06 02 01 06 02` | **G1B** | Special variants |
| `2C 33` | `25 28 b5 8a 24 01 06 02 01 06 02` | **G1B** | Special variants |
| `2C 34` | `25 28 b5 80 24 01 06 02 01 06 02` | **G1B** | Minimal configuration |
| `2C 39` | `25 28 b5 80 24 01 06 02 01 06 02` | **G1B** | Minimal configuration |

### Device Variant Summary
- **G1B Variant (b5 = 181)**: Enhanced/Standard G1 glasses - Most common responses
- **G1A Variant (b4 = 180)**: Alternative/Base G1 glasses - Limited responses (0x0A, 0x1A, 0x13, 0x15, 0x16)

## File Management Commands

### PUT Commands (0x15)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `15 01` | `15 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Enqueue file with sequence 1 |
| `15 02` | `15 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Enqueue file with sequence 2 |
| `15 00` | `15 ca 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Wrong sequence (error 0xCA) |
| `15 FF` | `15 ca 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Wrong sequence (error 0xCA) |

## ESB Channel Commands

### GET Commands (0x35)
| Command | Expected Response | Notes |
|---------|------------------|-------|
| `35` | `35 c9 [data] 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get ESB channel information |
| `35 01` | `35 c9 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get ESB channel with length 1 |
| `35 02` | `35 c9 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get ESB channel with length 2 |

## Response Patterns

| Command Type | Pattern | Status Code |
|--------------|---------|-------------|
| GET (0x29) | `29 65 [variable] 00...` | 0x65 (acknowledgment) |
| PUT (0x01) | `01 c9 00 00...` | 0xC9 (success) |
| GET (0x35) | `35 c9 00 00...` | 0xC9 (success) |
| PUT (0x15) | `15 c9 00 00...` | 0xC9 (success) |
| PUT (0x15) Error | `15 ca 01 00...` | 0xCA (sequence error) |

## Brightness Types
- **Type 0**: User Preference (manual setting)
- **Type 1**: Sensor Controlled (auto-brightness)  
- **Type 2**: Environment Optimized (low-light)

## File Management Features
- **Sequence Counting**: Commands track packet sequence numbers
- **Error Handling**: Returns 0xCA for wrong sequence numbers
- **File Enqueuing**: PUT command handles file operations with sequence validation

## ESB Channel Features
- **Radio Communication**: ESB (Enhanced ShockBurst) is a Nordic Semiconductor radio protocol
- **Channel Information**: GET command retrieves current ESB channel configuration
- **SPI Interface**: Uses SPI master transaction to communicate with radio hardware
