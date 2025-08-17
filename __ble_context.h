/*
 * BLE Context Structure
 * 
 * This struct maps the actual memory layout used by the firmware.
 * All offsets are derived from actual usage patterns in ble_work_thread.c
 * and other related functions.
 */

// Command table entry structure (each entry is 5 fields * 4 bytes = 20 bytes)
struct ble_command_entry {
    uint32_t pattern_data;      // Data pattern to match against incoming commands
    uint32_t command_id;        // Unique command identifier  
    void* handler_function;     // Function pointer to handle this command
    uint32_t context_data;      // Additional context data for the handler
    uint8_t processed_flag;     // Flag to prevent double-processing
};

// Connection state management structure
struct ble_connection_state {
    uint8_t unknown_0x00[0x8];  // 0x00-0x07: Unknown fields (8 bytes)
    uint32_t timeout_counter;    // 0x08-0x0b: Timeout counter (accessed as param_1 + 8)
    // Additional fields may exist beyond 0x0b
};

struct __ble_context {
    // 0x00-0x0f: Unknown fields (16 bytes)
    uint8_t unknown_0x00[0x10];          // 0x00-0x0f = 16 bytes
    
    // 0x10-0x13: TX buffer pointer (4 bytes)
    void* tx_buffer;                      // malloc'd buffer of size 0x2b8
    
    // 0x14-0x17: Unknown fields (4 bytes)
    uint8_t unknown_0x14[0x4];           // 0x14-0x17 = 4 bytes
    
    // 0x18: DMIC data byte (1 byte)
    uint8_t dmic_data;                    // 0x18 = 1 byte
    
    // 0x19-0x217: Unknown fields (511 bytes)
    uint8_t unknown_0x19[0x1ff];         // 0x19-0x217 = 511 bytes
    
    // 0x218-0x21b: Connection state management area (4 bytes)
    struct ble_connection_state* connection_state_area;  // Passed to manage_ble_connection_state_comprehensive
    
    // 0x21c-0x247: Unknown fields (44 bytes)
    uint8_t unknown_0x21c[0x2c];         // 0x21c-0x247 = 44 bytes
    
    // 0x248: Processing flag (1 byte)
    uint8_t processing_flag;              // 0x248 = 1 byte
    
    // 0x249-0x24f: Unknown fields (7 bytes)
    uint8_t unknown_0x249[0x7];          // 0x249-0x24f = 7 bytes
    
    // 0x250-0x253: Command table pointer (4 bytes)
    struct ble_command_entry* command_table;  // Array of command table entries
    
    // 0x254-0x257: Command buffer pointer (4 bytes)
    uint8_t* command_buffer;              // Current command buffer
    
    // 0x258-0x357: Unknown fields (256 bytes)
    uint8_t unknown_0x258[0x100];        // 0x258-0x357 = 256 bytes
    
    // 0x358-0x35b: Command parameter (4 bytes)
    uint32_t command_param;               // 0x358-0x35b = 4 bytes
    
    // 0x35c-0x35f: Command index (4 bytes)
    uint32_t command_index;               // 0x35c-0x35f = 4 bytes
    
    // 0x360-0x363: Command data (4 bytes)
    uint32_t command_data;                // 0x360-0x363 = 4 bytes
    
    // 0x364: Work mode flag (1 byte)
    uint8_t work_mode_flag;               // 0x364 = 1 byte
    
    // 0x365-0x5ff: Unknown fields (155 bytes)
    uint8_t unknown_0x365[0x9b];         // 0x365-0x5ff = 155 bytes
    
    // 0x600-0x6ff: Large buffer (256 bytes)
    uint8_t large_buffer[0x100];          // 0x600-0x6ff = 256 bytes
    
    // 0x700+: Additional fields extending beyond 0x700
    uint8_t extended_data[0x1000];       // At least 4096 bytes based on usage
};

