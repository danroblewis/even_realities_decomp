/*
 * Function: manage_dashboard_ui_operations
 * Entry:    0003af78
 * Prototype: undefined __stdcall manage_dashboard_ui_operations(undefined4 framebuffer_ptr, undefined4 _screen_id, undefined4 operation_mode)
 */


/* WARNING: Removing unreachable block (ram,0x0003b4c6) */
/* WARNING: Removing unreachable block (ram,0x0003b202) */

undefined4 manage_dashboard_ui_operations(int framebuffer_ptr,undefined4 param_2,int operation_mode)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = get_work_mode();
  iVar11 = iVar3 + 0xef;
  set_work_mode_parameter(framebuffer_ptr + 0x24);
  if (DASHBOARD_UI_OPERATIONS_AND_STATUS_DISPLAY == '\0') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a9242_1,&LAB_000a957c_1);
      }
      else {
        handle_heartbeat();
      }
    }
    enter_dashboard_burial_point();
    if (operation_mode == 2) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a926e_1,&LAB_000a957c_1);
        }
        else {
          handle_heartbeat();
        }
      }
      gui_screen_clear();
      fill_memory_buffer(&DASHBOARD_UI_OPERATIONS_AND_STATUS_DISPLAY,0,0x28);
      goto LAB_0003affc;
    }
    if ((operation_mode != 1) || (DAT_20004959 != '\0')) goto LAB_0003b198;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a9292,&LAB_000a957c_1);
      }
      else {
        handle_heartbeat();
      }
    }
    send_event_status(0x1e);
    fill_memory_buffer(&DASHBOARD_UI_OPERATIONS_AND_STATUS_DISPLAY,0,0x28);
    gui_screen_clear();
    DAT_20004959 = '\x01';
    DASHBOARD_WIDGET_MODE = *(undefined1 *)(iVar3 + 0x155);
    uVar4 = (uint)WORK_MODE_FLAGS;
    CURRENT_STOCK_INDEX = SYSTEM_PARAMETER_AND_WORK_MODE_STATUS;
    CURRENT_STOCK_ID = SYSTEM_PARAMETER_LOGGING_BUFFER;
    CURRENT_NEWS_INDEX = WORK_MODE_FLAGS;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a92b0,&LAB_000a957c_1,(uint)SYSTEM_PARAMETER_AND_WORK_MODE_STATUS,
                    (uint)SYSTEM_PARAMETER_LOGGING_BUFFER,uVar4);
      }
      else {
        handle_heartbeat(&LAB_000a92b0);
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a92ee,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x155),0,uVar4);
        }
        else {
          handle_heartbeat();
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9126_1,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x157),0,uVar4);
          }
          else {
            handle_heartbeat();
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9318,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x158));
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
    }
    pcVar6 = (char *)get_work_mode();
    if (*pcVar6 == '\x01') {
      local_30 = CONCAT22(local_30._2_2_,0x202);
      if (DASHBOARD_DATA_VERSION == '\0') {
        cVar2 = get_work_mode_status();
        local_30._0_2_ = CONCAT11(cVar2 << 4 | local_30._1_1_,(undefined1)local_30);
        if (2 < LOG_LEVEL) {
          puVar7 = &LAB_000a933c;
LAB_0003b116:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(puVar7,&LAB_000a957c_1);
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else if (DASHBOARD_DATA_VERSION == '\x01') {
        local_30 = CONCAT22(local_30._2_2_,0x402);
        cVar2 = get_and_log_system_parameter();
        local_30._0_2_ = CONCAT11(cVar2 << 4 | local_30._1_1_,(undefined1)local_30);
        if (2 < LOG_LEVEL) {
          puVar7 = (undefined1 *)0xa9374;
          goto LAB_0003b116;
        }
      }
      else if (DASHBOARD_DATA_VERSION == '\x02') {
        local_30 = CONCAT22(local_30._2_2_,0x602);
        cVar2 = get_and_log_system_parameter_alt();
        local_30._0_2_ = CONCAT11(cVar2 << 4 | local_30._1_1_,(undefined1)local_30);
        if (2 < LOG_LEVEL) {
          puVar7 = &LAB_000a93a8;
          goto LAB_0003b116;
        }
      }
      uVar8 = get_work_mode();
      iVar5 = sync_to_slave(uVar8,6,&local_30,2);
      if (iVar5 < 5000) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            uVar8 = get_work_mode_timestamp();
            DEBUG_PRINT("%s(): sync to slave return value = %d,exec key function. ts = %d\n",
                        &LAB_000a957c_1,iVar5,uVar8);
          }
          else {
            uVar8 = get_work_mode_timestamp();
            handle_heartbeat("%s(): sync to slave return value = %d,exec key function. ts = %d\n",
                             &LAB_000a957c_1,iVar5,uVar8);
          }
        }
      }
      else if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): SYNC TO Slave failed...,don\'t exec key function.\n",&LAB_000a957c_1);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    clear_work_mode_flag_bit_1();
    DASHBOARD_RENDER_CYCLE_COUNT = 0;
    while (DASHBOARD_RENDER_CYCLE_COUNT < 4) {
      uVar8 = get_work_mode();
      render_dashboard_ui(iVar11,uVar8,1,*(undefined1 *)(iVar3 + 0x153));
      uVar4 = 0;
      do {
        iVar5 = 0;
        do {
          local_30 = 0x7050301;
          local_2c = 0x7070707;
          iVar12 = *(int *)(framebuffer_ptr + 0x24 + uVar4 * 4);
          bVar1 = *(byte *)(iVar12 + iVar5);
          if (bVar1 != 0) {
            *(byte *)(iVar12 + iVar5) =
                 bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                         [iVar5 + (uint)*(byte *)((int)&local_30 + DASHBOARD_RENDER_CYCLE_COUNT) *
                                  0x140 + (uVar4 % 0x1a) * 0xa00];
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x140);
        uVar4 = uVar4 + 1;
      } while (uVar4 != 199);
      DASHBOARD_RENDER_CYCLE_COUNT = DASHBOARD_RENDER_CYCLE_COUNT + 1;
      iVar5 = get_work_mode();
      uVar8 = *(undefined4 *)(iVar5 + 0xeb4);
      iVar5 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar8,*(undefined4 *)(iVar5 + 0xeb8),0,0,0x280,199);
    }
    set_work_mode_flag_bit_1();
    lVar13 = calculate_ble_connection_timing_with_validation();
    uVar4 = (uint)((ulonglong)(lVar13 * 1000) >> 0x20);
    DASHBOARD_UI_OPERATION_STATE = (uint)(lVar13 * 1000) >> 0xf | uVar4 * 0x20000;
    DAT_20004964 = uVar4 >> 0xf;
    DASHBOARD_UI_OPERATIONS_AND_STATUS_DISPLAY = '\x01';
    set_parameter_with_bounds_check(0x42);
    process_timeout_message_state_and_send_response();
