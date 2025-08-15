/*
 * Function: key_event_thread
 * Entry:    0002955c
 * Prototype: undefined key_event_thread()
 */


void key_event_thread(char *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  char *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar8 = 0;
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  init_bluetooth_stack();
LAB_0002956e:
  iVar3 = get_work_mode();
  if (*(char *)(iVar3 + 1) == '\x01') goto LAB_00029578;
  uVar10 = get_work_mode();
  if (*(char *)((int)uVar10 + 1) == '\b') goto LAB_00029578;
  iVar3 = manage_ble_connection_state_comprehensive
                    (&DAT_20007b1c,(int)((ulonglong)uVar10 >> 0x20),0xffffffff,0xffffffff);
  if (iVar3 != 0) goto switchD_000297f8_caseD_5;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): key event trigger, type %d\n\n","key_event_thread",
                  KEY_EVENT_THREAD_STATE_DATA);
    }
    else {
      handle_heartbeat();
    }
  }
  if (KEY_EVENT_THREAD_STATE_DATA == 1) {
    if (**(char **)(param_1 + 0x1014) == '\0') {
      if ((**(byte **)(param_1 + 0x100c) - 7 < 5) || (**(char **)(param_1 + 0x101c) != '\0')) {
        uVar5 = 1;
        goto LAB_00029654;
      }
      if (*(char *)(*(int *)(param_1 + 0xffc) + 1) != '\0') {
        send_event_status(1);
      }
      if (*param_1 != '\x01') {
        if (((*param_1 == '\x02') && (iVar3 = count_active_system_entries(), iVar3 != 0)) &&
           (((param_1[0x108f] != '\0' && ((byte)param_1[0xd5] < 2)) ||
            ((param_1[0xd5] == '\x06' || (param_1[0xd5] == '\x04')))))) {
          do {
            while ((iVar3 = iVar8, param_1[0x108f] == '\0' &&
                   ((DISPLAY_UI_CONFIG != '\0' && (iVar3 = iVar8 + 1, iVar8 < 100))))) {
              delay_with_timing(10);
              iVar8 = iVar3;
            }
            iVar6 = process_message_with_timeout_and_sync();
            iVar8 = iVar3;
          } while (iVar6 < 0);
        }
        goto switchD_000297f8_caseD_5;
      }
      if (param_1[0xd5] != '\x06') goto switchD_000297f8_caseD_5;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): master single Click release ....\n","key_event_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar3 = get_system_parameter_value();
      local_2c = CONCAT22(local_2c._2_2_,0x102);
      if (iVar3 == 0) {
        if (3 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): master send key single click ,timestamp = %d\n","key_event_thread",
                        **(undefined4 **)(param_1 + 0xfec));
          }
          else {
            handle_heartbeat();
          }
        }
        cVar2 = get_work_mode_status();
