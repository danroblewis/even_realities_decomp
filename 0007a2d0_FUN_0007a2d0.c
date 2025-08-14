/*
 * Function: FUN_0007a2d0
 * Entry:    0007a2d0
 * Prototype: undefined FUN_0007a2d0()
 */


int FUN_0007a2d0(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a3dc(&DAT_20002f50);
  if (((iVar1 == 0) && (iVar1 = FUN_0007a3dc(&DAT_20002f4c), iVar1 == 0)) &&
     (iVar1 = FUN_0007a3dc(&DAT_20002f48), iVar1 == 0)) {
    DAT_20002f40 = &DAT_20002f48;
    iVar1 = FUN_0007a3dc(&DAT_20002f44);
    if (iVar1 == 0) {
      iVar1 = FUN_0007a360(0,0);
      if (iVar1 == 0) {
        FUN_0007a428();
      }
      return iVar1;
    }
  }
  return iVar1;
}