/*
 * OFFSET VERIFICATION:
 * 
 * 0x00-0x0f: unknown_0x00[0x10] = 16 bytes
 * 0x10-0x13: tx_buffer (void*) = 4 bytes
 * 0x14-0x17: unknown_0x14[0x4] = 4 bytes
 * 0x18-0x18: dmic_data (uint8_t) = 1 byte
 * 0x19-0x217: unknown_0x19[0x1ff] = 511 bytes
 * 0x218-0x21b: connection_state_area (void*) = 4 bytes
 * 0x21c-0x247: unknown_0x21c[0x2c] = 44 bytes
 * 0x248-0x248: processing_flag (uint8_t) = 1 byte
 * 0x249-0x24f: unknown_0x249[0x7] = 7 bytes
 * 0x250-0x253: command_table (void**) = 4 bytes
 * 0x254-0x257: command_buffer (uint8_t*) = 4 bytes
 * 0x258-0x357: unknown_0x258[0x100] = 256 bytes
 * 0x358-0x35b: command_param (uint32_t) = 4 bytes
 * 0x35c-0x35f: command_index (uint32_t) = 4 bytes
 * 0x360-0x363: command_data (uint32_t) = 4 bytes
 * 0x364-0x364: work_mode_flag (uint8_t) = 1 byte
 * 0x365-0x5ff: unknown_0x365[0x9b] = 155 bytes
 * 0x600-0x6ff: large_buffer[0x100] = 256 bytes
 * 0x700+: extended_data[0x1000] = 4096+ bytes
 * 
 * Total: 16+4+4+1+511+4+44+1+7+4+4+256+4+4+4+1+155+256+4096 = 5888+ bytes
 */

/*
 * MEMORY MAP SUMMARY:
 * 
 * 0x000-0x00f: Unknown fields (16 bytes)
 * 0x010-0x013: TX buffer pointer (4 bytes)
 * 0x014-0x017: Unknown fields (4 bytes)
 * 0x018-0x018: DMIC data byte (1 byte)
 * 0x019-0x217: Unknown fields (511 bytes)
 * 0x218-0x21b: Connection state area (4 bytes) - struct ble_connection_state*
 * 0x21c-0x247: Unknown fields (44 bytes)
 * 0x248-0x248: Processing flag (1 byte)
 * 0x249-0x24f: Unknown fields (7 bytes)
 * 0x250-0x253: Command table pointer (4 bytes) - struct ble_command_entry*
 * 0x254-0x257: Command buffer pointer (4 bytes)
 * 0x258-0x357: Unknown fields (256 bytes)
 * 0x358-0x35b: Command parameter (4 bytes)
 * 0x35c-0x35f: Command index (4 bytes)
 * 0x360-0x363: Command data (4 bytes)
 * 0x364-0x364: Work mode flag (1 byte)
 * 0x365-0x5ff: Unknown fields (155 bytes)
 * 0x600-0x6ff: Large buffer (256 bytes)
 * 0x700+: Extended data (4096+ bytes)
 * 
 * Total size: At least 0x1700 (5888 bytes)
 * 
 * KNOWN FIELD USAGE:
 * - 0x10: TX buffer allocation -> ble_context->tx_buffer
 * - 0x18: DMIC data access -> ble_context->dmic_data
 * - 0x218: Connection state management -> ble_context->connection_state_area (ble_connection_state*)
 * - 0x248: Processing flag -> ble_context->processing_flag
 * - 0x250: Command table access -> ble_context->command_table (ble_command_entry*)
 * - 0x254: Command buffer pointer -> ble_context->command_buffer
 * - 0x358: Command parameter -> ble_context->command_param
 * - 0x35c: Command index -> ble_context->command_index
 * - 0x360: Command data -> ble_context->command_data
 * - 0x364: Work mode flag -> ble_context->work_mode_flag
 * - 0x600: Large buffer operations -> ble_context->large_buffer
 */
