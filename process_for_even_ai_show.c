/*
 * Function: process_for_even_ai_show
 * Entry:    0002c99c
 * Prototype: undefined process_for_even_ai_show()
 */


undefined4 process_for_even_ai_show(char *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  char *format_string;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  char *local_2c [2];
  
  iVar9 = 0;
  local_2c[0] = (char *)0x0;
  do {
    fill_memory_buffer(param_1 + 0xef,0,0x5dc);
    clear_timeout_message(0);
    if (*param_1 == '\x01') {
      handle_message_expiration_and_sync();
    }
    if (param_1[0xd5] != '\x04') {
      DAT_20018d9f = 0;
    }
    switch(param_1[0xd5]) {
    case '\0':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_IDLE\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      puVar11 = *(undefined4 **)(param_1 + 0x1054);
      clear_work_mode_flags_and_buffers(1);
      iVar9 = now_has_persist_task(param_1,param_1[0xd5]);
      if (iVar9 == 0) {
        if (*param_2 != 2) {
          trigger_screen_state_change("goto idle1",param_1,0);
          pcVar6 = (char *)get_work_mode();
          if ((*pcVar6 == '\x02') && (iVar9 = get_work_mode(), *(int *)(iVar9 + 0x40) == 0)) {
            iVar9 = get_work_mode();
            z_spin_lock_valid(iVar9 + 0x38);
          }
        }
        param_1[0xd5] = '\0';
        puVar7 = *(undefined1 **)(param_1 + 0x1054);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x1054) + 4) = 1;
        iVar9 = is_msg_expiration();
        if (iVar9 == 1) {
          cVar3 = '\x05';
        }
        else {
          iVar9 = get_work_mode();
          cVar3 = *(char *)(iVar9 + 0xdd);
          if (cVar3 != '\0') {
            cVar3 = '\x06';
          }
        }
        control_timer_operation(cVar3);
        reset_display_ai_show_flag();
        if (*param_2 != 2) {
          iVar9 = 100;
          do {
            if (param_1[0xfe6] == '\x01') break;
            calculate_ble_schedule_timing(0x148,0);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (1 < LOG_LEVEL) {
          uVar10 = (uint)*(byte *)(puVar11 + 1);
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Now, I will goto run IDLE ^v^ g->persist_task->screen_id %d, persist->status %d pkg->screen_id %d\n"
                        ,"process_for_IDLE",**(undefined4 **)(param_1 + 0x1054),uVar10,
                        (uint)(byte)param_1[0xd5]);
          }
          else {
            handle_heartbeat("%s(): Now, I will goto run IDLE ^v^ g->persist_task->screen_id %d, persist->status %d pkg->screen_id %d\n"
                             ,"process_for_IDLE",**(undefined4 **)(param_1 + 0x1054),uVar10,
                             param_1[0xd5]);
          }
        }
      }
      DAT_20018d9f = 0;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          iVar9 = get_work_mode();
          DEBUG_PRINT("%s(): GLOBAL->master_sync_pkg.panel_data_pkg.unread_msg_num is %d,g->enable_ancs is %d \n"
                      ,"process_for_IDLE",(uint)*(byte *)(iVar9 + 0xdd),(uint)(byte)param_1[0x1070])
          ;
        }
        else {
          iVar9 = get_work_mode();
          handle_heartbeat("%s(): GLOBAL->master_sync_pkg.panel_data_pkg.unread_msg_num is %d,g->enable_ancs is %d \n"
                           ,"process_for_IDLE",*(undefined1 *)(iVar9 + 0xdd),param_1[0x1070]);
        }
      }
      uVar10 = 0;
LAB_0002df4c:
      if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b')) {
