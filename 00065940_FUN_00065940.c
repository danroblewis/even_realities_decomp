/*
 * Function: FUN_00065940
 * Entry:    00065940
 * Prototype: undefined FUN_00065940()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00065940(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_20002c38 == '\0') {
    fill_memory_buffer(&DAT_20002bd0,0,0x60);
    uVar3 = 0;
    do {
      iVar1 = FUN_000655ec(uVar3 & 0xff);
      if (iVar1 - 0x100U >> 2 == 0x1f) {
        *(undefined4 *)(iVar1 + 0x5000d000) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 8);
    _DAT_5000d17c = 0;
    FUN_000500ac(0xd);
    _DAT_5000d304 = 0x80000000;
    uVar2 = 0xbad0000;
    DAT_20002c38 = '\x01';
    DAT_20002c34 = 1;
  }
  else {
    uVar2 = 0xbad0005;
  }
  return uVar2;
}


