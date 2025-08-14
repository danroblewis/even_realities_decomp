/*
 * Function: FUN_00082572
 * Entry:    00082572
 * Prototype: undefined FUN_00082572()
 */


void FUN_00082572(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0005858c();
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x30); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      FUN_00081e14(piVar2 + -0x1c,5);
    }
  }
  return;
}


