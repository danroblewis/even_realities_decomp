/*
 * Function: FUN_000362e8
 * Entry:    000362e8
 * Prototype: undefined FUN_000362e8()
 */


undefined4 FUN_000362e8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort local_2a [3];
  
  param_1 = param_1 + 0x24;
  iVar2 = get_work_mode();
  uVar8 = *(uint *)(iVar2 + 0xef) % 0xe10;
  uVar6 = (*(uint *)(iVar2 + 0xef) / 0xe10) % 0x18;
  bVar1 = false;
  uVar7 = uVar8 % 0x3c;
  local_2a[0] = 0;
  if (uVar8 < 0x3c) {
    bVar1 = uVar6 == 0 && uVar7 == 0;
    if (uVar6 != 0 || uVar7 != 0) {
      uVar3 = 9;
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 9;
  }
  uVar3 = FUN_00047a4c(uVar3,0x120);
  iVar4 = 0xc;
  FUN_0007d4f8(param_1,uVar3,0xc,0x18,0xc,0xc);
  if (bVar1) {
    iVar4 = FUN_000478d8(&DAT_000a8d52,local_2a);
    for (iVar5 = 0; iVar5 < (int)(uint)local_2a[0]; iVar5 = iVar5 + 1) {
      uVar3 = find_chinese_bitmap_by_unicode(*(undefined2 *)(iVar4 + iVar5 * 2),0xc,0x24);
      FUN_0007d4f8(param_1,uVar3,0xc,0x24,iVar5 * 0xc + 0x20,8);
    }
  }
  else {
    if (uVar6 != 0) {
      uVar3 = FUN_0007d850(uVar6 / 10,0xf,0x24,0);
      FUN_0007d4f8(param_1,uVar3,0xf,0x24,0x20,0xc);
      uVar3 = FUN_0007d850(uVar6 % 10,0xf,0x24,0);
      FUN_0007d4f8(param_1,uVar3,0xf,0x24,0x2f,0xc);
      uVar3 = FUN_0007d850(10,0xf,0x24,0);
      FUN_0007d4f8(param_1,uVar3,0xf,0x24,0x3e,0xc);
      iVar4 = 0x39;
    }
    uVar3 = FUN_0007d850((uVar8 / 0x3c) / 10,0xf,0x24,0);
    FUN_0007d4f8(param_1,uVar3,0xf,0x24,iVar4 + 0x14,0xc);
    uVar3 = FUN_0007d850((uVar8 / 0x3c) % 10,0xf,0x24,0);
    FUN_0007d4f8(param_1,uVar3,0xf,0x24,iVar4 + 0x23,0xc);
    uVar3 = FUN_0007d850(10,0xf,0x24,0);
    FUN_0007d4f8(param_1,uVar3,0xf,0x24,iVar4 + 0x32,0xc);
    uVar3 = FUN_0007d850(uVar7 / 10,0xf,0x24,0);
    FUN_0007d4f8(param_1,uVar3,0xf,0x24,iVar4 + 0x41,0xc);
    uVar3 = FUN_0007d850(uVar7 % 10,0xf,0x24,0);
    FUN_0007d4f8(param_1,uVar3,0xf,0x24,iVar4 + 0x50,0xc);
  }
  if (*(byte *)(iVar2 + 0xf3) < 2) {
    FUN_0007d2d6(param_1,param_2,0,0,0);
  }
  else {
    uVar3 = FUN_00047a4c(0xc,0x120);
    FUN_0007d4f8(param_1,uVar3,0xc,0x18,0xe2,0x14);
    iVar2 = FUN_000478d8(&DAT_000a8d5d,local_2a);
    for (iVar4 = 0; iVar4 < (int)(uint)local_2a[0]; iVar4 = iVar4 + 1) {
      uVar3 = find_chinese_bitmap_by_unicode(*(undefined2 *)(iVar2 + iVar4 * 2),0xc,0x20);
      FUN_0007d4f8(param_1,uVar3,0xc,0x20,iVar4 * 0xc + 0xf4,8);
    }
  }
  return 0;
}


