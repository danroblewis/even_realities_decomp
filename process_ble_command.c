#include <stdint.h>
#include "__ble_context.h"

/*
 * Function: process_ble_command
 * Entry:    00021d78
 * Prototype: void process_ble_command(struct ble_command_entry* command_data, uint32_t command_context, int enable_logging)
 * 
 * Processes BLE commands with optional logging and post-request handling.
 * 
 * Args:
 *   command_data: Command entry struct (primary) or buffer pointer (fallback)
 *   command_context: Command data or buffer size
 *   enable_logging: Non-zero to enable debug logging
 */


void process_ble_command(struct ble_command_entry* command_data, uint32_t command_context, int enable_logging)

{
  int command_result;
  
  if (enable_logging != 0) {
    dump_hex_data("BLE-rec", command_data, command_context);
  }
  
  command_result = spec_ble_command_hook(command_data, command_context);
  if (command_result != 0) {
    process_ble_post_request(command_data, command_context);
    return;
  }
  return;
}


