/*
 * Function: FUN_00086688
 * Entry:    00086688
 * Prototype: undefined FUN_00086688()
 */


undefined4 FUN_00086688(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return 0;
}


