/*
 * Function: FUN_0007eb5c
 * Entry:    0007eb5c
 * Prototype: undefined FUN_0007eb5c()
 */


undefined4 FUN_0007eb5c(int param_1)

{
  undefined4 extraout_r1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x3b8) = **(undefined4 **)(param_1 + 4);
  init_mutex(iVar1 + 0x1b0);
  FUN_0007eb4e(iVar1 + 0x3bc,0);
  return extraout_r1;
}


