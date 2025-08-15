# Memory Map for Even Realities G1 Smart Glasses Firmware

## Overview
This document describes the memory layout and addressing scheme used by the Even Realities G1 smart glasses firmware. The device uses a sophisticated memory management system with multiple memory regions for different purposes.

## Memory Architecture

### Memory Types
- **Flash Memory**: Persistent storage for firmware, bitmaps, and resources
- **SRAM**: Runtime memory for variables, buffers, and temporary data
- **Hardware Registers**: Memory-mapped I/O for hardware control
- **Framebuffer Memory**: Dedicated display memory for LCD rendering

## Flash Memory Layout

### Base Addresses
```
0x00000000 - 0x00FFFFFF: Bootloader and Firmware Code
0x140000   - 0x1FFFFF:   Bitmap Metadata and Index Tables
0x180000   - 0x1FFFFF:   Base Bitmap Storage
0x200000   - 0x2FFFFF:   Extended Bitmap Data
0x500000   - 0x5FFFFF:   Additional Resource Storage
0x520000   - 0x52FFFF:   Extended Resource Storage
0x403000   - 0x403FFF:   Quick Note Storage (0x1000 bytes)
0x4D58F8   - 0x4D58FF:   Resource Index Table
0x4F40B8   - 0x4F40BF:   Extended Resource Index
0x4DD104   - 0x4DD107:   Resource Metadata
0x9EBA14   - 0x9EBA17:   Resource Data Pointer
0xA40000   - 0xA4FFFF:   Resource Data Storage
0xA1BE90   - 0xA1BE93:   Resource Offset Table
0xA141BC   - 0xA141BF:   Resource Size Table
0xA145C0   - 0xA145C3:   Resource Validation
```

### Bitmap Storage Details
```
0x140000 + (bitmap_index * 4):     Bitmap metadata pointer
0x180000 + (bitmap_index * 0x3EBE): Bitmap data storage
0x200000 + (offset * 0x138):       Bitmap pixel data
0x200000 + (unicode * 4):          Chinese character bitmap metadata
```

## SRAM Memory Layout

### Base Addresses
```
0x20000000 - 0x2001FFFF: Main SRAM
0x2000B000 - 0x2000BFFF: BLE Connection Management
0x2000B098 - 0x2000B097: Device Address Table (0x20 per entry)
0x2000B154:              BLE Connection State Mutex
0x2000B17C:              BLE Connection State
0x2000B304:              Hardware Configuration
0x2000B304:              Interrupt Configuration (0x80000000)
0x2000B17C:              System State Flags
0x2000B17C:              Bad State Indicator (0xBAD0000)
0x2000B17C:              Bad State Code 2 (0xBAD0005)
```

### Memory Pools and Buffers
```
0x20002BD0 - 0x20002C2F: Hardware State Buffer (0x60 bytes)
0x20002C34:              Memory Initialization Flag
0x20002C38:              Hardware Initialization Flag
0x20003A7C - 0x20003AAF: BLE Memory Pool (0x34 bytes per entry)
0x2000FFA7 - 0x200100FE: Work Mode Buffer (0x158 bytes)
0x20018465 - 0x20018C64: Quick Note Buffer (0x800 bytes)
0x2001CE57 - 0x2001CF8E: Resource Data Buffer (0x138 bytes)
0x2001CF92 - 0x2001D091: Color Lookup Buffer
0x2001D142 - 0x2001D261: Bitmap Data Buffer (0x120 bytes)
0x2005314C - 0x2006FF5F: Heap Memory Pool
```

### Work Mode Structure
```
0x1000:                  Work Mode Base Address
0x1000 + 0xCC:          Work Mode Flags
0x1000 + 0x100C:        Work Mode Buffer Pointer
0x1000 + 0x1030:        Flash Read Function Pointer
0x1000 + 0x1034:        Flash Write Function Pointer
0x1000 + 0xEB4:         Framebuffer Address
0x1000 + 0xEB8:         LCD Refresh Address
0x1000 + 0xB90:         Bitmap Processing Buffer
```

## Framebuffer Memory

### Main Framebuffer
```
MAIN_FRAMEBUFFER:       640x200 pixel display buffer
                        - Resolution: 640x200 pixels
                        - Color Depth: 4-bit per pixel (16 colors)
                        - Format: 2 pixels per byte
                        - Total Size: 64,000 bytes (640 * 200 / 2)
                        - Address: Dynamic allocation from work mode
```

