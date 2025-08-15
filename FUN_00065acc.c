/*
 * Function: FUN_00065acc
 * Entry:    00065acc
 * Prototype: undefined FUN_00065acc()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065acc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00065460();
  if ((iVar1 != 0) && (iVar1 = FUN_00065494(param_1), iVar1 == 0)) {
    uVar2 = FUN_000654ac(param_1);
    _DAT_5000d308 = 1 << (uVar2 & 0xff);
    iVar1 = (short)uVar2 * 4;
    *(uint *)(iVar1 + 0x5000d510) = *(uint *)(iVar1 + 0x5000d510) & 0xfffffffc;
    return;
  }
  FUN_000851ca(param_1,0);
  return;
}


