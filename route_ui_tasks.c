/*
 * Function: route_ui_tasks
 * Entry:    00048b5c
 * Prototype: undefined __stdcall route_ui_tasks(undefined4 ui_context_ptr, undefined4 screen_id, undefined4 task_param, undefined4 operation_mode)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
route_ui_tasks(int ui_context_ptr,int screen_id,undefined4 task_param,uint operation_mode)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 x_offset;
  int y_offset;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 extraout_r1;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  int iStack_28;
  int local_24;
  uint uStack_20;
  
  iVar11 = get_system_ready_state();
  if (iVar11 == 1) {
    if (screen_id == 3) {
      update_screen_display(ui_context_ptr + 0xb6c,task_param,operation_mode);
    }
    return 0;
  }
  iVar11 = ui_context_ptr + 0xb6c;
  DAT_2000a098 = screen_id;
  switch(screen_id) {
  case 4:
    local_24 = 0;
    iStack_28 = iVar11;
    uStack_20 = operation_mode;
    if (operation_mode == 2) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("ui_ancs_notificaton_task exit !");
      }
      else {
        handle_heartbeat();
      }
      DAT_200033d3 = 0xff;
      DAT_200033d2 = 0xff;
      if (DAT_2001b80f == '\0') {
        gui_screen_clear();
      }
      else {
        animate_framebuffer_with_pattern_alt();
        DAT_2001b80f = '\0';
      }
LAB_0003606c:
      DAT_20018d9f = 0;
    }
    else {
      if (operation_mode == 0) {
        return 0;
      }
      if (DAT_200033d3 == 0xff) {
        set_work_mode_parameter(ui_context_ptr + 0xb90);
        set_work_mode_flag_bit_1();
        gui_screen_clear();
      }
      uVar15 = get_system_initialization_flag();
      uVar13 = calculate_next_timeout_message_state();
      if ((DAT_200033d3 == uVar15) && (DAT_200033d2 == uVar13)) {
        return 0;
      }
      uVar5 = pull_message(&local_24);
      if (9 < uVar5) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("pull message error !\r\n");
        }
        else {
          handle_heartbeat();
        }
        DAT_200033d2 = 0xff;
        DAT_200033d3 = 0xff;
        return 0;
      }
      if (*(char *)(local_24 + 0xf) == '\0') {
        pcVar6 = "message has not set to show!\r\n";
      }
      else {
        if (*(char *)(local_24 + 0xe) != '\0') {
          if (DAT_2001b80e != '\0') {
            process_framebuffer_with_ui_overlay(ui_context_ptr + 0xb90,uVar13);
            DAT_2001b80e = '\0';
          }
          render_ui_data_entry_display(uVar13,local_24);
          DAT_200033d3 = (byte)uVar15;
          DAT_200033d2 = (byte)uVar13;
          goto LAB_0003606c;
        }
        pcVar6 = "message has not confirm!\r\n";
      }
      DAT_200033d3 = 0xff;
      DAT_200033d2 = 0xff;
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar6);
      }
      else {
        handle_heartbeat();
      }
    }
    return 0;
  case 5:
    iVar11 = get_work_mode(iVar11,task_param);
    y_offset = get_system_status_value();
    cVar2 = DAT_2001b813;
    if (y_offset != 4) {
      if (operation_mode == 2) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("ui_new_message_come_on_task exit !");
        }
        else {
          handle_heartbeat();
        }
        gui_screen_clear();
        DAT_2001b813 = '\0';
        DAT_2001b812 = '\0';
      }
      else if (operation_mode != 0) {
        if (DAT_2001b813 == '\0') {
          DAT_2001b813 = '\x01';
          set_work_mode_parameter(ui_context_ptr + 0xb90);
          set_work_mode_flag_bit_1();
          gui_screen_clear();
          DAT_2001b812 = cVar2;
        }
        if (*(byte *)(iVar11 + 0xf6) < 2) {
          DAT_2001b812 = '\0';
          gui_screen_clear();
        }
        else {
          iVar11 = get_work_mode();
          uVar12 = validate_data_entry_format(*(char *)(iVar11 + 0xdd) + -1);
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("new msgType is %d \n",uVar12);
          }
          else {
            handle_heartbeat();
          }
          if (DAT_2001b812 == '\0') {
            clear_work_mode_flag_bit_1();
            iVar11 = 0;
            do {
              switch(uVar12) {
              case 1:
                x_offset = get_ui_x_offset();
                y_offset = get_ui_y_offset();
                y_offset = y_offset + 0x3a;
                uVar14 = 0x37;
                break;
              case 2:
                x_offset = get_ui_x_offset();
                y_offset = get_ui_y_offset();
                y_offset = y_offset + 0x3a;
                uVar14 = 0x36;
                break;
              case 3:
                x_offset = get_ui_x_offset();
                y_offset = get_ui_y_offset();
                y_offset = y_offset + 0x3a;
                uVar14 = 0x3a;
                break;
              case 4:
                x_offset = get_ui_x_offset();
                y_offset = get_ui_y_offset();
                y_offset = y_offset + 0x3a;
                uVar14 = 0x39;
                break;
              default:
                x_offset = get_ui_x_offset();
                y_offset = get_ui_y_offset();
                y_offset = y_offset + 0x3a;
                uVar14 = 0x38;
              }
              gui_bmp_bitmap_draw(uVar14,x_offset,y_offset,0,0,0);
              uVar15 = 0;
              do {
                y_offset = 0;
                local_34 = (uVar15 % 0x1a) * 0xa00;
                do {
                  local_30 = 0x4030201;
                  local_2c = 0x7070605;
                  iVar7 = *(int *)(ui_context_ptr + 0xb90 + uVar15 * 4);
                  bVar1 = *(byte *)(iVar7 + y_offset);
                  if (bVar1 != 0) {
                    *(byte *)(iVar7 + y_offset) =
                         bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                                 [y_offset +
                                  (uint)*(byte *)((int)&local_30 + iVar11) * 0x140 + local_34];
                  }
                  y_offset = y_offset + 1;
                } while (y_offset != 0x140);
                uVar15 = uVar15 + 1;
              } while (uVar15 != 199);
              y_offset = get_work_mode();
              uVar14 = *(undefined4 *)(y_offset + 0xeb4);
              y_offset = get_work_mode();
              iVar11 = iVar11 + 1;
              _reflash_fb_data_to_lcd(uVar14,*(undefined4 *)(y_offset + 0xeb8),0,0,0x280,199);
            } while (iVar11 != 8);
            set_work_mode_flag_bit_1();
            DAT_2001b812 = '\x01';
          }
        }
      }
    }
    return 0;
  case 6:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",6);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = manage_dashboard_ui_operations(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 6;
    break;
  case 7:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",7);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = manage_ui_animation_state_and_rendering(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 7;
    break;
  default:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",screen_id);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = (**(code **)(ui_context_ptr + 0xb80))
                       (iVar11,*(undefined1 *)(ui_context_ptr + 0xd5),ui_context_ptr + 0xd4);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    break;
  case 9:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",9);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = ui_teleprompter_task(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 9;
    break;
  case 10:
    iVar11 = get_work_mode(iVar11,task_param);
    y_offset = iVar11 + 0xef;
    set_work_mode_parameter(ui_context_ptr + 0xb90);
    set_work_mode_flag_bit_1();
    uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
    switch(DAT_20004bb8) {
    case 0:
      if (LOG_LEVEL < 3) {
        if (operation_mode != 2) goto LAB_0003fbee;
      }
      else {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000aa0ae,"ui_navigation_task");
        }
        else {
          handle_heartbeat();
        }
        if (operation_mode != 2) {
LAB_0003fbee:
          if (operation_mode == 0) {
            if (DAT_20004bbe == '\x01') {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&LAB_000aa0f4_1,"ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
              uVar12 = get_ui_x_offset();
              iVar11 = get_ui_y_offset();
              gui_bmp_dynamic_bitmap_draw(8,uVar12,iVar11 + 0x3a,0,0,0,0);
              goto LAB_0003fc32;
            }
            pcVar6 = (char *)get_work_mode();
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
            if (*pcVar6 != '\x01') goto switchD_0003f438_caseD_4;
LAB_0003f586:
            if (DAT_20004bbe != '\x01') goto LAB_0003f58e;
LAB_0003fc46:
            if ((0 < SYNC_PACKET_COUNTER) && (SYNC_PACKET_COUNTER = 0, DAT_20004be5 < 0x14)) {
              DAT_20004be5 = 0x13;
            }
            uVar22 = FUN_0007d35a();
            uVar21 = FUN_0007d3c2((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_20004be8,
                                  DAT_20004bec);
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
            if ((int)((ulonglong)uVar21 >> 0x20) < (int)(uint)((uint)uVar21 < 0x3e9))
            goto switchD_0003f438_caseD_4;
            uVar22 = FUN_0007d35a();
            DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
            DAT_20004be8 = (undefined4)uVar22;
            DAT_20004be5 = DAT_20004be5 - 1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): DECETED TIMEOUT ...... _tpm_thread_prv_data.sync_cnt = %d\n",
                            "ui_navigation_task",(uint)DAT_20004be5);
                uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
              else {
                handle_heartbeat();
                uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
            }
            DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
            DAT_20004be8 = (undefined4)uVar22;
            if (DAT_20004be5 != 0) goto switchD_0003f438_caseD_4;
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a disconnection between the AR Glasses and the Bluetooth application!\n"
                            ,"ui_navigation_task");
                uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
              else {
                handle_heartbeat();
                uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
            }
            DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
            DAT_20004be8 = (undefined4)uVar22;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): bluetooth connect is break,Send Stop Navigation command to slave.\n"
                            ,"ui_navigation_task");
                uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
              else {
                handle_heartbeat();
                uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
            }
            DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
            DAT_20004be8 = (undefined4)uVar22;
            local_34 = CONCAT22(local_34._2_2_,0x106);
            uVar12 = get_work_mode();
            iVar11 = sync_to_slave(uVar12,6,&local_34,2);
            goto joined_r0x0003f84c;
          }
          if (operation_mode == 1) {
            pcVar6 = (char *)get_work_mode();
            if (*pcVar6 == '\x01') {
              enqueue_message_to_queue_with_work_mode_check();
            }
            if ((DAT_20004bbe == '\0') &&
               (iVar7 = get_work_mode(), **(char **)(iVar7 + 0x1000) == '\x01')) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&LAB_000aa112,"ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
              clear_memory_buffer_0x38();
              DAT_20004bbe = '\x01';
              uVar22 = FUN_0007d35a();
              DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
              DAT_20004be8 = (undefined4)uVar22;
              DAT_20004be5 = 10;
              gui_screen_clear();
              reset_animation_counters();
              render_ui_text_alt_based_on_system_mode();
            }
            if (((DAT_20004bbe == '\x01') && (OVERVIEW_MAP_ACTIVE == '\x01')) &&
               (uVar15 = (uint)PANORAMIC_MAP_ACTIVE, PANORAMIC_MAP_ACTIVE == 1)) {
              DAT_2001ba2c = 0;
              DAT_20004bb8 = uVar15;
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&LAB_000aa138,"ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
              gui_screen_clear();
              DAT_2001ba2d = 0;
              DAT_20004be5 = 10;
              uVar22 = FUN_0007d35a();
              DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
              DAT_20004be8 = (undefined4)uVar22;
              navigation_overview_map_display(iVar11,y_offset);
            }
LAB_0003fc32:
            pcVar6 = (char *)get_work_mode();
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
            if ((*pcVar6 != '\x01') ||
               (uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8), DAT_20004bbe != '\x01'))
            goto switchD_0003f438_caseD_4;
            goto LAB_0003fc46;
          }
          pcVar6 = (char *)get_work_mode();
          if (*pcVar6 == '\x01') goto LAB_0003f586;
LAB_0003f58e:
          uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
joined_r0x0003fa68:
          if (operation_mode != 5) goto switchD_0003f438_caseD_4;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Received exit command from master, exit teleprompter mode\n",
                          "ui_navigation_task");
            }
            else {
              handle_heartbeat();
            }
          }
          goto LAB_0003f5aa;
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000aa0d6_1,"ui_navigation_task");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      gui_screen_clear();
      goto LAB_0003f47e;
    case 1:
      if (operation_mode != 2) {
        if (operation_mode == 1) {
          uVar22 = get_work_mode();
          uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
          if (*(char *)uVar22 == '\x01') {
            enqueue_message_to_queue_with_work_mode_check();
            uVar22 = get_work_mode();
            uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
            if (*(char *)(*(int *)((int)uVar22 + 0x1000) + 6) == '\x01') {
              if (DAT_20004be5 < 0x14) {
                DAT_20004be5 = 0x13;
              }
              uVar22 = get_work_mode();
              uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
              *(undefined1 *)(*(int *)((int)uVar22 + 0x1000) + 6) = 0;
            }
          }
          resource_mutex_acquire(&DAT_20007b3c,uVar12,0xffffffff,0xffffffff);
          DAT_20004bcc = *(byte *)(iVar11 + 0x19d);
          DAT_20004be0 = *(char *)(iVar11 + 0xf6);
          mutex_unlock(&DAT_20007b3c);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): arrived status = %d,  nav->imu_action_status = %d\n",
                          "ui_navigation_task",(uint)DAT_20004bcc,(uint)*(byte *)(iVar11 + 0xf6));
            }
            else {
              handle_heartbeat("%s(): arrived status = %d,  nav->imu_action_status = %d\n",
                               "ui_navigation_task",DAT_20004bcc);
            }
          }
          if (DAT_20004bcc == 2) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): received arrived complte command\n","ui_navigation_task");
              }
              else {
                handle_heartbeat();
              }
            }
            DAT_20004bb8 = 3;
            gui_screen_clear();
            y_offset = get_system_byte_1_alt();
            if (y_offset == 6) {
              y_offset = 0xaa;
            }
            else {
              y_offset = 0xc4;
            }
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            iVar9 = get_ui_x_offset();
            iVar10 = get_ui_y_offset();
            gui_utf_draw(0,iVar11 + 0x1a4,0,iVar7 + y_offset,iVar8 + 0x3c,iVar9 + 0x23f,
                         iVar10 + 0x57,2,0,0,0,0);
            iVar11 = get_work_mode();
            iVar11 = *(byte *)(*(int *)(iVar11 + 0xfec) + 0x5e) - 1;
            if (iVar11 != 0) {
              iVar11 = 1;
            }
            uVar12 = get_work_mode_timestamp();
            uVar14 = get_ui_x_offset();
            y_offset = get_ui_y_offset();
            iVar7 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            EVEN_DASHBOARD_CLOCK_32x_TTF
                      (uVar12,uVar14,y_offset + 2,iVar7 + 0x4c,iVar8 + 0x1d,3,iVar11);
            uVar22 = FUN_0007d35a();
            DAT_20004bd0 = 5000;
            DAT_20004bd4 = 0;
          }
          else {
            if (DAT_20004bcc == 1) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): received arrived command,draw arrived page\n",
                              "ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
              if (DAT_20004be0 != '\x02') {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): navigation arrived 1 rst reflash\n","ui_navigation_task");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                if (DAT_20004bcd == '\0') {
                  gui_screen_clear();
                  DAT_20004bcd = '\x01';
                }
                y_offset = get_ui_x_offset();
                uVar12 = get_ui_y_offset();
                iVar7 = get_ui_x_offset();
                iVar8 = get_ui_y_offset();
                gui_bitmps_merge_draw
                          (y_offset + 0x1b6,uVar12,iVar7 + 0x240,iVar8 + 0x88,&display_buffer,
                           &DAT_2001c336,2,0xf);
                y_offset = get_system_byte_1_alt();
                if (y_offset == 6) {
                  y_offset = 0xe8;
                }
                else {
                  y_offset = 0xc4;
                }
                iVar7 = get_ui_x_offset();
                iVar8 = get_ui_y_offset();
                iVar9 = get_ui_x_offset();
                iVar10 = get_ui_y_offset();
                gui_utf_draw(0,iVar11 + 0x1a4,0,iVar7 + y_offset,iVar8 + 0x3c,iVar9 + 0x1e4,
                             iVar10 + 0x57,2,0,0,0,0);
                DAT_20004bbc = 0;
                DAT_20004bbd = 1;
                sVar3 = DAT_20004bc6;
                uVar4 = DAT_20004bc8;
                goto LAB_0003f994;
              }
              if (2 < LOG_LEVEL) {
                pcVar6 = 
                "%s(): navigation arrived 2 rst reflash, navigation_panoramic_map_display reflash\n"
                ;
LAB_0003f896:
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(pcVar6,"ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            else {
              if (DAT_20004be0 != '\x02') {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): navigation_overview_map_display reflash\n",
                                "ui_navigation_task");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                navigation_overview_map_display(iVar11,y_offset);
                uVar22 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
                goto LAB_0003f794;
              }
              if (2 < LOG_LEVEL) {
                pcVar6 = "%s(): navigation_panoramic_map_display reflash\n";
                goto LAB_0003f896;
              }
            }
            navigation_panoramic_map_display(iVar11,y_offset);
            uVar22 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
          }
LAB_0003f794:
          DAT_20004bdc = (int)((ulonglong)uVar22 >> 0x20);
          DAT_20004bd8 = (uint)uVar22;
          pcVar6 = (char *)get_work_mode();
          uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          if (*pcVar6 != '\x01') goto switchD_0003f438_caseD_4;
        }
        else {
          if (operation_mode == 0) {
            local_34 = operation_mode;
            local_30 = operation_mode;
            local_2c = operation_mode;
            uVar12 = get_work_mode_timestamp();
            unix_timestamp_to_datetime(uVar12,&local_34);
            uVar22 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
            sVar3 = local_30._2_2_;
            uVar4 = (ushort)local_2c;
            if (((uint)DAT_20004bc8 != (local_2c & 0xffff)) || (local_30._2_2_ != DAT_20004bc6)) {
LAB_0003f994:
              DAT_20004bc8 = uVar4;
              DAT_20004bc6 = sVar3;
              iVar11 = get_work_mode();
              iVar11 = *(byte *)(*(int *)(iVar11 + 0xfec) + 0x5e) - 1;
              if (iVar11 != 0) {
                iVar11 = 1;
              }
              uVar12 = get_work_mode_timestamp();
              uVar14 = get_ui_x_offset();
              y_offset = get_ui_y_offset();
              iVar7 = get_ui_x_offset();
              iVar8 = get_ui_y_offset();
              EVEN_DASHBOARD_CLOCK_32x_TTF
                        (uVar12,uVar14,y_offset + 2,iVar7 + 0x4c,iVar8 + 0x1d,3,iVar11);
              uVar22 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
            }
            goto LAB_0003f794;
          }
          pcVar6 = (char *)get_work_mode();
          uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          if (*pcVar6 != '\x01') goto joined_r0x0003fa68;
        }
        if ((0 < SYNC_PACKET_COUNTER) && (SYNC_PACKET_COUNTER = 0, DAT_20004be5 < 0x14)) {
          DAT_20004be5 = 0x13;
        }
        uVar22 = FUN_0007d35a();
        uVar21 = FUN_0007d3c2((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_20004be8,DAT_20004bec
                             );
        uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
        if ((int)((ulonglong)uVar21 >> 0x20) < (int)(uint)((uint)uVar21 < 0x3e9))
        goto switchD_0003f438_caseD_4;
        uVar22 = FUN_0007d35a();
        DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
        DAT_20004be8 = (undefined4)uVar22;
        DAT_20004be5 = DAT_20004be5 - 1;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): DECETED TIMEOUT ...... _tpm_thread_prv_data.sync_cnt = %d\n",
                        "ui_navigation_task",(uint)DAT_20004be5);
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
          else {
            handle_heartbeat();
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
        }
        DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
        DAT_20004be8 = (undefined4)uVar22;
        if (DAT_20004be5 != 0) goto switchD_0003f438_caseD_4;
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): There is a disconnection between the AR Glasses and the Bluetooth application!\n"
                        ,"ui_navigation_task");
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
          else {
            handle_heartbeat();
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
        }
        DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
        DAT_20004be8 = (undefined4)uVar22;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): bluetooth connect is break,Send Stop Navigation command to slave.\n",
                        "ui_navigation_task");
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
          else {
            handle_heartbeat();
            uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
        }
        DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
        DAT_20004be8 = (undefined4)uVar22;
        local_34 = CONCAT22(local_34._2_2_,0x106);
        uVar12 = get_work_mode();
        iVar11 = sync_to_slave(uVar12,6,&local_34,2);
joined_r0x0003f84c:
        if (4999 < iVar11) {
          uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): SYNC TO Slave failed...,don\'t exec Navigation exit action,master auto exit...\n"
                          ,"ui_navigation_task");
              uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
            }
            else {
              handle_heartbeat();
              uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
            }
          }
          goto switchD_0003f438_caseD_4;
        }
LAB_0003f5aa:
        DAT_20004bb8 = 2;
        uVar22 = FUN_0007d35a();
        DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
        DAT_20004be8 = (undefined4)uVar22;
        gui_screen_clear();
        uVar12 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x3f,uVar12,iVar11 + 0x3a,0,0,0);
        render_ui_text_based_on_system_mode();
        uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
        goto switchD_0003f438_caseD_4;
      }
      break;
    case 2:
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): running navigation DISPLAY ABNORMAL EXIT STATUS.\n",
                      "ui_navigation_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar22 = FUN_0007d35a();
      uVar22 = FUN_0007d3c2((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_20004be8,DAT_20004bec);
      if ((int)(uint)((uint)uVar22 < 0x1f41) <= (int)((ulonglong)uVar22 >> 0x20)) {
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): The navigation automatically shuts down due to disconnection.\n",
                        "ui_navigation_task");
          }
          else {
            handle_heartbeat();
          }
        }
        animate_framebuffer_with_pattern();
        fill_memory_buffer(&DAT_20004bb8,0,0x38);
        fill_memory_buffer(&display_buffer,0,0x1210);
        DAT_2001ba2d = 0;
        iVar11 = get_work_mode();
        **(undefined1 **)(iVar11 + 0x1000) = 0;
      }
      uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
      if (operation_mode != 2) goto switchD_0003f438_caseD_4;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received exit command,clear screen...\n","ui_navigation_task");
        }
        else {
          handle_heartbeat();
        }
      }
      break;
    case 3:
      if (operation_mode != 2) {
        if ((operation_mode == 1) && (pcVar6 = (char *)get_work_mode(), *pcVar6 == '\x01')) {
          enqueue_message_to_queue_with_work_mode_check();
        }
        uVar22 = FUN_0007d35a();
        iVar11 = (int)((ulonglong)uVar22 >> 0x20);
        y_offset = DAT_20004bd4 + DAT_20004bdc + (uint)CARRY4(DAT_20004bd0,DAT_20004bd8);
        bVar20 = DAT_20004bd0 + DAT_20004bd8 < (uint)uVar22;
        uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
        if ((int)((y_offset - iVar11) - (uint)bVar20) < 0 !=
            (SBORROW4(y_offset,iVar11) != SBORROW4(y_offset - iVar11,(uint)bVar20))) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): exec navigation auto exit ...\n","ui_navigation_task");
            }
            else {
              handle_heartbeat();
            }
          }
          iVar11 = get_work_mode();
          **(undefined1 **)(iVar11 + 0x1000) = 0;
          animate_framebuffer_with_pattern();
          fill_memory_buffer(&DAT_20004bb8,0,0x38);
          uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
        }
        goto switchD_0003f438_caseD_4;
      }
      break;
    default:
      goto switchD_0003f438_caseD_4;
    }
    animate_framebuffer_with_pattern();
LAB_0003f47e:
    fill_memory_buffer(&DAT_20004bb8,0,0x38);
    fill_memory_buffer(&display_buffer,0,0x1210);
    DAT_2001ba2d = 0;
    uVar22 = CONCAT44(DAT_20004bec,DAT_20004be8);
switchD_0003f438_caseD_4:
    DAT_20004bec = (undefined4)((ulonglong)uVar22 >> 0x20);
    DAT_20004be8 = (undefined4)uVar22;
    return 0;
  case 0xb:
    iVar11 = get_work_mode(iVar11,task_param);
    set_work_mode_parameter(ui_context_ptr + 0xb90);
    set_work_mode_flag_bit_1();
    if (DAT_2000f6ec == '\0') {
      if (operation_mode == 1) {
        if (3 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): ENTER translate INIT process...\n","ui_translate_task");
          }
          else {
            handle_heartbeat();
          }
        }
        if (DAT_2000f6ed != '\0') {
          return 0;
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): SYNC_AREA_REFALSH Upgrade ....\n","ui_translate_task");
          }
          else {
            handle_heartbeat();
          }
        }
        gui_utf_adv_draw_configure();
        gui_screen_clear();
        reset_animation_counters();
        fill_memory_buffer(&DAT_2000f6ee,0,0x10);
        y_offset = 0;
        DAT_2000a054 = 0x80;
        DAT_2000a040 = 0;
        DAT_2000a044 = 0;
        DAT_2000a038 = &DAT_2001cdd7;
        DAT_2000a04c = 0;
        DAT_2000a050 = 0;
        DAT_2000a03c = 0;
        DAT_2000a048 = 0;
        _DAT_2000f6ec = 0x101;
        reset_animation_counters();
        clear_work_mode_flag_bit_1();
        do {
          uVar15 = (uint)*(byte *)(iVar11 + 0xf0);
          if (((uVar15 < 0x13) && (uVar13 = *(byte *)(iVar11 + 0xef) - 1, (uVar13 & 0xff) < 0x12))
             && (uVar15 != 0)) {
            local_34 = 0;
            local_30 = 0;
            local_2c = local_2c & 0xffff0000;
            process_string_with_error_handling_and_validation
                      (&local_34,10,"%s>%s",*(undefined4 *)(&DAT_200024f4 + (uVar15 - 1) * 4),
                       *(undefined4 *)(&DAT_200024f4 + uVar13 * 4));
            if (3 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): draw translate type content\n","ui_translate_task");
              }
              else {
                handle_heartbeat();
              }
            }
            uVar12 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar8 = get_ui_x_offset();
            iVar9 = get_ui_y_offset();
            gui_utf_draw(0,&local_34,3,uVar12,iVar7 + 0x6e,iVar8 + 0x50,iVar9 + 0x89,1,0,0,0,0);
            DAT_2000f6fd = *(byte *)(iVar11 + 0xf0);
            DAT_2000f6fc = *(byte *)(iVar11 + 0xef);
          }
          else if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                          ,"ui_translate_task",uVar15,(uint)*(byte *)(iVar11 + 0xef));
            }
            else {
              handle_heartbeat("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                               ,"ui_translate_task");
            }
          }
          iVar7 = get_work_mode();
          iVar7 = *(byte *)(*(int *)(iVar7 + 0xfec) + 0x5e) - 1;
          if (iVar7 != 0) {
            iVar7 = 1;
          }
          uVar12 = get_work_mode_timestamp();
          uVar14 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          iVar9 = get_ui_x_offset();
          iVar10 = get_ui_y_offset();
          EVEN_DASHBOARD_CLOCK_32x_TTF(uVar12,uVar14,iVar8 + 2,iVar9 + 0x50,iVar10 + 0x1d,3,iVar7);
          uVar15 = 0;
          do {
            iVar7 = 0;
            do {
              local_34 = 0x7050301;
              local_30 = 0x7070707;
              iVar8 = *(int *)(ui_context_ptr + 0xb90 + uVar15 * 4);
              bVar1 = *(byte *)(iVar8 + iVar7);
              if (bVar1 != 0) {
                *(byte *)(iVar8 + iVar7) =
                     bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                             [iVar7 + (uint)*(byte *)(y_offset + (int)&local_34) * 0x140 +
                                      (uVar15 % 0x1a) * 0xa00];
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 0x140);
            uVar15 = uVar15 + 1;
          } while (uVar15 != 199);
          iVar7 = get_work_mode();
          uVar12 = *(undefined4 *)(iVar7 + 0xeb4);
          iVar7 = get_work_mode();
          y_offset = y_offset + 1;
          _reflash_fb_data_to_lcd(uVar12,*(undefined4 *)(iVar7 + 0xeb8),0,0,0x280,199);
        } while (y_offset != 4);
        set_work_mode_flag_bit_1();
        return 0;
      }
      if (operation_mode != 2) {
        return 0;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): translate process received exit packet ...\n","ui_translate_task");
        }
        else {
          handle_heartbeat();
        }
      }
      gui_screen_clear();
LAB_00040162:
      gui_utf_adv_draw_configure();
      DAT_2000a040 = 0;
      DAT_2000a044 = 0;
      DAT_2000a04c = 0;
      DAT_2000a050 = 0;
      DAT_2000a03c = 0;
      DAT_2000a048 = 0;
      fill_memory_buffer(&DAT_2000f6ec,0,0x12);
      return 0;
    }
    if (DAT_2000f6ec != '\x01') {
      return 0;
    }
    if (operation_mode != 1) {
      if (operation_mode == 0) {
        if (DAT_2000f6ee == '\0') {
          uVar12 = get_ui_x_offset();
          iVar11 = get_ui_y_offset();
          gui_bmp_dynamic_bitmap_draw(1,uVar12,iVar11 + 0x36,0,0,0,0);
        }
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        uVar12 = get_work_mode_timestamp();
        unix_timestamp_to_datetime(uVar12,&local_34);
        if (((uint)DAT_2000f6f8 == (local_2c & 0xffff)) && (DAT_2000f6f6 == local_30._2_2_)) {
          return 0;
        }
        DAT_2000f6f8 = (ushort)local_2c;
        DAT_2000f6f6 = local_30._2_2_;
        iVar11 = get_work_mode();
        iVar11 = *(byte *)(*(int *)(iVar11 + 0xfec) + 0x5e) - 1;
        if (iVar11 != 0) {
          iVar11 = 1;
        }
        uVar12 = get_work_mode_timestamp();
        uVar14 = get_ui_x_offset();
        y_offset = get_ui_y_offset();
        iVar7 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        EVEN_DASHBOARD_CLOCK_32x_TTF(uVar12,uVar14,y_offset + 2,iVar7 + 0x50,iVar8 + 0x1d,3,iVar11);
        return 0;
      }
      if (operation_mode != 2) {
        return 0;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): translate process received exit packet ...\n","ui_translate_task");
        }
        else {
          handle_heartbeat();
        }
      }
      animate_framebuffer_with_pattern();
      goto LAB_00040162;
    }
    fill_memory_buffer(&DAT_2001cc3e,0,400);
    resource_mutex_acquire(&DAT_20007b3c,extraout_r1,0xffffffff,0xffffffff);
    DAT_2000f6ee = *(char *)(iVar11 + 0xf1);
    bVar1 = *(byte *)(iVar11 + 0xf2);
    memcpy(&DAT_2001cc3e,iVar11 + 0xf5,400);
    mutex_unlock(&DAT_20007b3c);
    if (DAT_2000f6ee == '\x01') {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): suspend_en is 1, reflash suspend icon\n","ui_translate_task");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar12 = get_ui_x_offset();
      y_offset = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x1b,uVar12,y_offset + 0x36,0,0,0);
    }
    uVar15 = (uint)*(byte *)(iVar11 + 0xf0);
    if (uVar15 < 0x13) {
      uVar13 = *(byte *)(iVar11 + 0xef) - 1;
      if (((uVar13 & 0xff) < 0x12) && (uVar15 != 0)) {
        if ((DAT_2000f6fd != uVar15) || ((uint)DAT_2000f6fc != (uint)*(byte *)(iVar11 + 0xef))) {
          local_34 = 0;
          local_30 = 0;
          local_2c = local_2c & 0xffff0000;
          process_string_with_error_handling_and_validation
                    (&local_34,10,"%s>%s",*(undefined4 *)(&DAT_200024f4 + (uVar15 - 1) * 4),
                     *(undefined4 *)(&DAT_200024f4 + uVar13 * 4));
          if (3 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): draw translate type content\n","ui_translate_task");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar12 = get_ui_x_offset();
          y_offset = get_ui_y_offset();
          iVar7 = get_ui_x_offset();
          iVar8 = get_ui_y_offset();
          gui_utf_draw(0,&local_34,3,uVar12,y_offset + 0x6e,iVar7 + 0x50,iVar8 + 0x89,1,0,0,0,0);
          DAT_2000f6fd = *(byte *)(iVar11 + 0xf0);
          DAT_2000f6fc = *(byte *)(iVar11 + 0xef);
        }
        goto LAB_0004027a;
      }
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                    ,"ui_translate_task",uVar15,(uint)*(byte *)(iVar11 + 0xef));
      }
      else {
        handle_heartbeat("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                         ,"ui_translate_task");
      }
    }
LAB_0004027a:
    if (bVar1 - 3 < 2) {
      y_offset = get_work_mode();
      iVar11 = 0x640;
      while( true ) {
        for (iVar7 = get_ui_y_offset(); iVar8 = get_ui_y_offset(), iVar7 <= iVar8 + 0x87;
            iVar7 = iVar7 + 1) {
          iVar8 = get_ui_x_offset();
          puVar17 = &DASHBOARD_PIXEL_MASK_TABLE + (iVar7 % 0x1a) * 0xa00 + iVar11;
          for (iVar8 = iVar8 + 0x58; iVar9 = get_ui_x_offset(), iVar8 < (iVar9 + 0x240) / 2;
              iVar8 = iVar8 + 1) {
            iVar9 = *(int *)(y_offset + 0xb90 + iVar7 * 4);
            bVar1 = *(byte *)(iVar9 + iVar8);
            if (bVar1 != 0) {
              *(byte *)(iVar9 + iVar8) = bVar1 & puVar17[iVar8];
            }
          }
        }
        iVar7 = get_work_mode();
        x_offset = *(undefined4 *)(iVar7 + 0xeb4);
        iVar7 = get_work_mode();
        uVar14 = *(undefined4 *)(iVar7 + 0xeb8);
        iVar7 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar9 = get_ui_y_offset();
        _reflash_fb_data_to_lcd(x_offset,uVar14,iVar7 + 0x58,uVar12,iVar8 + 0x240,iVar9 + 0x88);
        if (iVar11 == 0x500) break;
        iVar11 = 0x500;
      }
      iVar11 = get_ui_x_offset();
      uVar12 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _clean_fb_data(y_offset + 0xb90,0,iVar11 + 0x58,uVar12,iVar7 + 0x240,iVar8 + 0x88);
      if (DAT_2000f6ee == '\0') {
        uVar12 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(1,uVar12,iVar11 + 0x36,0,0,0,0);
      }
      clear_work_mode_flag_bit_1();
      iVar11 = 2;
      while( true ) {
        iVar7 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar9 = get_ui_y_offset();
        gui_utf_draw(0,&DAT_2001cc3e,0,iVar7 + 0x58,uVar12,iVar8 + 0x240,iVar9 + 0x88,5,0,0,0,0);
        iVar7 = get_ui_x_offset();
        iVar7 = iVar7 + 0x58;
        iVar8 = get_ui_x_offset();
        iVar9 = get_ui_y_offset();
        iVar10 = get_ui_y_offset();
        for (uVar15 = 0; (int)uVar15 < (iVar10 + 0x88) - iVar9; uVar15 = uVar15 + 1) {
          for (iVar16 = 0; iVar16 < ((iVar8 + 0x240) - iVar7) / 2; iVar16 = iVar16 + 1) {
            local_34 = 0x7050301;
            local_30 = 0x7070707;
            iVar18 = iVar16 + iVar7 / 2;
            iVar19 = *(int *)(y_offset + iVar9 * 4 + 0xb90 + uVar15 * 4);
            bVar1 = *(byte *)(iVar19 + iVar18);
            if (bVar1 != 0) {
              *(byte *)(iVar19 + iVar18) =
                   bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                           [iVar16 + (uint)*(byte *)((int)&local_34 + iVar11) * 0x140 +
                                     (uVar15 % 0x1a) * 0xa00];
            }
          }
        }
        iVar16 = get_work_mode();
        uVar12 = *(undefined4 *)(iVar16 + 0xeb4);
        iVar16 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar12,*(undefined4 *)(iVar16 + 0xeb8),iVar7,iVar9,iVar8 + 0x240,iVar10 + 0x88);
        if (iVar11 != 2) break;
        iVar11 = 3;
      }
      set_work_mode_flag_bit_1();
      if (DAT_2000f6ee == '\0') {
        uVar12 = get_ui_x_offset();
        iVar11 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(1,uVar12,iVar11 + 0x36,0,0,0,0);
      }
    }
    else {
      iVar11 = get_ui_x_offset();
      uVar12 = get_ui_y_offset();
      y_offset = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      gui_utf_draw(0,&DAT_2001cc3e,0,iVar11 + 0x58,uVar12,y_offset + 0x240,iVar7 + 0x88,5,0,0,0,0);
    }
    return 0;
  case 0xc:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",0xc);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = ui_QuickNote_task(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 0xc;
    break;
  case 0xe:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",0xe);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = ui_onboarding_task(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 0xe;
    break;
  case 0xf:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",0xf);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = ui_raster_height_task(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 0xf;
    break;
  case 0x10:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",0x10);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = ui_even_ai_task(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 0x10;
    break;
  case 0x11:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",0x11);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar12 = ui_set_imu_pitch_task(iVar11,task_param,operation_mode);
    if (LOG_LEVEL < 3) {
      return uVar12;
    }
    screen_id = 0x11;
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("%s(): exit screen_id = %d\n","ui_refalsh_warp",screen_id);
  }
  else {
    handle_heartbeat();
  }
  return uVar12;
}


