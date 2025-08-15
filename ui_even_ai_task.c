/*
 * Function: ui_even_ai_task
 * Entry:    0003bfe0
 * Prototype: undefined ui_even_ai_task()
 */


undefined4 ui_even_ai_task(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 extraout_r1;
  undefined4 uVar11;
  undefined4 extraout_r2;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  byte local_30 [12];
  
  iVar3 = get_work_mode();
  param_1 = param_1 + 0x24;
  iVar4 = get_system_byte_1_alt();
  puVar13 = (undefined4 *)(uint)*(byte *)(iVar3 + 0xef);
  bVar21 = puVar13 != (undefined4 *)0x7;
  uVar12 = extraout_r2;
  if (bVar21) {
    uVar12 = 0xffffffff;
    puVar13 = &DAT_200024ec;
  }
  uVar5 = iVar4 - 1U & 0xff;
  if (bVar21) {
    *puVar13 = uVar12;
  }
  if (uVar5 < 0xe) {
    puVar18 = (&SYSTEM_MESSAGE_AND_ERROR_HANDLING_2)[uVar5];
    puVar15 = *(undefined **)(&UNK_0008a370 + uVar5 * 4);
  }
  else {
    puVar15 = (undefined *)0x0;
    puVar18 = puVar15;
  }
  set_work_mode_parameter(param_1);
  set_work_mode_flag_bit_1();
  if ((char)DAT_2001b9a8 == '\0') {
    if (param_3 == 1) {
      fill_memory_buffer(&DAT_2001b818,0,400);
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ENTER evenai INIT process...\n","ui_even_ai_task");
        }
        else {
          handle_heartbeat();
        }
      }
      if (DAT_2001b9a8._1_1_ != '\0') {
        return 0;
      }
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): SYNC_AREA_REFALSH Upgrade ....\n","ui_even_ai_task");
        }
        else {
          handle_heartbeat();
        }
      }
      configure_advanced_utf_drawing();
      if (*(byte *)(iVar3 + 0xef) < 0xc) {
        gui_screen_clear();
      }
      iVar4 = 0;
      UI_EVEN_AI_TASK_STATE_DATA = 0;
      reset_animation_counters();
      DAT_2000a054 = 0x80;
      DAT_2000a040 = 0;
      DAT_2000a044 = 0;
      DAT_2000a038 = &DAT_2001cdd7;
      DAT_2000a04c = 0;
      DAT_2000a050 = 0;
      DAT_2000a03c = 0;
      DAT_2000a048 = 0;
      DAT_2001b9a8 = 0x101;
      reset_animation_counters();
      uVar12 = clear_work_mode_flag_bit_1();
      do {
        uVar5 = (uint)*(byte *)(iVar3 + 0xef);
        if (uVar5 == 0xb) {
          uVar12 = get_ui_x_offset();
          iVar16 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x49,uVar12,iVar16 + 0x36,0,0,0);
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          iVar16 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar8 = iVar8 + 0x36;
          uVar12 = 3;
          iVar6 = iVar6 + 0x87;
          iVar16 = iVar16 + 0x230;
          iVar7 = iVar7 + 0x58;
          puVar10 = puVar15;
LAB_0003c12a:
          gui_utf_draw(0,puVar10,0,iVar7,iVar8,iVar16,iVar6,uVar12,0,0,0,0);
        }
        else {
          if (uVar5 - 0xc < 3) {
            if (uVar5 != 0xe) {
              return uVar12;
            }
            iVar3 = get_work_mode();
            uVar12 = *(undefined4 *)(iVar3 + 0xeb4);
            iVar3 = get_work_mode();
            _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x27f,199);
            break;
          }
          if (uVar5 - 0xf < 2) {
            if (uVar5 != 0x10) {
              return uVar12;
            }
            validate_memory_bounds(&DAT_2001b818,iVar3 + 0xf6,*(undefined2 *)(iVar3 + 0x286),400);
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            iVar16 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar6 = iVar6 + 0x88;
            iVar16 = iVar16 + 0x240;
            uVar12 = 5;
            puVar10 = &DAT_2001b818;
            goto LAB_0003c12a;
          }
          uVar12 = get_ui_x_offset();
          iVar16 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw_middle(0,puVar18,0,uVar12,iVar16 + 0x36,iVar6 + 0x236,iVar7 + 0x87,3,0,0,0,0)
          ;
        }
        uVar5 = 0;
        do {
          iVar16 = 0;
          do {
            local_30[0] = 1;
            local_30[1] = 2;
            local_30[2] = 3;
            local_30[3] = 4;
            local_30[4] = 5;
            local_30[5] = 6;
            local_30[6] = 7;
            local_30[7] = 7;
            iVar6 = *(int *)(param_1 + uVar5 * 4);
            bVar2 = *(byte *)(iVar6 + iVar16);
            if (bVar2 != 0) {
              *(byte *)(iVar6 + iVar16) =
                   bVar2 & (&DASHBOARD_PIXEL_MASK_TABLE)
                           [iVar16 + (uint)local_30[iVar4] * 0x140 + (uVar5 % 0x1a) * 0xa00];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0x140);
          uVar5 = uVar5 + 1;
        } while (uVar5 != 199);
        iVar16 = get_work_mode();
        uVar12 = *(undefined4 *)(iVar16 + 0xeb4);
        iVar16 = get_work_mode();
        iVar4 = iVar4 + 1;
        uVar12 = _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar16 + 0xeb8),0,0,0x280,199);
      } while (iVar4 != 8);
