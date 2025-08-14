/*
 * Function: FUN_0007d1d6
 * Entry:    0007d1d6
 * Prototype: undefined FUN_0007d1d6()
 */


void FUN_0007d1d6(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xff4) + 0x164);
  if (iVar1 != 0) {
    **(int **)(param_1 + 0xfec) = iVar1;
  }
  update_timer_interval(param_2,0);
  if (*(int *)(*(int *)(param_1 + 0xff4) + 0x164) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xff4) + 0x164) = **(undefined4 **)(param_1 + 0xfec);
  }
  DAT_2007fc00 = **(undefined4 **)(param_1 + 0xfec);
  return;
}


