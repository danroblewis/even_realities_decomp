/*
 * Function: FUN_00086668
 * Entry:    00086668
 * Prototype: undefined FUN_00086668()
 */


undefined4 FUN_00086668(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = 0;
  while ((piVar2 = (int *)*param_1, param_1 != piVar2 && (piVar2 != (int *)0x0))) {
    FUN_000742b4(piVar2);
    FUN_000738d4(piVar2);
    uVar1 = 1;
  }
  return uVar1;
}


