/*
 * Function: slave_display_thread
 * Entry:    00027cfe
 * Prototype: undefined slave_display_thread()
 */


void slave_display_thread(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte bVar11;
  undefined8 uVar12;
  
  *(undefined1 *)(param_1 + 0xfe7) = param_4;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter\n","slave_display_thread",param_3,0,param_1,param_2,param_3);
    }
    else {
      handle_heartbeat();
    }
  }
  if (*(char *)(param_1 + 0xfea) == '\v') {
    change_work_mode_to(2);
  }
  do {
    if (*(char *)(param_1 + 0xfea) == '\v') {
      *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xc0;
      iVar4 = get_system_ready_state();
      if (iVar4 == 0) {
        uVar8 = 6;
      }
      else {
        uVar8 = 3;
      }
      uVar5 = 0x8000;
      *(undefined1 *)(param_1 + 0xd5) = uVar8;
      goto LAB_00027dd4;
    }
    thunk_FUN_00072908(param_1 + 0x20);
    while ((*(char *)(param_1 + 1) == '\x01' ||
           (iVar4 = get_work_mode(), *(char *)(iVar4 + 1) == '\b'))) {
      uVar5 = 0x28000;
LAB_00027dd4:
      get_schedule_timing(uVar5,0);
    }
    if ((*(char *)(param_1 + 0xed7) != *(char *)(param_1 + 0xcb)) ||
       (*(char *)(param_1 + 0xed5) != *(char *)(param_1 + 0xed7))) {
      iVar4 = get_system_ready_state();
      if (iVar4 == 1) {
        set_brightness_to_panel_reg_in_running(*(undefined1 *)(param_1 + 0xed5));
        *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_1 + 0xed5);
        *(undefined1 *)(param_1 + 0xed7) = *(undefined1 *)(param_1 + 0xed5);
      }
      else {
        *(undefined1 *)(param_1 + 0xed7) = *(undefined1 *)(param_1 + 0xcb);
        *(undefined1 *)(param_1 + 0xed5) = *(undefined1 *)(param_1 + 0xcb);
        set_brightness_to_panel_reg_in_running();
      }
    }
    switch(*(byte *)(param_1 + 0xd4) & 0x3f) {
    case 0:
      if (*(char *)(param_1 + 0xfe6) == '\x01') {
        if ((*(char *)(param_1 + 0xd5) != '\x06') &&
           (iVar4 = check_work_mode_state_valid(param_1), iVar4 == 0)) {
          if (0 < LOG_LEVEL) {
            pcVar6 = "%s(): Ignore data...\n";
            goto LAB_00027e20;
          }
          break;
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): resume because SYNC_DISPLAY_CMD_DATA\n","slave_display_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        change_work_mode_to(2);
        if ((*(char *)(param_1 + 0xd5) == '\x06') && (*(char *)(param_1 + 0xee4) != '\x02')) {
          *(undefined1 *)(param_1 + 0xee4) = 2;
        }
      }
      goto switchD_000285dc_caseD_4;
    case 1:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ****SUSPEND start****\n","slave_display_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      DAT_20018d97 = 1;
      DISPLAY_UI_STATE = 1;
      if (*(char *)(param_1 + 0xfe6) == '\0') {
        handle_work_mode_finish(param_1,0);
        *(undefined1 *)(param_1 + 0xee4) = 1;
        puVar9 = *(undefined1 **)(param_1 + 0x1054);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        trigger_screen_state_change("goto idle2",param_1,0);
        z_spin_lock_valid(param_1 + 0x38);
      }
      else {
        get_schedule_timing(0xa3e,0);
      }
      if (2 < LOG_LEVEL) {
        pcVar6 = "%s(): ****SUSPEND end****\n";
        goto LAB_00027e20;
      }
      break;
    case 2:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ****RESUME start****\n","slave_display_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      if (*(char *)(param_1 + 0xe5) == '\v') {
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): slave rcv canvas_distance_gear:%d,raster_height_gear:%d\n",
                        "slave_display_thread",(uint)*(byte *)(param_1 + 0xe6),
                        (uint)*(byte *)(param_1 + 0xe7));
          }
          else {
            handle_heartbeat("%s(): slave rcv canvas_distance_gear:%d,raster_height_gear:%d\n",
                             "slave_display_thread");
          }
        }
        if ((*(byte *)(param_1 + 0xe6) < 10) && (*(byte *)(param_1 + 0xe7) < 9)) {
          iVar4 = get_work_mode();
          *(undefined1 *)(iVar4 + 0xec1) = *(undefined1 *)(param_1 + 0xe6);
          iVar4 = get_work_mode();
          *(undefined1 *)(iVar4 + 0xec0) = *(undefined1 *)(param_1 + 0xe7);
          iVar4 = get_work_mode();
          iVar7 = get_work_mode();
          cal_panel_canvas_coord(iVar4 + 0xec4,iVar7 + 0xeb8);
        }
      }
      DISPLAY_UI_STATE = 1;
      if ((((((*(char *)(param_1 + 0xd5) == '\t') || (*(char *)(param_1 + 0xd5) == '\f')) ||
            (*(char *)(param_1 + 0xd5) == '\n')) ||
           ((*(char *)(param_1 + 0xd5) == '\v' || (*(char *)(param_1 + 0xd5) == '\x06')))) ||
          (((*(char *)(param_1 + 0xd5) == '\a' ||
            ((*(char *)(param_1 + 0xd5) == '\x0e' || (*(char *)(param_1 + 0xd5) == '\x0f')))) ||
           (*(char *)(param_1 + 0xd5) == '\x10')))) ||
         ((*(char *)(param_1 + 0xd5) == '\x11' || (*(char *)(param_1 + 0xd5) == '\0')))) {
        *(undefined1 *)(param_1 + 0xee4) = 2;
      }
      change_work_mode_to(2);
      if ((((*(char *)(param_1 + 0xd5) != '\t') || (*(char *)(param_1 + 0xd5) != '\n')) ||
          (*(char *)(param_1 + 0xd5) != '\v')) || (*(char *)(param_1 + 0xd5) != '\x10')) {
        z_spin_lock_valid(param_1 + 0x38);
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ****RESUME end****\n","slave_display_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      DISPLAY_UI_STATE = 0;
      break;
    case 3:
      handle_work_mode_finish(param_1,1);
      change_work_mode_to(7);
      break;
    case 4:
      handle_work_mode_finish(param_1,1);
      uVar8 = 0xc;
      goto LAB_000285bc;
    case 5:
      uVar8 = 10;
LAB_000285bc:
      *(undefined1 *)(param_1 + 0xfea) = uVar8;
      *(undefined4 *)(param_1 + 0x104c) = 3;
      iVar4 = param_1 + 0x80;
      goto LAB_00027e60;
    case 6:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received master send sync command\n","slave_display_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      if (*(char *)(param_1 + 0xe5) == '\t') {
        bVar2 = *(byte *)(param_1 + 0xe6);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s():  SLAVE received dashboard startup mode changed infomation ,startup mode = %d\n"
                        ,"slave_display_thread",(uint)bVar2);
          }
          else {
            handle_heartbeat();
          }
        }
        upgradeDashboardStartupModeInfoToFlash((uint)bVar2);
        break;
      }
      switch(*(char *)(param_1 + 0xe5)) {
      case '\x01':
        if (*(char *)(param_1 + 0xd5) == '\f') {
          if (*(char *)(param_1 + 0xe6) == '\0') {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): QUICK NOTE SLAVE Delay EXIT\n","slave_display_thread");
              }
              else {
                handle_heartbeat();
              }
            }
            display_DelayClose(10000);
            goto LAB_0002812a;
          }
        }
        else if (*(char *)(param_1 + 0xe6) == '\x01') {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Quick Note Slave Start up...,current screen ID = %d\n",
                          "slave_display_thread",(uint)*(byte *)(param_1 + 0xd5));
            }
            else {
              handle_heartbeat();
            }
          }
          update_task_status_and_clear_buffer(param_1,0);
          *(undefined1 *)(param_1 + 0xec) = 0xc;
          **(undefined1 **)(param_1 + 0x1020) = 1;
          update_persist_task_status(param_1,0xc,2);
          *(char *)(*(int *)(param_1 + 0x1020) + 2) =
               *(char *)(*(int *)(param_1 + 0x1020) + 2) + '\x01';
          goto switchD_000285dc_caseD_4;
        }
        break;
      case '\x02':
        bVar2 = *(byte *)(param_1 + 0xe6);
        bVar11 = bVar2 & 0xf;
        if (bVar11 == 1) {
          if (*(char *)(param_1 + 0xd5) != '\x06') goto LAB_000282f6;
          uVar10 = (uint)(bVar2 >> 4);
          set_system_parameter_and_byte(uVar10);
          display_inputEvent(0,1);
          thunk_FUN_000745c8();
          if (LOG_LEVEL < 3) break;
          if (IS_DEBUG != 0) {
            uVar5 = get_work_mode_timestamp();
            pcVar6 = 
            "%s(): received master send touch sigle click command,timestamp = %d,exec key function,%d\n"
            ;
            goto LAB_000281ca;
          }
          uVar5 = get_work_mode_timestamp();
          pcVar6 = 
          "%s(): received master send touch sigle click command,timestamp = %d,exec key function,%d\n"
          ;
LAB_0002820c:
          DEBUG_PRINT(pcVar6,"slave_display_thread",uVar5,uVar10);
        }
        else if (bVar11 == 2) {
          uVar10 = (uint)(bVar2 >> 4);
          set_system_parameter_and_byte(uVar10);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              uVar5 = get_work_mode_timestamp();
              pcVar6 = 
              "%s(): received master send quicknote index sync commmand ,timestamp = %d,exec index update %d\n"
              ;
              goto LAB_0002820c;
            }
            uVar5 = get_work_mode_timestamp();
            pcVar6 = 
            "%s(): received master send quicknote index sync commmand ,timestamp = %d,exec index update %d\n"
            ;
