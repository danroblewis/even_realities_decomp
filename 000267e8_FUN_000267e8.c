/*
 * Function: FUN_000267e8
 * Entry:    000267e8
 * Prototype: undefined FUN_000267e8()
 */


float FUN_000267e8(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_0007cab4();
  }
  return *(float *)(param_1 + 0x2c) * 57.295;
}


