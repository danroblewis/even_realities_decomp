/*
 * Function: render_dashboard_ui
 * Entry:    0003727c
 * Prototype: undefined __stdcall render_dashboard_ui(undefined4 dashboard_data, undefined4 system_data, undefined4 display_mode, undefined4 dashboard_type)
 */


void render_dashboard_ui(int dashboard_data,int system_data,int display_mode,int dashboard_type)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte bVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int local_c8;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  char local_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  char local_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  uint local_7c [22];
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a9014,&LAB_000a95e6_1,dashboard_type);
    }
    else {
      handle_heartbeat();
    }
  }
  if (dashboard_type != 1) {
    if (dashboard_type == 2) {
      iVar2 = check_work_mode_and_ancs_status();
      if (2 < LOG_LEVEL) {
        puVar10 = (undefined1 *)0xa900c;
        if (IS_DEBUG == 0) {
          if (iVar2 != 1) {
            puVar10 = &LAB_000a9008_1;
          }
          DEBUG_PRINT(&LAB_000a902c_1,&LAB_000a95e6_1,puVar10);
        }
        else {
          if (iVar2 != 1) {
            puVar10 = &LAB_000a9008_1;
          }
          handle_heartbeat(&LAB_000a902c_1,&LAB_000a95e6_1,puVar10);
        }
      }
      if (((DASHBOARD_DISPLAY_STATE != iVar2) || (DASHBOARD_ORIENTATION_MODE != '\x02')) ||
         (DASHBOARD_DATA_VERSION != *(byte *)(dashboard_data + 0x65))) {
        gui_screen_clear();
        DASHBOARD_DATA_VERSION = *(byte *)(dashboard_data + 0x65);
        DASHBOARD_ORIENTATION_MODE = *(char *)(dashboard_data + 100);
        DASHBOARD_DISPLAY_STATE = iVar2;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a904c,&LAB_000a95e6_1);
          }
          else {
            handle_heartbeat();
          }
        }
      }
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      if (iVar2 == 1) {
        uVar3 = get_work_mode_timestamp();
        unix_timestamp_to_datetime(uVar3,&local_94);
        uVar3 = get_data_by_index_and_type((char)(local_94 >> 0x10) + '.');
        cVar1 = calculate_complex_mathematical_formula_with_division
                          (local_94 & 0xffff,local_94._2_2_,local_90 & 0xffff);
        uVar4 = get_data_by_index_and_type(cVar1 + '(');
        local_80 = 0;
        local_7c[0] = 0;
        local_7c[1] = 0;
        local_7c[2] = 0;
        handle_buffer_overflow_condition
                  (&local_80,0,0x10,&LAB_000a9078,uVar4,uVar3,local_90 & 0xffff);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_utf_draw(0,&local_80,3,iVar2 + 0x90,iVar5 + 0x1c,iVar6 + 0x104,iVar7 + 0x37,1,0,0,0,0);
        iVar2 = get_work_mode();
        iVar2 = *(byte *)(*(int *)(iVar2 + 0xfec) + 0x5e) - 1;
        if (iVar2 != 0) {
          iVar2 = 1;
        }
        uVar3 = get_work_mode_timestamp();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        EVEN_DASHBOARD_CLOCK_32x_TTF
                  (uVar3,iVar5 + 0xea,iVar6 + 0x4c,iVar7 + 0x180,iVar8 + 0x6d,1,iVar2);
        if (display_mode != 1) {
          return;
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9082,&LAB_000a95e6_1,(uint)*(byte *)(dashboard_data + 4));
          }
          else {
            handle_heartbeat();
          }
        }
        local_a4 = '\0';
        uStack_a3 = 0;
        uStack_a2 = 0;
        local_a0 = 0;
        uStack_9f = 0;
        uStack_9e = 0;
        if ((byte)(*(char *)(dashboard_data + 4) - 1U) < 0xfe) {
          uVar3 = get_value_by_index_limited_range();
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(uVar3,iVar2 + 0x11e,iVar5 + 0x1c,0,0,0);
          iVar2 = get_work_mode();
          iVar5 = (int)*(char *)(dashboard_data + 5);
          local_a4 = *(char *)(*(int *)(iVar2 + 0xfec) + 0x5d);
          if (local_a4 == '\0') {
            uStack_a3 = 0;
            uStack_a2 = 0;
            uStack_9f = 0;
            uStack_9e = 0;
            local_a0 = local_a4;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a909e_1,&LAB_000a95e6_1,iVar5);
              }
              else {
                handle_heartbeat();
              }
            }
            process_string_with_error_handling_and_validation(&local_a4,8,"%d",iVar5);
            local_b0 = 0;
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_string_draw(3,&local_a4,iVar2 + 0x13a,iVar5 + 0x1c,iVar6 + 0x162,iVar7 + 0x37,
                            &local_b0);
            local_a4 = '*';
          }
          else {
            local_a4 = '\0';
            uStack_a3 = 0;
            uStack_a2 = 0;
            local_a0 = 0;
            uStack_9f = 0;
            uStack_9e = 0;
            iVar2 = (iVar5 * 9) / 5 + 0x20;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a90b6_1,&LAB_000a95e6_1,iVar2);
              }
              else {
                handle_heartbeat();
              }
            }
            process_string_with_error_handling_and_validation(&local_a4,8,"%d",iVar2);
            local_b0 = 0;
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_string_draw(3,&local_a4,iVar2 + 0x13a,iVar5 + 0x1c,iVar6 + 0x162,iVar7 + 0x37,
                            &local_b0);
            local_a4 = '#';
          }
          uStack_9e = 0;
          uStack_9f = 0;
          local_a0 = 0;
          uStack_a2 = 0;
          uStack_a3 = 0;
          iVar2 = get_ui_x_offset();
          iVar7 = iVar2 + 0x13a + local_b0;
          iVar2 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar5 = local_b0 + iVar5;
          iVar6 = get_ui_y_offset();
          gui_string_draw(3,&local_a4,iVar7,iVar2 + 0x1c,iVar5 + 0x149,iVar6 + 0x37,0);
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x3c,iVar2 + 0x182,iVar5 + 0x1c,0,0,0);
        iVar2 = calculate_next_timeout_message_state();
        if (iVar2 < 0xb) {
          pcVar9 = "%d";
        }
        else {
          pcVar9 = "%d+";
          iVar2 = 10;
        }
        local_a4 = '\0';
        uStack_a3 = 0;
        uStack_a2 = 0;
        local_a0 = 0;
        uStack_9f = 0;
        uStack_9e = 0;
        process_string_with_error_handling_and_validation(&local_a4,8,pcVar9,iVar2);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_string_draw(3,&local_a4,iVar2 + 0x19e,iVar5 + 0x1c,iVar6 + 0x1b8,iVar7 + 0x37,0);
        if (*(char *)(dashboard_data + 0x5f) != '\x01') {
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x1b8,iVar6 + 0x1c,iVar7 + 0x1d0,iVar8 + 0x37);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar5 = iVar5 + 0x1d0;
          iVar2 = iVar2 + 0x1b8;
