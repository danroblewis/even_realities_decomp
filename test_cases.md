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
| `01 20 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Mid brightness, type 0 |
| `01 3F 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Max brightness, type 0 |
| `01 00 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Min brightness, type 0 |
| `01 20 01` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Mid brightness, type 1 |
| `01 20 02` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Mid brightness, type 2 |
| `01 40 00` | `01 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Beyond max (0x3F) |

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
| `35` | `35 c9 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00` | Get ESB channel information |
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
