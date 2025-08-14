/*
 * Function: FUN_00030288
 * Entry:    00030288
 * Prototype: undefined FUN_00030288()
 */


int FUN_00030288(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00030178(0xff20,0x3c00f091);
  if ((iVar1 == 0) && (iVar1 = FUN_00030178(0x4820,6), iVar1 == 0)) {
    iVar1 = 0;
    if (param_1 == 0) {
      iVar1 = FUN_00030178(0x4794,0x5a637955);
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      iVar1 = -iVar1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


