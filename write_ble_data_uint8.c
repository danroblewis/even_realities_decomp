/*
 * Function: write_ble_data_uint8
 * Entry:    0008370a
 * Prototype: undefined write_ble_data_uint8()
 */


void write_ble_data_uint8(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)update_buffer_size_and_offset(param_1,1);
  *puVar1 = param_2;
  return;
}


