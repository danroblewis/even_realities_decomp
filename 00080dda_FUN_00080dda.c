/*
 * Function: FUN_00080dda
 * Entry:    00080dda
 * Prototype: undefined FUN_00080dda()
 */


void FUN_00080dda(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 1;
  iVar1 = FUN_00055cb4(param_1 + 1,6);
  if (iVar1 == 0) {
    param_1[6] = param_1[6] | 0xc0;
  }
  return;
}


