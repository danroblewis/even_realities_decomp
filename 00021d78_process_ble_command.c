/*
 * Function: process_ble_command
 * Entry:    00021d78
 * Prototype: undefined __stdcall process_ble_command(undefined4 command_data, undefined4 command_context, undefined4 enable_logging)
 */


void process_ble_command(undefined4 command_data,undefined4 command_context,int enable_logging)

{
  int iVar1;
  
  if (enable_logging != 0) {
    dump_hex_data("BLE-rec",command_data,command_context);
  }
  iVar1 = spec_ble_command_hook(command_data,command_context);
  if (iVar1 != 0) {
    process_ble_post_request(command_data,command_context);
    return;
  }
  return;
}