LAB_0002e012:
        if (*param_1 == '\x01') {
          (**(code **)(param_2 + 0x98))(param_2,0x26);
        }
        goto LAB_0002ce1c;
      }
      cVar3 = compare_and_update_sensor_data();
      if (cVar3 != '\0') {
LAB_0002df66:
        calculate_ble_schedule_timing(0x667,0);
        goto LAB_0002df4c;
      }
      if ((param_1[0xfea] == '\f') && (**(int **)(param_1 + 0x1054) != 7)) goto LAB_0002e040;
      uVar12 = now_has_persist_task(param_1,param_1[0xd5]);
      iVar9 = (int)uVar12;
      if (iVar9 == 1) {
        pcVar6 = "BLE:wakeup:persist_task";
        param_1[0xd5] = (char)*puVar11;
LAB_0002e00e:
        trigger_screen_state_change(pcVar6,param_1,1);
        goto LAB_0002e012;
      }
      iVar9 = get_system_ready_state(iVar9,(int)((ulonglong)uVar12 >> 0x20),iVar9);
      if (iVar9 == 1) {
LAB_0002e040:
        uVar10 = uVar10 + 1;
        if (*param_1 == '\x01') {
          (**(code **)(param_2 + 0x98))(param_2,0x50);
        }
        goto LAB_0002df66;
      }
      if (((*(char *)(*(int *)(param_1 + 0x1014) + 1) != '\0') ||
          (iVar9 = FUN_0007c132(), iVar9 == 0)) ||
         (iVar9 = get_work_mode(), *(char *)(*(int *)(iVar9 + 0x1010) + 1) != '\0')) {
        uVar10 = uVar10 + 1;
        if (((uVar10 & 0x1f) == 0) && (0 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): There is an unfinished task,skip the local tasks\n",
                        "process_for_IDLE");
          }
          else {
            handle_heartbeat();
          }
        }
        goto LAB_0002e040;
      }
      if (((*param_2 == 2) && (iVar9 = get_system_byte_2(), iVar9 == 0)) ||
         (((int)(DAT_20007b38 << 0x1e) < 0 && (iVar9 = get_system_byte_2(), iVar9 == 1)))) {
        if ((int)(DAT_20007b38 << 0x1e) < 0) {
          DAT_20007b38 = DAT_20007b38 & 0xfffffffd;
        }
        iVar9 = check_system_status_conditions();
        if (iVar9 == 0) {
          update_temp_task_status(param_1,6,2);
          pcVar6 = "IMU:wakeup:dashboard";
          goto LAB_0002cd8c;
        }
        set_message_processing_active_flag();
        if (*param_1 == '\x01') {
          sync_message_signal_to_slave(1);
          clear_timeout_message(0);
          check_timeout_message_states_and_set_flag();
          advance_timeout_message_state();
          update_temp_task_status(param_1,4,2);
          trigger_screen_state_change("IMU:wakeup:uncomplete msg",param_1,1);
        }
        else if (param_1[0xd5] != '\x04') goto LAB_0002e084;
        if (LOG_LEVEL < 1) break;
        pcVar6 = "%s(): goto message show task !\n";
        goto LAB_0002e184;
      }