LAB_000296bc:
        bVar1 = local_2c._1_1_ | cVar2 << 4;
        local_2c._0_2_ = CONCAT11(bVar1,(undefined1)local_2c);
      }
      else {
        if (iVar3 == 1) {
          local_2c = CONCAT22(local_2c._2_2_,0x302);
          if (3 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master send key single click ,timestamp = %d\n","key_event_thread",
                          **(undefined4 **)(param_1 + 0xfec));
            }
            else {
              handle_heartbeat();
            }
          }
          cVar2 = get_and_log_system_parameter();
          goto LAB_000296bc;
        }
        if (iVar3 == 2) {
          local_2c = CONCAT22(local_2c._2_2_,0x502);
          if (3 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master send key single click ,timestamp = %d\n","key_event_thread",
                          **(undefined4 **)(param_1 + 0xfec));
            }
            else {
              handle_heartbeat();
            }
          }
          cVar2 = get_and_log_system_parameter_alt();
          goto LAB_000296bc;
        }
      }
      iVar3 = sync_to_slave(param_1,6,&local_2c,2);
      if (4999 < iVar3) {
        if (1 < LOG_LEVEL) {
          pcVar4 = "%s(): SYNC TO Slave failed...,don\'t exec key function.\n";
          goto LAB_000296ee;
        }
        goto switchD_000297f8_caseD_5;
      }
      if (3 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): sync to slave return value = %d,exec key function. ts = %d\n",
                      "key_event_thread",iVar3,**(undefined4 **)(param_1 + 0xfec));
        }
        else {
          handle_heartbeat("%s(): sync to slave return value = %d,exec key function. ts = %d\n",
                           "key_event_thread");
        }
      }
      display_inputEvent(0,1);
      goto LAB_00029786;
    }
    send_event_status(1);
    cVar2 = *(char *)(*(int *)(param_1 + 0x1014) + 2);
    if (cVar2 == '\x05') {
      pcVar4 = (char *)get_work_mode();
      if (*pcVar4 != '\x02') goto LAB_0002956e;
      uVar9 = 0x13;
    }
    else {
      if (cVar2 != '\x13') {
        if ((cVar2 == '\x14') && (pcVar4 = (char *)get_work_mode(), *pcVar4 == '\x01')) {
          *(undefined1 *)(*(int *)(param_1 + 0x1014) + 2) = 0x15;
        }
        goto LAB_0002956e;
      }
      pcVar4 = (char *)get_work_mode();
      if (*pcVar4 != '\x02') goto LAB_0002956e;
      uVar9 = 0x14;
    }
    local_2c = CONCAT31(local_2c._1_3_,uVar9);
    iVar3 = onboarding_sync_data(&local_2c,1);
    if (iVar3 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1014) + 2) = uVar9;
    }
    goto LAB_0002956e;
  }
  switch(KEY_EVENT_THREAD_STATE_DATA) {
  case 2:
    if (**(char **)(param_1 + 0x1014) != '\0') {
      uVar5 = 0x19;
LAB_00029654:
      send_event_status(uVar5);
      goto LAB_0002956e;
    }
    if (param_1[0xd5] == '\a') goto LAB_0002956e;
    iVar3 = get_system_byte_2();
    if ((iVar3 == 1) && (param_1[0xd5] == '\0')) {
      if (*param_1 == '\x01') {
        iVar3 = get_work_mode();
        *(undefined1 *)(iVar3 + 0xfe6) = 5;
        iVar3 = get_work_mode();
        iVar6 = get_work_mode();
        *(undefined1 *)(iVar6 + 0xcb) = *(undefined1 *)(iVar3 + 0xed5);
        uVar5 = get_work_mode();
        sync_to_slave(uVar5,2,0,0);
        change_work_mode_to(2);
        local_2c = CONCAT22(local_2c._2_2_,0x10a);
        iVar3 = 1;
        do {
          iVar6 = sync_to_slave(param_1,6,&local_2c,2);
          if (iVar6 < 5000) goto LAB_00029a02;
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec double click startup dashboard function.\n"
                          ,"key_event_thread",iVar3);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
      }
      else {
        iVar3 = 4;
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_0002956e;
          uVar7 = process_message_and_sync(param_1,6,0);
        } while (499 < uVar7);
        if (0 < LOG_LEVEL) {
          pcVar4 = "%s(): sync dashborad startup command success\n";
          goto LAB_00029906;
        }
      }
      goto LAB_0002956e;
    }
    iVar3 = get_system_byte_2();
    if ((iVar3 != 1) || (param_1[0xd5] != '\x06')) {
      cVar2 = 'e';
      while ((1 < (byte)param_1[0xfe6] && (cVar2 = cVar2 + -1, cVar2 != '\0'))) {
        delay_with_timing(10);
      }
      if (param_1[0xd5] == '\f') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Quicknote is currently in use, and the double-click function is temporarily disabled\n"
                        ,"key_event_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        iVar3 = 1;
        local_2c = CONCAT22(local_2c._2_2_,1);
        do {
          iVar6 = sync_to_slave(param_1,6,&local_2c,2);
          if (iVar6 < 5000) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): SEND DELAY CLOSE TO SLAVE SUCCESS,master start delay close function\n"
                            ,"key_event_thread");
              }
              else {
                handle_heartbeat();
              }
            }
            display_DelayClose(10000);
            manage_ble_connection_priority_with_data_processing();
            break;
          }
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec quick note start function.\n"
                          ,"key_event_thread",iVar3);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        if (1 < LOG_LEVEL) {
          pcVar4 = "%s(): Click event does not respond, close Quicknote to prevent exceptions\n";
          goto LAB_000296ee;
        }
      }
      else {
        send_event_status(0);
        if (*param_1 == '\x01') {
          if (param_1[0xd5] == '\x04') {
            decrement_timer_counter();
            iVar3 = get_work_mode();
            cVar2 = *(char *)(iVar3 + 0xdd);
            if (cVar2 != '\0') {
              cVar2 = '\x06';
            }
            control_timer_operation(cVar2);
          }
          iVar3 = 1;
          local_30 = (char *)CONCAT22(local_30._2_2_,1);
          if (param_1[0xd5] == '\x06') {
            iVar3 = get_system_byte_2();
            if ((iVar3 == 0) && (param_1[0xd5] == '\x06')) {
              sync_to_slave(param_1,8,&local_30,2);
LAB_00029aac:
              handle_work_mode_finish(param_1,0);
              update_persist_task_status_to_idle(param_1);
            }
            else {
              iVar3 = get_system_byte_2();
              if ((iVar3 == 2) && (param_1[0xd5] == '\x06')) {
                iVar3 = 1;
                local_2c = CONCAT22(local_2c._2_2_,0x10a);
                do {
                  iVar6 = sync_to_slave(param_1,6,&local_2c,2);
                  if (iVar6 < 5000) {
                    if (2 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): SEND DELAY CLOSE TO SLAVE SUCCESS,master start delay close function\n"
                                    ,"key_event_thread");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    atomic_set_bit_1(&PROXY_THREAD_MUTEX);
                    break;
                  }
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec double click startup dashboard function.\n"
                                  ,"key_event_thread",iVar3);
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 != 4);
              }
            }
          }
          else {
            atomic_set_bit_1(&DAT_20007b34);
            do {
              iVar6 = sync_to_slave(param_1,8,&local_30,2);
              if (iVar6 < 5000) {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): SEND double click event to slave.\n","key_event_thread");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                goto LAB_00029a6e;
              }
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec double click close app function.\n"
                              ,"key_event_thread",iVar3);
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 4);
          }
        }
        else if (param_1[0xd5] == '\x06') {
          iVar3 = get_system_byte_2();
          if ((iVar3 == 0) && (param_1[0xd5] == '\x06')) {
            process_message_and_sync(param_1,4,0);
            iVar3 = get_work_mode();
            if (*(char *)(iVar3 + 0xd5) == '\x04') {
              decrement_timer_counter();
              iVar3 = get_work_mode();
              cVar2 = *(char *)(iVar3 + 0xdd);
              if (cVar2 != '\0') {
                cVar2 = '\x06';
              }
              control_timer_operation(cVar2);
            }
            goto LAB_00029aac;
          }
          iVar3 = get_system_byte_2();
          if ((iVar3 == 2) && (param_1[0xd5] == '\x06')) {
            iVar3 = 4;
            do {
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) goto LAB_00029a76;
              uVar7 = process_message_and_sync(param_1,6,0);
            } while (499 < uVar7);
            if (LOG_LEVEL < 3) break;
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): sync dashborad startup command success\n","key_event_thread");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          process_message_and_sync(param_1,4,0);
          iVar3 = get_work_mode();
          if (*(char *)(iVar3 + 0xd5) == '\x04') {
            decrement_timer_counter();
            iVar3 = get_work_mode();
            cVar2 = *(char *)(iVar3 + 0xdd);
            if (cVar2 != '\0') {
              cVar2 = '\x06';
            }
            control_timer_operation(cVar2);
          }
