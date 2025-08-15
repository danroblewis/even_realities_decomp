/*
 * Function: FUN_00081bac
 * Entry:    00081bac
 * Prototype: undefined FUN_00081bac()
 */


void FUN_00081bac(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *param_1 = iVar2;
    if (piVar1 == (int *)param_1[1]) {
      param_1[1] = iVar2;
    }
  }
  return;
}


