/*
 * Function: gui_utf_draw_middle
 * Entry:    00044bd8
 * Prototype: undefined gui_utf_draw_middle(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 */


undefined4
gui_utf_draw_middle(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                   int param_6,int param_7,uint param_8,uint param_9,int param_10,code *param_11,
                   int param_12)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar17;
  uint uVar18;
  uint local_2f4;
  int local_2f0;
  ushort local_2da;
  undefined4 local_2d8;
  int local_2d4;
  int local_2d0;
  byte local_2cc [680];
  
  local_2da = 0;
  local_2d8 = 0;
  puVar2 = (ushort *)convert_string_to_unicode_buffer(param_2,&local_2da);
  local_2d4 = 0;
  local_2d0 = 0;
  if (param_10 == 0) {
    if (param_11 != (code *)0x0) {
LAB_00044e7c:
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): exex process effect callback function\n","gui_utf_draw_middle");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar9 = (*param_11)(0,param_2,param_3,param_4,param_5);
      return uVar9;
    }
    if (param_12 == 0) {
      iVar3 = get_display_config_flags();
      if (iVar3 << 0x1e < 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4,param_5,param_6,param_7);
      }
      uVar10 = 0;
      uVar18 = 0;
      uVar8 = 0;
      bVar6 = true;
      uVar11 = 0;
      puVar16 = puVar2;
      local_2f0 = param_4;
      for (local_2f4 = 0; (int)local_2f4 < (int)(uint)local_2da; local_2f4 = local_2f4 + 1) {
        if (bVar6) {
          uVar12 = 0;
          for (uVar14 = local_2f4;
              (((int)uVar14 < (int)(uint)local_2da && (uVar15 = (uint)puVar2[uVar14], uVar15 != 0xd)
               ) && (uVar15 != 10)); uVar14 = uVar14 + 1) {
            iVar3 = FUN_0007d860(uVar15);
            if (iVar3 == 0) {
              iVar3 = _012_resource_manger_get(param_3,uVar15,&local_2d4,&local_2d0,&local_2d8,0);
              if (iVar3 < 0) {
                if (1 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): can not find 0x%x font resource\n","gui_utf_draw_middle",
                                uVar15);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
              else {
                uVar12 = local_2d4 + uVar12 & 0xffff;
              }
            }
          }
          local_2f0 = param_4 + (int)(0x240 - uVar12) / 2;
        }
        puVar17 = puVar16 + 1;
        uVar14 = (uint)*puVar16;
        iVar3 = FUN_0007d860(uVar14);
        if (iVar3 == 0) {
          iVar4 = _012_resource_manger_get(param_3,uVar14,&local_2d4,&local_2d0,&local_2d8,0);
          iVar1 = local_2d0;
          iVar3 = local_2d4;
          if (iVar4 < 0) {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): can not find 0x%x font resource\n","gui_utf_draw_middle",uVar14);
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
            if (local_2f4 < param_9) {
              pbVar7 = local_2cc;
              for (iVar13 = 0; iVar13 < iVar5; iVar13 = iVar13 + 1) {
                *pbVar7 = *pbVar7 & DISPLAY_MASK_VALUE;
                pbVar7 = pbVar7 + 1;
              }
            }
            iVar5 = count_matching_data_entries(*puVar16,*puVar17);
            uVar18 = uVar18 + iVar3 + iVar5;
            if ((uint)(param_6 - param_4) < uVar18) {
              uVar8 = uVar8 + iVar1;
              if (param_3 == 0) {
                uVar8 = uVar8 + 1;
              }
              uVar10 = uVar10 + 1;
              if ((param_8 <= uVar10) || ((uint)(param_7 - param_5) <= uVar8)) break;
              draw_bitmap_to_framebuffer
                        (MAIN_FRAMEBUFFER,local_2cc,iVar4,iVar1,local_2f0,uVar8 + param_5);
              iVar3 = count_matching_data_entries(*puVar16,*puVar17);
              uVar11 = local_2d4 + iVar3;
              uVar18 = uVar11;
            }
            else {
              draw_bitmap_to_framebuffer
                        (MAIN_FRAMEBUFFER,local_2cc,iVar4,iVar1,local_2f0 + uVar11,uVar8 + param_5);
              iVar3 = count_matching_data_entries(*puVar16,*puVar17);
              uVar11 = uVar11 + iVar3 + local_2d4;
            }
          }
LAB_00044d36:
          bVar6 = false;
        }
        else {
          if ((iVar3 != -1) || ((uVar14 != 0xd && (uVar14 != 10)))) goto LAB_00044d36;
          if (local_2d0 == 0) {
            if (param_3 == 0) {
              uVar8 = uVar8 + 0x1b;
            }
            else {
              uVar8 = uVar8 + 0x1a;
            }
          }
          else {
            uVar8 = uVar8 + local_2d0;
            if (param_3 == 0) {
              uVar8 = uVar8 + 1;
            }
          }
          uVar10 = uVar10 + 1;
          if ((param_8 <= uVar10) || ((uint)(param_7 - param_5) <= uVar8)) break;
          uVar18 = 0;
          uVar11 = 0;
          bVar6 = true;
        }
        puVar16 = puVar17;
      }
      iVar3 = get_display_config_flags();
      if (iVar3 << 0x1e < 0) {
        iVar3 = get_work_mode();
        uVar9 = *(undefined4 *)(iVar3 + 0xeb4);
        iVar3 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar9,*(undefined4 *)(iVar3 + 0xeb8),param_4,param_5,param_6,param_7);
      }
    }
  }
  else if (param_11 != (code *)0x0) goto LAB_00044e7c;
  return 0;
}


