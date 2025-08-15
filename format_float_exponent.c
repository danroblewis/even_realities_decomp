/*
 * Function: format_float_exponent
 * Entry:    000875ae
 * Prototype: undefined format_float_exponent()
 */


int format_float_exponent(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) - iVar3;
  if (iVar1 == 0) {
    puVar4 = (uint *)(param_1 + 0x14U) + iVar3;
    puVar2 = (uint *)(param_2 + 0x14 + iVar3 * 4);
    do {
      puVar4 = puVar4 + -1;
      puVar2 = puVar2 + -1;
      if (*puVar4 != *puVar2) {
        if (*puVar4 < *puVar2) {
          return -1;
        }
        return 1;
      }
    } while ((uint *)(param_1 + 0x14U) < puVar4);
  }
  return iVar1;
}


