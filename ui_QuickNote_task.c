/*
 * Function: ui_QuickNote_task
 * Entry:    0003b824
 * Prototype: undefined ui_QuickNote_task()
 */


undefined4 ui_QuickNote_task(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  byte local_30 [12];
  
  set_work_mode_parameter(param_1 + 0x24);
  set_work_mode_flag_bit_1();
  if (UI_QUICKNOTE_TASK_STATE_DATA != '\x01') {
    if (UI_QUICKNOTE_TASK_STATE_DATA != '\x02') {
      if (UI_QUICKNOTE_TASK_STATE_DATA != '\0') {
        return 0;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a960c_1,"ui_QuickNote_task");
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(&UI_QUICKNOTE_TASK_STATE_DATA,0,0x10);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          iVar2 = get_work_mode();
          DEBUG_PRINT(&LAB_000a9628_1,"ui_QuickNote_task",(uint)**(byte **)(iVar2 + 0x1020));
        }
        else {
          iVar2 = get_work_mode();
          handle_heartbeat(&LAB_000a9628_1,"ui_QuickNote_task",**(undefined1 **)(iVar2 + 0x1020));
        }
      }
      if (param_3 == 1) {
        iVar2 = get_work_mode();
        if (**(char **)(iVar2 + 0x1020) != '\x01') {
          return 0;
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): quick note function start ...\n","ui_QuickNote_task");
          }
          else {
            handle_heartbeat();
          }
        }
        gui_screen_clear();
        UI_QUICKNOTE_TASK_STATE_DATA = 1;
        reset_animation_counters();
        iVar2 = get_system_byte_1_alt();
        iVar13 = 0;
        clear_work_mode_flag_bit_1();
        do {
          if (iVar2 == 6) {
            iVar3 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            gui_utf_draw(0,"Kurznotizen-Aufzeichnung...",0,iVar3 + 0xa0,iVar4 + 0x36,iVar5 + 0x236,
                         iVar6 + 0x51,1,0,0,0,0);
            iVar3 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            pcVar8 = "Loslassen zum Abschluss";
            iVar3 = iVar3 + 0xaa;
          }
          else {
            iVar3 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            gui_utf_draw(0,"QuickNote recording...",0,iVar3 + 0xbc,iVar4 + 0x36,iVar5 + 0x236,
                         iVar6 + 0x51,1,0,0,0,0);
            iVar3 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            pcVar8 = "Release to Finish Recording";
            iVar3 = iVar3 + 0xa4;
          }
          gui_utf_draw(0,pcVar8,0,iVar3,iVar4 + 0x6c,iVar5 + 0x236,iVar6 + 0x87,1,0,0,0,0);
          uVar11 = 0;
          do {
            iVar3 = 0;
            do {
              iVar4 = *(int *)(param_1 + 0x24 + uVar11 * 4);
              local_30[0] = 1;
              local_30[1] = 3;
              local_30[2] = 5;
              local_30[3] = 7;
              local_30[4] = 7;
              local_30[5] = 7;
              local_30[6] = 7;
              local_30[7] = 7;
              bVar1 = *(byte *)(iVar4 + iVar3);
              if (bVar1 != 0) {
                *(byte *)(iVar4 + iVar3) =
                     bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                             [iVar3 + (uint)local_30[iVar13] * 0x140 + (uVar11 % 0x1a) * 0xa00];
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0x140);
            uVar11 = uVar11 + 1;
          } while (uVar11 != 199);
          iVar3 = get_work_mode();
          uVar12 = *(undefined4 *)(iVar3 + 0xeb4);
          iVar3 = get_work_mode();
          iVar13 = iVar13 + 1;
          _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x280,199);
        } while (iVar13 != 4);
        set_work_mode_flag_bit_1();
        pcVar8 = (char *)get_work_mode();
        if (*pcVar8 != '\x01') {
          return 0;
        }
        dmic_record_start();
        return 0;
      }
      if (param_3 != 2) {
        return 0;
      }
      if (0 < LOG_LEVEL) {
        pcVar8 = "%s(): quick init,exec function exit ...\n";
LAB_0003bac4:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(pcVar8,"ui_QuickNote_task");
        }
        else {
          handle_heartbeat();
        }
      }
      goto LAB_0003bacc;
    }
    if (LOG_LEVEL < 3) {
      if (param_3 != 2) goto LAB_0003bd76;
    }
    else {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): quick note process exec.....\n","ui_QuickNote_task");
      }
      else {
        handle_heartbeat();
      }
      if (param_3 != 2) {
LAB_0003bd76:
        lVar15 = calculate_ble_connection_timing_with_validation();
        uVar9 = (uint)((ulonglong)(lVar15 * 1000) >> 0x20);
        uVar10 = (uint)(lVar15 * 1000) >> 0xf | uVar9 * 0x20000;
        uVar11 = DAT_2000497c + DAT_20004980;
        iVar2 = DAT_20004984 + ((int)DAT_2000497c >> 0x1f) + (uint)CARRY4(DAT_2000497c,DAT_20004980)
        ;
        uVar9 = uVar9 >> 0xf;
        if ((int)((iVar2 - uVar9) - (uint)(uVar11 < uVar10)) < 0 !=
            (SBORROW4(iVar2,uVar9) != SBORROW4(iVar2 - uVar9,(uint)(uVar11 < uVar10)))) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): quick note function exit -164 ...\n","ui_QuickNote_task");
            }
            else {
              handle_heartbeat();
            }
          }
          animate_framebuffer_with_pattern();
          iVar2 = get_work_mode();
          **(undefined1 **)(iVar2 + 0x1020) = 0;
          fill_memory_buffer(&UI_QUICKNOTE_TASK_STATE_DATA,0,0x10);
          DAT_2001b817 = 0;
          return 0;
        }
        iVar2 = (iVar2 - ((int)DAT_200024e8 >> 0x1f)) - (uint)(uVar11 < DAT_200024e8);
        bVar14 = uVar11 - DAT_200024e8 < uVar10;
        if ((int)((iVar2 - uVar9) - (uint)bVar14) < 0 !=
            (SBORROW4(iVar2,uVar9) != SBORROW4(iVar2 - uVar9,(uint)bVar14))) {
          if (DAT_2001b817 != '\0') {
            return 0;
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): exec quick note exit display...\n","ui_QuickNote_task");
            }
            else {
              handle_heartbeat();
            }
          }
          gui_screen_clear();
          uVar12 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x3b,uVar12,iVar2 + 0x36,0,0,0);
          iVar2 = get_system_byte_1_alt();
          if (iVar2 == 6) {
            iVar2 = get_ui_x_offset();
            iVar13 = get_ui_y_offset();
            iVar3 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            pcVar8 = "Neue Notiz gespeichert";
            iVar2 = iVar2 + 0xb8;
          }
          else {
            iVar2 = get_ui_x_offset();
            iVar13 = get_ui_y_offset();
            iVar3 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            pcVar8 = "New Note Saved";
            iVar2 = iVar2 + 0xd6;
          }
          gui_utf_draw(0,pcVar8,0,iVar2,iVar13 + 0x36,iVar3 + 0x236,iVar4 + 0x6c,2,0,0,0,0);
          DAT_2001b817 = 1;
          return 0;
        }
        if (DAT_2001b817 != '\0') {
          return 0;
        }
        uVar12 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        uVar7 = 9;
        goto LAB_0003bd6a;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): quick note function exit ...\n","ui_QuickNote_task");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    pcVar8 = (char *)get_work_mode();
    if (*pcVar8 == '\x01') {
      stop_audio_and_enable_dmic_stream();
    }
    animate_framebuffer_with_pattern();
    goto LAB_0003bade;
  }
  if (LOG_LEVEL < 3) {
    if (param_3 != 2) {
      if (param_3 == 3) goto LAB_0003bb86;
      goto LAB_0003bd4a;
    }
  }
  else {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): QUICK NOTE RUNING.....\n","ui_QuickNote_task");
    }
    else {
      handle_heartbeat();
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): quick note function delay exit ...\n","ui_QuickNote_task");
          }
          else {
            handle_heartbeat();
          }
        }
