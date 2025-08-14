/*
 * Function: FUN_00069238
 * Entry:    00069238
 * Prototype: undefined FUN_00069238(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


undefined4
FUN_00069238(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int aiStack_1e0 [4];
  int aiStack_1d0 [2];
  undefined1 auStack_1c8 [4];
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined1 *local_1b8;
  uint local_1b4;
  undefined1 local_1ac;
  byte local_1ab;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [28];
  undefined1 auStack_184 [80];
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [28];
  uint local_10c;
  uint local_108;
  
  if (param_1 != (byte *)0x0) {
    if (param_5 - 0x14U < 0x17d) {
      iVar6 = (uint)param_1[1] * (*param_1 + 3) + *param_1 + 3;
      piVar7 = aiStack_1e0 + iVar6 * -10;
      (*(code *)(&PTR_LAB_00068cb8_1_0008bc88)[param_2])(param_1,param_3,param_4);
      uVar9 = (uint)param_1[1];
      iVar11 = *(int *)(param_1 + 0x4a0);
      iVar12 = uVar9 + 1;
      if (uVar9 == 4) {
        iVar12 = 6;
      }
      uVar8 = (uint)*param_1;
      bVar1 = param_1[2];
      *piVar7 = iVar11;
      local_1bc = *(int *)(param_1 + 0x4a8);
      iVar10 = *(int *)(param_1 + 0x4a4);
      local_1b4 = (uint)bVar1;
      uVar5 = FUN_000682f0(uVar8,(uint)bVar1,param_5,param_1 + 4);
      *piVar7 = (int)auStack_1a8;
      local_1b8 = auStack_1c8 + iVar6 * -0x28;
      local_1c4 = iVar12 * 10;
      local_1c0 = iVar12 * 5;
      local_1ab = FUN_0006ab80(uVar8,local_1b4,param_1 + 0x10,iVar11);
      iVar12 = local_1b4 + 1;
      if (local_1b4 == 4) {
        iVar12 = 6;
      }
      FUN_00086c44(iVar11 + local_1c0 * -4,iVar11 + ((uVar8 + 3) * iVar12 * 0x14 - local_1c4) * 2,
                   local_1c0 << 2);
      *piVar7 = local_1bc;
      uVar3 = local_1b4;
      aiStack_1e0[iVar6 * -10 + 1] = iVar10;
      FUN_0006b9b8(uVar8,uVar3,uVar9,iVar10);
      iVar11 = FUN_00068b68(uVar8,uVar9,iVar10,auStack_128);
      if (iVar11 != 0) {
        FUN_0006b364(auStack_1a8);
      }
      uVar4 = FUN_00068a10(uVar8,uVar9,auStack_128);
      aiStack_1e0[iVar6 * -10 + 1] = iVar10;
      aiStack_1e0[iVar6 * -10 + 2] = iVar10;
      local_1ac = uVar4;
      *piVar7 = (int)auStack_1a0;
      FUN_0006c778(uVar8,uVar9,auStack_128,uVar5);
      *piVar7 = (int)auStack_184;
      aiStack_1e0[iVar6 * -10 + 1] = iVar10;
      FUN_0006ffd8(uVar8,local_1ac,iVar11,param_5);
      aiStack_1e0[iVar6 * -10 + 2] = iVar10;
      aiStack_1e0[iVar6 * -10 + 3] = (int)local_1b8;
      *piVar7 = (int)auStack_184;
      *(undefined1 **)(auStack_1c8 + iVar6 * -0x28 + -8) = auStack_134;
      aiStack_1e0[iVar6 * -10 + 1] = (int)(param_1 + 0x498);
      FUN_0006f4a0(uVar8,uVar9,param_5,local_1ab);
      uVar4 = local_1ac;
      bVar1 = param_1[1];
      bVar2 = *param_1;
      iVar11 = *(int *)(param_1 + 0x4a4);
      FUN_000684a8(auStack_128,1,param_6,param_5);
      FUN_00068b2c(auStack_128,bVar1,uVar4);
      FUN_0006f91c(auStack_128,bVar2,bVar1,auStack_134);
      FUN_00070b38(auStack_128,auStack_184);
      if ((int)(local_108 + 1) < 0x21) {
        local_10c = local_10c | (uint)local_1ab << (local_108 & 0xff);
        local_108 = local_108 + 1;
      }
      else {
        FUN_00068908(auStack_128,(uint)local_1ab,1);
      }
      FUN_0006efdc(auStack_128,auStack_1a0);
      if (local_1ab != 0) {
        FUN_0006b378(auStack_128,auStack_1a8);
      }
      aiStack_1e0[iVar6 * -10 + 2] = (int)auStack_134;
      aiStack_1e0[iVar6 * -10 + 3] = iVar11;
      aiStack_1e0[iVar6 * -10 + 1] = (int)local_1b8;
      *piVar7 = param_5;
      FUN_0006f9c0(auStack_128,bVar2,bVar1,uVar4);
      FUN_000685f4(auStack_128);
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  return 0xffffffff;
}


