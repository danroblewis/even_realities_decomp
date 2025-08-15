/*
 * Function: FUN_00083bf0
 * Entry:    00083bf0
 * Prototype: undefined FUN_00083bf0()
 */


int FUN_00083bf0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = FUN_00086406();
  if (iVar1 != 0) {
    return -0xb;
  }
  if (4 < param_2) {
    return -0x16;
  }
  uVar2 = 0;
  if (-1 < param_3 << 0xf) {
    if (param_3 << 0x15 < 0) {
      uVar2 = 6;
    }
    else if (param_3 << 0x14 < 0) {
      uVar2 = 7;
    }
    else if (param_3 << 0xc < 0) {
      uVar2 = 8;
    }
    else {
      if (-1 < param_3 << 0xe) goto LAB_00083c36;
      uVar2 = 9;
    }
  }
  iVar1 = FUN_00083dc8(*(undefined4 *)(iVar3 + 4),6,param_2,uVar2);
  if (iVar1 < 0) {
    return iVar1;
  }
LAB_00083c36:
  iVar1 = FUN_00083dc8(*(undefined4 *)(iVar3 + 4),6,param_2 + 0x14 & 0xff,
                       (uint)(param_3 << 0x1e) >> 0x1f);
  if ((((-1 < iVar1) &&
       (iVar1 = FUN_00083dc8(*(undefined4 *)(iVar3 + 4),6,param_2 + 10 & 0xff,
                             (uint)(param_3 << 0x1b) >> 0x1f), -1 < iVar1)) &&
      (iVar1 = FUN_00083dc8(*(undefined4 *)(iVar3 + 4),6,param_2 + 0xf & 0xff,
                            (uint)(param_3 << 0x1a) >> 0x1f), -1 < iVar1)) &&
     (iVar1 = FUN_00083dc8(*(undefined4 *)(iVar3 + 4),6,param_2 + 5 & 0xff,
                           (uint)(param_3 << 0x17) >> 0x1f), -1 < iVar1)) {
    iVar1 = FUN_00083dc8(*(undefined4 *)(iVar3 + 4),6,param_2 + 0x19 & 0xff,
                         (uint)(param_3 << 0x16) >> 0x1f);
    return iVar1;
  }
  return iVar1;
}