LAB_0002e084:
      iVar9 = get_system_status_value();
      if (iVar9 != 1) {
LAB_0002e1ba:
        if ((param_1[0x108f] != '\0') && (param_1[0xd5] == '\x04')) {
          pcVar6 = "BLE:wakeup:next-unread_msg";
          goto LAB_0002e00e;
        }
        goto LAB_0002e040;
      }
      if (param_1[0x108f] == '\0') {
        if (*param_1 == '\x01') {
          sync_message_signal_to_slave();
          update_temp_task_status(param_1,5,2);
          trigger_screen_state_change("BLE:wakeup:new-unread_msg",param_1,1);
          if (LOG_LEVEL < 1) break;
          pcVar6 = "%s(): goto new message come on task master!\r\n\n";
          goto LAB_0002e184;
        }
        if (param_1[0xd5] != '\x05') goto LAB_0002e040;
        if (0 < LOG_LEVEL) {
          pcVar6 = "%s(): goto new message come on task slave!\r\n\n";
LAB_0002e184:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(pcVar6,"process_for_IDLE");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else {
        set_message_processing_active_flag();
        if (*param_1 == '\x01') {
          sync_message_signal_to_slave(1);
          clear_timeout_message(0);
          check_timeout_message_states_and_set_flag();
          advance_timeout_message_state();
          update_temp_task_status(param_1,4,2);
LAB_0002cccc:
          pcVar6 = "IMU:wakeup:uncomplete msg";
          goto LAB_0002cd8c;
        }
        if (param_1[0xd5] != '\x04') goto LAB_0002e1ba;
LAB_0002ccda:
        pcVar6 = "goto message show task !";
LAB_0002cd00:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(pcVar6);
        }
        else {
          handle_heartbeat();
        }
      }
      break;
    case '\x01':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_WAIT_BLOW_HEAD\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      trigger_screen_state_change("WAIT_BLOW_HEAD",param_1,0);
      while ((*param_2 != 1 && (iVar9 = get_system_byte_2(), iVar9 != 1))) {
        if (((char)(*(int **)(param_1 + 0x1054))[1] == '\x02') &&
           (**(int **)(param_1 + 0x1054) == 0x10)) {
          param_1[0xd5] = '\x10';
          trigger_screen_state_change("BLE:wakeup:persist_task",param_1,1);
          goto LAB_0002ce1c;
        }
        calculate_ble_schedule_timing(0x667,0);
      }
      uVar8 = 0;
LAB_0002cb9a:
      param_1[0xd5] = (char)uVar8;
      break;
    case '\x02':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_COUNTDOWN_TIMER\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      while( true ) {
        if ((*(char *)(*(int *)(param_1 + 0xff0) + 5) == '\0') || (param_1[0xfea] != '\n')) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): #4 %d-%d: I will go to suspend, goodbye!\n",
                          "process_for_countdown_show",(uint)(byte)param_1[0xd5]);
            }
            else {
              handle_heartbeat("%s(): #4 %d-%d: I will go to suspend, goodbye!\n",
                               "process_for_countdown_show",param_1[0xd5]);
            }
          }
          sync_to_slave(param_1,8,0);
          if (*param_2 == 2) {
            update_persist_task_status_to_wait_blow_head();
          }
          else {
            update_persist_task_status_to_idle(param_1);
          }
          if (*param_1 == '\x01') {
            calculate_ble_schedule_timing(0x4000,0);
          }
          local_2c[0] = "countdown:trigger-off-imm";
          goto LAB_0002ce1c;
        }
        if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b')) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n",
                          "process_for_countdown_show",(uint)(byte)param_1[0xd5]);
            }
            else {
              handle_heartbeat();
            }
          }
          update_persist_task_status_to_idle(param_1);
          local_2c[0] = "countdown:imu-trigger-off-imm";
          goto LAB_0002ce1c;
        }
        iVar9 = **(int **)(param_1 + 0xff0);
        if (iVar9 == 0) {
          *(undefined1 *)((int)*(int **)(param_1 + 0xff0) + 5) = 0;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): #5 %d-%d: expect_ts == 0, I will go to suspend, goodbye!\n",
                          "process_for_countdown_show",(uint)(byte)param_1[0xd5],
                          (uint)*(byte *)(*(int *)(param_1 + 0xff0) + 5));
            }
            else {
              handle_heartbeat("%s(): #5 %d-%d: expect_ts == 0, I will go to suspend, goodbye!\n",
                               "process_for_countdown_show",param_1[0xd5]);
            }
          }
          local_2c[0] = "countdown:ts is over";
          update_persist_task_status(param_1,**(undefined4 **)(param_1 + 0x1054),1);
          goto LAB_0002ce1c;
        }
        if (*param_2 == 2) break;
        uVar10 = uVar10 + 1;
        if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&DAT_000a2d97,"process_for_countdown_show",uVar10,iVar9,(uint)*param_2,
                        (uint)(byte)param_1[0xdd]);
          }
          else {
            handle_heartbeat(&DAT_000a2d97);
          }
        }
        if (param_1[0xd5] == '\x01') {
          if (LOG_LEVEL < 3) goto LAB_0002caae;
          uVar10 = (uint)(byte)param_1[0xd5];
          pcVar6 = "process_for_countdown_show";
          goto LAB_0002cffe;
        }
        calculate_ble_schedule_timing(0x667,0);
      }
      if (param_1[0xdd] == '\0') {
        update_temp_task_status(param_1,6);
      }
      else {
        update_temp_task_status(param_1,4);
        check_timeout_message_states_and_set_flag();
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&DAT_000a2d6f,"process_for_countdown_show",**(undefined4 **)(param_1 + 0x1054)
                      ,(uint)(byte)param_1[0xd5]);
        }
        else {
          handle_heartbeat(&DAT_000a2d6f,"process_for_countdown_show",
                           **(undefined4 **)(param_1 + 0x1054),param_1[0xd5]);
        }
      }
      update_persist_task_status(param_1,**(undefined4 **)(param_1 + 0x1054),3);
      break;
    default:
      calculate_ble_schedule_timing(0x8000,0);
      goto LAB_0002ca3c;
    case '\x04':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_ANCS_NOTIFICATION\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar9 = process_for_message_show(param_1,param_1 + 0xd4,param_2,local_2c);
      goto LAB_0002ca34;
    case '\x05':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_NEW_MESSAGE_COME_ON\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar9 = process_for_new_message_come_on(param_1,param_1 + 0xd4,param_2,local_2c);
LAB_0002ca34:
      if (iVar9 == 10) goto LAB_0002ce1c;
