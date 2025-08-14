/*
 * Function: FUN_00055e1c
 * Entry:    00055e1c
 * Prototype: undefined FUN_00055e1c()
 */


void FUN_00055e1c(void)

{
  int *piVar1;
  
  DAT_200020d4 = DAT_200020d4 & 0xffffffdf;
  for (piVar1 = (int *)DAT_2000ac74; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if ((code *)piVar1[-1] != (code *)0x0) {
      (*(code *)piVar1[-1])(0);
    }
  }
  DAT_2000ac74 = 0;
  DAT_2000ac78 = 0;
  return;
}


