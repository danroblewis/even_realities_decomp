/*
 * Function: gui_utf_draw_truncate
 * Entry:    00044818
 * Prototype: undefined gui_utf_draw_truncate(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 */


undefined4
gui_utf_draw_truncate
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,uint param_8,uint param_9,int param_10,code *param_11,int param_12)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint local_2fc;
  int local_2f8;
  uint local_2f0;
  ushort local_2da;
  undefined4 local_2d8;
  int local_2d4;
  int local_2d0;
  byte local_2cc [680];
  
  local_2da = 0;
  local_2d8 = 0;
  puVar1 = (ushort *)convert_string_to_unicode_buffer(param_2,&local_2da);
  local_2d4 = 0;
  local_2d0 = 0;
  if (param_10 == 0) {
    if (param_11 != (code *)0x0) {
LAB_00044b96:
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): exex process effect callback function\n","gui_utf_draw_truncate");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar9 = (*param_11)(0,param_2,param_3,param_4,param_5);
      return uVar9;
    }
    if (param_12 == 0) {
      iVar2 = get_display_config_flags();
      if (iVar2 << 0x1e < 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4,param_5,param_6,param_7);
      }
      uVar14 = 0;
      uVar8 = 0;
      uVar10 = 0;
      local_2fc = 0;
      local_2f0 = 0;
      do {
        if ((int)(uint)local_2da <= (int)local_2fc) goto LAB_00044a68;
        uVar11 = (uint)*puVar1;
        iVar2 = bounds_check_return_negative_one_or_zero(uVar11);
        if (iVar2 == 0) {
          iVar3 = _012_resource_manger_get(param_3,uVar11,&local_2d4,&local_2d0,&local_2d8,0);
          iVar4 = local_2d0;
          iVar2 = local_2d4;
          if (iVar3 < 0) {
LAB_000448c2:
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): can not find 0x%x font resource\n","gui_utf_draw_truncate",uVar11
                           );
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else {
            iVar3 = local_2d4 / 2;
            iVar6 = local_2d0 * iVar3;
            validate_memory_bounds(local_2cc,local_2d8,iVar6,0x2a4);
            if (local_2fc < param_9) {
              pbVar7 = local_2cc;
              for (iVar5 = 0; iVar5 < iVar6; iVar5 = iVar5 + 1) {
                *pbVar7 = *pbVar7 & DISPLAY_MASK_VALUE;
                pbVar7 = pbVar7 + 1;
              }
            }
            iVar6 = count_matching_data_entries(*puVar1,puVar1[1]);
            local_2f0 = local_2f0 + iVar2 + iVar6;
            if ((uint)(param_6 - param_4) < local_2f0) {
              uVar14 = uVar14 + 1;
              uVar12 = local_2fc;
              puVar13 = puVar1;
              if ((param_8 <= uVar14) || ((uint)(param_7 - param_5) <= uVar8)) {
                while (uVar12 != 0) {
                  if (3 < (param_6 - param_4) - uVar10) goto LAB_000449e6;
                  uVar11 = (uint)puVar13[-1];
                  iVar2 = _012_resource_manger_get
                                    (param_3,uVar11,&local_2d4,&local_2d0,&local_2d8,0);
                  uVar12 = uVar12 - 1;
                  if (iVar2 < 0) {
                    if (1 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): truncate can not find [%d]0x%x font resource\n",
                                    "gui_utf_draw_truncate",uVar12,uVar11);
                      }
                      else {
                        handle_heartbeat("%s(): truncate can not find [%d]0x%x font resource\n",
                                         "gui_utf_draw_truncate",uVar12,uVar11);
                      }
                    }
                  }
                  else {
                    iVar2 = count_matching_data_entries(puVar13[-1],*puVar13);
                    uVar10 = (uVar10 - local_2d4) - iVar2;
                    _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4 + uVar10,uVar8 + param_5,
                                   local_2d4 + param_4 + uVar10,local_2d0 + uVar8 + param_5);
                  }
                  puVar13 = puVar13 + -1;
                }
                uVar10 = 0;
LAB_000449e6:
                if (1 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): end line x0=%d\n","gui_utf_draw_truncate",uVar10);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                iVar4 = _012_resource_manger_get(param_3,0x2026,&local_2d4,&local_2d0,&local_2d8,0);
                iVar2 = local_2d0;
                if (iVar4 < 0) goto LAB_000448c2;
                iVar4 = local_2d4 / 2;
                iVar3 = local_2d0 * iVar4;
                validate_memory_bounds(local_2cc,local_2d8,iVar3,0x2a4);
                if (local_2fc < param_9) {
                  pbVar7 = local_2cc;
                  for (local_2f8 = 0; iVar3 - local_2f8 != 0 && local_2f8 <= iVar3;
                      local_2f8 = local_2f8 + 1) {
                    *pbVar7 = *pbVar7 & DISPLAY_MASK_VALUE;
                    pbVar7 = pbVar7 + 1;
                  }
                }
                draw_4bit_bitmap_to_framebuffer
                          (MAIN_FRAMEBUFFER,local_2cc,iVar4,iVar2,uVar10 + param_4,uVar8 + param_5);
LAB_00044a68:
                iVar2 = get_display_config_flags();
                if (-1 < iVar2 << 0x1e) {
                  return 0;
                }
                iVar2 = get_work_mode();
                uVar9 = *(undefined4 *)(iVar2 + 0xeb4);
                iVar2 = get_work_mode();
                _reflash_fb_data_to_lcd
                          (uVar9,*(undefined4 *)(iVar2 + 0xeb8),param_4,param_5,param_6,param_7);
                return 0;
              }
              uVar8 = uVar8 + iVar4;
              if (param_3 == 0) {
                uVar8 = uVar8 + 1;
              }
              draw_4bit_bitmap_to_framebuffer
                        (MAIN_FRAMEBUFFER,local_2cc,iVar3,iVar4,param_4,uVar8 + param_5);
              iVar2 = count_matching_data_entries(*puVar1,puVar1[1]);
              uVar10 = local_2d4 + iVar2;
              local_2f0 = uVar10;
            }
            else {
              draw_4bit_bitmap_to_framebuffer
                        (MAIN_FRAMEBUFFER,local_2cc,iVar3,iVar4,uVar10 + param_4,uVar8 + param_5);
              iVar2 = count_matching_data_entries(*puVar1,puVar1[1]);
              uVar10 = uVar10 + iVar2 + local_2d4;
            }
          }
        }
        else if ((iVar2 == -1) && ((uVar11 == 0xd || (uVar11 == 10)))) {
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
          uVar14 = uVar14 + 1;
          if ((param_8 <= uVar14) || ((uint)(param_7 - param_5) <= uVar8)) goto LAB_00044a68;
          uVar10 = 0;
          local_2f0 = 0;
        }
        puVar1 = puVar1 + 1;
        local_2fc = local_2fc + 1;
      } while( true );
    }
  }
  else if (param_11 != (code *)0x0) goto LAB_00044b96;
  return 0;
}


