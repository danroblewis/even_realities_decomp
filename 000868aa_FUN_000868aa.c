/*
 * Function: FUN_000868aa
 * Entry:    000868aa
 * Prototype: undefined FUN_000868aa()
 */


void FUN_000868aa(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


