/*
 * Function: slave_display_main_thread
 * Entry:    000286f8
 * Prototype: undefined slave_display_main_thread()
 */


void slave_display_main_thread(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  do {
    while ((iVar1 = get_work_mode(), *(char *)(iVar1 + 1) == '\x01' ||
           (iVar1 = get_work_mode(), *(char *)(iVar1 + 1) == '\b'))) {
      get_schedule_timing(0x28000,0);
    }
    pcVar2 = (char *)get_work_mode();
    if (*pcVar2 == '\x01') {
      iVar1 = get_work_mode();
      switch(**(undefined1 **)(iVar1 + 0x100c)) {
      case 1:
        uVar3 = get_work_mode();
        iVar1 = sync_to_slave(uVar3,0xd,0);
        if (iVar1 < 500) {
          update_task_status_and_clear_buffer(param_1,0);
          clear_work_mode_flags_and_buffers(0);
          iVar1 = get_work_mode_config_value();
          if (iVar1 == 0) {
            iVar1 = get_work_mode();
            uVar4 = 3;
            puVar5 = *(undefined1 **)(iVar1 + 0x100c);
          }
          else {
            iVar1 = get_work_mode();
            uVar4 = 2;
            puVar5 = *(undefined1 **)(iVar1 + 0x100c);
          }
          *puVar5 = uVar4;
          iVar1 = get_work_mode();
          if (**(int **)(iVar1 + 0x1054) != 0x10) {
            uVar3 = get_work_mode();
            update_persist_task_status(uVar3,0x10,2);
          }
        }
        break;
      case 3:
        uVar3 = get_work_mode();
        iVar1 = sync_to_slave(uVar3,0xe,0);
        if (iVar1 < 500) {
          iVar1 = get_work_mode();
          uVar4 = 4;
          puVar5 = *(undefined1 **)(iVar1 + 0x100c);
LAB_0002884a:
          *puVar5 = uVar4;
        }
        break;
      case 5:
        uVar3 = get_work_mode();
        iVar1 = sync_to_slave(uVar3,0xf,0);
        if (iVar1 < 500) {
          enable_dmic_stream();
          send_event_status(0x18);
          iVar1 = get_work_mode();
          uVar4 = 6;
          puVar5 = *(undefined1 **)(iVar1 + 0x100c);
          goto LAB_0002884a;
        }
        break;
      case 10:
        uVar3 = get_work_mode();
        iVar1 = sync_to_slave(uVar3,0x10,0);
        if (iVar1 < 500) {
          iVar1 = get_work_mode();
          **(undefined1 **)(iVar1 + 0x100c) = 0xb;
          iVar1 = get_work_mode();
          *(undefined1 *)(iVar1 + 0xdb) = 8;
        }
        break;
      case 0xd:
        uVar3 = get_work_mode();
        iVar1 = sync_to_slave(uVar3,0x11,0);
        if (iVar1 < 500) {
          iVar1 = get_work_mode();
          uVar4 = 0xe;
          puVar5 = *(undefined1 **)(iVar1 + 0x100c);
          goto LAB_0002884a;
        }
        break;
      case 0xf:
        uVar3 = get_work_mode();
        iVar1 = sync_to_slave(uVar3,0x12,0);
        if (iVar1 < 500) {
          iVar1 = get_work_mode();
          uVar4 = 0x10;
          puVar5 = *(undefined1 **)(iVar1 + 0x100c);
          goto LAB_0002884a;
        }
      }
    }
    else {
      iVar1 = get_work_mode();
      if (**(char **)(iVar1 + 0x100c) == '\x01') {
        uVar3 = get_work_mode();
        process_message_and_sync(uVar3,0xe,0);
        update_task_status_and_clear_buffer(param_1,0);
      }
      else if (**(char **)(iVar1 + 0x100c) == '\x05') {
        uVar3 = get_work_mode();
        process_message_and_sync(uVar3,0xf,0);
      }
    }
    if (DAT_20018d97 != '\0') {
      delay_with_timing(2000);
      DAT_20018d97 = '\0';
    }
    handle_message_confirmation_and_sync();
    pcVar2 = (char *)get_work_mode();
    if ((*pcVar2 == '\x01') && (DAT_2000ff4d != '\0')) {
      sync_message_signal_to_slave(3);
      iVar1 = get_work_mode();
      if ((*(char *)(iVar1 + 0x108f) != '\0') &&
         ((iVar1 = calculate_next_timeout_message_state(), iVar1 != 0 &&
          (iVar1 = get_work_mode(), *(char *)(iVar1 + 0xd5) != '\x04')))) {
        uVar3 = get_work_mode();
        update_temp_task_status(uVar3,4,2);
        uVar3 = get_work_mode();
        trigger_screen_state_change("IMU:wakeup:new-notification",uVar3,1);
        check_timeout_message_states_and_set_flag();
      }
      DAT_2000ff4d = '\0';
      manage_system_status_and_timeout_transitions();
    }
    delay_with_timing(200);
  } while( true );
}


