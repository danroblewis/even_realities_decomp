/*
 * Function: FUN_000864c2
 * Entry:    000864c2
 * Prototype: undefined FUN_000864c2()
 */


void FUN_000864c2(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


