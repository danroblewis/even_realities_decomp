/*
 * Function: FUN_00080c06
 * Entry:    00080c06
 * Prototype: undefined FUN_00080c06()
 */


void FUN_00080c06(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}