LAB_0003c204:
      set_work_mode_flag_bit_1();
      return 0;
    }
    if (param_3 != 2) {
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): evenai process received exit packet ...\n","ui_even_ai_task");
      }
      else {
        handle_heartbeat();
      }
    }
    gui_screen_clear();
LAB_0003c2be:
    configure_advanced_utf_drawing();
    DAT_2001b9a8 = 0;
    DAT_2000a050 = 0;
    DAT_2000a04c = 0;
    DAT_2000a048 = 0;
    DAT_2000a044 = 0;
    DAT_2000a040 = 0;
    DAT_2000a03c = 0;
    return 0;
  }
  if ((char)DAT_2001b9a8 != '\x01') {
    return 0;
  }
  iVar4 = iVar3 + 0xef;
  if (param_3 != 1) {
    if (param_3 == 0) {
      handle_display_mode_change(iVar4);
      return 0;
    }
    if (param_3 != 2) {
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): evenai process received exit packet ...\n","ui_even_ai_task");
      }
      else {
        handle_heartbeat();
      }
    }
    animate_framebuffer_with_pattern();
    goto LAB_0003c2be;
  }
  fill_memory_buffer(&DAT_2001b818,0,400);
  resource_mutex_acquire(&DAT_20007b3c,extraout_r1,0xffffffff,0xffffffff);
  cVar1 = *(char *)(iVar3 + 0xf0);
  uVar12 = mutex_unlock(&DAT_20007b3c);
  uVar5 = (uint)*(byte *)(iVar3 + 0xef);
  if (uVar5 == 7) {
    if ((DAT_200024ec == 0xffffffff) && (cVar1 == '\x03')) {
      DAT_200024ec = (uint)*(byte *)(iVar3 + 0xf5);
      iVar4 = 0;
      clear_work_mode_flag_bit_1();
      do {
        validate_memory_bounds(&DAT_2001b818,iVar3 + 0xf6,*(undefined2 *)(iVar3 + 0x286),400);
        iVar16 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_utf_draw(0,&DAT_2001b818,0,iVar16 + 0x58,uVar12,iVar6 + 0x230,iVar7 + 0x88,5,0,0,0,0);
        if (*(char *)(iVar3 + 0xf4) != '\x01') {
          iVar16 = get_ui_x_offset();
          uVar12 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_verticalLine_process_bar
                    (iVar16 + 0x23c,uVar12,iVar6 + 0x23c,iVar7 + 0x88,1,
                     *(undefined1 *)(iVar3 + 0xf3),0);
        }
        uVar5 = 0;
        do {
          iVar16 = 0;
          do {
            local_30[0] = 1;
            local_30[1] = 2;
            local_30[2] = 3;
            local_30[3] = 4;
            local_30[4] = 5;
            local_30[5] = 6;
            local_30[6] = 7;
            local_30[7] = 7;
            iVar6 = *(int *)(param_1 + uVar5 * 4);
            bVar2 = *(byte *)(iVar6 + iVar16);
            if (bVar2 != 0) {
              *(byte *)(iVar6 + iVar16) =
                   bVar2 & (&DASHBOARD_PIXEL_MASK_TABLE)
                           [iVar16 + (uint)local_30[iVar4] * 0x140 + (uVar5 % 0x1a) * 0xa00];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0x140);
          uVar5 = uVar5 + 1;
        } while (uVar5 != 199);
        iVar16 = get_work_mode();
        uVar12 = *(undefined4 *)(iVar16 + 0xeb4);
        iVar16 = get_work_mode();
        iVar4 = iVar4 + 1;
        _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar16 + 0xeb8),0,0,0x280,199);
      } while (iVar4 != 8);
      goto LAB_0003c204;
    }
    if (cVar1 != '\x04') {
LAB_0003ca06:
      fill_memory_buffer(&DAT_2001b818,0,400);
      validate_memory_bounds(&DAT_2001b818,iVar3 + 0xf6,*(undefined2 *)(iVar3 + 0x286),400);
      if ((*(byte *)(iVar3 + 0xef) - 8 < 2) || (DAT_20009fd4 == 0)) {
        iVar4 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        iVar16 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        gui_utf_draw(0,&DAT_2001b818,0,iVar4 + 0x58,uVar12,iVar16 + 0x230,iVar6 + 0x88,5,0,0,0,0);
        if (DAT_20009fd4 == 0) {
          DAT_20009fd4 = 1;
        }
      }
      else {
        iVar4 = get_ui_x_offset();
        iVar16 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        render_ui_with_framebuffer_management
                  (0,&DAT_2001b818,0,iVar4 + 0x58,iVar16 + 1,iVar6 + 0x230,iVar7 + 0x88,5,0);
      }
      if (*(char *)(iVar3 + 0xf4) != '\x01') {
        iVar4 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        iVar16 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        gui_verticalLine_process_bar
                  (iVar4 + 0x23c,uVar12,iVar16 + 0x23c,iVar6 + 0x88,1,*(undefined1 *)(iVar3 + 0xf3),
                   0);
      }
      UI_EVEN_AI_TASK_STATE_DATA = 1;
      return 0;
    }
  }
  else if (cVar1 != '\x04') {
    if (uVar5 < 5) {
      if (UI_EVEN_AI_TASK_STATE_DATA != 0) {
        UI_EVEN_AI_TASK_STATE_DATA = 0;
        gui_screen_clear();
      }
      uVar12 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar16 = get_ui_y_offset();
      gui_utf_draw_middle(0,puVar18,0,uVar12,iVar3 + 0x36,iVar4 + 0x236,iVar16 + 0x87,3,0,0,0,0);
      return 0;
    }
    if (uVar5 == 0xb) {
      if (UI_EVEN_AI_TASK_STATE_DATA != 0) {
        UI_EVEN_AI_TASK_STATE_DATA = 0;
        gui_screen_clear();
      }
      uVar12 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x49,uVar12,iVar3 + 0x36,0,0,0);
      iVar16 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar4 = iVar4 + 0x87;
      iVar3 = iVar3 + 0x230;
      iVar6 = iVar6 + 0x36;
      uVar12 = 3;
      iVar16 = iVar16 + 0x58;
    }
    else {
      if (uVar5 - 0xc < 3) {
        if (uVar5 != 0xe) {
          return uVar12;
        }
        iVar3 = get_work_mode();
        uVar12 = *(undefined4 *)(iVar3 + 0xeb4);
        iVar3 = get_work_mode();
        _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x27f,199);
        return 0;
      }
      if (1 < uVar5 - 0xf) {
        if (uVar5 < 7) {
          iVar3 = get_ui_x_offset();
          iVar4 = get_ui_y_offset();
          iVar16 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          gui_utf_draw(0," ",0,iVar3 + 0x58,iVar4 + 0x36,iVar16 + 0x230,iVar6 + 0x87,5,0,0,0,0);
          DAT_20009fd4 = 0;
          UI_EVEN_AI_TASK_STATE_DATA = 1;
          return 0;
        }
        goto LAB_0003ca06;
      }
      if (uVar5 != 0x10) {
        return uVar12;
      }
      validate_memory_bounds(&DAT_2001b818,iVar3 + 0xf6,*(undefined2 *)(iVar3 + 0x286),400);
      iVar16 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar4 = iVar4 + 0x88;
      iVar3 = iVar3 + 0x240;
      uVar12 = 5;
      puVar15 = &DAT_2001b818;
    }
    gui_utf_draw(0,puVar15,0,iVar16,iVar6,iVar3,iVar4,uVar12,0,0,0,0);
    return 0;
  }
  DAT_200024ec = (uint)*(byte *)(iVar3 + 0xf5);
  iVar16 = 0x640;
  iVar6 = get_work_mode();
  while( true ) {
    for (iVar7 = get_ui_y_offset(); iVar8 = get_ui_y_offset(), iVar7 <= iVar8 + 0x87;
        iVar7 = iVar7 + 1) {
      iVar8 = get_ui_x_offset();
      for (iVar8 = iVar8 + 0x58; iVar9 = get_ui_x_offset(), iVar8 < (iVar9 + 0x230) / 2;
          iVar8 = iVar8 + 1) {
        iVar9 = *(int *)(iVar6 + 0xb90 + iVar7 * 4);
        bVar2 = *(byte *)(iVar9 + iVar8);
        if (bVar2 != 0) {
          *(byte *)(iVar9 + iVar8) =
               bVar2 & (&DASHBOARD_PIXEL_MASK_TABLE)[iVar8 + (iVar7 % 0x1a) * 0xa00 + iVar16];
        }
      }
    }
    iVar7 = get_work_mode();
    uVar14 = *(undefined4 *)(iVar7 + 0xeb4);
    iVar7 = get_work_mode();
    uVar11 = *(undefined4 *)(iVar7 + 0xeb8);
    iVar7 = get_ui_x_offset();
    uVar12 = get_ui_y_offset();
    iVar8 = get_ui_x_offset();
    iVar9 = get_ui_y_offset();
    _reflash_fb_data_to_lcd(uVar14,uVar11,iVar7 + 0x58,uVar12,iVar8 + 0x230,iVar9 + 0x88);
    if (iVar16 == 0x500) break;
    iVar16 = 0x500;
  }
  _clean_fb_data(iVar6 + 0xb90,0,0,0x10,0x280,0xb8);
  handle_display_mode_change(iVar4);
  uVar12 = clear_work_mode_flag_bit_1();
  uVar5 = (uint)*(byte *)(iVar3 + 0xef);
  if (uVar5 < 6) {
    uVar12 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar16 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    gui_utf_draw_middle(0,puVar18,0,uVar12,iVar3 + 0x36,iVar16 + 0x236,iVar7 + 0x87,3,0,0,0,0);
    goto LAB_0003c446;
  }
  if (uVar5 == 0xb) {
    uVar12 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x49,uVar12,iVar3 + 0x36,0,0,0);
    iVar7 = get_ui_x_offset();
    iVar8 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar16 = get_ui_y_offset();
    iVar16 = iVar16 + 0x87;
    iVar3 = iVar3 + 0x230;
    iVar8 = iVar8 + 0x36;
    uVar12 = 3;
    iVar7 = iVar7 + 0x58;
  }
  else {
    if (uVar5 - 0xc < 3) {
      if (uVar5 != 0xe) {
        return uVar12;
      }
      iVar3 = get_work_mode();
      uVar12 = *(undefined4 *)(iVar3 + 0xeb4);
      iVar3 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x27f,199);
      goto LAB_0003c446;
    }
    if (1 < uVar5 - 0xf) {
      validate_memory_bounds(&DAT_2001b818,iVar3 + 0xf6,*(undefined2 *)(iVar3 + 0x286),400);
      iVar16 = get_ui_x_offset();
      uVar12 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,&DAT_2001b818,0,iVar16 + 0x58,uVar12,iVar7 + 0x230,iVar8 + 0x88,5,0,0,0,0);
      if (*(char *)(iVar3 + 0xf4) != '\x01') {
        iVar16 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        gui_verticalLine_process_bar
                  (iVar16 + 0x23c,uVar12,iVar7 + 0x23c,iVar8 + 0x88,1,*(undefined1 *)(iVar3 + 0xf3),
                   0);
      }
      goto LAB_0003c446;
    }
    if (uVar5 != 0x10) {
      return uVar12;
    }
    validate_memory_bounds(&DAT_2001b818,iVar3 + 0xf6,*(undefined2 *)(iVar3 + 0x286),400);
    iVar7 = get_ui_x_offset();
    iVar8 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar16 = get_ui_y_offset();
    iVar16 = iVar16 + 0x88;
    iVar3 = iVar3 + 0x240;
    uVar12 = 5;
    puVar15 = &DAT_2001b818;
  }
  gui_utf_draw(0,puVar15,0,iVar7,iVar8,iVar3,iVar16,uVar12,0,0,0,0);
