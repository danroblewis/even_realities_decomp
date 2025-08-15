/*
 * Function: FUN_0006567c
 * Entry:    0006567c
 * Prototype: undefined FUN_0006567c()
 */


int FUN_0006567c(uint param_1,uint param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint3 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_r2;
  undefined4 *puVar6;
  ushort uVar7;
  uint extraout_r3;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined4 uStack_1c;
  
  uVar3 = param_1;
  pbVar13 = param_3;
  uStack_1c = param_4;
  uVar12 = FUN_00065434();
  iVar9 = (int)((ulonglong)uVar12 >> 0x20);
  iVar4 = (int)uVar12;
  puVar6 = extraout_r2;
  uVar8 = extraout_r3;
  if (iVar9 == 0) {
LAB_000656ca:
    if (param_3 != (byte *)0x0) {
      uVar10 = (ushort)*param_3;
      uVar12 = FUN_00065494(param_1,*(undefined4 *)(param_3 + 4),puVar6,uVar8,uVar3,param_2);
      iVar9 = (int)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 == 0) {
        iVar11 = iVar4 + 8;
        uVar7 = *(ushort *)((int)&DAT_20002bc0 + iVar11 * 2) & 0x1fdf;
        *(ushort *)((int)&DAT_20002bc0 + iVar11 * 2) = uVar7;
        if (iVar9 != 0) {
          if (3 < uVar10) goto LAB_000656e2;
          bVar1 = **(byte **)(param_3 + 4);
          iVar9 = (uint)bVar1 * 4;
          if (uVar10 == 0) {
            *(undefined4 *)(iVar9 + 0x5000d510) = 0;
            *(undefined4 *)(iVar9 + 0x5000d510) = 0;
          }
          else {
            *(uint *)(iVar9 + 0x5000d510) = *(uint *)(iVar9 + 0x5000d510) & 0xfffffffc;
            *(uint *)(iVar9 + 0x5000d510) = *(uint *)(iVar9 + 0x5000d510) & 0xfffcc0ff;
            *(uint *)(iVar9 + 0x5000d510) =
                 (param_1 & 0x3f) << 8 | *(uint *)(iVar9 + 0x5000d510) | (uint)uVar10 << 0x10;
            *(ushort *)((int)&DAT_20002bc0 + iVar11 * 2) = uVar7 | (ushort)bVar1 << 0xd | 0x20;
          }
        }
      }
      else if (iVar9 != 0) goto LAB_000656e2;
      *(ushort *)((int)&DAT_20002bc0 + (iVar4 + 8) * 2) =
           *(ushort *)((int)&DAT_20002bc0 + (iVar4 + 8) * 2) & 0xffe3 | uVar10 << 2;
    }
    if (param_4 != (int *)0x0) {
      iVar11 = *param_4;
      iVar9 = param_4[1];
      FUN_00065504(param_1);
      if (iVar11 != 0) {
        if ((iVar11 == DAT_20002bc0) && (iVar9 == DAT_20002bc4)) {
          uVar8 = 0;
        }
        else {
          iVar5 = process_bit_flags_and_return_value(&DAT_20002c34,(int)&uStack_1c + 3);
          if (iVar5 != 0xbad0000) {
            return iVar5;
          }
          uVar8 = (uint)uStack_1c >> 0x18;
        }
        (&DAT_20002bc4)[uVar8 * 2] = iVar9;
        uVar10 = *(ushort *)((int)&DAT_20002bc0 + (iVar4 + 8) * 2);
        (&DAT_20002bc0)[uVar8 * 2] = iVar11;
        *(ushort *)((int)&DAT_20002bc0 + (iVar4 + 8) * 2) = uVar10 | (ushort)(uVar8 << 9) | 0x100;
      }
    }
    iVar4 = 0xbad0000;
  }
  else {
    uVar3 = FUN_0008511a(param_1);
    if (uVar3 == 0) {
      uVar2 = (uint3)uStack_1c;
      uStack_1c = (int *)(uint)(uVar2 & 0xffff);
      param_2 = uVar3;
      FUN_00085130(param_1,(int)&uStack_1c + 2,(int)&uStack_1c + 3,iVar9,0,0,pbVar13);
      puVar6 = &DAT_20002bc0;
      uVar8 = *(ushort *)((int)&DAT_20002bc0 + (iVar4 + 8) * 2) & 0xfffffffd | 1;
      *(short *)((int)&DAT_20002bc0 + (iVar4 + 8) * 2) = (short)uVar8;
      goto LAB_000656ca;
    }
LAB_000656e2:
    iVar4 = 0xbad0004;
  }
  return iVar4;
}


