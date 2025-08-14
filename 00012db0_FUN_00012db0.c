/*
 * Function: FUN_00012db0
 * Entry:    00012db0
 * Prototype: undefined FUN_00012db0()
 */


int FUN_00012db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  ulonglong in_d0;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = CONCAT44(unaff_r9,unaff_r8);
  uVar13 = CONCAT44(param_2,param_1);
  uVar9 = (uint)(in_d0 >> 0x20);
  uVar5 = uVar9 & 0x7fffffff;
  iVar7 = (int)uVar9 >> 0x1f;
  if (uVar5 < 0x40862e42) {
    if (uVar5 < 0x3fd62e43) {
      if (uVar5 < 0x3e300000) {
        uVar12 = FUN_0000d58c();
        iVar7 = FUN_0000de18((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x3ff00000);
        if (iVar7 != 0) goto LAB_00012e04;
        iVar1 = 0;
        uVar12 = CONCAT44(unaff_r9,unaff_r8);
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      if (uVar5 < 0x3ff0a2b2) {
        iVar1 = iVar7 * 2 + 1;
        uVar12 = FUN_0000d588();
        uVar13 = *(undefined8 *)(&LAB_00088848 + iVar7 * -8);
      }
      else {
LAB_00012f2e:
        uVar12 = FUN_0000d8f8();
        FUN_0000d58c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),
                     *(undefined4 *)(&DAT_00088868 + iVar7 * -8),
                     *(undefined4 *)(&DAT_0008886c + iVar7 * -8));
        iVar1 = float_to_int();
        uVar13 = FUN_0000d824();
        uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
        FUN_0000d8f8((int)uVar13,uVar3,0xfee00000,0x3fe62e42);
        uVar12 = FUN_0000d588();
        uVar13 = FUN_0000d8f8((int)uVar13,uVar3,0x35793c76,0x3dea39ef);
      }
      in_d0 = FUN_0000d588((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                           (int)((ulonglong)uVar13 >> 0x20));
    }
    uVar10 = (undefined4)(in_d0 >> 0x20);
    uVar8 = (undefined4)in_d0;
    uVar11 = FUN_0000d8f8(uVar8,uVar10,uVar8,uVar10,uVar13,param_3,param_4);
    uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar3 = (undefined4)uVar11;
    uVar11 = FUN_0000d8f8(uVar3,uVar2,0x72bea4d0,0x3e663769);
    uVar11 = FUN_0000d588((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc5d26bf1,0x3ebbbd41);
    uVar11 = FUN_0000d8f8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar3,uVar2);
    uVar11 = FUN_0000d58c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xaf25de2c,0x3f11566a);
    uVar11 = FUN_0000d8f8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar3,uVar2);
    uVar11 = FUN_0000d588((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x16bebd93,0x3f66c16c);
    uVar11 = FUN_0000d8f8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar3,uVar2);
    uVar11 = FUN_0000d58c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x5555553e,0x3fc55555);
    uVar11 = FUN_0000d8f8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar3,uVar2);
    uVar11 = FUN_0000d588(uVar8,uVar10,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar3 = (undefined4)uVar11;
    uVar11 = FUN_0000d8f8(uVar8,uVar10,uVar3,uVar2);
    if (iVar1 == 0) {
      uVar12 = FUN_0000d588(uVar3,uVar2,0,0x40000000);
      uVar12 = float_multiply_64bit
                         ((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
      uVar12 = FUN_0000d588((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar8,uVar10);
      iVar7 = FUN_0000d588(0,0x3ff00000,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      return iVar7;
    }
    uVar14 = FUN_0000d588(0,0x40000000,uVar3,uVar2);
    uVar14 = float_multiply_64bit
                       ((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar14,
                        (int)((ulonglong)uVar14 >> 0x20));
    uVar14 = FUN_0000d588((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    uVar12 = FUN_0000d588((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    uVar12 = FUN_0000d588(0,0x3ff00000,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    iVar6 = (int)uVar12;
    if (-0x3fe < iVar1) {
      return iVar6;
    }
    iVar4 = (int)((ulonglong)uVar12 >> 0x20) + (iVar1 + 1000) * 0x100000;
    iVar7 = 0;
    iVar1 = 0x1700000;
LAB_00012e26:
    iVar7 = FUN_0000d8f8(iVar6,iVar4,iVar7,iVar1,uVar13,uVar11);
  }
  else {
    if (uVar5 < 0x7ff00000) {
      iVar1 = FUN_0000de18();
      uVar11 = CONCAT44(param_4,param_3);
      if (iVar1 != 0) {
        iVar6 = -0x77ff8a64;
        iVar4 = 0x7e37e43c;
        iVar7 = iVar6;
        iVar1 = iVar4;
        goto LAB_00012e26;
      }
      iVar1 = FUN_0000dddc();
      if (iVar1 == 0) goto LAB_00012f2e;
    }
    else {
      if ((in_d0 & 0xfffff00000000) != 0 || (int)in_d0 != 0) {
LAB_00012e04:
        iVar7 = FUN_0000d58c();
        return iVar7;
      }
      if (-1 < (longlong)in_d0) {
        return (int)in_d0;
      }
    }
    iVar7 = 0;
  }
  return iVar7;
}