LAB_0002ca3c:
      if (iVar9 != 0xb) goto LAB_0002ce1c;
      break;
    case '\x06':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_DASHBOARD\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      param_1[0xdc] = '\0';
      while( true ) {
        if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b')) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n",
                          "process_for_DASHBOARD_show",(uint)(byte)param_1[0xd5]);
            }
            else {
              handle_heartbeat();
            }
          }
          update_persist_task_status_to_idle(param_1);
          goto LAB_0002caae;
        }
        if ((((*param_2 == 1) && (iVar9 = get_system_byte_2(), iVar9 == 0)) ||
            (((int)(DAT_20007b38 << 0x1e) < 0 && (iVar9 = get_system_byte_2(), iVar9 == 1)))) ||
           (((int)(DAT_20007b38 << 0x1e) < 0 && (iVar9 = get_system_byte_2(), iVar9 == 2)))) {
          if ((int)(DAT_20007b38 << 0x1e) < 0) {
            DAT_20007b38 = DAT_20007b38 & 0xfffffffd;
          }
          iVar9 = now_has_persist_task(param_1,param_1[0xd5]);
          if (iVar9 != 1) {
            sync_to_slave(param_1,8,0);
            update_persist_task_status_to_idle(param_1);
            if (LOG_LEVEL < 3) goto LAB_0002caae;
            uVar10 = (uint)(byte)param_1[0xd5];
            pcVar6 = "process_for_DASHBOARD_show";
            format_string = "%s(): #1 %d: I will go to suspend, goodbye!\n";
            goto LAB_0002cbe8;
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&DAT_000a2af2,"process_for_DASHBOARD_show",(uint)(byte)param_1[0xd5],
                          **(undefined4 **)(param_1 + 0x1054));
            }
            else {
              handle_heartbeat(&DAT_000a2af2,"process_for_DASHBOARD_show",param_1[0xd5]);
            }
          }
          uVar8 = **(uint **)(param_1 + 0x1054) & 0xff;
          goto LAB_0002cb9a;
        }
        iVar9 = now_has_persist_task(param_1,param_1[0xd5]);
        if (iVar9 == 1) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): #2 %d: %d %d I will go to next screen, goodbye!\n",
                          "process_for_DASHBOARD_show",(uint)(byte)param_1[0xd5],
                          *(undefined4 *)(param_1 + 0xdf),(uint)(byte)param_1[0xe3]);
            }
            else {
              handle_heartbeat("%s(): #2 %d: %d %d I will go to next screen, goodbye!\n",
                               "process_for_DASHBOARD_show",param_1[0xd5],
                               *(undefined4 *)(param_1 + 0xdf),(uint)(byte)param_1[0xe3]);
            }
          }
          uVar8 = *(uint *)(param_1 + 0xdf);
          if (uVar8 == 0xb) goto LAB_0002cb9a;
          switch(uVar8) {
          case 7:
            uVar8 = 7;
            goto LAB_0002cb9a;
          case 8:
            uVar8 = 8;
            goto LAB_0002cb9a;
          case 9:
            uVar8 = 9;
            goto LAB_0002cb9a;
          case 10:
            uVar8 = 10;
            goto LAB_0002cb9a;
          default:
            param_1[0xdc] = param_1[0xdc] + '\x01';
            break;
          case 0xc:
            uVar8 = 0xc;
            goto LAB_0002cb9a;
          case 0xe:
            uVar8 = 0xe;
            goto LAB_0002cb9a;
          case 0xf:
            uVar8 = 0xf;
            goto LAB_0002cb9a;
          case 0x10:
            uVar8 = 0x10;
            goto LAB_0002cb9a;
          case 0x11:
            uVar8 = 0x11;
            goto LAB_0002cb9a;
          }
        }
        if (param_1[0xd5] == '\x01') {
          if (LOG_LEVEL < 3) goto LAB_0002caae;
          uVar10 = (uint)(byte)param_1[0xd5];
          pcVar6 = "process_for_DASHBOARD_show";
          format_string =
               "%s(): #3 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n";
          goto LAB_0002cbe8;
        }
        if ((param_1[0x108f] != '\0') && (iVar9 = get_system_status_value(), iVar9 == 1)) {
          set_message_processing_active_flag();
          if (*param_1 == '\x01') {
            sync_message_signal_to_slave(1);
            clear_timeout_message(0);
            check_timeout_message_states_and_set_flag();
            advance_timeout_message_state();
            update_temp_task_status(param_1,4,2);
            goto LAB_0002cccc;
          }
          if (param_1[0xd5] == '\x04') goto LAB_0002ccda;
        }
        if (param_1[0xd5] == '\x04') {
          if (*param_1 == '\x02') {
            calculate_ble_schedule_timing(0x1334,0);
          }
          pcVar6 = "goto message show task becasse screen id is E_ID_SCREEN_ANCS_NOTIFICATION!";
          goto LAB_0002cd00;
        }
        if (param_1[0xfe6] == '\x01') {
          uVar5 = 0x667;
          goto LAB_0002cd18;
        }
        uVar10 = uVar10 + 1;
        if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&DAT_000a2c0b,"process_for_DASHBOARD_show",uVar10,
                        **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd],
                        (uint)(byte)param_1[0xe3],*(undefined4 *)(param_1 + 0xdf),
                        (uint)(byte)param_1[0xdc]);
          }
          else {
            handle_heartbeat();
          }
        }
        if ((DAT_20018d9e != '\0') && (iVar9 = count_active_system_entries(), iVar9 != 0)) break;
        get_work_mode();
        calculate_ble_schedule_timing(0x667,0);
      }
      set_message_processing_active_flag();
      control_timer_operation(6);
      update_temp_task_status(param_1,4,2);
      pcVar6 = "display msg by touch";
