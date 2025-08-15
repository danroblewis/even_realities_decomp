/*
 * Function: FUN_00079760
 * Entry:    00079760
 * Prototype: undefined FUN_00079760()
 */


void FUN_00079760(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    FUN_000795b4("Can\'t initialize mutex, was NULL\r\n");
  }
  *param_1 = 0;
  param_1[1] = 0x3a00003a;
  return;
}


