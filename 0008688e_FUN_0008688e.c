/*
 * Function: FUN_0008688e
 * Entry:    0008688e
 * Prototype: undefined FUN_0008688e()
 */


void FUN_0008688e(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (param_1 != piVar1) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar1 = 0;
    piVar1[1] = 0;
    FUN_000867da();
    return;
  }
  return;
}


