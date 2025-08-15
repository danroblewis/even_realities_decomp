/*
 * Function: ui_teleprompter_task
 * Entry:    0003cf44
 * Prototype: undefined ui_teleprompter_task()
 */


undefined4 ui_teleprompter_task(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined2 local_6c [2];
  undefined4 local_68;
  undefined4 auStack_64 [16];
  
  iVar5 = get_work_mode();
  param_1 = param_1 + 0x24;
  set_work_mode_parameter(param_1);
  set_work_mode_flag_bit_1();
  uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
  switch(DAT_20004988) {
  case 0:
    if (LOG_LEVEL < 3) {
      if (param_3 != 2) goto LAB_0003cfee;
    }
    else {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): running  TELEPROMPTER_DISPLAY_IDLE STATUS.\n","ui_teleprompter_task");
      }
      else {
        handle_heartbeat();
      }
      if (param_3 != 2) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            iVar8 = get_work_mode();
            DEBUG_PRINT("%s(): GLOBAL->temeprompter_info->enable = %d\n","ui_teleprompter_task",
                        (uint)*(byte *)(*(int *)(iVar8 + 0xffc) + 1));
          }
          else {
            iVar8 = get_work_mode();
            handle_heartbeat("%s(): GLOBAL->temeprompter_info->enable = %d\n","ui_teleprompter_task"
                             ,*(undefined1 *)(*(int *)(iVar8 + 0xffc) + 1));
          }
        }
