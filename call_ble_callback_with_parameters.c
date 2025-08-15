/*
 * Function: call_ble_callback_with_parameters
 * Entry:    00083d80
 * Prototype: undefined call_ble_callback_with_parameters(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void call_ble_callback_with_parameters
               (int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  iVar1 = **(int **)(param_1 + 4);
  local_20 = 0;
  local_28 = &local_2c;
  local_18 = param_5;
  local_24 = 2;
  local_14 = 7;
  local_2c = param_2;
  local_2b = param_3;
  local_1c = param_4;
  (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,&local_28,2,(short)(*(int **)(param_1 + 4))[1]);
  return;
}