LAB_0003acba:
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2,iVar6 + 0x1c,iVar5,iVar7 + 0x37);
          return;
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar2 = iVar2 + 0x1b8;
      }
      else {
        uVar3 = get_work_mode_timestamp();
        unix_timestamp_to_datetime(uVar3,&local_94);
        uVar3 = get_data_by_index_and_type((char)(local_94 >> 0x10) + '.');
        cVar1 = calculate_complex_mathematical_formula_with_division
                          (local_94 & 0xffff,local_94._2_2_,local_90 & 0xffff);
        uVar4 = get_data_by_index_and_type(cVar1 + '(');
        local_80 = 0;
        local_7c[0] = 0;
        local_7c[1] = 0;
        local_7c[2] = 0;
        handle_buffer_overflow_condition
                  (&local_80,0,0x10,&LAB_000a9078,uVar4,uVar3,local_90 & 0xffff);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_utf_draw(0,&local_80,3,iVar2 + 0xb6,iVar5 + 0x1c,iVar6 + 0x12e,iVar7 + 0x37,1,0,0,0,0);
        iVar2 = get_work_mode();
        iVar2 = *(byte *)(*(int *)(iVar2 + 0xfec) + 0x5e) - 1;
        if (iVar2 != 0) {
          iVar2 = 1;
        }
        uVar3 = get_work_mode_timestamp();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        EVEN_DASHBOARD_CLOCK_32x_TTF
                  (uVar3,iVar5 + 0xea,iVar6 + 0x4c,iVar7 + 0x180,iVar8 + 0x6d,1,iVar2);
        if (display_mode != 1) {
          return;
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x3e,iVar2 + 0x144,iVar5 + 0x1c,0,0,0);
        if (*(char *)(dashboard_data + 0x5f) != '\x01') {
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x178,iVar6 + 0x1c,iVar7 + 400,iVar8 + 0x37);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar5 = iVar5 + 400;
          iVar2 = iVar2 + 0x178;
          goto LAB_0003acba;
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar2 = iVar2 + 0x178;
      }
      gui_bmp_bitmap_draw(0x42,iVar2,iVar5 + 0x1c,0,0,0);
      return;
    }
    if (dashboard_type != 0) {
      return;
    }
    iVar2 = check_work_mode_and_ancs_status();
    if (2 < LOG_LEVEL) {
      puVar10 = (undefined1 *)0xa900c;
      if (IS_DEBUG == 0) {
        if (iVar2 != 1) {
          puVar10 = &LAB_000a9008_1;
        }
        DEBUG_PRINT(&LAB_000a902c_1,&LAB_000a95e6_1,puVar10);
      }
      else {
        if (iVar2 != 1) {
          puVar10 = &LAB_000a9008_1;
        }
        handle_heartbeat(&LAB_000a902c_1,&LAB_000a95e6_1,puVar10);
      }
    }
    if (((DASHBOARD_DISPLAY_STATE != iVar2) || (DASHBOARD_ORIENTATION_MODE != '\0')) ||
       (DASHBOARD_DATA_VERSION != *(byte *)(dashboard_data + 0x65))) {
      gui_screen_clear();
      DASHBOARD_DATA_VERSION = *(byte *)(dashboard_data + 0x65);
      DASHBOARD_ORIENTATION_MODE = *(char *)(dashboard_data + 100);
      DASHBOARD_DISPLAY_STATE = iVar2;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a904c,&LAB_000a95e6_1);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    if (iVar2 == 1) {
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      uVar3 = get_work_mode_timestamp();
      unix_timestamp_to_datetime(uVar3,&local_b0);
      uVar3 = get_data_by_index_and_type((char)(local_b0 >> 0x10) + '.');
      cVar1 = calculate_complex_mathematical_formula_with_division
                        (local_b0 & 0xffff,local_b0._2_2_,local_ac & 0xffff);
      uVar4 = get_data_by_index_and_type(cVar1 + '(');
      local_a4 = '\0';
      uStack_a3 = 0;
      uStack_a2 = 0;
      local_a0 = 0;
      uStack_9f = 0;
      uStack_9e = 0;
      local_9c = 0;
      uStack_98 = 0;
      handle_buffer_overflow_condition(&local_a4,0,0x10,&LAB_000a9078,uVar4,uVar3,local_ac & 0xffff)
      ;
      uVar3 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,&local_a4,3,uVar3,iVar2 + 2,iVar5 + 0xa0,iVar6 + 0x1d,1,0,0,0,0);
      iVar2 = get_work_mode();
      iVar2 = *(byte *)(*(int *)(iVar2 + 0xfec) + 0x5e) - 1;
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      uVar3 = get_work_mode_timestamp();
      uVar4 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      EVEN_DASHBOARD_CLOCK_32x_TTF(uVar3,uVar4,iVar5 + 0x22,iVar6 + 0x96,iVar7 + 0x43,1,iVar2);
      if (display_mode == 1) {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x4f,iVar2 + 0x23e,iVar5 + 4,0,0,0);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x4e,iVar2 + 0xfe,iVar5 + 4,0,0,0);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9082,&LAB_000a95e6_1,(uint)*(byte *)(dashboard_data + 4));
          }
          else {
            handle_heartbeat();
          }
        }
        local_b8 = 0;
        local_b4 = 0;
        if ((byte)(*(char *)(dashboard_data + 4) - 1U) < 0xfe) {
          uVar3 = get_value_by_index_limited_range();
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(uVar3,iVar2 + 0xa0,iVar5 + 1,0,0,0);
          iVar2 = get_work_mode();
          iVar5 = (int)*(char *)(dashboard_data + 5);
          local_b8 = (uint)*(byte *)(*(int *)(iVar2 + 0xfec) + 0x5d);
          if (local_b8 == 0) {
            local_b4 = local_b8;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a909e_1,&LAB_000a95e6_1,iVar5);
              }
              else {
                handle_heartbeat();
              }
            }
            process_string_with_error_handling_and_validation(&local_b8,8,"%d",iVar5);
            local_80 = 0;
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_string_draw(3,&local_b8,iVar2 + 0xbc,iVar5 + 1,iVar6 + 0xf8,iVar7 + 0x1c,&local_80);
            bVar12 = 0x2a;
          }
          else {
            local_b8 = 0;
            local_b4 = 0;
            iVar2 = (iVar5 * 9) / 5 + 0x20;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a90b6_1,&LAB_000a95e6_1,iVar2);
              }
              else {
                handle_heartbeat();
              }
            }
            process_string_with_error_handling_and_validation(&local_b8,8,"%d",iVar2);
            local_80 = 0;
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_string_draw(3,&local_b8,iVar2 + 0xbc,iVar5 + 1,iVar6 + 0xf8,iVar7 + 0x1c,&local_80);
            bVar12 = 0x23;
          }
          local_b4 = 0;
          local_b8 = (uint)bVar12;
          iVar2 = get_ui_x_offset();
          iVar2 = local_80 + iVar2;
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar6 = local_80 + iVar6;
          iVar7 = get_ui_y_offset();
          gui_string_draw(3,&local_b8,iVar2 + 0xbe,iVar5 + 1,iVar6 + 0xcb,iVar7 + 0x1c,0);
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x3c,iVar2 + 0xa0,iVar5 + 0x25,0,0,0);
        iVar2 = calculate_next_timeout_message_state();
        if (iVar2 < 0xb) {
          pcVar9 = "%d";
        }
        else {
          pcVar9 = "%d+";
          iVar2 = 10;
        }
        local_b8 = 0;
        local_b4 = 0;
        process_string_with_error_handling_and_validation(&local_b8,8,pcVar9,iVar2);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_string_draw(3,&local_b8,iVar2 + 0xbc,iVar5 + 0x25,iVar6 + 0xe8,iVar7 + 0x40,0);
        if (*(char *)(dashboard_data + 0x5f) == '\x01') {
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x42,iVar2 + 0xdc,iVar5 + 0x25,0,0,0);
        }
        else {
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xdc,iVar6 + 0x25,iVar7 + 0xf4,iVar8 + 0x40);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xdc,iVar5 + 0x25,iVar6 + 0xf4,iVar7 + 0x40);
        }
        uVar3 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x39,uVar3,iVar2 + 0x56,0,0,0);
        if (DASHBOARD_WIDGET_MODE != *(char *)(dashboard_data + 0x66)) {
          DASHBOARD_WIDGET_MODE = *(char *)(dashboard_data + 0x66);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_area_clear(iVar2 + 0x1c,iVar5 + 0x51,iVar6 + 0xf2,iVar7 + 0x6c);
          uVar3 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          gui_area_clear(uVar3,iVar2 + 0x6c,iVar5 + 0xf2,iVar6 + 0x87);
        }
        if (DASHBOARD_WIDGET_MODE == '\0') {
          iVar2 = get_system_byte_1_alt();
          local_80 = 0x64616f4c;
          local_7c[0] = 0x676e69;
          local_94 = 0x6564614c;
          local_90 = CONCAT22(local_90._2_2_,0x6e);
          puVar14 = &local_80;
          if (iVar2 == 6) {
            puVar14 = &local_94;
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_area_clear(iVar2 + 0x1c,iVar5 + 0x51,iVar6 + 0xf2,iVar7 + 0x6c);
          uVar3 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar2 = iVar2 + 0x6c;
          iVar6 = iVar6 + 0x89;
          iVar5 = iVar5 + 0xf2;
        }
        else {
          if (DASHBOARD_WIDGET_MODE == '\x01') {
            iVar2 = get_system_byte_1_alt();
            puVar14 = &local_94;
            puVar13 = (undefined4 *)&LAB_000a915a_1;
            do {
              uVar3 = *puVar13;
              uVar4 = puVar13[1];
              puVar13 = puVar13 + 2;
              *puVar14 = uVar3;
              puVar14[1] = uVar4;
              puVar14 = puVar14 + 2;
            } while (puVar13 != (undefined4 *)0xa916b);
            puVar13 = &local_80;
            *(undefined1 *)puVar14 = 0;
            puVar14 = (undefined4 *)&LAB_000a917c_1;
            do {
              uVar3 = *puVar14;
              uVar4 = puVar14[1];
              puVar14 = puVar14 + 2;
              *puVar13 = uVar3;
              puVar13[1] = uVar4;
              puVar13 = puVar13 + 2;
            } while (puVar14 != (undefined4 *)&LAB_000a9194_1);
          }
          else {
            if (DASHBOARD_WIDGET_MODE != '\x02') {
              if (DASHBOARD_WIDGET_MODE != '\x03') goto LAB_0003741a;
              iVar2 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_utf_draw(0,&WIDGET_SPECIAL_TEXT,0,iVar2 + 0x1c,iVar5 + 0x51,iVar6 + 0xf2,
                           iVar7 + 0x6c,1,0,0,0,0);
              local_80 = 0;
              fill_memory_buffer(local_7c,0,0x54);
              uVar3 = calculate_string_length(&WIDGET_DATA_BUFFER);
              validate_memory_bounds(&local_80,&WIDGET_DATA_BUFFER,uVar3,0x58);
              iVar2 = calculate_string_length(&WIDGET_DATA_BUFFER);
              *(undefined1 *)((int)local_7c + iVar2 + -4) = 0x20;
              uVar3 = calculate_string_length(&WIDGET_METADATA_BUFFER);
              memcpy((int)local_7c + iVar2 + -3,&WIDGET_METADATA_BUFFER,uVar3);
              uVar3 = get_ui_x_offset();
              iVar2 = get_ui_y_offset();
              iVar5 = get_ui_x_offset();
              iVar6 = get_ui_y_offset();
              iVar5 = iVar5 + 0xf2;
              iVar2 = iVar2 + 0x6c;
              iVar6 = iVar6 + 0x87;
              puVar14 = &local_80;
              goto LAB_00037904;
            }
            iVar2 = get_system_byte_1_alt();
            puVar14 = &local_94;
            puVar13 = (undefined4 *)&LAB_000a9218_1;
            do {
              uVar3 = *puVar13;
              uVar4 = puVar13[1];
              puVar13 = puVar13 + 2;
              *puVar14 = uVar3;
              puVar14[1] = uVar4;
              puVar14 = puVar14 + 2;
            } while (puVar13 != (undefined4 *)0xa9229);
            puVar13 = &local_80;
            *(undefined2 *)puVar14 = 0x74;
            puVar14 = (undefined4 *)&LAB_000a922a_1;
            do {
              uVar3 = *puVar14;
              uVar4 = puVar14[1];
              puVar14 = puVar14 + 2;
              *puVar13 = uVar3;
              puVar13[1] = uVar4;
              puVar13 = puVar13 + 2;
            } while (puVar14 != (undefined4 *)&LAB_000a9242_1);
          }
          puVar14 = &local_94;
          if (iVar2 == 6) {
            puVar14 = &local_80;
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_area_clear(iVar2 + 0x1c,iVar5 + 0x51,iVar6 + 0xf2,iVar7 + 0x6c);
          uVar3 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar6 = iVar6 + 0x89;
          iVar2 = iVar2 + 0x6e;
          iVar5 = iVar5 + 0xf2;
        }
LAB_00037904:
        gui_utf_draw(0,puVar14,0,uVar3,iVar2,iVar5,iVar6,1,0,0,0,0);
      }
      else if (display_mode != 4) {
        return;
      }
LAB_0003741a:
      uVar15 = (uint)DASHBOARD_DATA_VERSION;
      if (uVar15 != 0) {
        if (uVar15 == 1) {
          iVar2 = 0;
          iVar5 = 0;
          do {
            iVar6 = iVar2 * 0x7f2;
            iVar2 = iVar2 + 1;
            if ((&STOCK_DATA_FLAGS)[iVar6] == '\x01') {
              iVar5 = iVar5 + 1;
            }
          } while (iVar2 != 4);
          cVar1 = *(char *)(dashboard_data + 0x68);
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              if (STOCK_DISPLAY_MODE != '\x01') {
                STOCK_DISPLAY_MODE = cVar1;
                iVar2 = get_ui_x_offset();
                uVar3 = get_ui_y_offset();
                iVar6 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                gui_area_clear(iVar2 + 0x100,uVar3,iVar6 + 0x23c,iVar7 + 0x88);
              }
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&LAB_000a9126_1,&LAB_000a95e6_1,(uint)*(byte *)(dashboard_data + 0x68)
                             );
                }
                else {
                  handle_heartbeat();
                }
              }
              if (iVar5 == 0) {
                log_system_status();
              }
              iVar2 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              uVar3 = 0x43;
              goto LAB_00037f2e;
            }
            if (cVar1 != '\x02') {
              return;
            }
            if (STOCK_DISPLAY_MODE != '\x02') {
              STOCK_DISPLAY_MODE = cVar1;
              iVar2 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_area_clear(iVar2 + 0x100,iVar5 + 4,iVar6 + 0x23c,iVar7 + 0x88);
            }
            iVar2 = 0;
            iVar5 = 0;
            do {
              iVar6 = iVar2 * 0x7f2;
              iVar2 = iVar2 + 1;
              if ((&STOCK_DATA_FLAGS)[iVar6] == '\x01') {
                iVar5 = iVar5 + 1;
              }
            } while (iVar2 != 4);
            uVar15 = (uint)CURRENT_STOCK_ID;
            STOCK_ENTRIES_COUNT = (undefined1)iVar5;
            cVar1 = (&STOCK_DATA_BUFFER)[uVar15 * 0x7f2];
            if (cVar1 == '\0') {
              iVar2 = get_ui_x_offset();
              iVar6 = get_ui_y_offset();
              iVar6 = iVar6 + 2;
              uVar3 = 0x46;
              iVar2 = iVar2 + 0x10a;
LAB_0003803a:
              gui_bmp_bitmap_draw(uVar3,iVar2,iVar6,0,0,0);
            }
            else {
              if (cVar1 == '\x01') {
                iVar2 = get_ui_x_offset();
                iVar6 = get_ui_y_offset();
                iVar6 = iVar6 + 2;
                uVar3 = 0x44;
                iVar2 = iVar2 + 0x10a;
                goto LAB_0003803a;
              }
              if (cVar1 == '\x02') {
                iVar2 = get_ui_x_offset();
                iVar6 = get_ui_y_offset();
                iVar6 = iVar6 + 2;
                uVar3 = 0x45;
                iVar2 = iVar2 + 0x10a;
                goto LAB_0003803a;
              }
            }
            if (iVar5 == 0) {
              iVar2 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_area_clear(iVar2 + 0x218,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c);
            }
            else {
              local_80 = 0;
              fill_memory_buffer(local_7c,0,0x1c);
              process_string_with_error_handling_and_validation
                        (&local_80,0x20,&LAB_000a9120_1,uVar15 + 1,iVar5);
              iVar2 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_utf_draw(0,&local_80,0,iVar2 + 0x218,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c,1,0,0,0,
                           0);
            }
            iVar8 = uVar15 * 0x7f2;
            iVar2 = get_ui_x_offset();
            uVar3 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            gui_utf_draw(0,iVar8 + 0x2000d71a,0,iVar2 + 0x126,uVar3,iVar5 + 0x200,iVar6 + 0x1b,1,0,0
                         ,0,0);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,iVar8 + 0x2000d73a,0,iVar2 + 0x10a,iVar5 + 0x1b,iVar6 + 0x232,
                         iVar7 + 0x36,1,0,0,0,0);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw_align_right
                      (0,iVar8 + 0x2000d77a,0,iVar2 + 0x1d2,iVar5 + 0x36,iVar6 + 0x232,iVar7 + 0x51,
                       1,0,0,0,0);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw_align_right
                      (0,iVar8 + 0x2000d78a,0,iVar2 + 0x1d2,iVar5 + 0x51,iVar6 + 0x232,iVar7 + 0x6c,
                       1,0,0,0,0);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw_align_right
                      (0,iVar8 + 0x2000d79a,0,iVar2 + 0x1d2,iVar5 + 0x6c,iVar6 + 0x232,iVar7 + 0x87,
                       1,0,0,0,0);
            iVar6 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar2 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar2 = iVar2 + 0x1c2;
            iVar6 = iVar6 + 0x10a;
            goto LAB_00038220;
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9126_1,&LAB_000a95e6_1);
            }
            else {
              handle_heartbeat(&LAB_000a9126_1,&LAB_000a95e6_1,0);
            }
          }
          if (STOCK_DISPLAY_MODE != *(char *)(dashboard_data + 0x68)) {
            STOCK_DISPLAY_MODE = *(char *)(dashboard_data + 0x68);
            iVar2 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            gui_area_clear(iVar2 + 0x100,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
          }
          if (iVar5 == 0) {
            log_system_status();
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x43,iVar2 + 0x10a,iVar5 + 2,0,0,0);
          iVar2 = get_system_byte_1_alt();
          if (iVar2 != 6) goto LAB_00037e16;
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar7 = iVar7 + 0x51;
          iVar6 = iVar6 + 0x236;
          iVar2 = iVar2 + 0x36;
          iVar5 = iVar5 + 0x182;
          goto LAB_00037e8e;
        }
        if (uVar15 != 2) {
          return;
        }
        iVar2 = 0;
        local_80 = 0;
        iVar5 = 0;
        fill_memory_buffer(local_7c,0,0x1c);
        do {
          if ((&NEWS_ENTRY_FLAGS)[iVar2 * 0x159] == '\x01') {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a91a4,&LAB_000a95e6_1,iVar2);
              }
              else {
                handle_heartbeat();
              }
            }
            iVar5 = iVar5 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        cVar1 = *(char *)(dashboard_data + 0x69);
        if (cVar1 != '\0') {
          if (cVar1 != '\x01') {
            if (cVar1 != '\x02') {
              return;
            }
            if (NEWS_DISPLAY_MODE != '\x02') {
              NEWS_DISPLAY_MODE = cVar1;
              iVar2 = get_ui_x_offset();
              uVar3 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_area_clear(iVar2 + 0x100,uVar3,iVar6 + 0x23c,iVar7 + 0x88);
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a91c0,&LAB_000a95e6_1,iVar5);
              }
              else {
                handle_heartbeat();
              }
            }
            NEWS_DATA_COUNT = (char)iVar5;
            iVar2 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            gui_bmp_bitmap_draw(0x47,iVar2 + 0x10a,iVar6 + 2,0,0,0);
            if (iVar5 != 0) {
              NEWS_DISPLAY_ACTIVE = '\x01';
              fill_memory_buffer(&local_80,0,0x20);
              process_string_with_error_handling_and_validation
                        (&local_80,0x20,&LAB_000a9120_1,CURRENT_NEWS_INDEX + 1,iVar5);
              iVar2 = (uint)CURRENT_NEWS_INDEX * 0x159;
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              iVar8 = get_ui_x_offset();
              iVar11 = get_ui_y_offset();
              gui_utf_draw(0,iVar2 + 0x200107e4,0,iVar6 + 0x128,iVar7 + 1,iVar8 + 0x212,
                           iVar11 + 0x1c,1,0,0,0,0);
              if (iVar5 == 1) {
                iVar8 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar6 = get_ui_x_offset();
                iVar5 = get_ui_y_offset();
                pcVar9 = " ";
              }
              else {
                iVar8 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar6 = get_ui_x_offset();
                iVar5 = get_ui_y_offset();
                pcVar9 = (char *)&local_80;
              }
              gui_utf_draw(0,pcVar9,0,iVar8 + 0x218,iVar7 + 1,iVar6 + 0x23a,iVar5 + 0x1c,1,0,0,0,0);
              iVar5 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar8 = get_ui_y_offset();
              iVar6 = iVar6 + 0x238;
              iVar5 = iVar5 + 0x10a;
              goto LAB_00038708;
            }
            iVar2 = dereference_pointer(&SYSTEM_FLAGS_REGISTER);
            if ((-1 < iVar2 << 0x1e) || (NEWS_DISPLAY_ACTIVE != '\x01')) goto LAB_000385f0;
            NEWS_DISPLAY_ACTIVE = (char)iVar5;
            iVar2 = get_work_mode();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x128,iVar6 + 1,iVar7 + 0x23a,iVar8 + 0x1c);
            iVar2 = get_work_mode();
            uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
            iVar2 = get_work_mode();
            uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x128,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c);
            iVar2 = get_work_mode();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x10a,iVar6 + 0x1c,iVar7 + 0x232,iVar8 + 0x88);
            iVar2 = get_work_mode();
            uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
            iVar2 = get_work_mode();
            uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
            iVar2 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar5 = iVar5 + 0x232;
            iVar2 = iVar2 + 0x10a;
            goto LAB_000385e8;
          }
          if (NEWS_DISPLAY_MODE != '\x01') {
            NEWS_DISPLAY_MODE = cVar1;
            iVar2 = get_ui_x_offset();
            uVar3 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_area_clear(iVar2 + 0x100,uVar3,iVar6 + 0x23c,iVar7 + 0x88);
          }
          if (iVar5 == 0) {
            clear_work_mode_flags();
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          uVar3 = 0x47;
LAB_00037f2e:
          gui_bmp_bitmap_draw(uVar3,iVar2 + 0x10a,iVar5 + 2,0,0,0);
          iVar2 = get_system_byte_1_alt();
          if (iVar2 == 6) {
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,&LAB_000a917c_1,0,iVar2 + 0x130,iVar5 + 0x2a,iVar6 + 0x236,iVar7 + 0x45,1
                         ,0,0,0,0);
            iVar5 = get_ui_x_offset();
            iVar2 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar5 = iVar5 + 0x15a;
LAB_0003846c:
            iVar7 = iVar7 + 0x60;
            iVar6 = iVar6 + 0x236;
            iVar2 = iVar2 + 0x45;
            puVar10 = &LAB_000a9194_1;
            goto LAB_00037e92;
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,&LAB_000a915a_1,0,iVar2 + 0x152,iVar5 + 0x2a,iVar6 + 0x236,iVar7 + 0x45,1,0
                       ,0,0,0);
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar5 = iVar5 + 0x152;
          goto LAB_00037fac;
        }
        if (NEWS_DISPLAY_MODE != '\0') {
          NEWS_DISPLAY_MODE = cVar1;
          iVar2 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          gui_area_clear(iVar2 + 0x100,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
        }
        if (iVar5 == 0) {
          clear_work_mode_flags();
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x47,iVar2 + 0x10a,iVar5 + 2,0,0,0);
        iVar2 = get_system_byte_1_alt();
        if (iVar2 == 6) {
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar7 = iVar7 + 0x51;
          iVar6 = iVar6 + 0x236;
          iVar2 = iVar2 + 0x36;
          iVar5 = iVar5 + 0x17a;
          goto LAB_00037e8e;
        }
LAB_00037e16:
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar5 = iVar5 + 0x17a;
        goto LAB_00037e4a;
      }
      local_80 = uVar15;
      fill_memory_buffer(local_7c,0,0x1c);
      iVar2 = 0;
      iVar5 = 0;
      do {
        if (*(char *)(iVar2 * 0x143 + *(int *)(system_data + 0x1020) + 3) == '\x01') {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a90de,&LAB_000a95e6_1,iVar2);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar5 = iVar5 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a9100,&LAB_000a95e6_1,iVar5);
        }
        else {
          handle_heartbeat();
        }
      }
      STOCK_DATA_COUNT = (char)iVar5;
      iVar2 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3b,iVar2 + 0x10a,iVar6 + 2,0,0,0);
      if (iVar5 == 0) {
        iVar2 = dereference_pointer(&SYSTEM_FLAGS_REGISTER);
        if ((iVar2 << 0x1e < 0) && (STOCK_DISPLAY_ACTIVE == '\x01')) {
          STOCK_DISPLAY_ACTIVE = (char)iVar5;
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x128,iVar6 + 1,iVar7 + 0x23a,iVar8 + 0x1c);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x128,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c);
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x10a,iVar6 + 0x1c,iVar7 + 0x232,iVar8 + 0x88);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x10a,iVar5 + 0x1c,iVar6 + 0x232,iVar7 + 0x88)
          ;
        }
        reset_system_parameter_and_byte();
        render_ui_status_display();
        return;
      }
      STOCK_DISPLAY_ACTIVE = '\x01';
      fill_memory_buffer(&local_80,0,0x20);
      process_string_with_error_handling_and_validation
                (&local_80,0x20,&LAB_000a9120_1,CURRENT_STOCK_INDEX + 1,iVar5);
      uVar15 = (uint)CURRENT_STOCK_INDEX;
      iVar11 = *(int *)(system_data + 0x1020);
      iVar2 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,iVar11 + uVar15 * 0x143 + 4,0,iVar2 + 0x128,iVar6 + 1,iVar7 + 0x212,
                   iVar8 + 0x1c,1,0,0,0,0);
      if (iVar5 == 1) {
        iVar7 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        pcVar9 = " ";
      }
      else {
        iVar7 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        pcVar9 = (char *)&local_80;
      }
      gui_utf_draw(0,pcVar9,0,iVar7 + 0x218,iVar6 + 1,iVar5 + 0x23a,iVar2 + 0x1c,1,0,0,0,0);
      iVar2 = uVar15 * 0x143 + 0x2d + *(int *)(system_data + 0x1020);
      iVar5 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      iVar6 = iVar6 + 0x238;
      iVar5 = iVar5 + 0x10a;
    }
    else {
      local_a4 = '\0';
      uStack_a3 = 0;
      uStack_a2 = 0;
      local_a0 = 0;
      uStack_9f = 0;
      uStack_9e = 0;
      local_9c = 0;
      uVar3 = get_work_mode_timestamp();
      unix_timestamp_to_datetime(uVar3,&local_a4);
      uVar3 = get_data_by_index_and_type((char)uStack_a2 + '.');
      cVar1 = calculate_complex_mathematical_formula_with_division
                        (CONCAT11(uStack_a3,local_a4),uStack_a2,CONCAT11(uStack_9f,local_a0));
      uVar4 = get_data_by_index_and_type(cVar1 + '(');
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      uStack_88 = 0;
      handle_buffer_overflow_condition
                (&local_94,0,0x10,&LAB_000a9078,uVar4,uVar3,CONCAT11(uStack_9f,local_a0));
      iVar2 = get_ui_x_offset();
      uVar3 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,&local_94,3,iVar2 + 0x2e,uVar3,iVar5 + 0xcd,iVar6 + 0x1b,1,0,0,0,0);
      iVar2 = get_work_mode();
      iVar2 = *(byte *)(*(int *)(iVar2 + 0xfec) + 0x5e) - 1;
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      uVar3 = get_work_mode_timestamp();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      EVEN_DASHBOARD_CLOCK_32x_TTF
                (uVar3,iVar5 + 0x2e,iVar6 + 0x34,iVar7 + 0xc3,iVar8 + 0x55,1,iVar2);
      if (display_mode == 1) {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x3e,iVar2 + 0x2e,iVar5 + 0x6d,0,0,0);
        if (*(char *)(dashboard_data + 0x5f) == '\x01') {
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x42,iVar2 + 0x8e,iVar5 + 0x6d,0,0,0);
        }
        else {
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x8e,iVar6 + 0x6d,iVar7 + 0xa6,iVar8 + 0x88);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x8e,iVar5 + 0x6d,iVar6 + 0xa6,iVar7 + 0x88);
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x4f,iVar2 + 0x214,iVar5 + 4,0,0,0);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x4e,iVar2 + 0xd4,iVar5 + 4,0,0,0);
      }
      else if (display_mode != 4) {
        return;
      }
      uVar15 = (uint)DASHBOARD_DATA_VERSION;
      if (uVar15 != 0) {
        if (uVar15 == 1) {
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x43,iVar2 + 0x10a,iVar5 + 2,0,0,0);
          iVar2 = get_system_byte_1_alt();
          if (iVar2 == 6) {
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,&LAB_000a91f2,0,iVar2 + 0x116,iVar5 + 0x31,iVar6 + 0x208,iVar7 + 0x4c,1,0
                         ,0,0,0);
            iVar5 = get_ui_x_offset();
            iVar2 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
LAB_00038e6e:
            iVar6 = iVar6 + 0x208;
            iVar5 = iVar5 + 0x11e;
            goto LAB_00038e72;
          }
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar7 = iVar7 + 0x51;
          iVar6 = iVar6 + 0x208;
          iVar2 = iVar2 + 0x36;
          iVar5 = iVar5 + 0x106;
        }
        else {
          if (uVar15 != 2) {
            return;
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x47,iVar2 + 0x10a,iVar5 + 2,0,0,0);
          iVar2 = get_system_byte_1_alt();
          if (iVar2 == 6) {
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,&LAB_000a91f2,0,iVar2 + 0x116,iVar5 + 0x31,iVar6 + 0x208,iVar7 + 0x4c,1,0
                         ,0,0,0);
            iVar5 = get_ui_x_offset();
            iVar2 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            goto LAB_00038e6e;
          }
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar7 = iVar7 + 0x51;
          iVar6 = iVar6 + 0x208;
          iVar2 = iVar2 + 0x36;
          iVar5 = iVar5 + 0x106;
        }
        goto LAB_00038dfc;
      }
      local_80 = uVar15;
      fill_memory_buffer(local_7c,0,0x1c);
      iVar2 = 0;
      iVar5 = 0;
      do {
        if (*(char *)(iVar2 * 0x143 + *(int *)(system_data + 0x1020) + 3) == '\x01') {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a90de,&LAB_000a95e6_1,iVar2);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar5 = iVar5 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a9100,&LAB_000a95e6_1,iVar5);
        }
        else {
          handle_heartbeat();
        }
      }
      STOCK_DATA_COUNT = (char)iVar5;
      iVar2 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3b,iVar2 + 0xe0,iVar6 + 2,0,0,0);
      if (iVar5 == 0) {
        iVar2 = dereference_pointer(&SYSTEM_FLAGS_REGISTER);
        if ((iVar2 << 0x1e < 0) && (STOCK_DISPLAY_ACTIVE == '\x01')) {
          STOCK_DISPLAY_ACTIVE = (char)iVar5;
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x128,iVar6 + 1,iVar7 + 0x208,iVar8 + 0x1c);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x128,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c);
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x10a,iVar6 + 0x1c,iVar7 + 0x208,iVar8 + 0x88);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x10a,iVar5 + 0x1c,iVar6 + 0x208,iVar7 + 0x88)
          ;
        }
        reset_system_parameter_and_byte();
        uVar15 = get_system_byte_1_alt();
        if (CURRENT_LANGUAGE_ID != uVar15) {
          CURRENT_LANGUAGE_ID = (byte)uVar15;
          iVar2 = get_work_mode();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x10a,iVar6 + 0x1c,iVar7 + 0x232,iVar8 + 0x88);
          iVar2 = get_work_mode();
          uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
          iVar2 = get_work_mode();
          uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x10a,iVar5 + 0x1c,iVar6 + 0x232,iVar7 + 0x88)
          ;
        }
        if (uVar15 == 6) {
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,&LAB_000a8ec6,0,iVar2 + 0x108,iVar5 + 0x28,iVar6 + 0x1e4,iVar7 + 0x43,1,0,0
                       ,0,0);
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar6 = iVar6 + 0x20c;
          goto LAB_00038c66;
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_utf_draw(0,&LAB_000a8ea0_1,0,iVar2 + 0x118,iVar5 + 0x28,iVar6 + 0x1e0,iVar7 + 0x43,1,0,0
                     ,0,0);
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar6 = iVar6 + 0x1da;
        iVar5 = iVar5 + 0x126;