LAB_0003cfee:
        uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        if (param_3 == 1) {
          iVar8 = get_work_mode();
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
          if ((*(char *)(*(int *)(iVar8 + 0xffc) + 1) == '\x01') &&
             (uVar19 = CONCAT44(DAT_20004994,DAT_20004990), *(char *)(iVar5 + 0xf0) == '\x01')) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): setp1: received teleprompter command.\n","ui_teleprompter_task");
              }
              else {
                handle_heartbeat();
              }
            }
            pcVar7 = (char *)get_work_mode();
            if (*pcVar7 == '\x01') {
              enqueue_message_to_queue_with_work_mode_check();
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): received teleprompter counter down timer start event..\n",
                            "ui_teleprompter_task");
              }
              else {
                handle_heartbeat();
              }
            }
            gui_screen_clear();
            fill_memory_buffer(&DAT_20004988,0,0x230);
            DAT_20004988 = 1;
            uVar19 = calculate_ble_connection_timing_with_scaling_alt();
            DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
            DAT_20004990 = (undefined4)uVar19;
            uVar19 = calculate_ble_connection_timing_with_scaling_alt();
            DAT_2000499c = (undefined4)((ulonglong)uVar19 >> 0x20);
            DAT_20004998 = (int)uVar19;
            DAT_200049a0 = 0;
            DAT_20004989 = '\n';
            DAT_200049ad = *(undefined1 *)(iVar5 + 0xfb);
            DAT_20009ff0 = 0;
            DAT_20009fec = 0;
            DAT_20009fe8 = 0;
            DAT_20009fe4 = 0;
            DAT_20009fe0 = 0;
            DAT_20009fdc = 0;
            fill_memory_buffer(&DAT_200049b8,0,0x200);
            resource_mutex_acquire(&DAT_20007b3c,extraout_r1,0xffffffff,0xffffffff);
            memcpy(&DAT_200049b8,iVar5 + 0x106,0x200);
            uVar1 = *(undefined1 *)(iVar5 + 0xfc);
            uVar4 = *(undefined2 *)(iVar5 + 0xfd);
            DAT_200049ac = *(byte *)(iVar5 + 0xef);
            DAT_200049ad = *(byte *)(iVar5 + 0xfb);
            mutex_unlock(&DAT_20007b3c);
            uVar19 = calculate_ble_connection_timing_with_scaling_alt();
            uVar14 = *(char *)(iVar5 + 0xfb) * 1000;
            uVar6 = uVar14 + (uint)uVar19;
            DAT_200049b0 = uVar6 - 0x15e;
            DAT_200049b4 = (int)((ulonglong)uVar19 >> 0x20) +
                           ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar14,(uint)uVar19) + -1 +
                           (uint)(0x15d < uVar6);
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): teleprompter work mode = %d\n","ui_teleprompter_task",
                            (uint)DAT_200049ac);
              }
              else {
                handle_heartbeat();
              }
            }
            clear_work_mode_flag_bit_1();
            iVar5 = 0;
            do {
              iVar8 = get_ui_x_offset();
              iVar11 = get_ui_y_offset();
              iVar12 = get_ui_x_offset();
              iVar13 = get_ui_y_offset();
              uVar6 = 0;
              gui_utf_draw(0,&DAT_200049b8,0,iVar8 + 0x58,iVar11 + 1,iVar12 + 0x230,iVar13 + 0x88,5,
                           uVar4,0,0,0);
              iVar8 = get_work_mode();
              iVar8 = *(byte *)(*(int *)(iVar8 + 0xfec) + 0x5e) - 1;
              if (iVar8 != 0) {
                iVar8 = 1;
              }
              uVar9 = get_work_mode_timestamp();
              uVar10 = get_ui_x_offset();
              iVar11 = get_ui_y_offset();
              iVar12 = get_ui_x_offset();
              iVar13 = get_ui_y_offset();
              EVEN_DASHBOARD_CLOCK_32x_TTF
                        (uVar9,uVar10,iVar11 + 2,iVar12 + 0x3f,iVar13 + 0x1d,3,iVar8);
              iVar8 = get_ui_x_offset();
              uVar9 = get_ui_y_offset();
              iVar11 = get_ui_x_offset();
              iVar12 = get_ui_y_offset();
              gui_verticalLine_process_bar
                        (iVar8 + 0x23c,uVar9,iVar11 + 0x23c,iVar12 + 0x88,1,uVar1,0);
              uVar9 = get_ui_x_offset();
              iVar8 = get_ui_y_offset();
              gui_bmp_bitmap_draw(0x18,uVar9,iVar8 + 0x36,0,0,0);
              do {
                iVar8 = 0;
                do {
                  local_68 = 0x7050301;
                  auStack_64[0] = 0x7070707;
                  iVar11 = *(int *)(param_1 + uVar6 * 4);
                  bVar3 = *(byte *)(iVar11 + iVar8);
                  if (bVar3 != 0) {
                    *(byte *)(iVar11 + iVar8) =
                         bVar3 & (&DASHBOARD_PIXEL_MASK_TABLE)
                                 [iVar8 + (uint)*(byte *)((int)auStack_64 + iVar5 + -4) * 0x140 +
                                          (uVar6 % 0x1a) * 0xa00];
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 != 0x140);
                uVar6 = uVar6 + 1;
              } while (uVar6 != 199);
              iVar8 = get_work_mode();
              uVar9 = *(undefined4 *)(iVar8 + 0xeb4);
              iVar8 = get_work_mode();
              iVar5 = iVar5 + 1;
              _reflash_fb_data_to_lcd(uVar9,*(undefined4 *)(iVar8 + 0xeb8),0,0,0x280,199);
            } while (iVar5 != 4);
            set_work_mode_flag_bit_1();
            calculate_ble_schedule_timing(0x1334,0);
            reset_animation_counters();
            uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
          }
        }
        goto switchD_0003cf6c_caseD_4;
      }
    }
LAB_0003cf98:
    gui_screen_clear();
    fill_memory_buffer(&DAT_20004988,0,0x230);
    uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
    goto switchD_0003cf6c_caseD_4;
  case 1:
    if (param_3 == 2) goto LAB_0003cf98;
    if (param_3 == 1) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): counter down break,received sync message...\n","ui_teleprompter_task");
        }
        else {
          handle_heartbeat();
        }
      }
      if (*(byte *)(iVar5 + 0xf9) - 2 < 2) {
        uVar19 = calculate_ble_connection_timing_with_scaling_alt();
        DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
        DAT_20004990 = (undefined4)uVar19;
        DAT_20004988 = 2;
        uVar19 = calculate_ble_connection_timing_with_scaling_alt();
        DAT_2000499c = (undefined4)((ulonglong)uVar19 >> 0x20);
        DAT_20004998 = (int)uVar19;
        uVar9 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        _clean_fb_data(param_1,0,uVar9,iVar5 + 0x36,iVar8 + 0x24,iVar11 + 0x52);
        if (DAT_200049ac == 1) {
          uVar9 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          uVar10 = 0x1a;
        }
        else {
          if (DAT_200049ac != 0) goto LAB_0003d394;
          uVar9 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          uVar10 = 0x19;
        }
        gui_bmp_bitmap_draw(uVar10,uVar9,iVar5 + 0x36,0,0,0);
      }