LAB_0003bb86:
        pcVar8 = (char *)get_work_mode();
        if (*pcVar8 == '\x01') {
          stop_audio_and_enable_dmic_stream();
        }
        DAT_2000497c = get_font_rendering_flag();
        lVar15 = calculate_ble_connection_timing_with_validation();
        uVar11 = (uint)((ulonglong)(lVar15 * 1000) >> 0x20);
        DAT_20004980 = (uint)(lVar15 * 1000) >> 0xf | uVar11 * 0x20000;
        DAT_20004984 = uVar11 >> 0xf;
        gui_screen_clear();
        UI_QUICKNOTE_TASK_STATE_DATA = 2;
        DAT_2001b817 = 0;
        reset_animation_counters();
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0;
        }
        DEBUG_PRINT("%s(): exec even logo reflash....\n","ui_QuickNote_task");
        return 0;
      }
LAB_0003bd4a:
      if (param_3 != 0) {
        return 0;
      }
      uVar12 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      uVar7 = 1;
LAB_0003bd6a:
      gui_bmp_dynamic_bitmap_draw(uVar7,uVar12,iVar2 + 0x36,0,0,0,0);
      return 0;
    }
    if (2 < LOG_LEVEL) {
      pcVar8 = "%s(): quick note function exit ...\n";
      goto LAB_0003bac4;
    }
  }
LAB_0003bacc:
  pcVar8 = (char *)get_work_mode();
  if (*pcVar8 == '\x01') {
    stop_audio_and_enable_dmic_stream();
  }
  gui_screen_clear();
LAB_0003bade:
  iVar2 = get_work_mode();
  **(undefined1 **)(iVar2 + 0x1020) = 0;
  fill_memory_buffer(&UI_QUICKNOTE_TASK_STATE_DATA,0,0x10);
  return 0;
}