LAB_0003c446:
  iVar3 = 0;
  do {
    iVar16 = get_ui_x_offset();
    iVar16 = iVar16 + 0x58;
    iVar7 = get_ui_x_offset();
    iVar8 = get_ui_y_offset();
    iVar9 = get_ui_y_offset();
    for (uVar5 = 0; (int)uVar5 < (iVar9 + 0x88) - iVar8; uVar5 = uVar5 + 1) {
      for (iVar19 = 0; iVar19 < ((iVar7 + 0x230) - iVar16) / 2; iVar19 = iVar19 + 1) {
        local_30[0] = 1;
        local_30[1] = 2;
        local_30[2] = 3;
        local_30[3] = 4;
        local_30[4] = 5;
        local_30[5] = 6;
        local_30[6] = 7;
        local_30[7] = 7;
        iVar20 = iVar16 / 2 + iVar19;
        iVar17 = *(int *)(iVar6 + iVar8 * 4 + 0xb90 + uVar5 * 4);
        bVar2 = *(byte *)(iVar17 + iVar20);
        if (bVar2 != 0) {
          *(byte *)(iVar17 + iVar20) =
               bVar2 & (&DASHBOARD_PIXEL_MASK_TABLE)
                       [iVar19 + (uint)local_30[iVar3] * 0x140 + (uVar5 % 0x1a) * 0xa00];
        }
      }
    }
    iVar19 = get_work_mode();
    uVar12 = *(undefined4 *)(iVar19 + 0xeb4);
    iVar19 = get_work_mode();
    iVar3 = iVar3 + 1;
    _reflash_fb_data_to_lcd
              (uVar12,*(undefined4 *)(iVar19 + 0xeb8),iVar16,iVar8,iVar7 + 0x230,iVar9 + 0x88);
  } while (iVar3 != 8);
  set_work_mode_flag_bit_1();
  handle_display_mode_change(iVar4);
  UI_EVEN_AI_TASK_STATE_DATA = 1;
  return 0;
}