LAB_0003d394:
      pcVar7 = (char *)get_work_mode();
      uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
      if (*pcVar7 == '\x01') {
        enqueue_message_to_queue_with_work_mode_check();
        uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
      }
      goto switchD_0003cf6c_caseD_4;
    }
    uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
    if (param_3 != 0) goto switchD_0003cf6c_caseD_4;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): na sync arar reflash,update counter down timer\n","ui_teleprompter_task")
        ;
      }
      else {
        handle_heartbeat();
      }
    }
    uVar19 = calculate_ble_connection_timing_with_scaling_alt();
    iVar5 = (int)((ulonglong)uVar19 >> 0x20);
    uVar6 = (uint)uVar19;
    if ((int)((iVar5 - DAT_200049b4) - (uint)(uVar6 < DAT_200049b0)) < 0 ==
        (SBORROW4(iVar5,DAT_200049b4) != SBORROW4(iVar5 - DAT_200049b4,(uint)(uVar6 < DAT_200049b0))
        )) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): counter down timeout . exit counter down status ,switch TEXT DISPLAY \n"
                      ,"ui_teleprompter_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_2000499c = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004998 = (int)uVar19;
      DAT_20004988 = 2;
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar11 = get_ui_y_offset();
      _clean_fb_data(param_1,0,uVar9,iVar5 + 0x36,iVar8 + 0x1e,iVar11 + 0x50);
      iVar5 = get_work_mode();
      uVar10 = *(undefined4 *)(iVar5 + 0xeb4);
      iVar5 = get_work_mode();
      uVar15 = *(undefined4 *)(iVar5 + 0xeb8);
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar11 = get_ui_y_offset();
      iVar11 = iVar11 + 0x50;
      iVar8 = iVar8 + 0x1e;