LAB_0002cd8c:
      trigger_screen_state_change(pcVar6,param_1,1);
      break;
    case '\a':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_NOT_DISTURB\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002d6ce;
    case '\b':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_SCHEDULE\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      param_1[0xb0d] = '\0';
      iVar9 = get_work_mode();
      uVar2 = calculate_next_timeout_message_state();
      *(undefined1 *)(iVar9 + 0xdd) = uVar2;
      while ((*param_2 != 1 || (param_1[0xfea] != '\n'))) {
        calculate_ble_schedule_timing(0x667,0);
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #1 %d: I will go to suspend, goodbye!\n","process_for_schedule_show",
                      (uint)(byte)param_1[0xd5]);
        }
        else {
          handle_heartbeat();
        }
      }
      sync_to_slave(param_1,8,0);
      update_persist_task_status_to_idle(param_1);
      local_2c[0] = "imu-trigger-off-imm";
      goto LAB_0002d118;
    case '\t':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_TELEPROMPTER\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      iVar9 = *(int *)(param_1 + 0xffc);
      goto LAB_0002d03e;
    case '\n':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_NAVIGATION\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      pcVar6 = *(char **)(param_1 + 0x1000);
      goto LAB_0002d37c;
    case '\v':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_TRANSLATE\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002d4ce;
    case '\f':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_QUICKNOTE\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002d1b4;
    case '\x0e':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_ONBOARDING\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002d7ee;
    case '\x0f':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_RASTER_CONFIG\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002d998;
    case '\x10':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_EVEN_AI\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002dac0;
    case '\x11':
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): switch -> E_ID_SCREEN_SET_IMU_PITCH\n","process_for_new_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar10 = 0;
      goto LAB_0002dd2a;
    }
    iVar9 = 0xb;
  } while( true );
LAB_0002dd2a:
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b'))
  goto LAB_0002dd30;
  if (**(char **)(param_1 + 0x101c) == '\0') {
    local_2c[0] = "set_imu_pitch:self exit";
    if (*param_2 != 2) {
      if (LOG_LEVEL < 3) goto LAB_0002d2da;
      uVar10 = (uint)(byte)param_1[0xd5];
      pcVar6 = "process_for_set_imu_pitch_show";
      goto LAB_0002d5b8;
    }
    sync_to_slave(param_1,8,0);
    if (LOG_LEVEL < 3) goto LAB_0002d9fc;
    bVar1 = param_1[0xd5];
    pcVar6 = "process_for_set_imu_pitch_show";
    goto LAB_0002d9f0;
  }
  if (param_1[0xd5] == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #9 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n"
                    ,"process_for_set_imu_pitch_show",(uint)(byte)param_1[0xd5]);
      }
      else {
        handle_heartbeat();
      }
    }
    local_2c[0] = "set_imu_pitch:imu-trigger-off-imm";
    goto LAB_0002ce1c;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a3619,"process_for_set_imu_pitch_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a3619);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002dd2a;
LAB_0002dd30:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_set_imu_pitch_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "set_imu_pitch:dfu";
  goto LAB_0002ce1c;
LAB_0002dac0:
  if (param_1[0xfea] == '\f') goto code_r0x0002dac8;
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b')) {
    if (2 < LOG_LEVEL) {
      bVar1 = param_1[0xd5];
      pcVar6 = "%s(): #0 %d: I will go to suspend, goodbye!\n";
LAB_0002dc06:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar6,"process_for_even_ai_show",(uint)bVar1);
      }
      else {
        handle_heartbeat();
      }
    }
    goto LAB_0002db7c;
  }
  iVar9 = check_work_mode_and_ancs_status();
  if (((iVar9 == 0) && (iVar9 = get_work_mode(), 1 < **(byte **)(iVar9 + 0x100c))) &&
     (iVar9 = get_work_mode(), **(byte **)(iVar9 + 0x100c) < 10)) {
    iVar9 = get_work_mode();
    **(undefined1 **)(iVar9 + 0x100c) = 10;
  }
  if (((*(char *)(*(int *)(param_1 + 0x100c) + 7) == '\0') ||
      (iVar9 = get_work_mode(), **(char **)(iVar9 + 0x100c) == '\0')) ||
     (((**(char **)(param_1 + 0x100c) == '\b' || (**(char **)(param_1 + 0x100c) == '\v')) &&
      (param_1[0xdb] == '\0')))) {
    if (*param_1 == '\x01') {
      send_event_status(0);
    }
    if (*param_2 == 2) {
      sync_to_slave(param_1,8,0);
      if (2 < LOG_LEVEL) {
        bVar1 = param_1[0xd5];
        pcVar6 = "%s(): #1 %d: I will go to dashboard, goodbye!\n";
        goto LAB_0002dc06;
      }
    }
    else {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #2 %d: I will go to suspend, goodbye!\n","process_for_even_ai_show",
                      (uint)(byte)param_1[0xd5]);
        }
        else {
          handle_heartbeat();
        }
      }
      sync_to_slave(param_1,8,0);
    }
    goto LAB_0002db7c;
  }
  if (param_1[0xd5] == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #9 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n"
                    ,"process_for_even_ai_show",(uint)(byte)param_1[0xd5]);
      }
      else {
        handle_heartbeat();
      }
    }
    clear_work_mode_flags_and_buffers(1);
    local_2c[0] = "evenai:imu-trigger-off-imm";
    goto LAB_0002ce1c;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a3558,"process_for_even_ai_show",uVar10,**(undefined4 **)(param_1 + 0xff0)
                  ,(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a3558);
    }
  }
  if ((*param_1 == '\x01') &&
     (((**(byte **)(param_1 + 0x100c) - 7 < 2 || (**(byte **)(param_1 + 0x100c) == 0xb)) &&
      ((uVar10 * -0x33333333 >> 2 | uVar10 * 0x40000000) < 0xccccccd)))) {
    param_1[0xdb] = param_1[0xdb] + -1;
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002dac0;
LAB_0002d998:
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b'))
  goto LAB_0002d99e;
  if (**(char **)(param_1 + 0x1018) == '\0') {
    local_2c[0] = "raster_height:self exit";
    if (*param_2 == 2) {
      sync_to_slave(param_1,8,0);
      if (2 < LOG_LEVEL) {
        bVar1 = param_1[0xd5];
        pcVar6 = "process_for_raster_height_show";
LAB_0002d9f0:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #1 %d: I will go to dashboard, goodbye!\n",pcVar6,(uint)bVar1);
        }
        else {
          handle_heartbeat();
        }
      }
      goto LAB_0002d9fc;
    }
    if (LOG_LEVEL < 3) goto LAB_0002d2da;
    uVar10 = (uint)(byte)param_1[0xd5];
    pcVar6 = "process_for_raster_height_show";
    goto LAB_0002d5b8;
  }
  if (param_1[0xd5] == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #9 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n"
                    ,"process_for_raster_height_show",(uint)(byte)param_1[0xd5]);
      }
      else {
        handle_heartbeat();
      }
    }
    local_2c[0] = "raster_height:imu-trigger-off-imm";
    goto LAB_0002ce1c;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a34a2,"process_for_raster_height_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a34a2);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d998;
