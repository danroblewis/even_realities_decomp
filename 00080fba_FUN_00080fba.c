/*
 * Function: FUN_00080fba
 * Entry:    00080fba
 * Prototype: undefined FUN_00080fba()
 */


void FUN_00080fba(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}


