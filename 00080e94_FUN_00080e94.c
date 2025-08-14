/*
 * Function: FUN_00080e94
 * Entry:    00080e94
 * Prototype: undefined FUN_00080e94()
 */


void FUN_00080e94(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_2 + 6);
  return;
}