LAB_0003b198:
    iVar3 = dereference_pointer(&DASHBOARD_LOCK_STATUS);
    if (-1 < iVar3 << 0x1e) {
      return 0;
    }
    iVar3 = dereference_pointer(&DASHBOARD_LOCK_CONTROL);
    if (iVar3 << 0x1e < 0) {
      return 0;
    }
    local_30 = 0x650;
    local_2c = CONCAT22(local_2c._2_2_,0x201);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send dashboard lock info to app ,status = %d \n",&LAB_000a957c_1,2);
      }
      else {
        handle_heartbeat();
      }
    }
    send_response_data_to_msgqueue(&local_30,6);
    enqueue_message_to_queue_with_work_mode_check();
    DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL | 2;
    return 0;
  }
  if (DASHBOARD_UI_OPERATIONS_AND_STATUS_DISPLAY != '\x01') {
    return 0;
  }
  uVar4 = dereference_pointer(&DASHBOARD_LOCK_STATUS);
  if (((uVar4 & 2) != 0) &&
     (iVar5 = dereference_pointer(&DASHBOARD_LOCK_CONTROL), -1 < iVar5 << 0x1e)) {
    local_30 = 0x650;
    local_2c = CONCAT22(local_2c._2_2_,0x201);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send dashboard lock info to app ,status = %d \n",&LAB_000a957c_1,2);
      }
      else {
        handle_heartbeat();
      }
    }
    send_response_data_to_msgqueue(&local_30,6);
    enqueue_message_to_queue_with_work_mode_check();
    DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL | 2;
  }
  uVar4 = calculate_next_timeout_message_state();
  if (uVar4 != DAT_20004973) {
    DAT_20004973 = calculate_next_timeout_message_state();
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a93da,&LAB_000a957c_1,(uint)DAT_20004973);
      }
      else {
        handle_heartbeat();
      }
    }
    process_timeout_message_state_and_send_response();
  }
  set_work_mode_flag_bit_1();
  if (LOG_LEVEL < 3) {
    if (operation_mode != 2) goto LAB_0003b742;
  }
  else {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a9436_1,&LAB_000a957c_1);
    }
    else {
      handle_heartbeat();
    }
    if (operation_mode != 2) {
LAB_0003b742:
      if (operation_mode == 1) {
        uVar8 = get_work_mode();
        render_dashboard_ui(iVar11,uVar8,1,*(undefined1 *)(iVar3 + 0x153));
        return 0;
      }
      if (operation_mode == 0) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9464_1,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x153));
          }
          else {
            handle_heartbeat();
          }
        }
        uVar8 = get_work_mode();
        render_dashboard_ui(iVar11,uVar8,0,*(undefined1 *)(iVar3 + 0x153));
        goto LAB_0003b512;
      }
      if (operation_mode != 4) {
        if (operation_mode == 6) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9528_1,&LAB_000a957c_1);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = get_work_mode();
          uVar9 = 1;
          iVar3 = *(int *)(iVar3 + 0xfec);
        }
        else {
          if (operation_mode != 7) goto LAB_0003b512;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9550_1,&LAB_000a957c_1);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = get_work_mode();
          uVar9 = 0;
          iVar3 = *(int *)(iVar3 + 0xfec);
        }
        *(undefined1 *)(iVar3 + 0x5f) = uVar9;
        process_timeout_message_state_and_send_response();
        goto LAB_0003b512;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a947e_1,&LAB_000a957c_1,(uint)DASHBOARD_ORIENTATION_MODE);
        }
        else {
          handle_heartbeat();
        }
      }
      if (DASHBOARD_DATA_VERSION == '\0') {
        if (1 < STOCK_DATA_COUNT) {
          CURRENT_STOCK_INDEX =
               (CURRENT_STOCK_INDEX + 1) -
               STOCK_DATA_COUNT * ((byte)(CURRENT_STOCK_INDEX + 1) / STOCK_DATA_COUNT);
          SYSTEM_PARAMETER_AND_WORK_MODE_STATUS = CURRENT_STOCK_INDEX;
          set_system_byte_69();
          if (2 < LOG_LEVEL) {
            uVar4 = (uint)CURRENT_STOCK_INDEX;
            puVar7 = &LAB_000a94c4_1;
            goto LAB_0003b614;
          }
        }
      }
      else if (DASHBOARD_DATA_VERSION == '\x01') {
        uVar4 = (uint)STOCK_ENTRIES_COUNT;
        if (1 < uVar4) {
          uVar10 = (uint)(byte)(CURRENT_STOCK_ID + 1) -
                   uVar4 * ((byte)(CURRENT_STOCK_ID + 1) / uVar4);
          uVar4 = uVar10 & 0xff;
          CURRENT_STOCK_ID = (byte)uVar10;
          SYSTEM_PARAMETER_LOGGING_BUFFER = CURRENT_STOCK_ID;
          if (2 < LOG_LEVEL) {
            puVar7 = (undefined1 *)0xa94e9;
LAB_0003b614:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(puVar7,&LAB_000a957c_1,uVar4);
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else if (((DASHBOARD_DATA_VERSION == '\x02') && (uVar4 = (uint)NEWS_DATA_COUNT, 1 < uVar4)) &&
              (CURRENT_NEWS_INDEX != 3)) {
        uVar10 = (uint)(byte)(CURRENT_NEWS_INDEX + 1) -
                 uVar4 * ((byte)(CURRENT_NEWS_INDEX + 1) / uVar4);
        uVar4 = uVar10 & 0xff;
        CURRENT_NEWS_INDEX = (byte)uVar10;
        WORK_MODE_FLAGS = CURRENT_NEWS_INDEX;
        if (2 < LOG_LEVEL) {
          puVar7 = (undefined1 *)0xa950a;
          goto LAB_0003b614;
        }
      }
      uVar8 = get_work_mode();
      render_dashboard_ui(iVar11,uVar8,4,*(undefined1 *)(iVar3 + 0x153));
      process_timeout_message_state_alt_and_send_response();
LAB_0003b512:
      pcVar6 = (char *)get_work_mode();
      if (*pcVar6 != '\x01') {
        return 0;
      }
      iVar3 = validate_work_mode_status();
      lVar13 = calculate_ble_connection_timing_with_validation();
      uVar10 = (uint)((ulonglong)(lVar13 * 1000) >> 0x20);
      uVar4 = (uint)(lVar13 * 1000) >> 0xf | uVar10 * 0x20000;
      uVar10 = uVar10 >> 0xf;
      if (iVar3 == 0) {
        iVar3 = get_work_mode();
        if (*(char *)(*(int *)(iVar3 + 0xfec) + 0x5f) != '\0') {
          if (DAT_2000495b != '\0') {
            return 0;
          }
          if ((int)((uVar10 - DAT_20004964) - (uint)(uVar4 < DASHBOARD_UI_OPERATION_STATE)) <
              (int)(uint)(uVar4 - DASHBOARD_UI_OPERATION_STATE < 0x5dd)) {
            return 0;
          }
        }
        uVar8 = 1;
      }
      else {
        iVar3 = get_work_mode();
        if (*(char *)(*(int *)(iVar3 + 0xfec) + 0x5f) != '\x01') {
          if (DAT_2000495b != '\0') {
            return 0;
          }
          if ((int)((uVar10 - DAT_20004964) - (uint)(uVar4 < DASHBOARD_UI_OPERATION_STATE)) <
              (int)(uint)(uVar4 - DASHBOARD_UI_OPERATION_STATE < 0x5dd)) {
            return 0;
          }
        }
        uVar8 = 0;
      }
      SendPowerInfoToSlave(uVar8);
      DAT_2000495b = 1;
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a926e_1,&LAB_000a957c_1);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  send_event_status(0x1f);
  animate_framebuffer_with_pattern();
  fill_memory_buffer(&DASHBOARD_UI_OPERATIONS_AND_STATUS_DISPLAY,0,0x28);
LAB_0003affc:
  DASHBOARD_LOCK_INFO_STORAGE = DASHBOARD_LOCK_INFO_STORAGE & 0xfffffffd;
  exit_dashboard_burial_point();
  return 0;
}


