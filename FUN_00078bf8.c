/*
 * Function: FUN_00078bf8
 * Entry:    00078bf8
 * Prototype: undefined FUN_00078bf8()
 */


uint FUN_00078bf8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_d0;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)in_d0 >> 0x20);
  iVar2 = (uStack_4 & 0x7ff00000) + 0xfcc00000;
  if ((iVar2 < 1) && (iVar2 = -iVar2, uVar1 = iVar2 >> 0x14, 0x13fffff < iVar2)) {
    uVar3 = uVar1 - 0x14;
    iVar2 = uVar1 - 0x32;
    if ((int)uVar3 < 0x1f) {
      uVar1 = 0x80000000;
    }
    if (uVar3 == 0x1e || iVar2 < 0 != SBORROW4(uVar3,0x1e)) {
      uVar1 = uVar1 >> (uVar3 & 0xff);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


