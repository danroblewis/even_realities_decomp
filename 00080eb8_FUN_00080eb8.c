/*
 * Function: FUN_00080eb8
 * Entry:    00080eb8
 * Prototype: undefined FUN_00080eb8()
 */


void FUN_00080eb8(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  param_3[1] = (char)((uint)param_1 >> 8);
  *param_3 = (char)param_1;
  param_3[3] = (char)((uint)param_1 >> 0x18);
  param_3[2] = 0;
  param_3[4] = 0;
  param_3[5] = (char)((uint)param_2 >> 8);
  param_3[6] = 0;
  param_3[7] = (char)((uint)param_2 >> 0x18);
  return;
}


