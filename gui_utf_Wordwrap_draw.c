/*
 * Function: gui_utf_Wordwrap_draw
 * Entry:    000451e0
 * Prototype: undefined gui_utf_Wordwrap_draw(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 */


/* WARNING: Type propagation algorithm not settling */

undefined4
gui_utf_Wordwrap_draw
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,uint param_8,uint param_9,int param_10,code *param_11,int param_12)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  char *format_string;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint local_318;
  uint local_314;
  ushort local_302;
  undefined4 local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4 [2];
  undefined1 auStack_2ec [4];
  ushort local_2e8 [6];
  ushort local_2dc [2];
  undefined4 auStack_2d8 [2];
  ushort local_2d0 [2];
  byte local_2cc [680];
  
  local_302 = 0;
  local_300 = 0;
  puVar3 = (ushort *)convert_string_to_unicode_buffer(param_2,&local_302);
  local_2fc = 0;
  local_2f8 = 0;
  if (param_10 == 0) {
    if (param_11 != (code *)0x0) {
LAB_0004558c:
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): exex process effect callback function\n","gui_utf_Wordwrap_draw");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar13 = (*param_11)(0,param_2,param_3,param_4,param_5);
      return uVar13;
    }
    if (param_12 == 0) {
      iVar4 = get_display_config_flags();
      if (iVar4 << 0x1e < 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4,param_5,param_6,param_7);
      }
      uVar14 = 0;
      uVar15 = 0;
      uVar12 = 0;
      uVar19 = 0;
      uVar9 = param_6 - param_4;
      puVar17 = puVar3;
      for (uVar18 = 0; (int)uVar18 < (int)(uint)local_302; uVar18 = uVar18 + 1) {
        uVar16 = (uint)*puVar17;
        iVar4 = FUN_0007d860(uVar16);
        if (iVar4 == 0) {
          iVar4 = _012_resource_manger_get(param_3,uVar16,&local_2fc,&local_2f8,&local_300,0);
          if (iVar4 < 0) {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): can not find 0x%x font resource\n","gui_utf_Wordwrap_draw",uVar16
                           );
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else {
            iVar4 = local_2f8 * (local_2fc / 2);
            validate_memory_bounds(local_2cc,local_300,iVar4,0x2a4);
            if (uVar18 < param_9) {
              pbVar10 = local_2cc;
              for (iVar6 = 0; iVar4 - iVar6 != 0 && iVar6 <= iVar4; iVar6 = iVar6 + 1) {
                *pbVar10 = *pbVar10 & DISPLAY_MASK_VALUE;
                pbVar10 = pbVar10 + 1;
              }
            }
            bVar20 = false;
            if ((uVar9 >> 1 < uVar15) && (uVar14 < param_8 - 1)) {
              local_2e8[0] = 0x20;
              local_2e8[1] = 0x2c;
              local_2e8[2] = 0x2e;
              local_2e8[3] = 0x3f;
              local_2e8[4] = 0x21;
              iVar4 = 0;
              puVar5 = local_2e8;
LAB_000453d8:
              if (*puVar5 != uVar16) goto code_r0x000453e0;
              if (uVar16 == 0) goto LAB_00045314;
              puVar5 = local_2dc;
              puVar2 = &DAT_0008843e;
              do {
                puVar11 = puVar2;
                puVar7 = puVar5;
                uVar13 = puVar11[1];
                *(undefined4 *)puVar7 = *puVar11;
                *(undefined4 *)(puVar7 + 2) = uVar13;
                puVar5 = puVar7 + 4;
                puVar2 = puVar11 + 2;
              } while (puVar11 + 2 != &DAT_00088446);
              uVar1 = *(ushort *)(puVar11 + 3);
              uVar8 = uVar18 + 1;
              *(undefined **)(puVar7 + 4) = &DAT_000d0021;
              puVar7[6] = uVar1;
              uVar16 = uVar8;
LAB_00045412:
              if ((int)uVar16 < (int)(uint)local_302) {
                iVar4 = 0;
                puVar5 = local_2dc;
LAB_00045422:
                if (puVar3[uVar16] != *puVar5) goto LAB_0004543c;
                if (puVar3[uVar16] == 0) goto LAB_00045442;
                if (0x28 < (int)(uVar16 - uVar18)) {
                  if (LOG_LEVEL < 2) goto LAB_00045314;
                  format_string = "%s(): The word is too long and will not be processed\n";
                  goto LAB_00045458;
                }
                iVar4 = 0;
                while ((int)uVar8 < (int)uVar16) {
                  puVar5 = puVar3 + uVar8;
                  uVar8 = uVar8 + 1;
                  if (0x25cc < *puVar5) {
                    iVar4 = iVar4 + 1;
                  }
                }
                if (uVar18 == uVar16) {
                  if (1 < LOG_LEVEL) {
                    format_string =
                         "%s(): !!! end_split_character_index == start_split_character_index\n";
LAB_00045458:
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT(format_string,"gui_utf_Wordwrap_draw");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                else {
                  if ((iVar4 != 0) &&
                     (-1 < (int)((uint)((float)(longlong)iVar4 /
                                        (float)(longlong)(int)(uVar16 - uVar18) < 0.5) << 0x1f)))
                  goto LAB_00045314;
                  local_2f4[0] = 0;
                  local_2f4[1] = 0;
                  puVar5 = puVar17;
                  local_318 = uVar15;
                  for (local_314 = uVar18; (int)local_314 <= (int)uVar16; local_314 = local_314 + 1)
                  {
                    iVar4 = _012_resource_manger_get
                                      (param_3,*puVar5,local_2f4,local_2f4 + 1,auStack_2ec,0);
                    if (iVar4 == 0) {
                      iVar4 = count_matching_data_entries(*puVar5,puVar5[1]);
                      local_318 = local_318 + iVar4 + local_2f4[0];
                    }
                    if (uVar9 < local_318) {
                      bVar20 = true;
                      break;
                    }
                    puVar5 = puVar5 + 1;
                  }
                }
              }
            }
LAB_00045314:
            iVar4 = count_matching_data_entries(*puVar17,puVar17[1]);
            uVar15 = uVar15 + iVar4 + local_2fc;
            if (uVar9 < uVar15) {
              uVar12 = uVar12 + local_2f8;
              if (param_3 == 0) {
                uVar12 = uVar12 + 1;
              }
              uVar14 = uVar14 + 1;
              if ((param_8 <= uVar14) || ((uint)(param_7 - param_5) <= uVar12)) break;
              draw_bitmap_to_framebuffer
                        (MAIN_FRAMEBUFFER,local_2cc,local_2fc / 2,local_2f8,param_4,uVar12 + param_5
                        );
              iVar4 = count_matching_data_entries(*puVar17,puVar17[1]);
              uVar15 = iVar4 + local_2fc;
              uVar19 = uVar15;
            }
            else {
              draw_bitmap_to_framebuffer
                        (MAIN_FRAMEBUFFER,local_2cc,local_2fc / 2,local_2f8,param_4 + uVar19,
                         uVar12 + param_5);
              iVar4 = count_matching_data_entries(*puVar17,puVar17[1]);
              uVar19 = uVar19 + iVar4 + local_2fc;
            }
LAB_0004537a:
            if (bVar20) goto LAB_0004537c;
          }
        }
        else if (iVar4 == -1) {
          if (uVar16 != 10) {
            bVar20 = uVar16 == 0xd;
            goto LAB_0004537a;
          }
LAB_0004537c:
          if (local_2f8 == 0) {
            if (param_3 == 0) {
              uVar12 = uVar12 + 0x1b;
            }
            else {
              uVar12 = uVar12 + 0x1a;
            }
          }
          else {
            uVar12 = uVar12 + local_2f8;
            if (param_3 == 0) {
              uVar12 = uVar12 + 1;
            }
          }
          uVar14 = uVar14 + 1;
          if ((param_8 <= uVar14) || ((uint)(param_7 - param_5) <= uVar12)) break;
          uVar15 = 0;
          uVar19 = uVar15;
        }
        puVar17 = puVar17 + 1;
      }
      iVar4 = get_display_config_flags();
      if (iVar4 << 0x1e < 0) {
        iVar4 = get_work_mode();
        uVar13 = *(undefined4 *)(iVar4 + 0xeb4);
        iVar4 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar13,*(undefined4 *)(iVar4 + 0xeb8),param_4,param_5,param_6,param_7);
      }
    }
  }
  else if (param_11 != (code *)0x0) goto LAB_0004558c;
  return 0;
code_r0x000453e0:
  iVar4 = iVar4 + 1;
  puVar5 = puVar5 + 1;
  if (iVar4 == 5) goto LAB_00045314;
  goto LAB_000453d8;
LAB_0004543c:
  iVar4 = iVar4 + 1;
  puVar5 = puVar5 + 1;
  if (iVar4 == 7) goto LAB_00045442;
  goto LAB_00045422;
LAB_00045442:
  uVar16 = uVar16 + 1;
  goto LAB_00045412;
}


