/*
 * Function: FUN_00081a4e
 * Entry:    00081a4e
 * Prototype: undefined FUN_00081a4e()
 */


void FUN_00081a4e(int param_1,uint param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x54);
      (piVar1 != (int *)0x0 && (*(ushort *)(piVar1 + 7) != param_2)); piVar1 = (int *)*piVar1) {
  }
  return;
}


