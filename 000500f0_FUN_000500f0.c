/*
 * Function: FUN_000500f0
 * Entry:    000500f0
 * Prototype: undefined FUN_000500f0()
 */


uint FUN_000500f0(uint param_1)

{
  return 1 << (param_1 & 0x1f) & *(uint *)((param_1 >> 5) * 4 + -0x1fff1f00);
}


