/*
 * Function: pack_multiple_parameters_and_call_callback
 * Entry:    00083de6
 * Prototype: undefined pack_multiple_parameters_and_call_callback(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5)
 */


void pack_multiple_parameters_and_call_callback
               (int param_1,undefined1 param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  undefined1 local_c [4];
  uint uStack_8;
  
  local_c = (undefined1  [4])((param_3 & 0xff) << 8);
  local_c[2] = param_4;
  local_c = (undefined1  [4])CONCAT13(param_5,(int3)CONCAT31((uint3)local_c._0_3_ >> 8,param_2));
  uStack_8 = param_3;
  call_callback_with_parameters(*(undefined4 *)(param_1 + 4),local_c,4,param_5,param_1);
  return;
}


