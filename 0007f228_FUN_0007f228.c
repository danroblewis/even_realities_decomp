/*
 * Function: FUN_0007f228
 * Entry:    0007f228
 * Prototype: undefined FUN_0007f228()
 */


uint FUN_0007f228(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  undefined1 auStack_74 [80];
  
  if (param_2 == 0) {
    return 0xffffffea;
  }
  bVar1 = param_3 == 0;
  bVar2 = param_4 == 0;
  bVar3 = bVar1 || bVar2;
  iVar10 = param_1 + 8;
  uVar7 = *(short *)(param_1 + 0x38) + 1;
  uVar9 = uVar7;
  do {
    while( true ) {
      uVar8 = uVar7;
      uVar7 = uVar8 - 1;
      if (uVar7 == 0x8000) {
        if (bVar1 || bVar2) {
          return 0;
        }
        bVar3 = true;
        uVar7 = uVar9;
        goto LAB_0007f2e2;
      }
      iVar4 = FUN_0007e9dc(iVar10,uVar7,auStack_74,0x4a);
      if (-1 < iVar4) break;
      if (iVar4 == -2) {
        uVar9 = uVar7;
      }
    }
    auStack_74[iVar4] = 0;
    iVar4 = FUN_0000eefe(param_2,auStack_74);
  } while (iVar4 != 0);
  if (bVar1 || bVar2) {
    if (*(ushort *)(param_1 + 0x38) == uVar7) {
      *(short *)(param_1 + 0x38) = uVar8 - 2;
      uVar5 = FUN_0004c8f8(iVar10,0x8000,(short *)(param_1 + 0x38),2);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = FUN_0007e9d4(iVar10,uVar7);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = FUN_0007e9d4(iVar10,uVar8 + 0x3fff);
  }
  else {
LAB_0007f2e2:
    if (uVar7 == 0xc000) {
      return 0xfffffff4;
    }
    iVar10 = param_1 + 8;
    uVar5 = FUN_0004c8f8(iVar10,uVar7 + 0x4000,param_3,param_4);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if (bVar3) {
      uVar6 = FUN_0000ef12(param_2);
      uVar5 = FUN_0004c8f8(iVar10,uVar7,param_2,uVar6);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    if (uVar7 <= *(ushort *)(param_1 + 0x38)) {
      return 0;
    }
    *(ushort *)(param_1 + 0x38) = uVar7;
    uVar5 = FUN_0004c8f8(iVar10,0x8000,(ushort *)(param_1 + 0x38),2);
  }
  return uVar5 & (int)uVar5 >> 0x1f;
}


