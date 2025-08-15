/*
 * Function: FUN_00085020
 * Entry:    00085020
 * Prototype: undefined FUN_00085020()
 */


int FUN_00085020(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    param_1 = 0;
    for (piVar1 = (int *)*piVar1; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}


