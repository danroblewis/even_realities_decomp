/*
 * Function: FUN_00030224
 * Entry:    00030224
 * Prototype: undefined FUN_00030224()
 */


int FUN_00030224(void)

{
  uint uVar1;
  undefined4 in_r3;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_0008a0a8;
  do {
    uVar1 = puVar2[1];
    if (*puVar2 != 0x4414) {
      FUN_00030178(*puVar2 & 0xffff);
      uVar1 = DAT_20007bc4;
    }
    DAT_20007bc4 = uVar1;
    iVar3 = iVar3 + 2;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0x58);
  iVar3 = FUN_00030178(0x4408,1);
  if (iVar3 == 0) {
    DAT_20007bc8 = 1;
    iVar3 = FUN_00030178(0x4414,DAT_20007bc4,1,&DAT_20007bc4,in_r3);
    if (iVar3 != 0) {
      iVar3 = 1;
    }
    iVar3 = -iVar3;
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}


