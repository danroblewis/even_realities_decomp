/*
 * Function: FUN_00084d64
 * Entry:    00084d64
 * Prototype: undefined FUN_00084d64()
 */


int FUN_00084d64(int param_1)

{
  return (*(int *)(param_1 + 8) - 0x18U & 0xfffffff8) - 0x10;
}