LAB_00038ad4:
        iVar7 = iVar7 + 0x5e;
        iVar2 = iVar2 + 0x43;
        puVar10 = &LAB_000a8eb4_1;
        goto LAB_00037e92;
      }
      STOCK_DISPLAY_ACTIVE = '\x01';
      fill_memory_buffer(&local_80,0,0x20);
      process_string_with_error_handling_and_validation
                (&local_80,0x20,&LAB_000a9120_1,CURRENT_STOCK_INDEX + 1,iVar5);
      uVar15 = (uint)CURRENT_STOCK_INDEX;
      iVar11 = *(int *)(system_data + 0x1020);
      iVar2 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,iVar11 + uVar15 * 0x143 + 4,0,iVar2 + 0xfc,iVar6 + 1,iVar7 + 0x1d6,iVar8 + 0x1c
                   ,1,0,0,0,0);
      if (iVar5 == 1) {
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        pcVar9 = " ";
      }
      else {
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        pcVar9 = (char *)&local_80;
      }
      gui_utf_draw(0,pcVar9,0,iVar5 + 0x1e4,iVar2 + 1,iVar7 + 0x212,iVar6 + 0x1c,1,0,0,0,0);
      iVar2 = uVar15 * 0x143 + 0x2d + *(int *)(system_data + 0x1020);
      iVar5 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      iVar6 = iVar6 + 0x208;
      iVar5 = iVar5 + 0xe0;
    }
    iVar8 = iVar8 + 0x88;
    iVar7 = iVar7 + 0x1c;