LAB_0003d4ba:
      _reflash_fb_data_to_lcd(uVar10,uVar15,uVar9,iVar5 + 0x36,iVar8,iVar11);
      if (DAT_200049ac == 1) {
        uVar9 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        uVar10 = 0x1a;
      }
      else {
        uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        if (DAT_200049ac != 0) goto switchD_0003cf6c_caseD_4;
        uVar9 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        uVar10 = 0x19;
      }
      gui_bmp_bitmap_draw(uVar10,uVar9,iVar5 + 0x36,0,0,0);
      uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
      goto switchD_0003cf6c_caseD_4;
    }
    lVar17 = handle_signed_division
                       (DAT_200049b0 - uVar6,(DAT_200049b4 - iVar5) - (uint)(DAT_200049b0 < uVar6),
                        1000,0);
    iVar5 = (int)((ulonglong)lVar17 >> 0x20);
    bVar16 = (uint)(int)(char)DAT_200049ad < (uint)lVar17;
    iVar8 = (int)((uint)DAT_200049ad << 0x18) >> 0x1f;
    if ((int)((iVar8 - iVar5) - (uint)bVar16) < 0 !=
        (SBORROW4(iVar8,iVar5) != SBORROW4(iVar8 - iVar5,(uint)bVar16))) {
      lVar17 = CONCAT44((int)((uint)DAT_200049ad << 0x18) >> 0x1f,(int)(char)DAT_200049ad);
    }
    if (lVar17 == 0) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): remain time end ,switch text display ...\n","ui_teleprompter_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_2000499c = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004998 = (int)uVar19;
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      DAT_20004988 = 2;
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar11 = get_ui_y_offset();
      _clean_fb_data(param_1,0,uVar9,iVar5 + 0x36,iVar8 + 0x24,iVar11 + 0x52);
      iVar5 = get_work_mode();
      uVar10 = *(undefined4 *)(iVar5 + 0xeb4);
      iVar5 = get_work_mode();
      uVar15 = *(undefined4 *)(iVar5 + 0xeb8);
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar11 = get_ui_y_offset();
      iVar11 = iVar11 + 0x52;
      iVar8 = iVar8 + 0x24;
      goto LAB_0003d4ba;
    }
    local_68 = (uint)local_68._3_1_ << 0x18;
    process_string_with_error_handling_and_validation(&local_68,3,"%d");
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): upgrade counterdown timer = %s\n","ui_teleprompter_task",&local_68);
      }
      else {
        handle_heartbeat();
      }
    }
    iVar5 = get_ui_x_offset();
    iVar8 = get_ui_y_offset();
    iVar11 = get_ui_x_offset();
    iVar12 = get_ui_y_offset();
    iVar12 = iVar12 + 0x50;
    iVar11 = iVar11 + 0x1e;
    iVar8 = iVar8 + 0x36;
    pcVar7 = (char *)&local_68;
    break;
  case 2:
    if (LOG_LEVEL < 3) {
      if (param_3 == 2) goto LAB_0003d67e;
    }
    else {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): running TELEPROMPTER_TEXT_DISPLAY STATUS.\n","ui_teleprompter_task");
      }
      else {
        handle_heartbeat();
      }
      if (param_3 == 2) goto joined_r0x0003dcc8;
    }
    cVar2 = DAT_200049a5;
    if (DAT_200049a5 == '\x01') {
      uVar6 = DAT_200049a0;
      if (DAT_200049a4 == '\0') {
        iVar8 = calculate_ble_connection_timing_with_scaling_alt();
        DAT_200049a0 = (DAT_200049a0 - DAT_20004998) + iVar8;
        DAT_200049a4 = cVar2;
        uVar6 = DAT_200049a0;
      }
    }
    else if (DAT_200049a4 == '\0') {
      iVar8 = calculate_ble_connection_timing_with_scaling_alt();
      uVar6 = (iVar8 - DAT_20004998) + DAT_200049a0;
    }
    else {
      DAT_20004998 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_2000499c = 0;
      DAT_200049a8 = DAT_200049a0;
      DAT_200049a4 = '\0';
      uVar6 = DAT_200049a8;
    }
    DAT_200049a8 = uVar6;
    iVar8 = get_work_mode();
    iVar8 = *(byte *)(*(int *)(iVar8 + 0xfec) + 0x5e) - 1;
    if (iVar8 != 0) {
      iVar8 = 1;
    }
    uVar9 = get_work_mode_timestamp();
    uVar10 = get_ui_x_offset();
    iVar11 = get_ui_y_offset();
    iVar12 = get_ui_x_offset();
    iVar13 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar9,uVar10,iVar11 + 2,iVar12 + 0x3f,iVar13 + 0x1d,3,iVar8);
    if (param_3 == 1) {
      pcVar7 = (char *)get_work_mode();
      if (*pcVar7 == '\x01') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received sync area command ,send store cache data to app\n",
                        "ui_teleprompter_task");
          }
          else {
            handle_heartbeat();
          }
        }
        enqueue_message_to_queue_with_work_mode_check();
        if (DAT_20004989 < '\x14') {
          DAT_20004989 = '\x13';
        }
      }
      fill_memory_buffer(&DAT_200049b8,0,0x200);
      resource_mutex_acquire(&DAT_20007b3c,extraout_r1_00,0xffffffff,0xffffffff);
      memcpy(&DAT_200049b8,iVar5 + 0x106,0x200);
      uVar1 = *(undefined1 *)(iVar5 + 0xfc);
      cVar2 = *(char *)(iVar5 + 0xff);
      uVar4 = *(undefined2 *)(iVar5 + 0xfd);
      iVar5 = *(int *)(iVar5 + 0x100);
      mutex_unlock(&DAT_20007b3c);
      if (TELEPROMPTER_ACTIVE_FLAG == '\x01') {
        TELEPROMPTER_ACTIVE_FLAG = '\0';
        iVar8 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        iVar12 = get_ui_x_offset();
        iVar13 = get_ui_y_offset();
        render_ui_with_framebuffer_management
                  (0,&DAT_200049b8,0,iVar8 + 0x58,iVar11 + 1,iVar12 + 0x230,iVar13 + 0x88,5,uVar4);
      }
      else {
        iVar8 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        iVar12 = get_ui_x_offset();
        iVar13 = get_ui_y_offset();
        gui_utf_draw(0,&DAT_200049b8,0,iVar8 + 0x58,iVar11 + 1,iVar12 + 0x230,iVar13 + 0x88,5,uVar4,
                     0,0,0);
      }
      iVar8 = get_ui_x_offset();
      uVar9 = get_ui_y_offset();
      iVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      gui_verticalLine_process_bar(iVar8 + 0x23c,uVar9,iVar11 + 0x23c,iVar12 + 0x88,1,uVar1,0);
      if (cVar2 == '\x01') {
        if (SYSTEM_FLAGS_REGISTER << 0x1e < 0) {
          uVar9 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          iVar11 = get_ui_x_offset();
          iVar12 = get_ui_y_offset();
          _clean_fb_data(param_1,0,uVar9,iVar8 + 0x36,iVar11 + 0x24,iVar12 + 0x52);
        }
        if (SYSTEM_FLAGS_REGISTER << 0x1e < 0) {
          iVar8 = get_work_mode();
          uVar10 = *(undefined4 *)(iVar8 + 0xeb4);
          iVar8 = get_work_mode();
          uVar15 = *(undefined4 *)(iVar8 + 0xeb8);
          uVar9 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          iVar11 = get_ui_x_offset();
          iVar12 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar10,uVar15,uVar9,iVar8 + 0x36,iVar11 + 0x24,iVar12 + 0x52);
        }
        uVar9 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x1b,uVar9,iVar8 + 0x36,0,0,0);
        DAT_200049a5 = '\x01';
        DAT_200049a0 = iVar5 * 1000;
        DAT_20004998 = calculate_ble_connection_timing_with_scaling_alt();
        DAT_2000499c = 0;
        if (LOG_LEVEL < 3) goto LAB_0003df5c;
        pcVar7 = "%s(): suspend enable...\n";
      }
      else {
        DAT_200049a5 = '\0';
        if (SYSTEM_FLAGS_REGISTER << 0x1e < 0) {
          uVar9 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar8 = get_ui_x_offset();
          iVar11 = get_ui_y_offset();
          _clean_fb_data(param_1,0,uVar9,iVar5 + 0x36,iVar8 + 0x24,iVar11 + 0x52);
        }
        if (SYSTEM_FLAGS_REGISTER << 0x1e < 0) {
          iVar5 = get_work_mode();
          uVar10 = *(undefined4 *)(iVar5 + 0xeb4);
          iVar5 = get_work_mode();
          uVar15 = *(undefined4 *)(iVar5 + 0xeb8);
          uVar9 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar8 = get_ui_x_offset();
          iVar11 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar10,uVar15,uVar9,iVar5 + 0x36,iVar8 + 0x24,iVar11 + 0x52);
        }
        if (DAT_200049ac == 1) {
          uVar9 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          uVar10 = 0x1a;
LAB_0003d7bc:
          gui_bmp_bitmap_draw(uVar10,uVar9,iVar5 + 0x36,0,0,0);
        }
        else if (DAT_200049ac == 0) {
          uVar9 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          uVar10 = 0x19;
          goto LAB_0003d7bc;
        }
        if (LOG_LEVEL < 3) goto LAB_0003df5c;
        pcVar7 = "%s(): suspend cancel...\n";
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar7,"ui_teleprompter_task");
      }
      else {
        handle_heartbeat();
      }
    }
