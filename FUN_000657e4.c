/*
 * Function: FUN_000657e4
 * Entry:    000657e4
 * Prototype: undefined FUN_000657e4()
 */


undefined4 FUN_000657e4(uint param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_19 [5];
  
  uVar8 = FUN_00065434();
  if ((int)((ulonglong)uVar8 >> 0x20) == 0) {
LAB_00065840:
    if (param_3 != (byte *)0x0) {
      iVar4 = FUN_00065494(param_1);
      if (iVar4 == 0) goto LAB_000658ca;
      bVar3 = *param_3;
      iVar4 = (int)uVar8 + 8;
      iVar6 = (uint)bVar3 * 4;
      uVar7 = *(ushort *)((int)&DAT_20002bc0 + iVar4 * 2) & 0x1fdf;
      *(undefined4 *)(iVar6 + 0x5000d510) = 0;
      *(ushort *)((int)&DAT_20002bc0 + iVar4 * 2) = uVar7;
      *(undefined4 *)(iVar6 + 0x5000d510) = 0;
      bVar1 = param_3[1];
      if (bVar1 != 0) {
        bVar2 = param_3[2];
        *(uint *)(iVar6 + 0x5000d510) = *(uint *)(iVar6 + 0x5000d510) & 0xffecc0ff;
        *(uint *)(iVar6 + 0x5000d510) =
             (param_1 & 0x3f) << 8 | (bVar1 & 3) << 0x10 | *(uint *)(iVar6 + 0x5000d510) |
             (bVar2 & 1) << 0x14;
        *(ushort *)((int)&DAT_20002bc0 + iVar4 * 2) = uVar7 | (ushort)bVar3 << 0xd | 0x20;
      }
    }
    uVar5 = 0xbad0000;
  }
  else {
    iVar4 = FUN_00065494(param_1);
    if (((iVar4 != 0) || (iVar4 = FUN_00065460(param_1), iVar4 == 0)) &&
       ((uVar9 = FUN_00065478(param_1), iVar4 = (int)((ulonglong)uVar9 >> 0x20), (int)uVar9 == 0 ||
        (*(char *)(iVar4 + 1) != '\x01')))) {
      local_19[0] = 1;
      FUN_00085130(param_1,local_19,iVar4 + 1,iVar4 + 2,iVar4,0);
      iVar4 = (int)uVar8 + 8;
      *(ushort *)((int)&DAT_20002bc0 + iVar4 * 2) = *(ushort *)((int)&DAT_20002bc0 + iVar4 * 2) | 3;
      goto LAB_00065840;
    }
LAB_000658ca:
    uVar5 = 0xbad0004;
  }
  return uVar5;
}


