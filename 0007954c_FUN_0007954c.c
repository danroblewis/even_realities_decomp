/*
 * Function: FUN_0007954c
 * Entry:    0007954c
 * Prototype: undefined FUN_0007954c()
 */


undefined4 FUN_0007954c(void)

{
  int iVar1;
  
  if ((DAT_2000cc2c == 0) || (DAT_2000cc28 == 0)) {
    iVar1 = FUN_0007a218();
    if (iVar1 != 0) {
      if (7 < iVar1 - 1U) {
        return 0xffff8ffe;
      }
      return *(undefined4 *)(&DAT_00098780 + (iVar1 - 1U) * 4);
    }
    DAT_2000cc28 = 1;
  }
  DAT_2000cc2c = 1;
  return 0;
}


