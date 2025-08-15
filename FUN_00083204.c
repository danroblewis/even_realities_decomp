/*
 * Function: FUN_00083204
 * Entry:    00083204
 * Prototype: undefined FUN_00083204()
 */


void FUN_00083204(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  acquire_mutex_with_priority_control(param_1 + 0x82,0,uVar1);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  FUN_00083090(param_1,1,0,param_4);
  return;
}


