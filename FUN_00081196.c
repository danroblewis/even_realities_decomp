/*
 * Function: FUN_00081196
 * Entry:    00081196
 * Prototype: undefined FUN_00081196()
 */


void FUN_00081196(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_2 + 6);
  return;
}


