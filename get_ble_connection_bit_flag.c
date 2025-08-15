/*
 * Function: get_ble_connection_bit_flag
 * Entry:    00082594
 * Prototype: undefined get_ble_connection_bit_flag()
 */


uint get_ble_connection_bit_flag
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = find_ble_connection_by_handle(param_1,4,param_3,param_4,param_4);
  if (uVar1 != 0) {
    uVar1 = (uint)(*(int *)(uVar1 + 0x118) << 0x1a) >> 0x1f;
  }
  return uVar1;
}


