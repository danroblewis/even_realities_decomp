/*
 * Function: configure_device
 * Entry:    0005fc7c
 * Prototype: undefined configure_device()
 */


undefined4 configure_device(int param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 local_80;
  char *local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_48;
  char *local_44;
  bool local_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  char *local_2c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  puVar12 = *(undefined4 **)(param_1 + 4);
  puVar7 = (uint *)param_2[4];
  if (*(char *)(iVar5 + 0x51) != '\0') {
    local_2c = "Cannot configure device while it is active";
    local_30 = 2;
    FUN_000837a2(&DAT_000881a0,0x1040,&local_30);
    return 0xfffffff0;
  }
  bVar4 = (byte)param_2[9];
  uVar8 = (uint)bVar4;
  if (uVar8 == 1) {
    param_2[7] = 0;
    param_2[8] = 0;
    *(byte *)((int)param_2 + 0x25) = bVar4;
    *(byte *)((int)param_2 + 0x27) = bVar4;
    uVar2 = 0;
    if (*(char *)((int)param_2 + 0x26) != '\x01') goto LAB_0005fcda;
LAB_0005fd14:
    uVar9 = param_2[5];
    if (((uVar9 != uVar2) && (uVar9 != 1)) || (param_2[6] != 0)) goto LAB_0005fcda;
    if ((*puVar7 == 0) || ((char)puVar7[1] == '\0')) {
      if (-1 < (int)((uint)*(byte *)(iVar5 + 0x50) << 0x1e)) {
        return 0;
      }
      FUN_000661dc();
      bVar4 = *(byte *)(iVar5 + 0x50) & 0xfd;
LAB_0005fd48:
      *(byte *)(iVar5 + 0x50) = bVar4;
      return 0;
    }
    if ((char)puVar7[1] == '\x10') {
      uStack_3c = puVar12[2];
      uStack_38 = puVar12[3];
      local_34 = puVar12[4];
      iVar10 = uVar9 - uVar2;
      if (iVar10 != 0) {
        iVar10 = 1;
      }
      local_30 = puVar12[5];
      uStack_3e = (undefined2)((uint)puVar12[1] >> 0x10);
      _local_40 = CONCAT11((char)iVar10,uVar8 == 1);
      local_2c = (char *)CONCAT31((int3)((uint)puVar12[6] >> 8),*(char *)(puVar12 + 8) == '\x02');
      local_60 = 32000000;
      if (*(char *)(puVar12 + 8) == '\x02') {
        local_60 = 0xbb8000;
      }
      local_70 = *param_2;
      uVar8 = 0xffffffff;
      pbVar11 = &DAT_000f5871;
      local_68 = 1;
      do {
        local_5c = (uint)*pbVar11;
        uVar6 = *puVar7;
        uVar2 = local_5c * uVar6;
        uVar2 = FUN_0000e244(uVar2 * 0x100000,uVar2 >> 0xc,local_60 + (uVar2 >> 1),0);
        uVar1 = (ulonglong)local_60 / (0x100000 / (ulonglong)uVar2);
        uVar9 = (uint)uVar1;
        if ((local_70 <= uVar9) && (uVar9 <= param_2[1])) {
          uVar3 = (uint)(uVar1 / local_5c);
          if (uVar3 < uVar6) {
            uVar6 = uVar6 - uVar3;
            if (uVar6 < uVar8) {
              local_30 = CONCAT13(pbVar11[1],(undefined3)local_30);
              goto LAB_0005fe2c;
            }
            if (uVar8 == 0) goto LAB_0005fe56;
          }
          else {
            uVar6 = uVar3 - uVar6;
            if (uVar6 < uVar8) {
              local_34 = uVar2 << 0xc;
              local_30 = CONCAT13(pbVar11[1],(undefined3)local_30);
              local_6c = uVar9;
              local_64 = uVar3;
              if (uVar6 == 0) goto LAB_0005fe56;
LAB_0005fe2c:
              local_34 = uVar2 << 0xc;
              uVar8 = uVar6;
              local_6c = uVar9;
              local_64 = uVar3;
            }
          }
        }
        pbVar11 = pbVar11 + 2;
        if (local_68 != 1) goto code_r0x0005fe3c;
        local_68 = 2;
      } while( true );
    }
    local_2c = "Only 16-bit samples are supported";
  }
  else {
    *(undefined1 *)((int)param_2 + 0x25) = 2;
    param_2[8] = 0;
    uVar2 = 0x10;
    *(undefined1 *)((int)param_2 + 0x27) = 1;
    param_2[7] = 0x10;
    if ((*(char *)((int)param_2 + 0x26) == '\x01') && (uVar8 - 1 < 2)) goto LAB_0005fd14;
LAB_0005fcda:
    local_2c = "Requested configuration is not supported";
  }
  puVar12 = &local_30;
  local_30 = 2;
LAB_0005fce6:
  FUN_000837a2(&DAT_000881a0,0x1040,puVar12);
  return 0xffffffea;
code_r0x0005fe3c:
  if (uVar8 != 0xffffffff) {
LAB_0005fe56:
    local_7c = "PDM clock frequency: %u, actual PCM rate: %u";
    local_78 = local_6c;
    local_74 = local_64;
    local_80 = 4;
    FUN_000837a2(&DAT_000881a0,0x20c0,&local_80);
    if ((int)((uint)*(byte *)(iVar5 + 0x50) << 0x1e) < 0) {
      FUN_000661dc();
      *(byte *)(iVar5 + 0x50) = *(byte *)(iVar5 + 0x50) & 0xfd;
    }
    local_78 = FUN_0006615c(&local_40,*puVar12);
    if (local_78 != 0xbad0000) {
      local_7c = "Failed to initialize PDM: 0x%08x";
      local_80 = 3;
      FUN_000837a2(&DAT_000881a0,0x1840,&local_80);
      return 0xfffffffb;
    }
    *(uint *)(iVar5 + 0x18) = (uint)*(ushort *)((int)puVar7 + 6);
    *(uint *)(iVar5 + 0x14) = puVar7[2];
    bVar4 = *(byte *)(puVar12 + 8);
    if (bVar4 != 0) {
      bVar4 = 1;
    }
    bVar4 = bVar4 | 2 | *(byte *)(iVar5 + 0x50) & 0xfc;
    goto LAB_0005fd48;
  }
  puVar12 = &local_48;
  local_44 = "Cannot find suitable PDM clock configuration.";
  local_48 = 2;
  goto LAB_0005fce6;
}


