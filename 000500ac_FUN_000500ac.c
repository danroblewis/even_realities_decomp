/*
 * Function: FUN_000500ac
 * Entry:    000500ac
 * Prototype: undefined FUN_000500ac()
 */


void FUN_000500ac(char param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (-1 < (int)uVar1) {
    *(int *)((uVar1 >> 5) * 4 + -0x1fff1f00) = 1 << (uVar1 & 0x1f);
  }
  return;
}