LAB_0003df5c:
    if ((DAT_200049ac == 2) && (DAT_200049a5 == '\0')) {
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_dynamic_bitmap_draw(1,uVar9,iVar5 + 0x36,0,0,0,0);
    }
    DAT_200049a8 = DAT_200049a8 / 1000;
    if (DAT_200049a8 < 0x3c) {
      DAT_20009fe8 = DAT_200049a8 % 0x3c;
    }
    else if (DAT_200049a8 < 0xe10) {
      DAT_20009fe8 = DAT_200049a8 % 0x3c;
      DAT_20009fec = DAT_200049a8 / 0x3c;
    }
    else if (DAT_200049a8 < 360000) {
      DAT_20009ff0 = DAT_200049a8 / 0xe10;
      DAT_20009fec = (DAT_200049a8 % 0xe10) / 0x3c;
      DAT_20009fe8 = (DAT_200049a8 % 0xe10) % 0x3c;
    }
    else {
      DAT_20009ff0 = 99;
      DAT_20009fe8 = 0x3b;
      DAT_20009fec = 0x3b;
    }
    local_68 = 0;
    fill_memory_buffer(auStack_64);
    if ((int)DAT_20009ff0 < 10) {
      pcVar7 = "%d:%02d:%02d";
    }
    else {
      pcVar7 = "%02d:%02d:%02d";
    }
    process_string_with_error_handling_and_validation
              (&local_68,0x40,pcVar7,DAT_20009ff0,DAT_20009fec,DAT_20009fe8);
    if (((DAT_20009ff0 != DAT_20009fe4) || (DAT_20009fec != DAT_20009fe0)) ||
       (DAT_20009fe8 != DAT_20009fdc)) {
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar11 = get_ui_y_offset();
      gui_utf_draw(0,&local_68,0,uVar9,iVar5 + 0x6e,iVar8 + 0x50,iVar11 + 0x88,1,0,0,0,0);
      DAT_20009fe4 = DAT_20009ff0;
      DAT_20009fe0 = DAT_20009fec;
      DAT_20009fdc = DAT_20009fe8;
    }
    pcVar7 = (char *)get_work_mode();
    if (*pcVar7 == '\x01') {
      if ((0 < HEARTBEAT_SEQ) && (HEARTBEAT_SEQ = 0, DAT_20004989 < '\x14')) {
        DAT_20004989 = '\x13';
      }
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      uVar18 = subtract_64bit_with_borrow_handling
                         ((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_20004990,DAT_20004994);
      uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
      if ((int)((ulonglong)uVar18 >> 0x20) < (int)(uint)((uint)uVar18 < 0x3e9))
      goto switchD_0003cf6c_caseD_4;
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      DAT_20004989 = DAT_20004989 + -1;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): DECETED TIMEOUT ...... _tpm_thread_prv_data.sync_cnt = %d\n",
                      "ui_teleprompter_task",(int)DAT_20004989);
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        }
        else {
          handle_heartbeat();
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        }
      }
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      if ('\0' < DAT_20004989) goto switchD_0003cf6c_caseD_4;
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): There is a disconnection between the AR Glasses and the Bluetooth application!\n"
                      ,"ui_teleprompter_task");
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        }
        else {
          handle_heartbeat();
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        }
      }
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): bluetooth connect is break,Send Stop Teleprompter command to slave.\n",
                      "ui_teleprompter_task");
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        }
        else {
          handle_heartbeat();
          uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        }
      }
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      local_6c[0] = 0x103;
      uVar9 = get_work_mode();
      iVar5 = sync_to_slave(uVar9,6,local_6c,2);
      if (4999 < iVar5) {
        uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): SYNC TO Slave failed...,don\'t exec teleprompter exit action,master auto exit...\n"
                        ,"ui_teleprompter_task");
            uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
          }
          else {
            handle_heartbeat();
            uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
          }
        }
        goto switchD_0003cf6c_caseD_4;
      }
      DAT_20004988 = 3;
      uVar19 = calculate_ble_connection_timing_with_scaling_alt();
      DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_20004990 = (undefined4)uVar19;
      gui_screen_clear();
      uVar9 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3f,uVar9,iVar5 + 0x3a,0,0,0);
      iVar5 = get_system_byte_1_alt();
      if (iVar5 == 6) {
        iVar5 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        iVar11 = get_ui_x_offset();
        iVar12 = get_ui_y_offset();
        gui_utf_draw(0,"Teleprompter aufgrund einer",0,iVar5 + 0xa0,iVar8 + 0x37,iVar11 + 0x23a,
                     iVar12 + 0x52,1,0,0,0,0);
        iVar5 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        iVar12 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        iVar11 = iVar11 + 0x6d;
        iVar8 = iVar8 + 0x52;
        pcVar7 = "App-Trennung gestoppt.";
        iVar5 = iVar5 + 0xb4;
      }
      else {
        iVar5 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        iVar12 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        iVar11 = iVar11 + 0x88;
        iVar8 = iVar8 + 0x37;
        pcVar7 = "Teleprompt stopped due to app disconnection";
        iVar5 = iVar5 + 0x4e;
      }
      gui_utf_draw(0,pcVar7,0,iVar5,iVar8,iVar12 + 0x23a,iVar11,1,0,0,0,0);
      goto LAB_0003d68e;
    }
    uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
    if (param_3 != 5) goto switchD_0003cf6c_caseD_4;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Received exit command from master, exit teleprompter mode\n",
                    "ui_teleprompter_task");
      }
      else {
        handle_heartbeat();
      }
    }
    DAT_20004988 = 3;
    uVar19 = calculate_ble_connection_timing_with_scaling_alt();
    DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
    DAT_20004990 = (undefined4)uVar19;
    gui_screen_clear();
    uVar9 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x3f,uVar9,iVar5 + 0x3a,0,0,0);
    iVar5 = get_system_byte_1_alt();
    if (iVar5 == 6) {
      iVar5 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      iVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      gui_utf_draw(0,"Teleprompter aufgrund einer",0,iVar5 + 0xa0,iVar8 + 0x37,iVar11 + 0x23a,
                   iVar12 + 0x52,1,0,0,0,0);
      iVar5 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      iVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar11 = iVar11 + 0x23a;
      iVar12 = iVar12 + 0x6d;
      iVar8 = iVar8 + 0x52;
      pcVar7 = "App-Trennung gestoppt.";
      iVar5 = iVar5 + 0xb4;
    }
    else {
      iVar5 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      iVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar12 = iVar12 + 0x88;
      iVar11 = iVar11 + 0x23a;
      iVar8 = iVar8 + 0x37;
      pcVar7 = "Teleprompt stopped due to app disconnection";
      iVar5 = iVar5 + 0x4e;
    }
    break;
  case 3:
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): running TELEPROMPTER_DISPLAY_ABNORMAL_EXIT STATUS.\n",
                    "ui_teleprompter_task");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar19 = calculate_ble_connection_timing_with_scaling_alt();
    uVar19 = subtract_64bit_with_borrow_handling
                       ((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_20004990,DAT_20004994);
    if ((int)(uint)((uint)uVar19 < 0x1f41) <= (int)((ulonglong)uVar19 >> 0x20)) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): The teleprompter automatically shuts down due to disconnection.\n",
                      "ui_teleprompter_task");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar5 = get_work_mode();
      fill_memory_buffer(*(undefined4 *)(iVar5 + 0xffc),0,0x217);
      animate_framebuffer_with_pattern();
      iVar5 = get_work_mode();
      *(undefined1 *)(*(int *)(iVar5 + 0xffc) + 1) = 0;
      fill_memory_buffer(&DAT_20004988,0,0x230);
    }
    uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
    if (param_3 != 2) goto switchD_0003cf6c_caseD_4;
joined_r0x0003dcc8:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): received exit command,clear screen...\n","ui_teleprompter_task");
      }
      else {
        handle_heartbeat();
      }
    }
LAB_0003d67e:
    animate_framebuffer_with_pattern();
    fill_memory_buffer(&DAT_20004988,0,0x230);
LAB_0003d68e:
    pcVar7 = (char *)get_work_mode();
    uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
    if ((*pcVar7 == '\x01') && (uVar19 = CONCAT44(DAT_20004994,DAT_20004990), DAT_200049ac == 2)) {
      enable_dmic_stream();
      uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
    }
  default:
    goto switchD_0003cf6c_caseD_4;
  }
  gui_utf_draw(0,pcVar7,0,iVar5,iVar8,iVar11,iVar12,1,0,0,0,0);
  uVar19 = CONCAT44(DAT_20004994,DAT_20004990);
switchD_0003cf6c_caseD_4:
  DAT_20004994 = (undefined4)((ulonglong)uVar19 >> 0x20);
  DAT_20004990 = (undefined4)uVar19;
  return 0;
}