LAB_00029a6e:
          handle_work_mode_finish(param_1,0);
        }
LAB_00029a76:
        if (2 < LOG_LEVEL) {
          pcVar4 = "%s(): Currently in a non-Quicknote state, double-click to close all apps\n";
          goto LAB_000296ee;
        }
      }
      break;
    }
    if (*param_1 == '\x01') {
      local_2c = CONCAT22(local_2c._2_2_,0x10a);
      iVar3 = 1;
      do {
        iVar6 = sync_to_slave(param_1,6,&local_2c,2);
        if (iVar6 < 5000) goto LAB_00029a02;
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec double click startup dashboard function.\n"
                        ,"key_event_thread",iVar3);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      goto LAB_0002956e;
    }
    iVar3 = 4;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_0002956e;
      uVar7 = process_message_and_sync(param_1,6,0);
    } while (499 < uVar7);
    if (LOG_LEVEL < 1) goto LAB_0002956e;
    pcVar4 = "%s(): sync dashborad startup command success,close dashboard function\n";
    goto LAB_00029906;
  case 3:
    if (**(char **)(param_1 + 0x1014) == '\0') {
      if (param_1[0xfea] == '\f') {
        send_event_status(5);
        if (*param_1 == '\x01') {
          sync_to_slave(param_1,5);
        }
        else {
          process_message_and_sync(param_1,8,0,0);
        }
        param_1[0xfea] = '\n';
        set_work_mode_state_and_update_flags(1);
        if (0 < LOG_LEVEL) {
          pcVar4 = 
          "%s(): #############################exit not disturb################################\n\n";
LAB_00029cf8:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(pcVar4,"key_event_thread");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else {
        send_event_status(4);
        if (*param_1 == '\x01') {
          sync_to_slave(param_1,4,0);
          handle_work_mode_finish(param_1,0);
        }
        else {
          process_message_and_sync(param_1,7,0,0);
        }
        param_1[0xfea] = '\f';
        handle_work_mode_finish(param_1,1);
        set_work_mode_state_and_update_flags(0);
        if (0 < LOG_LEVEL) {
          pcVar4 = 
          "%s(): #############################enter not disturb################################\n\n"
          ;
          goto LAB_00029cf8;
        }
      }
      param_1[0x104c] = '\x03';
      param_1[0x104d] = '\0';
      param_1[0x104e] = '\0';
      param_1[0x104f] = '\0';
      z_spin_lock_valid(param_1 + 0x80);
      break;
    }
    goto LAB_0002956e;
  case 4:
    if (**(char **)(param_1 + 0x1014) == '\0') {
      DAT_20018d95 = 1;
      if (*param_1 != '\x01') {
        if (((DISPLAY_UI_STATE == '\0') && (iVar3 = check_work_mode_and_ancs_status(), iVar3 != 0))
           && ((iVar3 = is_panoramic_mode_active(), iVar3 != 0 ||
               ((param_1[0xd5] == '\x06' || (param_1[0xd5] == '\x01')))))) {
          clear_work_mode_flags_and_buffers(0);
          iVar3 = get_work_mode();
          **(undefined1 **)(iVar3 + 0x100c) = 1;
          send_event_status(0x17);
        }
        else if (1 < LOG_LEVEL) {
          bVar1 = param_1[0xd5];
          if (IS_DEBUG == 0) {
            uVar5 = is_panoramic_mode_active();
            DEBUG_PRINT("%s(): EvenAI cannot be started because screen_id %d, %d\n",
                        "key_event_thread",(uint)bVar1,uVar5);
          }
          else {
            uVar5 = is_panoramic_mode_active();
            handle_heartbeat("%s(): EvenAI cannot be started because screen_id %d, %d\n",
                             "key_event_thread",(uint)bVar1,uVar5);
          }
        }
        break;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): long press deceted,try to start quick note task. start timestamp = %d\n"
                      ,"key_event_thread",**(undefined4 **)(param_1 + 0xfec));
        }
        else {
          handle_heartbeat();
        }
      }
      if (param_1[0xd5] != '\f') {
        if ((DISPLAY_UI_STATE == '\0') &&
           ((iVar3 = is_panoramic_mode_active(), iVar3 != 0 || (param_1[0xd5] == '\x06')))) {
          local_2c = CONCAT22(local_2c._2_2_,0x101);
          iVar3 = sync_to_slave(param_1,6,&local_2c,2);
          if (iVar3 < 5000) {
            update_task_status_and_clear_buffer(param_1,0);
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): SYNC TO Slave success...,exec quick note start function. ret = %d\n"
                            ,"key_event_thread",iVar3);
              }
              else {
                handle_heartbeat();
              }
            }
            param_1[0xec] = '\f';
            **(undefined1 **)(param_1 + 0x1020) = 1;
            update_persist_task_status(param_1,0xc,2);
            *(char *)(*(int *)(param_1 + 0x1020) + 2) =
                 *(char *)(*(int *)(param_1 + 0x1020) + 2) + '\x01';
          }
          else if (1 < LOG_LEVEL) {
            pcVar4 = "%s(): SYNC TO Slave failed...,don\'t exec quick note start function.\n";
            goto LAB_000296ee;
          }
        }
        else if (1 < LOG_LEVEL) {
          pcVar4 = "%s(): QuickNote cannot be started because other task is running\n";
LAB_000296ee:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(pcVar4,"key_event_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        break;
      }
      if (0 < LOG_LEVEL) {
        pcVar4 = "%s(): quicknote is running, exit this time\n";
        goto LAB_00029906;
      }
      goto LAB_0002956e;
    }
    if (LOG_LEVEL < 1) goto LAB_0002956e;
    pcVar4 = "%s(): onboarding is running, exit this time\n";
