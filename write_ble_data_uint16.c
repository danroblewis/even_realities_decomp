/*
 * Function: write_ble_data_uint16
 * Entry:    000836f8
 * Prototype: undefined write_ble_data_uint16()
 */


void write_ble_data_uint16(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)update_buffer_size_and_offset(param_1,2);
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)param_2 >> 8);
  return;
}