LAB_0002d99e:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_raster_height_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "raster_height:dfu";
  goto LAB_0002ce1c;
LAB_0002d7ee:
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b'))
  goto LAB_0002d7f4;
  if (**(char **)(param_1 + 0x1014) == '\0') {
    local_2c[0] = "onboarding:self exit";
    if (*param_2 == 2) {
      sync_to_slave(param_1,8,0);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #1 %d: I will go to dashboard, goodbye!\n",
                      "process_for_onboarding_show",(uint)(byte)param_1[0xd5]);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #2 %d: I will go to suspend, goodbye!\n","process_for_onboarding_show",
                      (uint)(byte)param_1[0xd5]);
        }
        else {
          handle_heartbeat();
        }
      }
      sync_to_slave(param_1,8,0);
    }
    update_persist_task_status_to_idle(param_1);
    if (*param_1 != '\x01') goto LAB_0002ce1c;
    uVar5 = 0xccd;
    goto LAB_0002cd18;
  }
  if (param_1[0xd5] == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #9 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n"
                    ,"process_for_onboarding_show",(uint)(byte)param_1[0xd5]);
      }
      else {
        handle_heartbeat();
      }
    }
    local_2c[0] = "onboarding:imu-trigger-off-imm";
    goto LAB_0002ce1c;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a33de,"process_for_onboarding_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a33de);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d7ee;
LAB_0002d7f4:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_onboarding_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "onboarding:dfu";
  goto LAB_0002ce1c;
LAB_0002d1b4:
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b'))
  goto LAB_0002d1ba;
  if (**(char **)(param_1 + 0x1020) == '\0') {
    local_2c[0] = "quicknote:self exit";
    if (*param_2 != 2) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #0 %d-%d,display mode = %d: I will go to suspend, goodbye! imu->attitude %d\n"
                      ,"process_for_quicknote_show",(uint)(byte)param_1[0xd5],0,
                      (uint)(byte)param_1[0xfea],(uint)*param_2);
        }
        else {
          handle_heartbeat("%s(): #0 %d-%d,display mode = %d: I will go to suspend, goodbye! imu->attitude %d\n"
                           ,"process_for_quicknote_show");
        }
      }
      goto LAB_0002d2da;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): process_for_quicknote_show #0 %d-%d,display mode = %d: I will go to suspend, goodbye! imu->attitude %d\n"
                    ,"process_for_quicknote_show",(uint)(byte)param_1[0xd5],0,
                    (uint)(byte)param_1[0xfea],2);
      }
      else {
        handle_heartbeat("%s(): process_for_quicknote_show #0 %d-%d,display mode = %d: I will go to suspend, goodbye! imu->attitude %d\n"
                         ,"process_for_quicknote_show");
      }
    }
    sync_to_slave(param_1,8,0);
    if (*param_2 == 2) {
      update_persist_task_status_to_wait_blow_head();
    }
    else {
      update_persist_task_status_to_idle(param_1);
    }
    trigger_screen_state_change("IMU:wakeup:dashboard",param_1,1);
    goto LAB_0002d118;
  }
  if (param_1[0xd5] == '\x01') {
    if (LOG_LEVEL < 3) goto LAB_0002caae;
    uVar10 = (uint)(byte)param_1[0xd5];
    pcVar6 = "process_for_quicknote_show";
    goto LAB_0002cffe;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a3071,"process_for_quicknote_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a3071);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d1b4;
LAB_0002d1ba:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_quicknote_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "quicknote:imu-trigger-off-imm";
  goto LAB_0002ce1c;
LAB_0002d4ce:
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b'))
  goto LAB_0002d4d4;
  if ((*(char *)(*(int *)(param_1 + 0x1004) + 6) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x1008) + 6) == '\0')) {
    local_2c[0] = "translate:self exit";
    if (*param_2 != 2) {
      if (2 < LOG_LEVEL) {
        uVar10 = (uint)(byte)param_1[0xd5];
        pcVar6 = "process_for_translate_show";
LAB_0002d5b8:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #2 %d: I will go to suspend, goodbye!\n",pcVar6,uVar10);
        }
        else {
          handle_heartbeat();
        }
      }
      goto LAB_0002d2da;
    }
    sync_to_slave(param_1,8,0);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #1 %d: I will go to dashboard, goodbye!\n","process_for_translate_show",
                    (uint)(byte)param_1[0xd5]);
      }
      else {
        handle_heartbeat();
      }
    }
    goto LAB_0002d0b4;
  }
  if (param_1[0xd5] == '\x01') {
    if (LOG_LEVEL < 3) goto LAB_0002caae;
    uVar10 = (uint)(byte)param_1[0xd5];
    pcVar6 = "process_for_translate_show";
    goto LAB_0002cffe;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a3244,"process_for_translate_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a3244);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d4ce;
LAB_0002d4d4:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_translate_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "translate:self exit";
  goto LAB_0002ce1c;
LAB_0002d37c:
  if ((param_1[1] != '\x01') && (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) != '\b')) {
    if (*pcVar6 != '\0') {
      if (param_1[0xd5] != '\x01') goto LAB_0002d46a;
      if (LOG_LEVEL < 3) goto LAB_0002caae;
      uVar10 = (uint)(byte)param_1[0xd5];
      pcVar6 = "process_for_navigation_show";
      goto LAB_0002cffe;
    }
    local_2c[0] = "navigation:self exit";
    if (*param_2 != 2) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #0 %d-%d: I will go to suspend, goodbye!\n",
                      "process_for_navigation_show",(uint)(byte)param_1[0xd5],0);
        }
        else {
          handle_heartbeat("%s(): #0 %d-%d: I will go to suspend, goodbye!\n",
                           "process_for_navigation_show");
        }
      }
