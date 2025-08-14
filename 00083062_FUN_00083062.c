/*
 * Function: FUN_00083062
 * Entry:    00083062
 * Prototype: undefined FUN_00083062()
 */


void FUN_00083062(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_2 + 6);
  return;
}


