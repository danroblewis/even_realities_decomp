/*
 * Function: FUN_000579b4
 * Entry:    000579b4
 * Prototype: undefined FUN_000579b4()
 */


void FUN_000579b4(uint param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)DAT_2000ad2c; (piVar1 != (int *)0x0 && (*(ushort *)(piVar1 + -2) != param_1))
      ; piVar1 = (int *)*piVar1) {
  }
  return;
}


