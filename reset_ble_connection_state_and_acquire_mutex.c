/*
 * Function: reset_ble_connection_state_and_acquire_mutex
 * Entry:    00083204
 * Prototype: undefined reset_ble_connection_state_and_acquire_mutex()
 */


void reset_ble_connection_state_and_acquire_mutex
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  acquire_mutex_with_priority_control(param_1 + 0x82,0,uVar1);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  set_bit_in_value(param_1,1,0,param_4);
  return;
}


