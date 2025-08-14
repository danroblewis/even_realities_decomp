/*
 * Function: FUN_00026808
 * Entry:    00026808
 * Prototype: undefined FUN_00026808()
 */


float FUN_00026808(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_0007cab4();
  }
  return *(float *)(param_1 + 0x30) * 57.295;
}


