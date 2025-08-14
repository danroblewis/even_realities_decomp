/*
 * Function: FUN_00080c7c
 * Entry:    00080c7c
 * Prototype: undefined FUN_00080c7c()
 */


uint FUN_00080c7c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    iVar2 = thunk_FUN_000823fa();
    uVar1 = iVar2 - 3U & 0xffff;
  }
  return uVar1;
}


