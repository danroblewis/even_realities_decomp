/*
 * Function: FUN_0007a218
 * Entry:    0007a218
 * Prototype: undefined FUN_0007a218()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007a218(void)

{
  int iVar1;
  undefined1 auStack_14 [8];
  
  iVar1 = FUN_0007a28c();
  if (iVar1 != 0) {
    FUN_0007a32c();
    return 3;
  }
  iVar1 = FUN_0007a2d0();
  if (iVar1 != 0) {
    return 4;
  }
  _DAT_50845a0c = iVar1;
  iVar1 = FUN_0007a16c();
  if (iVar1 == 0) {
    if (DAT_2000d340 != 0) {
      return 0;
    }
    iVar1 = FUN_00079608(0,0,0);
    if ((iVar1 == 0) && (iVar1 = FUN_00079668(0,&DAT_2000d344,0x68,auStack_14), iVar1 == 0)) {
      DAT_2000d340 = 0x5a5aea5a;
      return 0;
    }
  }
  return 5;
}


