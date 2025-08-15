/*
 * Function: FUN_00072040
 * Entry:    00072040
 * Prototype: undefined FUN_00072040()
 */


int FUN_00072040(uint *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = (*param_1 & 3) - (uint)DAT_2000b458;
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 1;
}