LAB_000281ca:
            handle_heartbeat(pcVar6,"slave_display_thread",uVar5,uVar10);
          }
        }
        else if (bVar11 == 3) {
          if (*(char *)(param_1 + 0xd5) != '\x06') goto LAB_000282f6;
          uVar10 = (uint)(bVar2 >> 4);
          set_system_parameter_with_logging(uVar10);
LAB_00028260:
          display_inputEvent(0,1);
          thunk_FUN_000745c8();
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              uVar5 = get_work_mode_timestamp();
              pcVar6 = 
              "%s(): received master send touch sigle click command,timestamp = %d,exec key function %d\n"
              ;
              goto LAB_0002820c;
            }
            uVar5 = get_work_mode_timestamp();
            pcVar6 = 
            "%s(): received master send touch sigle click command,timestamp = %d,exec key function %d\n"
            ;
            goto LAB_000281ca;
          }
        }
        else if (bVar11 == 4) {
          uVar10 = (uint)(bVar2 >> 4);
          set_system_parameter_with_logging(uVar10);
LAB_00028296:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              uVar5 = get_work_mode_timestamp();
              pcVar6 = 
              "%s(): received master send Stocks index sync commmand ,timestamp = %d,exec index update %d\n"
              ;
              goto LAB_0002820c;
            }
            uVar5 = get_work_mode_timestamp();
            pcVar6 = 
            "%s(): received master send Stocks index sync commmand ,timestamp = %d,exec index update %d\n"
            ;
            goto LAB_000281ca;
          }
        }
        else {
          if (bVar11 == 5) {
            if (*(char *)(param_1 + 0xd5) == '\x06') {
              uVar10 = (uint)(bVar2 >> 4);
              set_system_parameter_with_logging_alt(uVar10);
              goto LAB_00028260;
            }
          }
          else if (bVar11 == 6) {
            uVar10 = (uint)(bVar2 >> 4);
            set_system_parameter_with_logging_alt(uVar10);
            goto LAB_00028296;
          }
LAB_000282f6:
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): received key press event ,slave screen id = %d,drop it ...\n",
                          "slave_display_thread",(uint)*(byte *)(param_1 + 0xd5));
            }
            else {
              handle_heartbeat();
            }
          }
        }
        break;
      case '\x03':
        if (*(char *)(param_1 + 0xd5) == '\t') {
          if (*(char *)(param_1 + 0xe6) == '\x01') {
            if (2 < LOG_LEVEL) {
              pcVar6 = "%s(): teleprompter SLAVE disconnect EXIT\n";
LAB_00028336:
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(pcVar6,"slave_display_thread");
              }
              else {
                handle_heartbeat();
              }
            }
            goto LAB_00028342;
          }
