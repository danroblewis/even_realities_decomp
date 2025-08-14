/*
 * Function: FUN_00065620
 * Entry:    00065620
 * Prototype: undefined FUN_00065620()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00065620(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    iVar1 = FUN_000655ec(uVar3 & 0xff);
    uVar2 = 1 << (iVar1 - 0x100U >> 2 & 0xff);
    if ((param_1 & uVar2) != 0) {
      if (*(int *)(iVar1 + 0x5000d000) != 0) {
        *(int *)(iVar1 + 0x5000d000) = 0;
        uVar4 = uVar4 | uVar2;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 8);
  if (_DAT_5000d17c != 0) {
    _DAT_5000d17c = 0;
    uVar4 = uVar4 | 0x80000000;
  }
  return uVar4;
}


