/*
 * Function: gui_utf_draw_dark_light_split
 * Entry:    00044544
 * Prototype: undefined gui_utf_draw_dark_light_split(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined2 param_9, undefined4 param_10, undefined4 param_11)
 */


undefined4
gui_utf_draw_dark_light_split
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,uint param_8,ushort param_9,int param_10,code *param_11,int param_12)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  char *format_string;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_2ec;
  ushort local_2da;
  undefined4 local_2d8;
  int local_2d4;
  int local_2d0;
  byte local_2cc [680];
  
  uVar6 = (uint)param_9;
  local_2da = 0;
  local_2d8 = 0;
  puVar2 = (ushort *)convert_string_to_unicode_buffer(param_2,&local_2da);
  local_2d4 = 0;
  local_2d0 = 0;
  if (param_10 == 0) {
    if (param_11 != (code *)0x0) {
LAB_000447a2:
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): exex process effect callback function\n",
                      "gui_utf_draw_dark_light_split");
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
      uVar11 = 0;
      uVar15 = 0;
      uVar8 = 0;
      uVar14 = 0;
      for (local_2ec = 0; local_2ec < (int)(uint)local_2da; local_2ec = local_2ec + 1) {
        puVar10 = puVar2 + 1;
        uVar13 = (uint)*puVar2;
        iVar3 = FUN_0007d860(uVar13);
        if (iVar3 == 0) {
          if (uVar13 == uVar6) {
            uVar13 = uVar6;
            if (DAT_2001cdd4 == '\0') {
              DAT_2001cdd4 = '\x01';
              if (1 < LOG_LEVEL) {
                format_string = "%s(): dark_light_flag 1 code = 0x%x\n";
LAB_0004462c:
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(format_string,"gui_utf_draw_dark_light_split",uVar13);
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            else {
              DAT_2001cdd4 = '\0';
              if (1 < LOG_LEVEL) {
                format_string = "%s(): dark_light_flag 0 code = 0x%x\n";
                goto LAB_0004462c;
              }
            }
          }
          else {
            iVar4 = _012_resource_manger_get(param_3,uVar13,&local_2d4,&local_2d0,&local_2d8,0);
            iVar1 = local_2d0;
            iVar3 = local_2d4;
            if (iVar4 < 0) {
              if (1 < LOG_LEVEL) {
                format_string = "%s(): can not find 0x%x font resource\n";
                goto LAB_0004462c;
              }
            }
            else {
              iVar4 = local_2d4 / 2;
              iVar5 = local_2d0 * iVar4;
              validate_memory_bounds(local_2cc,local_2d8,iVar5,0x2a4);
              if (DAT_2001cdd4 == '\x01') {
                pbVar7 = local_2cc;
                for (iVar12 = 0; iVar12 < iVar5; iVar12 = iVar12 + 1) {
                  *pbVar7 = *pbVar7 & DISPLAY_MASK_VALUE;
                  pbVar7 = pbVar7 + 1;
                }
              }
              iVar5 = count_matching_data_entries(*puVar2,*puVar10);
              uVar15 = uVar15 + iVar3 + iVar5;
              if ((uint)(param_6 - param_4) < uVar15) {
                uVar8 = uVar8 + iVar1;
                if (param_3 == 0) {
                  uVar8 = uVar8 + 1;
                }
                uVar11 = uVar11 + 1;
                if ((param_8 <= uVar11) || ((uint)(param_7 - param_5) <= uVar8)) break;
                draw_bitmap_to_framebuffer
                          (MAIN_FRAMEBUFFER,local_2cc,iVar4,iVar1,param_4,uVar8 + param_5);
                iVar3 = count_matching_data_entries(*puVar2,*puVar10);
                uVar14 = iVar3 + local_2d4;
                uVar15 = uVar14;
              }
              else {
                draw_bitmap_to_framebuffer
                          (MAIN_FRAMEBUFFER,local_2cc,iVar4,iVar1,uVar14 + param_4,uVar8 + param_5);
                iVar3 = count_matching_data_entries(*puVar2,*puVar10);
                uVar14 = uVar14 + iVar3 + local_2d4;
              }
            }
          }
        }
        else if ((iVar3 == -1) && ((uVar13 == 0xd || (uVar13 == 10)))) {
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
          uVar11 = uVar11 + 1;
          if ((param_8 <= uVar11) || ((uint)(param_7 - param_5) <= uVar8)) break;
          uVar14 = 0;
          uVar15 = uVar14;
        }
        puVar2 = puVar10;
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
  else if (param_11 != (code *)0x0) goto LAB_000447a2;
  DAT_2001cdd4 = 0;
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): dark_light_flag 0\n","gui_utf_draw_dark_light_split");
    }
    else {
      handle_heartbeat();
    }
  }
  return 0;
}


