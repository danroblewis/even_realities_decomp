/*
 * Function: decrement_reference_count
 * Entry:    0004b048
 * Prototype: undefined decrement_reference_count()
 */


void decrement_reference_count(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(&DAT_20002550 + param_1 * 0x28);
  do {
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      return;
    }
  } while (*piVar2 != iVar1);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    *(undefined4 *)(&DAT_20002548 + param_1 * 0x28) = 0;
    *(undefined4 *)(&DAT_2000254c + param_1 * 0x28) = 0;
  }
  return;
}


