/*
 * Function: FUN_000852e6
 * Entry:    000852e6
 * Prototype: undefined FUN_000852e6()
 */


void FUN_000852e6(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  iVar1 = FUN_00066d1c(&local_c);
  *(int *)(iVar1 + 8) = 1 << (local_c & 0xff);
  return;
}