LAB_00037d2a:
    gui_utf_draw_dark_light_split(0,iVar2,0,iVar5,iVar7,iVar6,iVar8,4,0x200b,0,0,0);
    return;
  }
  iVar2 = check_work_mode_and_ancs_status();
  if (2 < LOG_LEVEL) {
    puVar10 = (undefined1 *)0xa900c;
    if (IS_DEBUG == 0) {
      if (iVar2 != 1) {
        puVar10 = &LAB_000a9008_1;
      }
      DEBUG_PRINT(&LAB_000a902c_1,&LAB_000a95e6_1,puVar10);
    }
    else {
      if (iVar2 != 1) {
        puVar10 = &LAB_000a9008_1;
      }
      handle_heartbeat(&LAB_000a902c_1,&LAB_000a95e6_1,puVar10);
    }
  }
  if (((DASHBOARD_DISPLAY_STATE != iVar2) || (DASHBOARD_ORIENTATION_MODE != '\x01')) ||
     (DASHBOARD_DATA_VERSION != *(byte *)(dashboard_data + 0x65))) {
    gui_screen_clear();
    DASHBOARD_DATA_VERSION = *(byte *)(dashboard_data + 0x65);
    DASHBOARD_ORIENTATION_MODE = *(char *)(dashboard_data + 100);
    DASHBOARD_DISPLAY_STATE = iVar2;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a904c,&LAB_000a95e6_1);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  local_a4 = '\0';
  uStack_a3 = 0;
  uStack_a2 = 0;
  local_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  local_9c = 0;
  if (iVar2 == 1) {
    uVar3 = get_work_mode_timestamp();
    unix_timestamp_to_datetime(uVar3,&local_a4);
    uVar3 = get_data_by_index_and_type((char)uStack_a2 + '.');
    cVar1 = calculate_complex_mathematical_formula_with_division
                      (CONCAT11(uStack_a3,local_a4),uStack_a2,CONCAT11(uStack_9f,local_a0));
    uVar4 = get_data_by_index_and_type(cVar1 + '(');
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    uStack_88 = 0;
    handle_buffer_overflow_condition
              (&local_94,0,0x10,&LAB_000a9078,uVar4,uVar3,CONCAT11(uStack_9f,local_a0));
    uVar3 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,&local_94,3,uVar3,iVar2 + 2,iVar5 + 0x88,iVar6 + 0x1d,1,0,0,0,0);
    iVar2 = get_work_mode();
    iVar2 = *(byte *)(*(int *)(iVar2 + 0xfec) + 0x5e) - 1;
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    uVar3 = get_work_mode_timestamp();
    uVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar3,uVar4,iVar5 + 0x34,iVar6 + 0x96,iVar7 + 0x55,1,iVar2);
    if (display_mode == 1) {
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x4f,iVar2 + 0x240,iVar5 + 4,0,0,0);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x4e,iVar2 + 0xac,iVar5 + 4,0,0,0);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a9082,&LAB_000a95e6_1,(uint)*(byte *)(dashboard_data + 4));
        }
        else {
          handle_heartbeat();
        }
      }
      local_80 = 0;
      local_7c[0] = 0;
      if ((byte)(*(char *)(dashboard_data + 4) - 1U) < 0xfe) {
        uVar3 = get_value_by_index_limited_range();
        uVar4 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        gui_bmp_bitmap_draw(uVar3,uVar4,iVar2 + 0x6d,0,0,0);
        iVar2 = get_work_mode();
        iVar5 = (int)*(char *)(dashboard_data + 5);
        local_80 = (uint)*(byte *)(*(int *)(iVar2 + 0xfec) + 0x5d);
        if (local_80 == 0) {
          local_7c[0] = local_80;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a909e_1,&LAB_000a95e6_1,iVar5);
            }
            else {
              handle_heartbeat();
            }
          }
          process_string_with_error_handling_and_validation(&local_80,8,"%d",iVar5);
          local_b0 = 0;
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_string_draw(3,&local_80,iVar2 + 0x1c,iVar5 + 0x6d,iVar6 + 0x58,iVar7 + 0x88,&local_b0)
          ;
          bVar12 = 0x2a;
        }
        else {
          local_80 = 0;
          local_7c[0] = 0;
          iVar2 = (iVar5 * 9) / 5 + 0x20;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a90b6_1,&LAB_000a95e6_1,iVar2);
            }
            else {
              handle_heartbeat();
            }
          }
          process_string_with_error_handling_and_validation(&local_80,8,"%d",iVar2);
          local_b0 = 0;
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_string_draw(3,&local_80,iVar2 + 0x1c,iVar5 + 0x6d,iVar6 + 0x58,iVar7 + 0x88,&local_b0)
          ;
          bVar12 = 0x23;
        }
        local_7c[0] = 0;
        local_80 = (uint)bVar12;
        iVar2 = get_ui_x_offset();
        iVar7 = iVar2 + 0x1c + local_b0;
        iVar2 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar5 = local_b0 + iVar5;
        iVar6 = get_ui_y_offset();
        gui_string_draw(3,&local_80,iVar7,iVar2 + 0x6d,iVar5 + 0x67,iVar6 + 0x88,0);
      }
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3c,iVar2 + 0x60,iVar5 + 0x6d,0,0,0);
      iVar2 = calculate_next_timeout_message_state();
      if (iVar2 < 0xb) {
        pcVar9 = "%d";
      }
      else {
        pcVar9 = "%d+";
        iVar2 = 10;
      }
      local_80 = 0;
      local_7c[0] = 0;
      process_string_with_error_handling_and_validation(&local_80,8,pcVar9,iVar2);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      gui_string_draw(3,&local_80,iVar2 + 0x7c,iVar5 + 0x6d,iVar6 + 0x9a,iVar7 + 0x88,0);
      if (*(char *)(dashboard_data + 0x5f) == '\x01') {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x42,iVar2 + 0x8c,iVar5 + 1,0,0,0);
      }
      else {
        iVar2 = get_work_mode();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x8c,iVar6 + 1,iVar7 + 0xa4,iVar8 + 0x1c);
        iVar2 = get_work_mode();
        uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
        iVar2 = get_work_mode();
        uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x8c,iVar5 + 1,iVar6 + 0xa4,iVar7 + 0x1c);
      }
    }
    else if (display_mode != 4) {
      return;
    }
    uVar15 = (uint)DASHBOARD_DATA_VERSION;
    if (uVar15 != 0) {
      if (uVar15 == 1) {
        iVar2 = 0;
        iVar5 = 0;
        do {
          iVar6 = iVar2 * 0x7f2;
          iVar2 = iVar2 + 1;
          if ((&STOCK_DATA_FLAGS)[iVar6] == '\x01') {
            iVar5 = iVar5 + 1;
          }
        } while (iVar2 != 4);
        cVar1 = *(char *)(dashboard_data + 0x68);
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            if (STOCK_DISPLAY_MODE != '\x01') {
              STOCK_DISPLAY_MODE = cVar1;
              iVar2 = get_ui_x_offset();
              iVar6 = get_ui_y_offset();
              iVar7 = get_ui_x_offset();
              iVar8 = get_ui_y_offset();
              gui_area_clear(iVar2 + 0xae,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
            }
            if (iVar5 == 0) {
              log_system_status();
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a9126_1,&LAB_000a95e6_1,(uint)*(byte *)(dashboard_data + 0x68));
              }
              else {
                handle_heartbeat();
              }
            }
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            uVar3 = 0x43;
            goto LAB_0003998c;
          }
          if (cVar1 != '\x02') {
            return;
          }
          if (STOCK_DISPLAY_MODE != '\x02') {
            STOCK_DISPLAY_MODE = cVar1;
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_area_clear(iVar2 + 0xae,iVar5 + 4,iVar6 + 0x23c,iVar7 + 0x88);
          }
          iVar2 = 0;
          iVar5 = 0;
          do {
            iVar6 = iVar2 * 0x7f2;
            iVar2 = iVar2 + 1;
            if ((&STOCK_DATA_FLAGS)[iVar6] == '\x01') {
              iVar5 = iVar5 + 1;
            }
          } while (iVar2 != 4);
          STOCK_ENTRIES_COUNT = (undefined1)iVar5;
          uVar15 = (uint)CURRENT_STOCK_ID;
          cVar1 = (&STOCK_DATA_BUFFER)[uVar15 * 0x7f2];
          if (cVar1 == '\0') {
            iVar2 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar6 = iVar6 + 2;
            uVar3 = 0x46;
            iVar2 = iVar2 + 0xba;
LAB_00039ab6:
            gui_bmp_bitmap_draw(uVar3,iVar2,iVar6,0,0,0);
          }
          else {
            if (cVar1 == '\x01') {
              iVar2 = get_ui_x_offset();
              iVar6 = get_ui_y_offset();
              iVar6 = iVar6 + 2;
              uVar3 = 0x44;
              iVar2 = iVar2 + 0xba;
              goto LAB_00039ab6;
            }
            if (cVar1 == '\x02') {
              iVar2 = get_ui_x_offset();
              iVar6 = get_ui_y_offset();
              iVar6 = iVar6 + 2;
              uVar3 = 0x45;
              iVar2 = iVar2 + 0xba;
              goto LAB_00039ab6;
            }
          }
          if (iVar5 == 0) {
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_area_clear(iVar2 + 0x20e,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c);
          }
          else {
            local_80 = 0;
            fill_memory_buffer(local_7c,0,0x1c);
            process_string_with_error_handling_and_validation
                      (&local_80,0x20,&LAB_000a9120_1,uVar15 + 1,iVar5);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,&local_80,0,iVar2 + 0x20e,iVar5 + 1,iVar6 + 0x23a,iVar7 + 0x1c,1,0,0,0,0)
            ;
          }
          iVar8 = uVar15 * 0x7f2;
          iVar2 = get_ui_x_offset();
          uVar3 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          gui_utf_draw(0,iVar8 + 0x2000d71a,0,iVar2 + 0xd6,uVar3,iVar5 + 0x202,iVar6 + 0x1b,1,0,0,0,
                       0);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,iVar8 + 0x2000d73a,0,iVar2 + 0xba,iVar5 + 0x1b,iVar6 + 0x234,iVar7 + 0x36,1
                       ,0,0,0,0);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw_align_right
                    (0,iVar8 + 0x2000d77a,0,iVar2 + 0x182,iVar5 + 0x36,iVar6 + 0x234,iVar7 + 0x51,1,
                     0,0,0,0);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw_align_right
                    (0,iVar8 + 0x2000d78a,0,iVar2 + 0x182,iVar5 + 0x51,iVar6 + 0x234,iVar7 + 0x6c,1,
                     0,0,0,0);
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw_align_right
                    (0,iVar8 + 0x2000d79a,0,iVar2 + 0x182,iVar5 + 0x6c,iVar6 + 0x234,iVar7 + 0x87,1,
                     0,0,0,0);
          iVar6 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar2 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar2 = iVar2 + 0x172;
          iVar6 = iVar6 + 0xba;