LAB_00028348:
          if (0 < LOG_LEVEL) {
            pcVar6 = "%s(): slave received unknown command,drop it\n";
            goto LAB_00027e20;
          }
        }
        else if (0 < LOG_LEVEL) {
          pcVar6 = 
          "%s(): The master Send the teleprompter command, but the slave\'s current ScreenID is not teleprompter.drop this command..\n"
          ;
LAB_00027e20:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(pcVar6,"slave_display_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        break;
      case '\x04':
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): slave sync onboarding action_cmd %d, sub_step %d, data: %d\n",
                        "slave_display_thread",(uint)*(byte *)(param_1 + 0xe6),
                        (uint)*(byte *)(param_1 + 0xe7),(uint)*(byte *)(param_1 + 0xe8));
          }
          else {
            handle_heartbeat("%s(): slave sync onboarding action_cmd %d, sub_step %d, data: %d\n");
          }
        }
        *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(*(int *)(param_1 + 0x1014) + 3);
        *(undefined1 *)(*(int *)(param_1 + 0x1014) + 2) = *(undefined1 *)(param_1 + 0xe6);
        *(undefined1 *)(*(int *)(param_1 + 0x1014) + 3) = *(undefined1 *)(param_1 + 0xe7);
        check_work_mode_state_conditions();
        DAT_2001cdce = *(char *)(param_1 + 0xe7);
        cVar3 = *(char *)(param_1 + 0xe8);
        reset_animation_counters();
        validate_and_update_work_mode_state();
        uVar12 = FUN_0007cb2c();
        *(undefined8 *)(*(int *)(param_1 + 0x1014) + 4) = uVar12;
        if ((**(int **)(param_1 + 0x1054) == 0xe) ||
           ((iVar4 = FUN_0007c132(), iVar4 != 0 &&
            (*(char *)(*(int *)(param_1 + 0x1014) + 1) == '\0')))) {
          cVar1 = *(char *)(*(int *)(param_1 + 0x1014) + 2);
          if (cVar1 == '\x03') {
            if (DAT_2001cdce == '\x12') {
              *(char *)(*(int *)(param_1 + 0x1014) + 0xc) = cVar3;
              *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0xd) = 3;
              *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0xe) = 3;
            }
          }
          else if (cVar1 == '\v') {
            iVar4 = get_work_mode();
            **(undefined1 **)(iVar4 + 0x1014) = 0;
            iVar4 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar4 + 0x1014) + 1) = 0;
          }
        }
        else if (cVar3 == '\x01') {
          **(undefined1 **)(param_1 + 0x1014) = 1;
          update_persist_task_status(param_1,0xe,2);
          *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0x20) = *(undefined1 *)(param_1 + 0xed5);
          *(undefined1 *)(param_1 + 0xed5) = 0x2a;
        }
        pcVar6 = "IMU:wakeup:onboarding";
        goto LAB_0002850c;
      case '\x05':
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): slave sync not_disturb sub_step %d\n","slave_display_thread",
                        (uint)*(byte *)(param_1 + 0xe6));
          }
          else {
            handle_heartbeat();
          }
        }
        DAT_2001b9ab = *(undefined1 *)(param_1 + 0xe6);
        *(undefined1 *)(*(int *)(param_1 + 0x1010) + 2) = DAT_2001b9ab;
        iVar4 = get_work_mode();
        *(undefined1 *)(iVar4 + 0xcd) = DAT_2001b9ab;
        reset_audio_stream_flag();
        **(undefined1 **)(param_1 + 0x1010) = 1;
        update_persist_task_status(param_1,7,2);
        pcVar6 = "TOUCH:wakeup:not_disturb";
        goto LAB_0002850c;
      case '\x06':
        if (*(char *)(param_1 + 0xd5) == '\n') {
          if (*(char *)(param_1 + 0xe6) != '\x01') goto LAB_00028348;
          if (2 < LOG_LEVEL) {
            pcVar6 = "%s(): navigation SLAVE disconnect EXIT\n";
            goto LAB_00028336;
          }
LAB_00028342:
          display_MasterSendClose();
LAB_0002812a:
          thunk_FUN_000745c8();
        }
        else if (0 < LOG_LEVEL) {
          pcVar6 = 
          "%s(): The master Send the navigation command, but the slave\'s current ScreenID is not navigation.drop this command..\n"
          ;
          goto LAB_00027e20;
        }
        break;
      case '\a':
        if (*(char *)(param_1 + 0xd5) == '\x06') {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): dashboard SLAVE received power infomation \n",
                          "slave_display_thread");
            }
            else {
              handle_heartbeat();
            }
          }
          display_powerEvent(*(undefined1 *)(param_1 + 0xe6));
          goto LAB_0002812a;
        }
        if (0 < LOG_LEVEL) {
          pcVar6 = 
          "%s(): The master Send the power notify command, but the slave\'s current ScreenID is not dashboard.drop this command..\n"
          ;
          goto LAB_00027e20;
        }
        break;
      case '\b':
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s():  SLAVE received app language infomation \n","slave_display_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        cVar3 = *(char *)(param_1 + 0xe6);
        if ((DAT_20018462 != cVar3) && (1 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): The information sent by the host is different from that of the APP\n"
                        ,"slave_display_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        upgradeAppLanguageInfoToFlash(cVar3);
        break;
      case '\n':
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s():  SLAVE received dashboard double click startup command \n",
                        "slave_display_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        FUN_0007cb54(&DAT_20007b38);
      }
      break;
    case 7:
      switch(*(undefined1 *)(param_1 + 0xe5)) {
      case 0:
        update_temp_task_status(param_1,5,2);
        pcVar6 = "BLE:wakeup:new-unread_msg";
        goto LAB_0002850c;
      case 1:
        DAT_20018d9f = 1;
        clear_timeout_message(0);
        check_timeout_message_states_and_set_flag();
        advance_timeout_message_state();
        update_temp_task_status(param_1,4,2);
        pcVar6 = "IMU:wakeup:uncomplete msg";
LAB_0002850c:
        trigger_screen_state_change(pcVar6,param_1,1);
        break;
      case 2:
        manage_timeout_message_states();
        iVar4 = get_work_mode();
        cVar3 = *(char *)(iVar4 + 0xdd);
        if (cVar3 != '\0') {
          cVar3 = '\x06';
        }
        control_timer_operation(cVar3);
        break;
      case 3:
        DAT_20018d8d = 1;
        iVar4 = get_work_mode();
        if (((*(char *)(iVar4 + 0x108f) != '\0') &&
            (iVar4 = calculate_next_timeout_message_state(), iVar4 != 0)) &&
           (iVar4 = get_work_mode(), *(char *)(iVar4 + 0xd5) != '\x04')) {
          uVar5 = get_work_mode();
          update_temp_task_status(uVar5,4,2);
          uVar5 = get_work_mode();
          trigger_screen_state_change("IMU:wakeup:new-notification",uVar5,1);
          check_timeout_message_states_and_set_flag();
        }
      }
      goto switchD_000285dc_caseD_4;
    case 8:
      render_panoramic_view(param_1,0);
      if ((*(char *)(param_1 + 0xe5) != '\0') && (*(char *)(param_1 + 0xd5) == '\x04')) {
        decrement_timer_counter();
        iVar4 = get_work_mode();
        cVar3 = *(char *)(iVar4 + 0xdd);
        if (cVar3 != '\0') {
          cVar3 = '\x06';
        }
        control_timer_operation(cVar3);
      }
      if (*(char *)(param_1 + 0xee4) == '\x02') {
        get_system_byte_2();
      }
      update_persist_task_status_to_idle(param_1);
switchD_000285dc_caseD_4:
      iVar4 = param_1 + 0x38;
LAB_00027e60:
      z_spin_lock_valid(iVar4);
    }
  } while( true );
}


