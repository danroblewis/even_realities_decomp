/*
 * Function: FUN_000850c8
 * Entry:    000850c8
 * Prototype: undefined FUN_000850c8()
 */


uint FUN_000850c8(uint param_1)

{
  if (param_1 != 0) {
    param_1 = (uint)(*(char *)(param_1 + 0xc) == ' ');
  }
  return param_1;
}