LAB_00038220:
          gui_bitmap_draw(iVar6,iVar5 + 0x36,iVar2,iVar7 + 0x88,iVar8 + 0x2000d7aa,0xf);
          return;
        }
        if (STOCK_DISPLAY_MODE != '\0') {
          STOCK_DISPLAY_MODE = cVar1;
          iVar2 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          gui_area_clear(iVar2 + 0xae,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
        }
        if (iVar5 == 0) {
          log_system_status();
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9126_1,&LAB_000a95e6_1,(uint)*(byte *)(dashboard_data + 0x68));
          }
          else {
            handle_heartbeat();
          }
        }
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        uVar3 = 0x43;
      }
      else {
        if (uVar15 != 2) {
          return;
        }
        iVar2 = 0;
        local_80 = 0;
        iVar5 = 0;
        fill_memory_buffer(local_7c,0,0x1c);
        do {
          if ((&NEWS_ENTRY_FLAGS)[iVar2 * 0x159] == '\x01') {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a91a4,&LAB_000a95e6_1,iVar2);
              }
              else {
                handle_heartbeat();
              }
            }
            iVar5 = iVar5 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        cVar1 = *(char *)(dashboard_data + 0x69);
        if (cVar1 != '\0') {
          if (cVar1 != '\x01') {
            if (cVar1 != '\x02') {
              return;
            }
            if (NEWS_DISPLAY_MODE != '\x02') {
              NEWS_DISPLAY_MODE = cVar1;
              iVar2 = get_ui_x_offset();
              iVar6 = get_ui_y_offset();
              iVar7 = get_ui_x_offset();
              iVar8 = get_ui_y_offset();
              gui_area_clear(iVar2 + 0xae,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&LAB_000a91c0,&LAB_000a95e6_1,iVar5);
              }
              else {
                handle_heartbeat();
              }
            }
            NEWS_DATA_COUNT = (char)iVar5;
            iVar2 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            gui_bmp_bitmap_draw(0x47,iVar2 + 0xba,iVar6 + 2,0,0,0);
            if (iVar5 != 0) {
              NEWS_DISPLAY_ACTIVE = '\x01';
              fill_memory_buffer(&local_80,0,0x20);
              process_string_with_error_handling_and_validation
                        (&local_80,0x20,&LAB_000a9120_1,CURRENT_NEWS_INDEX + 1,iVar5);
              iVar2 = (uint)CURRENT_NEWS_INDEX * 0x159;
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              iVar8 = get_ui_x_offset();
              iVar11 = get_ui_y_offset();
              gui_utf_draw(0,iVar2 + 0x200107e4,0,iVar6 + 0xd6,iVar7 + 1,iVar8 + 0x200,iVar11 + 0x1c
                           ,1,0,0,0,0);
              if (iVar5 == 1) {
                iVar5 = get_ui_x_offset();
                iVar6 = get_ui_y_offset();
                iVar7 = get_ui_x_offset();
                iVar8 = get_ui_y_offset();
                pcVar9 = " ";
              }
              else {
                iVar5 = get_ui_x_offset();
                iVar6 = get_ui_y_offset();
                iVar7 = get_ui_x_offset();
                iVar8 = get_ui_y_offset();
                pcVar9 = (char *)&local_80;
              }
              gui_utf_draw(0,pcVar9,0,iVar5 + 0x216,iVar6 + 1,iVar7 + 0x23a,iVar8 + 0x1c,1,0,0,0,0);
              iVar5 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar8 = get_ui_y_offset();
              iVar6 = iVar6 + 0x236;
              iVar5 = iVar5 + 0xba;
LAB_00038708:
              iVar8 = iVar8 + 0x88;
              iVar7 = iVar7 + 0x1c;
              iVar2 = iVar2 + 0x20010824;
              goto LAB_00037d2a;
            }
            iVar2 = dereference_pointer(&SYSTEM_FLAGS_REGISTER);
            if ((-1 < iVar2 << 0x1e) || (NEWS_DISPLAY_ACTIVE != '\x01')) goto LAB_000385f0;
            NEWS_DISPLAY_ACTIVE = (char)iVar5;
            iVar2 = get_work_mode();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xd4,iVar6 + 1,iVar7 + 0x23c,iVar8 + 0x1c);
            iVar2 = get_work_mode();
            uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
            iVar2 = get_work_mode();
            uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xd4,iVar5 + 1,iVar6 + 0x23c,iVar7 + 0x1c);
            iVar2 = get_work_mode();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xba,iVar6 + 0x1c,iVar7 + 0x234,iVar8 + 0x88);
            iVar2 = get_work_mode();
            uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
            iVar2 = get_work_mode();
            uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
            iVar2 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar5 = iVar5 + 0x234;
            iVar2 = iVar2 + 0xba;
