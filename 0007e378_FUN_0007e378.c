/*
 * Function: FUN_0007e378
 * Entry:    0007e378
 * Prototype: undefined FUN_0007e378()
 */


void FUN_0007e378(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0007e35c(param_1,*(undefined4 *)(param_1 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
  return;
}


