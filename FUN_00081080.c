/*
 * Function: FUN_00081080
 * Entry:    00081080
 * Prototype: undefined FUN_00081080()
 */


void FUN_00081080(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 & 0xffff7fff;
  if (-1 < (int)(uVar1 << 0x10)) {
    return;
  }
  FUN_000812d2(param_1,1);
  return;
}