LAB_000385e8:
            _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2,iVar7 + 0x1c,iVar5,iVar6 + 0x88);
LAB_000385f0:
            clear_work_mode_flags();
            return;
          }
          if (NEWS_DISPLAY_MODE != '\x01') {
            NEWS_DISPLAY_MODE = cVar1;
            iVar2 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            gui_area_clear(iVar2 + 0xae,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
          }
          if (iVar5 == 0) {
            clear_work_mode_flags();
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          uVar3 = 0x47;
LAB_0003998c:
          gui_bmp_bitmap_draw(uVar3,iVar2 + 0xba,iVar5 + 2,0,0,0);
          iVar2 = get_system_byte_1_alt();
          if (iVar2 == 6) {
            iVar2 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,&LAB_000a917c_1,0,iVar2 + 0x108,iVar5 + 0x2a,iVar6 + 0x236,iVar7 + 0x45,1
                         ,0,0,0,0);
            iVar5 = get_ui_x_offset();
            iVar2 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar5 = iVar5 + 0x132;
            goto LAB_0003846c;
          }
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,&LAB_000a915a_1,0,iVar2 + 0x12a,iVar5 + 0x2a,iVar6 + 0x236,iVar7 + 0x45,1,0
                       ,0,0,0);
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar5 = iVar5 + 0x12a;
LAB_00037fac:
          iVar7 = iVar7 + 0x60;
          iVar6 = iVar6 + 0x236;
          iVar2 = iVar2 + 0x45;
          puVar10 = &LAB_000a916c;
          goto LAB_00037e92;
        }
        if (NEWS_DISPLAY_MODE != '\0') {
          NEWS_DISPLAY_MODE = cVar1;
          iVar2 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          gui_area_clear(iVar2 + 0xae,iVar6 + 4,iVar7 + 0x23c,iVar8 + 0x88);
        }
        if (iVar5 == 0) {
          clear_work_mode_flags();
        }
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        uVar3 = 0x47;
      }
      gui_bmp_bitmap_draw(uVar3,iVar5 + 0xba,iVar2 + 2,0,0,0);
      iVar2 = get_system_byte_1_alt();
      if (iVar2 == 6) {
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar7 = iVar7 + 0x51;
        iVar6 = iVar6 + 0x236;
        iVar2 = iVar2 + 0x36;
        iVar5 = iVar5 + 0x154;
LAB_00037e8e:
        puVar10 = &LAB_000a9154_1;
        goto LAB_00037e92;
      }
      iVar5 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar5 = iVar5 + 0x154;
