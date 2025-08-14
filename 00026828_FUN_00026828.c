/*
 * Function: FUN_00026828
 * Entry:    00026828
 * Prototype: undefined FUN_00026828()
 */


float FUN_00026828(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_0007cab4();
  }
  return *(float *)(param_1 + 0x34) * 57.295 + 180.0;
}


