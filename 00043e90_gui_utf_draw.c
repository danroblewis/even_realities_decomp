/*
 * Function: gui_utf_draw
 * Entry:    00043e90
 * Prototype: undefined gui_utf_draw(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 */


undefined4
gui_utf_draw(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8,uint param_9,int param_10,code *param_11,int param_12)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint local_2f0;
  ushort local_2da;
  undefined4 local_2d8;
  int local_2d4;
  int local_2d0;
  byte local_2cc [680];
  
  local_2da = 0;
  local_2d8 = 0;
  puVar2 = (ushort *)FUN_000478d8(param_2,&local_2da);
  local_2d4 = 0;
  local_2d0 = 0;
  if (param_10 == 0) {
    if (param_11 != (code *)0x0) {
LAB_000440a2:
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): exex process effect callback function\n","gui_utf_draw");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar8 = (*param_11)(0,param_2,param_3,param_4,param_5);
      return uVar8;
    }
    if (param_12 == 0) {
      iVar3 = FUN_000431a8();
      if (iVar3 << 0x1e < 0) {
        _clean_fb_data(DAT_2000a034,0,param_4,param_5,param_6,param_7);
      }
      uVar9 = 0;
      uVar13 = 0;
      uVar7 = 0;
      uVar10 = 0;
      for (local_2f0 = 0; (int)local_2f0 < (int)(uint)local_2da; local_2f0 = local_2f0 + 1) {
        puVar14 = puVar2 + 1;
        uVar12 = (uint)*puVar2;
        iVar3 = FUN_0007d860(uVar12);
        if (iVar3 == 0) {
          iVar4 = _012_resource_manger_get(param_3,uVar12,&local_2d4,&local_2d0,&local_2d8,0);
          iVar1 = local_2d0;
          iVar3 = local_2d4;
          if (iVar4 < 0) {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): can not find 0x%x font resource\n","gui_utf_draw",uVar12);
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else {
            iVar4 = local_2d4 / 2;
            iVar5 = local_2d0 * iVar4;
            validate_memory_bounds(local_2cc,local_2d8,iVar5,0x2a4);
            if (local_2f0 < param_9) {
              pbVar6 = local_2cc;
              for (iVar11 = 0; iVar11 < iVar5; iVar11 = iVar11 + 1) {
                *pbVar6 = *pbVar6 & DAT_200034f6;
                pbVar6 = pbVar6 + 1;
              }
            }
            iVar5 = FUN_00043e58(*puVar2,*puVar14);
            uVar13 = uVar13 + iVar3 + iVar5;
            if ((uint)(param_6 - param_4) < uVar13) {
              uVar7 = uVar7 + iVar1;
              if (param_3 == 0) {
                uVar7 = uVar7 + 1;
              }
              uVar9 = uVar9 + 1;
              if ((param_8 <= uVar9) || ((uint)(param_7 - param_5) <= uVar7)) break;
              FUN_0007d53a(DAT_2000a034,local_2cc,iVar4,iVar1,param_4,uVar7 + param_5);
              iVar3 = FUN_00043e58(*puVar2,*puVar14);
              uVar10 = local_2d4 + iVar3;
              uVar13 = uVar10;
            }
            else {
              FUN_0007d53a(DAT_2000a034,local_2cc,iVar4,iVar1,uVar10 + param_4,uVar7 + param_5);
              iVar3 = FUN_00043e58(*puVar2,*puVar14);
              uVar10 = uVar10 + iVar3 + local_2d4;
            }
          }
        }
        else if ((iVar3 == -1) && ((uVar12 == 0xd || (uVar12 == 10)))) {
          if (local_2d0 == 0) {
            if (param_3 == 0) {
              uVar7 = uVar7 + 0x1b;
            }
            else {
              uVar7 = uVar7 + 0x1a;
            }
          }
          else {
            uVar7 = uVar7 + local_2d0;
            if (param_3 == 0) {
              uVar7 = uVar7 + 1;
            }
          }
          uVar9 = uVar9 + 1;
          if ((param_8 <= uVar9) || ((uint)(param_7 - param_5) <= uVar7)) break;
          uVar10 = 0;
          uVar13 = uVar10;
        }
        puVar2 = puVar14;
      }
      iVar3 = FUN_000431a8();
      if (iVar3 << 0x1e < 0) {
        iVar3 = get_work_mode();
        uVar8 = *(undefined4 *)(iVar3 + 0xeb4);
        iVar3 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar8,*(undefined4 *)(iVar3 + 0xeb8),param_4,param_5,param_6,param_7);
      }
    }
  }
  else if (param_11 != (code *)0x0) goto LAB_000440a2;
  return 0;
}


