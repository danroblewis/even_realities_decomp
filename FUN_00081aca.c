/*
 * Function: FUN_00081aca
 * Entry:    00081aca
 * Prototype: undefined FUN_00081aca()
 */


void FUN_00081aca(int param_1,uint param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x54);
      (piVar1 != (int *)0x0 && (*(ushort *)(piVar1 + 3) != param_2)); piVar1 = (int *)*piVar1) {
  }
  return;
}


