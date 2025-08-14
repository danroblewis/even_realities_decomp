/*
 * Function: FUN_0007ef6e
 * Entry:    0007ef6e
 * Prototype: undefined FUN_0007ef6e()
 */


uint FUN_0007ef6e(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    uVar1 = (uint)(*(int *)(uVar1 + 4) << 0x19) >> 0x1f;
  }
  return uVar1;
}


