/*
 * Function: compare_and_copy_ble_connection_data
 * Entry:    000831e2
 * Prototype: undefined compare_and_copy_ble_connection_data()
 */


void compare_and_copy_ble_connection_data(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1 + 0x90,*param_2,7);
  if (iVar1 == 0) {
    copy_ble_connection_data(param_1 + 0x90,param_2[1]);
    return;
  }
  return;
}


