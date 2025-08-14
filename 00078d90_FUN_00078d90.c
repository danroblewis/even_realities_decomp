/*
 * Function: FUN_00078d90
 * Entry:    00078d90
 * Prototype: undefined FUN_00078d90()
 */


/* WARNING: Removing unreachable block (ram,0x00078ef8) */

int FUN_00078d90(undefined4 *param_1,int *param_2,byte *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *local_8c;
  uint local_88;
  uint local_84;
  undefined4 uStack_80;
  uint local_7c;
  int local_74;
  byte local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_45;
  undefined4 local_30;
  
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar1 = FUN_00076e20(param_1,0x40);
    *param_2 = iVar1;
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar7 = param_3;
  local_8c = param_4;
LAB_00078de4:
  pbVar6 = pbVar7;
  if (*pbVar6 != 0) goto code_r0x00078dec;
  goto LAB_00078df0;
code_r0x00078dec:
  pbVar7 = pbVar6 + 1;
  if (*pbVar6 == 0x25) {
LAB_00078df0:
    iVar1 = (int)pbVar6 - (int)param_3;
    if (iVar1 != 0) {
      iVar2 = FUN_00087736(param_1,param_2,param_3,iVar1);
      if (iVar2 == -1) {
LAB_00078f56:
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
          return -1;
        }
        return local_74;
      }
      local_74 = local_74 + iVar1;
    }
    if (*pbVar6 == 0) goto LAB_00078f56;
    local_88 = 0;
    local_7c = 0;
    local_45 = 0;
    local_30 = 0;
    local_84 = 0xffffffff;
    uStack_80 = 0;
    pbVar7 = pbVar6 + 1;
    while( true ) {
      pbVar6 = pbVar7 + 1;
      iVar1 = FUN_00086bc8("#-0+ ",*pbVar7,5);
      if (iVar1 == 0) break;
      local_88 = 1 << (iVar1 - 0xf8b6bU & 0xff) | local_88;
      pbVar7 = pbVar6;
    }
    if ((int)(local_88 << 0x1b) < 0) {
      local_45 = 0x20;
    }
    if ((int)(local_88 << 0x1c) < 0) {
      local_45 = 0x2b;
    }
    if (*pbVar7 == 0x2a) {
      puVar3 = local_8c + 1;
      local_7c = *local_8c;
      local_8c = puVar3;
      if ((int)local_7c < 0) {
        local_7c = -local_7c;
        local_88 = local_88 | 2;
      }
    }
    else {
      bVar4 = false;
      uVar5 = local_7c;
      pbVar6 = pbVar7;
      while( true ) {
        if (9 < *pbVar6 - 0x30) break;
        uVar5 = uVar5 * 10 + (*pbVar6 - 0x30);
        bVar4 = true;
        pbVar6 = pbVar6 + 1;
      }
      if (bVar4) {
        local_7c = uVar5;
      }
    }
    if (*pbVar6 == 0x2e) {
      if (pbVar6[1] == 0x2a) {
        pbVar6 = pbVar6 + 2;
        uVar5 = *local_8c;
        local_8c = local_8c + 1;
        local_84 = uVar5 | (int)uVar5 >> 0x1f;
      }
      else {
        bVar4 = false;
        uVar5 = 0;
        local_84 = 0;
        while( true ) {
          pbVar6 = pbVar6 + 1;
          if (9 < *pbVar6 - 0x30) break;
          uVar5 = uVar5 * 10 + (*pbVar6 - 0x30);
          bVar4 = true;
        }
        if (bVar4) {
          local_84 = uVar5;
        }
      }
    }
    iVar1 = FUN_00086bc8("hlL",*pbVar6,3);
    if (iVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      local_88 = local_88 | 0x40 << (iVar1 - 0xf8b71U & 0xff);
    }
    param_3 = pbVar6 + 1;
    local_70 = *pbVar6;
    iVar1 = FUN_00086bc8("efgEFG",local_70,6);
    if (iVar1 == 0) {
      iVar1 = FUN_00077594(param_1,&local_88,param_2,0x87737,&local_8c);
    }
    else {
      iVar1 = FUN_0007712c(param_1,&local_88,param_2,0x87737,&local_8c);
    }
    if (iVar1 == -1) goto LAB_00078f56;
    local_74 = local_74 + iVar1;
    pbVar7 = param_3;
  }
  goto LAB_00078de4;
}


