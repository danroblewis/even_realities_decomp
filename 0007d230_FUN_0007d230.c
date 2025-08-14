/*
 * Function: FUN_0007d230
 * Entry:    0007d230
 * Prototype: undefined FUN_0007d230()
 */


undefined4 FUN_0007d230(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  *(undefined4 *)(iVar1 + 0xd0) = param_1;
  return param_1;
}