LAB_00029906:
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar4,"key_event_thread");
    }
    else {
      handle_heartbeat();
    }
    goto LAB_0002956e;
  case 5:
    DAT_20018d95 = 0;
    cVar2 = *param_1;
    if (cVar2 == '\x01') {
      if (param_1[0xd5] == '\f') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): long press release,send message to ui thread  ....\n",
                        "key_event_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        iVar3 = 1;
        local_2c = CONCAT22(local_2c._2_2_,1);
        do {
          iVar6 = sync_to_slave(param_1,6,&local_2c,2);
          if (iVar6 < 5000) goto LAB_0002a04c;
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec quick note start function.\n"
                          ,"key_event_thread",iVar3);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
      }
    }
    else {
LAB_0002a062:
      DAT_20018d95 = 0;
      if (((cVar2 == '\x02') && (param_1[0xd5] == '\x10')) &&
         (iVar3 = get_work_mode(), **(char **)(iVar3 + 0x100c) == '\x04')) {
        iVar3 = get_work_mode();
        **(undefined1 **)(iVar3 + 0x100c) = 5;
      }
    }
    break;
  case 6:
    DAT_20018d95 = 0;
    cVar2 = *param_1;
    if ((KEY_EVENT_AND_TOUCH_KEY_THREAD_DATA != '\0') || (cVar2 != '\x01')) goto LAB_0002a062;
    if (param_1[0xd5] == '\f') {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): long press more than 30s ,close quick note function.end timestamp = %d\n"
                      ,"key_event_thread",**(undefined4 **)(param_1 + 0xfec));
        }
        else {
          handle_heartbeat("%s(): long press more than 30s ,close quick note function.end timestamp = %d\n"
                           ,"key_event_thread",**(undefined4 **)(param_1 + 0xfec));
        }
      }
      iVar3 = 1;
      KEY_EVENT_AND_TOUCH_KEY_THREAD_DATA = '\x01';
      local_2c = CONCAT22(local_2c._2_2_,1);
      do {
        iVar6 = sync_to_slave(param_1,6,&local_2c,2);
        if (iVar6 < 5000) goto LAB_0002a04c;
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec quick note start function.\n"
                        ,"key_event_thread",iVar3);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
    }
  }
switchD_000297f8_caseD_5:
  KEY_EVENT_THREAD_STATE_DATA = 0;
  goto LAB_0002956e;
LAB_00029578:
  calculate_ble_schedule_timing(0x28000,0);
  goto LAB_0002956e;
LAB_0002a04c:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): SEND DELAY CLOSE TO SLAVE SUCCESS,master start delay close function\n",
                  "key_event_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  display_DelayClose(10000);
LAB_00029786:
  manage_ble_connection_priority_with_data_processing();
  goto switchD_000297f8_caseD_5;
LAB_00029a02:
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): SEND double click event to slave.\n","key_event_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  atomic_set_bit_1(&PROXY_THREAD_MUTEX);
  goto LAB_0002956e;
}


