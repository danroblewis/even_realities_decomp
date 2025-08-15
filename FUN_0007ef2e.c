/*
 * Function: FUN_0007ef2e
 * Entry:    0007ef2e
 * Prototype: undefined FUN_0007ef2e()
 */


uint FUN_0007ef2e(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    uVar1 = *(uint *)(uVar1 + 4) & 1;
  }
  return uVar1;
}