LAB_00037e4a:
      iVar7 = iVar7 + 0x51;
      iVar6 = iVar6 + 0x236;
      iVar2 = iVar2 + 0x36;
      puVar10 = &LAB_000a914c_1;
      goto LAB_00037e92;
    }
    local_80 = uVar15;
    fill_memory_buffer(local_7c,0,0x1c);
    iVar2 = 0;
    iVar5 = 0;
    do {
      if (*(char *)(iVar2 * 0x143 + *(int *)(system_data + 0x1020) + 3) == '\x01') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a90de,&LAB_000a95e6_1,iVar2);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar5 = iVar5 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a9100,&LAB_000a95e6_1,iVar5);
      }
      else {
        handle_heartbeat();
      }
    }
    STOCK_DATA_COUNT = (char)iVar5;
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x3b,iVar2 + 0xba,iVar6 + 1,0,0,0);
    if (iVar5 != 0) {
      STOCK_DISPLAY_ACTIVE = '\x01';
      fill_memory_buffer(&local_80,0,0x20);
      process_string_with_error_handling_and_validation
                (&local_80,0x20,&LAB_000a9120_1,CURRENT_STOCK_INDEX + 1,iVar5);
      iVar11 = (uint)CURRENT_STOCK_INDEX * 0x143;
      local_c8 = *(int *)(system_data + 0x1020) + iVar11 + 4;
      iVar2 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
LAB_000397a0:
      gui_utf_draw(0,local_c8,0,iVar2 + 0xd6,iVar6 + 1,iVar7 + 0x22e,iVar8 + 0x1c,1,0,0,0,0);
      if (iVar5 == 1) {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        pcVar9 = " ";
      }
      else {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        pcVar9 = (char *)&local_80;
      }
      gui_utf_draw(0,pcVar9,0,iVar2 + 0x20e,iVar5 + 1,iVar7 + 0x23a,iVar6 + 0x1c,1,0,0,0,0);
      iVar2 = iVar11 + 0x2d + *(int *)(system_data + 0x1020);
      iVar5 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      iVar8 = iVar8 + 0x88;
      iVar6 = iVar6 + 0x238;
      iVar7 = iVar7 + 0x1c;
      iVar5 = iVar5 + 0xba;
      goto LAB_00037d2a;
    }
    iVar2 = dereference_pointer(&SYSTEM_FLAGS_REGISTER);
    if ((iVar2 << 0x1e < 0) && (STOCK_DISPLAY_ACTIVE == '\x01')) {
      STOCK_DISPLAY_ACTIVE = (char)iVar5;
      iVar2 = get_work_mode();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xd6,iVar6 + 1,iVar7 + 0x22e,iVar8 + 0x1c);
      iVar2 = get_work_mode();
      uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xd6,iVar5 + 1,iVar6 + 0x22e,iVar7 + 0x1c);
      iVar2 = get_work_mode();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xba,iVar6 + 0x1c,iVar7 + 0x238,iVar8 + 0x88);
      iVar2 = get_work_mode();
      uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xba,iVar5 + 0x1c,iVar6 + 0x238,iVar7 + 0x88);
    }
    reset_system_parameter_and_byte();
    uVar15 = get_system_byte_1_alt();
    if (CURRENT_LANGUAGE_ID != uVar15) {
      CURRENT_LANGUAGE_ID = (byte)uVar15;
      iVar2 = get_work_mode();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xd2,iVar6 + 0x1c,iVar7 + 0x232,iVar8 + 0x88);
      iVar2 = get_work_mode();
      uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xd2,iVar5 + 0x1c,iVar6 + 0x232,iVar7 + 0x88);
    }
    if (uVar15 != 6) {
LAB_00039318:
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      gui_utf_draw(0,&LAB_000a8ea0_1,0,iVar2 + 0x11c,iVar5 + 0x28,iVar6 + 0x236,iVar7 + 0x43,1,0,0,0
                   ,0);
      iVar5 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar6 = iVar6 + 0x236;
      iVar5 = iVar5 + 0x128;
      goto LAB_00038ad4;
    }
    iVar2 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    gui_utf_draw(0,&LAB_000a8ec6,0,iVar2 + 0x10a,iVar5 + 0x28,iVar6 + 0x236,iVar7 + 0x43,1,0,0,0,0);
    iVar5 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    iVar6 = iVar6 + 0x236;
    iVar5 = iVar5 + 0x132;
  }
  else {
    uVar3 = get_work_mode_timestamp();
    unix_timestamp_to_datetime(uVar3,&local_a4);
    uVar3 = get_data_by_index_and_type((char)uStack_a2 + '.');
    cVar1 = calculate_complex_mathematical_formula_with_division
                      (CONCAT11(uStack_a3,local_a4),uStack_a2,CONCAT11(uStack_9f,local_a0));
    uVar4 = get_data_by_index_and_type(cVar1 + '(');
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    uStack_88 = 0;
    handle_buffer_overflow_condition
              (&local_94,0,0x10,&LAB_000a9078,uVar4,uVar3,CONCAT11(uStack_9f,local_a0));
    uVar3 = get_ui_x_offset();
    uVar4 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    gui_utf_draw(0,&local_94,3,uVar3,uVar4,iVar2 + 0xa0,iVar5 + 0x1b,1,0,0,0,0);
    iVar2 = get_work_mode();
    iVar2 = *(byte *)(*(int *)(iVar2 + 0xfec) + 0x5e) - 1;
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    uVar3 = get_work_mode_timestamp();
    uVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar3,uVar4,iVar5 + 0x34,iVar6 + 0x96,iVar7 + 0x55,1,iVar2);
    if (display_mode == 1) {
      uVar3 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3e,uVar3,iVar2 + 0x6d,0,0,0);
      if (*(char *)(dashboard_data + 0x5f) == '\x01') {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x42,iVar2 + 0x60,iVar5 + 0x6d,0,0,0);
      }
      else {
        iVar2 = get_work_mode();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0x60,iVar6 + 0x6d,iVar7 + 0x78,iVar8 + 0x88);
        iVar2 = get_work_mode();
        uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
        iVar2 = get_work_mode();
        uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0x60,iVar5 + 0x6d,iVar6 + 0x78,iVar7 + 0x88);
      }
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x4f,iVar2 + 0x240,iVar5 + 4,0,0,0);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x4e,iVar2 + 0xac,iVar5 + 4,0,0,0);
    }
    else if (display_mode != 4) {
      return;
    }
    uVar15 = (uint)DASHBOARD_DATA_VERSION;
    if (uVar15 != 0) {
      if (uVar15 == 1) {
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x43,iVar2 + 0xba,iVar5 + 2,0,0,0);
        iVar2 = get_system_byte_1_alt();
        if (iVar2 == 6) {
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,&LAB_000a91f2,0,iVar2 + 0x118,iVar5 + 0x31,iVar6 + 0x230,iVar7 + 0x4c,1,0,0
                       ,0,0);
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
LAB_0003a798:
          iVar6 = iVar6 + 0x230;
          iVar5 = iVar5 + 0x122;
LAB_00038e72:
          iVar7 = iVar7 + 0x67;
          iVar2 = iVar2 + 0x4c;
          puVar10 = &LAB_000a9206;
          goto LAB_00037e92;
        }
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar6 = iVar6 + 0x208;
        iVar7 = iVar7 + 0x51;
        iVar2 = iVar2 + 0x36;
        iVar5 = iVar5 + 0x108;
      }
      else {
        if (uVar15 != 2) {
          return;
        }
        iVar2 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x47,iVar2 + 0xba,iVar5 + 2,0,0,0);
        iVar2 = get_system_byte_1_alt();
        if (iVar2 == 6) {
          iVar2 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,&LAB_000a91f2,0,iVar2 + 0x118,iVar5 + 0x31,iVar6 + 0x230,iVar7 + 0x4c,1,0,0
                       ,0,0);
          iVar5 = get_ui_x_offset();
          iVar2 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          goto LAB_0003a798;
        }
        iVar5 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar7 = iVar7 + 0x51;
        iVar6 = iVar6 + 0x208;
        iVar2 = iVar2 + 0x36;
        iVar5 = iVar5 + 0x108;
      }
