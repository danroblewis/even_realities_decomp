/*
 * Function: FUN_00086726
 * Entry:    00086726
 * Prototype: undefined FUN_00086726()
 */


void FUN_00086726(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[6] = param_1 + 6;
  param_1[7] = param_1 + 6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


