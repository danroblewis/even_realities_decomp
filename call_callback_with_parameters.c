/*
 * Function: call_callback_with_parameters
 * Entry:    00083d60
 * Prototype: undefined call_callback_with_parameters()
 */


void call_callback_with_parameters
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  _local_c = CONCAT31((int3)((uint)param_4 >> 8),2);
  local_14 = param_2;
  uStack_10 = param_3;
  (**(code **)(*(int *)(*param_1 + 8) + 8))(*param_1,&local_14,1,(short)param_1[1],param_1);
  return;
}