LAB_00038dfc:
      puVar10 = &LAB_000a91da_1;
      goto LAB_00037e92;
    }
    local_80 = uVar15;
    fill_memory_buffer(local_7c,0,0x1c);
    iVar2 = 0;
    iVar5 = 0;
    do {
      if (*(char *)(iVar2 * 0x143 + *(int *)(system_data + 0x1020) + 3) == '\x01') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a90de,&LAB_000a95e6_1,iVar2);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar5 = iVar5 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a9100,&LAB_000a95e6_1,iVar5);
      }
      else {
        handle_heartbeat();
      }
    }
    STOCK_DATA_COUNT = (char)iVar5;
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x3b,iVar2 + 0xba,iVar6 + 1,0,0,0);
    if (iVar5 != 0) {
      STOCK_DISPLAY_ACTIVE = '\x01';
      fill_memory_buffer(&local_80,0,0x20);
      process_string_with_error_handling_and_validation
                (&local_80,0x20,&LAB_000a9120_1,CURRENT_STOCK_INDEX + 1,iVar5);
      iVar11 = (uint)CURRENT_STOCK_INDEX * 0x143;
      local_c8 = *(int *)(system_data + 0x1020) + iVar11 + 4;
      iVar2 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      goto LAB_000397a0;
    }
    iVar2 = dereference_pointer(&SYSTEM_FLAGS_REGISTER);
    if ((iVar2 << 0x1e < 0) && (STOCK_DISPLAY_ACTIVE == '\x01')) {
      STOCK_DISPLAY_ACTIVE = (char)iVar5;
      iVar2 = get_work_mode();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xd6,iVar6 + 1,iVar7 + 0x22e,iVar8 + 0x1c);
      iVar2 = get_work_mode();
      uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xd6,iVar5 + 1,iVar6 + 0x22e,iVar7 + 0x1c);
      iVar2 = get_work_mode();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xba,iVar6 + 0x1c,iVar7 + 0x238,iVar8 + 0x88);
      iVar2 = get_work_mode();
      uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xba,iVar5 + 0x1c,iVar6 + 0x238,iVar7 + 0x88);
    }
    reset_system_parameter_and_byte();
    uVar15 = get_system_byte_1_alt();
    if (CURRENT_LANGUAGE_ID != uVar15) {
      CURRENT_LANGUAGE_ID = (byte)uVar15;
      iVar2 = get_work_mode();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(iVar2 + 0xb90,0,iVar5 + 0xd2,iVar6 + 0x1c,iVar7 + 0x232,iVar8 + 0x88);
      iVar2 = get_work_mode();
      uVar3 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar2 + 0xeb8);
      iVar2 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar3,uVar4,iVar2 + 0xd2,iVar5 + 0x1c,iVar6 + 0x232,iVar7 + 0x88);
    }
    if (uVar15 != 6) goto LAB_00039318;
    iVar2 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    gui_utf_draw(0,&LAB_000a8ec6,0,iVar2 + 0x10a,iVar5 + 0x28,iVar6 + 0x236,iVar7 + 0x43,1,0,0,0,0);
    iVar5 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    iVar6 = iVar6 + 0x236;
LAB_00038c66:
    iVar5 = iVar5 + 0x130;
  }
  iVar7 = iVar7 + 0x5e;
  iVar2 = iVar2 + 0x43;
  puVar10 = &LAB_000a8edc_1;
LAB_00037e92:
  gui_utf_draw(0,puVar10,0,iVar5,iVar2,iVar6,iVar7,1,0,0,0,0);
  return;
}


