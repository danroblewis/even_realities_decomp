/*
 * Function: FUN_0006649c
 * Entry:    0006649c
 * Prototype: undefined FUN_0006649c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006649c(void)

{
  undefined **ppuVar1;
  
  if (DAT_2000b37c == 0) {
    ppuVar1 = &PTR_LAB_00050394_1_0000c350;
  }
  else {
    ppuVar1 = (undefined **)((uint)(DAT_2000b37c * 1000) / 10);
  }
  while ((_DAT_5002b100 == 0 && (DAT_2000b381 == '\0'))) {
    thunk_FUN_00086384(10);
    ppuVar1 = (undefined **)((int)ppuVar1 - 1);
    if (ppuVar1 == (undefined **)0x0) {
      return 0xbad0007;
    }
  }
  if (DAT_2000b381 != '\0') {
    return 0xbad0007;
  }
  return 0xbad0000;
}