LAB_0002d2da:
      sync_to_slave(param_1,8,0);
LAB_0002d9fc:
      update_persist_task_status_to_idle(param_1);
      goto LAB_0002d118;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #0 %d-%d: I will go to suspend becasue workmode %d, goodbye!\n",
                    "process_for_navigation_show",(uint)(byte)param_1[0xd5],0,(uint)(byte)param_1[1]
                   );
      }
      else {
        handle_heartbeat("%s(): #0 %d-%d: I will go to suspend becasue workmode %d, goodbye!\n",
                         "process_for_navigation_show");
      }
    }
    sync_to_slave(param_1,8,0);
    update_persist_task_status_to_idle(param_1);
    trigger_screen_state_change("IMU:wakeup:dashboard",param_1,1);
    goto LAB_0002d3ec;
  }
  goto LAB_0002d382;
LAB_0002d46a:
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a318d,"process_for_navigation_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a318d);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d37c;
LAB_0002d382:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_navigation_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "navigation:imu-trigger-off-imm";
  goto LAB_0002ce1c;
LAB_0002d03e:
  if ((param_1[1] == '\x01') || (iVar4 = get_work_mode(), *(char *)(iVar4 + 1) == '\b'))
  goto LAB_0002d044;
  if (*(char *)(iVar9 + 1) == '\0') {
    local_2c[0] = "temeprompter:self exit";
    enable_dmic_stream();
    if (*param_2 == 2) {
      trigger_screen_state_change("IMU:wakeup:dashboard",param_1,1);
      clear_memory_buffer_0x230();
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #2 %d-%d: I will go to suspend becasue workmode %d,, goodbye!\n",
                      "process_for_teleprompter_show",(uint)(byte)param_1[0xd5],
                      (uint)*(byte *)(iVar9 + 1),(uint)(byte)param_1[1]);
        }
        else {
          handle_heartbeat("%s(): #2 %d-%d: I will go to suspend becasue workmode %d,, goodbye!\n",
                           "process_for_teleprompter_show",param_1[0xd5],(uint)*(byte *)(iVar9 + 1),
                           (uint)(byte)param_1[1]);
        }
      }
      sync_to_slave(param_1,8,0);
LAB_0002d0b4:
      update_persist_task_status_to_idle(param_1);
LAB_0002d3ec:
      if (*param_1 == '\x01') {
        calculate_ble_schedule_timing(0x4000,0);
      }
      uVar5 = 0x2667;
    }
    else {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #3 %d-%d: I will go to suspend, goodbye!\n",
                      "process_for_teleprompter_show",(uint)(byte)param_1[0xd5],
                      (uint)*(byte *)(iVar9 + 1));
        }
        else {
          handle_heartbeat("%s(): #3 %d-%d: I will go to suspend, goodbye!\n",
                           "process_for_teleprompter_show",param_1[0xd5]);
        }
      }
      sync_to_slave(param_1,8,0);
      update_persist_task_status_to_idle(param_1);
      clear_memory_buffer_0x230();
