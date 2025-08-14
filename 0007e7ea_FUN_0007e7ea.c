/*
 * Function: FUN_0007e7ea
 * Entry:    0007e7ea
 * Prototype: undefined FUN_0007e7ea()
 */


undefined4 FUN_0007e7ea(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  
  uVar1 = FUN_0007e776(param_1,*(undefined4 *)(param_1 + 4),param_2,8);
  iVar2 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8,uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar2;
  return extraout_r2;
}


