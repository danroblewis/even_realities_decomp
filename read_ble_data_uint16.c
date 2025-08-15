/*
 * Function: read_ble_data_uint16
 * Entry:    00083718
 * Prototype: undefined read_ble_data_uint16()
 */


undefined2 read_ble_data_uint16(undefined4 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)*param_1;
  update_buffer_position_and_size(param_1,2);
  return uVar1;
}


