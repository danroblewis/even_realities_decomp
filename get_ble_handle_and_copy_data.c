/*
 * Function: get_ble_handle_and_copy_data
 * Entry:    00082a1a
 * Prototype: undefined get_ble_handle_and_copy_data(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


void get_ble_handle_and_copy_data
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5)

{
  undefined2 local_12 [3];
  
  local_12[0] = get_ble_handle_0x341();
  safe_memory_copy_with_bounds_check(param_3,param_4,param_5,local_12,2);
  return;
}