### Framebuffer Layout
```
Row 0:   [0x00][0x01][0x02]...[0x13F]  (320 bytes)
Row 1:   [0x140][0x141][0x142]...[0x27F] (320 bytes)
...
Row 199: [0x9E60][0x9E61][0x9E62]...[0x9F9F] (320 bytes)
```

## Hardware Register Memory

### Interrupt Configuration
```
0xE000E280:             Timer Interrupt Configuration
                         - Base Value: 0x200000
                         - Configurable timing intervals
```

### Device Configuration
```
0x5000D000 - 0x5000DFFF: Device Configuration Registers
0x5000D17C:              System Configuration Flag
0x5000D304:              Hardware State Register (0x80000000)
0x50039400:              Spin Lock Register
0x5000E518:              Device Property Register
```

## Memory Management Functions

### Allocation Functions
```
malloc_maybe():          Dynamic memory allocation
heap_allocate_memory():  Heap-based allocation
allocate_ble_memory_with_alignment_and_validation(): BLE-specific allocation
```

### Memory Operations
```
fill_memory_buffer():    Initialize memory with value
memcpy():               Memory copy operations
validate_range_bounds(): Memory range validation
write_device_memory_and_manage_states(): Write to device memory
read_device_memory_and_manage_states(): Read from device memory
```

## Resource Management System

### Resource Types
```
Type 0: Data structures (0x0000 - 0x2713)
Type 1: Dynamic data structures
Type 2: Static data structures  
Type 3: Extended data structures
Type 4: Bitmap resources (0x16 - 0x7D, 103 bitmaps)
Type 5: Dynamic bitmap resources
```

### Resource Storage
```
0x140000:               Resource metadata base
0x200000:               Resource data base
0x500000:               Extended resource storage
0x520000:               Additional resource storage
```

## BLE Memory Management

### Connection Contexts
```
0x2000B154:             BLE Connection State Mutex
0x2000B154:             Connection State Management
0x2000B154:             BLE Memory Pool Management
```

### BLE Buffers
```
0x2000FFA7:             Work Mode Command Buffer (0x158 bytes)
0x2000B154:             BLE Transaction Buffer
```

## Memory Protection and Validation

### Address Validation
```
validate_range_bounds(): Checks memory address validity
check_device_capabilities_and_state(): Validates device state
validate_address_and_perform_hardware_operations(): Hardware operation validation
```

### Memory Alignment
```
Word-aligned writes:    4-byte alignment required for device memory
Page-aligned operations: 0x1000 (4096) byte page boundaries
```

## Memory Initialization

### System Startup
```
initialize_hardware_state_and_memory_buffers(): Hardware initialization
initialize_memory_structure_with_allocation(): Memory structure setup
setup_memory_pools():   Memory pool initialization
```

### Buffer Initialization
```
fill_memory_buffer():   Zero-fill memory buffers
initialize_memory_buffer_structure(): Buffer structure setup
```

## Memory Usage Patterns

### Bitmap Processing
```
1. Load bitmap metadata from flash (0x140000 + offset)
2. Read bitmap data from storage (0x200000 + offset)
3. Process in temporary buffer (0x2001CE57)
4. Convert to 4-bit format
5. Render to framebuffer
6. Update LCD display
```

### Resource Management
```
1. Resource lookup by ID and type
2. Metadata retrieval from flash
3. Data loading from storage
4. Processing in memory buffers
5. Resource state management
```

## Memory Constraints

### Flash Memory
- **Total Size**: Approximately 16MB (0x1000000)
- **Bitmap Storage**: Up to 5 different bitmap indices
- **Resource Storage**: Extensive resource management system
- **Wear Leveling**: Flash operations managed through work mode

### SRAM Memory
- **Total Size**: Approximately 128KB (0x20000)
- **Heap Size**: Configurable heap pool
- **Buffer Management**: Multiple specialized buffers
- **Memory Protection**: Address validation and bounds checking

### Performance Considerations
- **Flash Access**: Cached through work mode buffers
- **Memory Alignment**: Word-aligned operations for performance
- **Buffer Reuse**: Efficient buffer management for BLE operations
- **DMA Operations**: Hardware-accelerated memory transfers

## Debugging and Development

### Memory Debugging
```
DEBUG_PRINT():           Memory operation logging
LOG_LEVEL:              Configurable logging levels
IS_DEBUG:               Debug mode flag
```

### Memory Validation
```
Memory bounds checking:  Range validation for all operations
Address validation:      Hardware address verification
State validation:       Device state verification
```

This memory map provides a comprehensive understanding of how the Even Realities G1 smart glasses firmware manages memory for various operations including bitmap storage, resource management, BLE communication, and display rendering.