LAB_0002d118:
      if (*param_1 != '\x01') goto LAB_0002ce1c;
      uVar5 = 0x4000;
    }
LAB_0002cd18:
    calculate_ble_schedule_timing(uVar5,0);
    goto LAB_0002ce1c;
  }
  if (param_1[0xd5] == '\x01') {
    if (2 < LOG_LEVEL) {
      uVar10 = (uint)(byte)param_1[0xd5];
      pcVar6 = "process_for_teleprompter_show";
LAB_0002cffe:
      format_string =
           "%s(): #9 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n";
LAB_0002cbe8:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(format_string,pcVar6,uVar10);
      }
      else {
        handle_heartbeat();
      }
    }
LAB_0002caae:
    local_2c[0] = "dashboard:imu-trigger-off-imm";
    goto LAB_0002ce1c;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a2f08,"process_for_teleprompter_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a2f08);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d03e;
LAB_0002d044:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #1 %d: I will go to suspend, goodbye!\n","process_for_teleprompter_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "teleprompter:imu-trigger-off-imm";
  goto LAB_0002ce1c;
LAB_0002d6ce:
  if ((param_1[1] == '\x01') || (iVar9 = get_work_mode(), *(char *)(iVar9 + 1) == '\b'))
  goto LAB_0002d6d4;
  if (**(char **)(param_1 + 0x1010) == '\0') {
    local_2c[0] = "not_disturb:self exit";
    if (*param_2 == 2) {
      if (2 < LOG_LEVEL) {
        bVar1 = param_1[0xd5];
        pcVar6 = "%s(): #1 %d: I will go to dashboard, goodbye!\n";
LAB_0002d71c:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(pcVar6,"process_for_not_disturb_show",(uint)bVar1);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else if (2 < LOG_LEVEL) {
      bVar1 = param_1[0xd5];
      pcVar6 = "%s(): #2 %d: I will go to suspend, goodbye!\n";
      goto LAB_0002d71c;
    }
    update_persist_task_status_to_idle(param_1);
    goto LAB_0002ce1c;
  }
  if (param_1[0xd5] == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #9 %d: I will go to suspend because enter wait blowhead mode, goodbye!\n"
                    ,"process_for_not_disturb_show",(uint)(byte)param_1[0xd5]);
      }
      else {
        handle_heartbeat();
      }
    }
    local_2c[0] = "not_disturb:imu-trigger-off-imm";
    goto LAB_0002ce1c;
  }
  uVar10 = uVar10 + 1;
  if (((uVar10 & 0xf) == 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&DAT_000a3325,"process_for_not_disturb_show",uVar10,
                  **(undefined4 **)(param_1 + 0xff0),(uint)*param_2,(uint)(byte)param_1[0xdd]);
    }
    else {
      handle_heartbeat(&DAT_000a3325);
    }
  }
  calculate_ble_schedule_timing(0x667,0);
  goto LAB_0002d6ce;
LAB_0002d6d4:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n","process_for_not_disturb_show",
                  (uint)(byte)param_1[0xd5]);
    }
    else {
      handle_heartbeat();
    }
  }
  update_persist_task_status_to_idle(param_1);
  local_2c[0] = "not_disturb:dfu";
  goto LAB_0002ce1c;
code_r0x0002dac8:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #0 %d: I will go to suspend becasue workmode %d, goodbye!\n",
                  "process_for_even_ai_show",(uint)(byte)param_1[0xd5],(uint)(byte)param_1[1]);
    }
    else {
      handle_heartbeat("%s(): #0 %d: I will go to suspend becasue workmode %d, goodbye!\n",
                       "process_for_even_ai_show",param_1[0xd5]);
    }
  }
  sync_to_slave(param_1,8,0);
  if (*param_2 == 2) {
    update_persist_task_status_to_wait_blow_head();
  }
  else {
LAB_0002db7c:
    update_persist_task_status_to_idle(param_1);
  }
  clear_work_mode_flags_and_buffers(1);
  local_2c[0] = "evenai:self exit";
LAB_0002ce1c:
  pcVar6 = local_2c[0];
  if (local_2c[0] != (char *)0x0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #6 %d: timeout_suspend reason: %s\n","process_for_new_task",
                    (uint)(byte)param_1[0xd5],local_2c[0]);
      }
      else {
        handle_heartbeat("%s(): #6 %d: timeout_suspend reason: %s\n","process_for_new_task",
                         (uint)(byte)param_1[0xd5],local_2c[0]);
      }
    }
    trigger_screen_state_change(pcVar6,param_1,0);
    iVar9 = get_system_status_value();
    if (iVar9 == 1) {
      iVar9 = is_msg_expiration();
      if (iVar9 == 1) {
        cVar3 = '\x05';
      }
      else {
        iVar9 = get_work_mode();
        cVar3 = *(char *)(iVar9 + 0xdd);
        if (cVar3 != '\0') {
          cVar3 = '\x06';
        }
      }
      control_timer_operation(cVar3);
    }
  }
  return 0;
}


