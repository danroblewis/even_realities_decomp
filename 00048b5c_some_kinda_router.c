/*
 * Function: some_kinda_router
 * Entry:    00048b5c
 * Prototype: undefined some_kinda_router()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 some_kinda_router(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 extraout_r1;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined *puVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  int iStack_28;
  int local_24;
  uint uStack_20;
  
  iVar12 = get_system_ready_state();
  if (iVar12 == 1) {
    if (param_2 == 3) {
      FUN_00036a18(param_1 + 0xb6c,param_3,param_4);
    }
    return 0;
  }
  iVar12 = param_1 + 0xb6c;
  DAT_2000a098 = param_2;
  switch(param_2) {
  case 4:
    local_24 = 0;
    iStack_28 = iVar12;
    uStack_20 = param_4;
    if (param_4 == 2) {
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
        FUN_000438d0();
        DAT_2001b80f = '\0';
      }
LAB_0003606c:
      DAT_20018d9f = 0;
    }
    else {
      if (param_4 == 0) {
        return 0;
      }
      if (DAT_200033d3 == 0xff) {
        FUN_000431b4(param_1 + 0xb90);
        FUN_000432d0();
        gui_screen_clear();
      }
      uVar16 = FUN_00034390();
      uVar14 = FUN_00033cf8();
      if ((DAT_200033d3 == uVar16) && (DAT_200033d2 == uVar14)) {
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
            FUN_00035f28(param_1 + 0xb90,uVar14);
            DAT_2001b80e = '\0';
          }
          FUN_00035afc(uVar14,local_24);
          DAT_200033d3 = (byte)uVar16;
          DAT_200033d2 = (byte)uVar14;
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
    iVar12 = get_work_mode(iVar12,param_3);
    iVar7 = FUN_00034410();
    cVar2 = DAT_2001b813;
    if (iVar7 != 4) {
      if (param_4 == 2) {
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
      else if (param_4 != 0) {
        if (DAT_2001b813 == '\0') {
          DAT_2001b813 = '\x01';
          FUN_000431b4(param_1 + 0xb90);
          FUN_000432d0();
          gui_screen_clear();
          DAT_2001b812 = cVar2;
        }
        if (*(byte *)(iVar12 + 0xf6) < 2) {
          DAT_2001b812 = '\0';
          gui_screen_clear();
        }
        else {
          iVar12 = get_work_mode();
          uVar13 = FUN_0003483c(*(char *)(iVar12 + 0xdd) + -1);
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("new msgType is %d \n",uVar13);
          }
          else {
            handle_heartbeat();
          }
          if (DAT_2001b812 == '\0') {
            FUN_000432ec();
            iVar12 = 0;
            do {
              switch(uVar13) {
              case 1:
                uVar19 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar7 = iVar7 + 0x3a;
                uVar15 = 0x37;
                break;
              case 2:
                uVar19 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar7 = iVar7 + 0x3a;
                uVar15 = 0x36;
                break;
              case 3:
                uVar19 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar7 = iVar7 + 0x3a;
                uVar15 = 0x3a;
                break;
              case 4:
                uVar19 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar7 = iVar7 + 0x3a;
                uVar15 = 0x39;
                break;
              default:
                uVar19 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar7 = iVar7 + 0x3a;
                uVar15 = 0x38;
              }
              gui_bmp_bitmap_draw(uVar15,uVar19,iVar7,0,0,0);
              uVar16 = 0;
              do {
                iVar7 = 0;
                local_34 = (uVar16 % 0x1a) * 0xa00;
                do {
                  local_30 = 0x4030201;
                  local_2c = 0x7070605;
                  iVar8 = *(int *)(param_1 + 0xb90 + uVar16 * 4);
                  bVar1 = *(byte *)(iVar8 + iVar7);
                  if (bVar1 != 0) {
                    *(byte *)(iVar8 + iVar7) =
                         bVar1 & (&DAT_000aae20)
                                 [iVar7 + (uint)*(byte *)((int)&local_30 + iVar12) * 0x140 +
                                          local_34];
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 0x140);
                uVar16 = uVar16 + 1;
              } while (uVar16 != 199);
              iVar7 = get_work_mode();
              uVar15 = *(undefined4 *)(iVar7 + 0xeb4);
              iVar7 = get_work_mode();
              iVar12 = iVar12 + 1;
              _reflash_fb_data_to_lcd(uVar15,*(undefined4 *)(iVar7 + 0xeb8),0,0,0x280,199);
            } while (iVar12 != 8);
            FUN_000432d0();
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
    uVar13 = FUN_0003af78(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 6;
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
    uVar13 = FUN_0003cb58(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 7;
    break;
  default:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter screen_id = %d\n","ui_refalsh_warp",param_2);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar13 = (**(code **)(param_1 + 0xb80))(iVar12,*(undefined1 *)(param_1 + 0xd5),param_1 + 0xd4);
    if (LOG_LEVEL < 3) {
      return uVar13;
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
    uVar13 = ui_teleprompter_task(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 9;
    break;
  case 10:
    iVar12 = get_work_mode(iVar12,param_3);
    iVar7 = iVar12 + 0xef;
    FUN_000431b4(param_1 + 0xb90);
    FUN_000432d0();
    uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
    switch(DAT_20004bb8) {
    case 0:
      if (LOG_LEVEL < 3) {
        if (param_4 != 2) goto LAB_0003fbee;
      }
      else {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000aa0ae,"ui_navigation_task");
        }
        else {
          handle_heartbeat();
        }
        if (param_4 != 2) {
LAB_0003fbee:
          if (param_4 == 0) {
            if (DAT_20004bbe == '\x01') {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&LAB_000aa0f4_1,"ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
              uVar13 = get_ui_x_offset();
              iVar12 = get_ui_y_offset();
              gui_bmp_dynamic_bitmap_draw(8,uVar13,iVar12 + 0x3a,0,0,0,0);
              goto LAB_0003fc32;
            }
            pcVar6 = (char *)get_work_mode();
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
            if (*pcVar6 != '\x01') goto switchD_0003f438_caseD_4;
LAB_0003f586:
            if (DAT_20004bbe != '\x01') goto LAB_0003f58e;
LAB_0003fc46:
            if ((0 < SYNC_PACKET_COUNTER) && (SYNC_PACKET_COUNTER = 0, DAT_20004be5 < 0x14)) {
              DAT_20004be5 = 0x13;
            }
            uVar24 = FUN_0007d35a();
            uVar23 = FUN_0007d3c2((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_20004be8,
                                  DAT_20004bec);
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
            if ((int)((ulonglong)uVar23 >> 0x20) < (int)(uint)((uint)uVar23 < 0x3e9))
            goto switchD_0003f438_caseD_4;
            uVar24 = FUN_0007d35a();
            DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
            DAT_20004be8 = (undefined4)uVar24;
            DAT_20004be5 = DAT_20004be5 - 1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): DECETED TIMEOUT ...... _tpm_thread_prv_data.sync_cnt = %d\n",
                            "ui_navigation_task",(uint)DAT_20004be5);
                uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
              else {
                handle_heartbeat();
                uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
            }
            DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
            DAT_20004be8 = (undefined4)uVar24;
            if (DAT_20004be5 != 0) goto switchD_0003f438_caseD_4;
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a disconnection between the AR Glasses and the Bluetooth application!\n"
                            ,"ui_navigation_task");
                uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
              else {
                handle_heartbeat();
                uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
            }
            DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
            DAT_20004be8 = (undefined4)uVar24;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): bluetooth connect is break,Send Stop Navigation command to slave.\n"
                            ,"ui_navigation_task");
                uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
              else {
                handle_heartbeat();
                uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
              }
            }
            DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
            DAT_20004be8 = (undefined4)uVar24;
            local_34 = CONCAT22(local_34._2_2_,0x106);
            uVar13 = get_work_mode();
            iVar12 = sync_to_slave(uVar13,6,&local_34,2);
            goto joined_r0x0003f84c;
          }
          if (param_4 == 1) {
            pcVar6 = (char *)get_work_mode();
            if (*pcVar6 == '\x01') {
              FUN_00047ba8();
            }
            if ((DAT_20004bbe == '\0') &&
               (iVar8 = get_work_mode(), **(char **)(iVar8 + 0x1000) == '\x01')) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&LAB_000aa112,"ui_navigation_task");
                }
                else {
                  handle_heartbeat();
                }
              }
              FUN_0003dfe4();
              DAT_20004bbe = '\x01';
              uVar24 = FUN_0007d35a();
              DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
              DAT_20004be8 = (undefined4)uVar24;
              DAT_20004be5 = 10;
              gui_screen_clear();
              reset_animation_counters();
              FUN_0003f380();
            }
            if (((DAT_20004bbe == '\x01') && (OVERVIEW_MAP_ACTIVE == '\x01')) &&
               (uVar16 = (uint)PANORAMIC_MAP_ACTIVE, PANORAMIC_MAP_ACTIVE == 1)) {
              DAT_2001ba2c = 0;
              DAT_20004bb8 = uVar16;
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
              uVar24 = FUN_0007d35a();
              DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
              DAT_20004be8 = (undefined4)uVar24;
              navigation_overview_map_display(iVar12,iVar7);
            }
LAB_0003fc32:
            pcVar6 = (char *)get_work_mode();
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
            if ((*pcVar6 != '\x01') ||
               (uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8), DAT_20004bbe != '\x01'))
            goto switchD_0003f438_caseD_4;
            goto LAB_0003fc46;
          }
          pcVar6 = (char *)get_work_mode();
          if (*pcVar6 == '\x01') goto LAB_0003f586;
LAB_0003f58e:
          uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
joined_r0x0003fa68:
          if (param_4 != 5) goto switchD_0003f438_caseD_4;
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
      if (param_4 != 2) {
        if (param_4 == 1) {
          uVar24 = get_work_mode();
          uVar13 = (undefined4)((ulonglong)uVar24 >> 0x20);
          if (*(char *)uVar24 == '\x01') {
            FUN_00047ba8();
            uVar24 = get_work_mode();
            uVar13 = (undefined4)((ulonglong)uVar24 >> 0x20);
            if (*(char *)(*(int *)((int)uVar24 + 0x1000) + 6) == '\x01') {
              if (DAT_20004be5 < 0x14) {
                DAT_20004be5 = 0x13;
              }
              uVar24 = get_work_mode();
              uVar13 = (undefined4)((ulonglong)uVar24 >> 0x20);
              *(undefined1 *)(*(int *)((int)uVar24 + 0x1000) + 6) = 0;
            }
          }
          resource_mutex_acquire(&DAT_20007b3c,uVar13,0xffffffff,0xffffffff);
          DAT_20004bcc = *(byte *)(iVar12 + 0x19d);
          DAT_20004be0 = *(char *)(iVar12 + 0xf6);
          mutex_unlock(&DAT_20007b3c);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): arrived status = %d,  nav->imu_action_status = %d\n",
                          "ui_navigation_task",(uint)DAT_20004bcc,(uint)*(byte *)(iVar12 + 0xf6));
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
            iVar7 = FUN_00023ee0();
            if (iVar7 == 6) {
              iVar7 = 0xaa;
            }
            else {
              iVar7 = 0xc4;
            }
            iVar8 = get_ui_x_offset();
            iVar9 = get_ui_y_offset();
            iVar10 = get_ui_x_offset();
            iVar11 = get_ui_y_offset();
            gui_utf_draw(0,iVar12 + 0x1a4,0,iVar8 + iVar7,iVar9 + 0x3c,iVar10 + 0x23f,iVar11 + 0x57,
                         2,0,0,0,0);
            iVar12 = get_work_mode();
            iVar12 = *(byte *)(*(int *)(iVar12 + 0xfec) + 0x5e) - 1;
            if (iVar12 != 0) {
              iVar12 = 1;
            }
            uVar13 = FUN_0007d224();
            uVar15 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar8 = get_ui_x_offset();
            iVar9 = get_ui_y_offset();
            EVEN_DASHBOARD_CLOCK_32x_TTF(uVar13,uVar15,iVar7 + 2,iVar8 + 0x4c,iVar9 + 0x1d,3,iVar12)
            ;
            uVar24 = FUN_0007d35a();
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
                iVar7 = get_ui_x_offset();
                uVar13 = get_ui_y_offset();
                iVar8 = get_ui_x_offset();
                iVar9 = get_ui_y_offset();
                gui_bitmps_merge_draw
                          (iVar7 + 0x1b6,uVar13,iVar8 + 0x240,iVar9 + 0x88,&display_buffer,
                           &DAT_2001c336,2,0xf);
                iVar7 = FUN_00023ee0();
                if (iVar7 == 6) {
                  iVar7 = 0xe8;
                }
                else {
                  iVar7 = 0xc4;
                }
                iVar8 = get_ui_x_offset();
                iVar9 = get_ui_y_offset();
                iVar10 = get_ui_x_offset();
                iVar11 = get_ui_y_offset();
                gui_utf_draw(0,iVar12 + 0x1a4,0,iVar8 + iVar7,iVar9 + 0x3c,iVar10 + 0x1e4,
                             iVar11 + 0x57,2,0,0,0,0);
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
                navigation_overview_map_display(iVar12,iVar7);
                uVar24 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
                goto LAB_0003f794;
              }
              if (2 < LOG_LEVEL) {
                pcVar6 = "%s(): navigation_panoramic_map_display reflash\n";
                goto LAB_0003f896;
              }
            }
            navigation_panoramic_map_display(iVar12,iVar7);
            uVar24 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
          }
LAB_0003f794:
          DAT_20004bdc = (int)((ulonglong)uVar24 >> 0x20);
          DAT_20004bd8 = (uint)uVar24;
          pcVar6 = (char *)get_work_mode();
          uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          if (*pcVar6 != '\x01') goto switchD_0003f438_caseD_4;
        }
        else {
          if (param_4 == 0) {
            local_34 = param_4;
            local_30 = param_4;
            local_2c = param_4;
            uVar13 = FUN_0007d224();
            unix_timestamp_to_datetime(uVar13,&local_34);
            uVar24 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
            sVar3 = local_30._2_2_;
            uVar4 = (ushort)local_2c;
            if (((uint)DAT_20004bc8 != (local_2c & 0xffff)) || (local_30._2_2_ != DAT_20004bc6)) {
LAB_0003f994:
              DAT_20004bc8 = uVar4;
              DAT_20004bc6 = sVar3;
              iVar12 = get_work_mode();
              iVar12 = *(byte *)(*(int *)(iVar12 + 0xfec) + 0x5e) - 1;
              if (iVar12 != 0) {
                iVar12 = 1;
              }
              uVar13 = FUN_0007d224();
              uVar15 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              iVar8 = get_ui_x_offset();
              iVar9 = get_ui_y_offset();
              EVEN_DASHBOARD_CLOCK_32x_TTF
                        (uVar13,uVar15,iVar7 + 2,iVar8 + 0x4c,iVar9 + 0x1d,3,iVar12);
              uVar24 = CONCAT44(DAT_20004bdc,DAT_20004bd8);
            }
            goto LAB_0003f794;
          }
          pcVar6 = (char *)get_work_mode();
          uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          if (*pcVar6 != '\x01') goto joined_r0x0003fa68;
        }
        if ((0 < SYNC_PACKET_COUNTER) && (SYNC_PACKET_COUNTER = 0, DAT_20004be5 < 0x14)) {
          DAT_20004be5 = 0x13;
        }
        uVar24 = FUN_0007d35a();
        uVar23 = FUN_0007d3c2((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_20004be8,DAT_20004bec
                             );
        uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
        if ((int)((ulonglong)uVar23 >> 0x20) < (int)(uint)((uint)uVar23 < 0x3e9))
        goto switchD_0003f438_caseD_4;
        uVar24 = FUN_0007d35a();
        DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
        DAT_20004be8 = (undefined4)uVar24;
        DAT_20004be5 = DAT_20004be5 - 1;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): DECETED TIMEOUT ...... _tpm_thread_prv_data.sync_cnt = %d\n",
                        "ui_navigation_task",(uint)DAT_20004be5);
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
          else {
            handle_heartbeat();
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
        }
        DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
        DAT_20004be8 = (undefined4)uVar24;
        if (DAT_20004be5 != 0) goto switchD_0003f438_caseD_4;
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): There is a disconnection between the AR Glasses and the Bluetooth application!\n"
                        ,"ui_navigation_task");
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
          else {
            handle_heartbeat();
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
        }
        DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
        DAT_20004be8 = (undefined4)uVar24;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): bluetooth connect is break,Send Stop Navigation command to slave.\n",
                        "ui_navigation_task");
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
          else {
            handle_heartbeat();
            uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          }
        }
        DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
        DAT_20004be8 = (undefined4)uVar24;
        local_34 = CONCAT22(local_34._2_2_,0x106);
        uVar13 = get_work_mode();
        iVar12 = sync_to_slave(uVar13,6,&local_34,2);
joined_r0x0003f84c:
        if (4999 < iVar12) {
          uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): SYNC TO Slave failed...,don\'t exec Navigation exit action,master auto exit...\n"
                          ,"ui_navigation_task");
              uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
            }
            else {
              handle_heartbeat();
              uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
            }
          }
          goto switchD_0003f438_caseD_4;
        }
LAB_0003f5aa:
        DAT_20004bb8 = 2;
        uVar24 = FUN_0007d35a();
        DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
        DAT_20004be8 = (undefined4)uVar24;
        gui_screen_clear();
        uVar13 = get_ui_x_offset();
        iVar12 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x3f,uVar13,iVar12 + 0x3a,0,0,0);
        FUN_0003f2a8();
        uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
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
      uVar24 = FUN_0007d35a();
      uVar24 = FUN_0007d3c2((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_20004be8,DAT_20004bec);
      if ((int)(uint)((uint)uVar24 < 0x1f41) <= (int)((ulonglong)uVar24 >> 0x20)) {
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): The navigation automatically shuts down due to disconnection.\n",
                        "ui_navigation_task");
          }
          else {
            handle_heartbeat();
          }
        }
        FUN_0004382c();
        fill_memory_buffer(&DAT_20004bb8,0,0x38);
        fill_memory_buffer(&display_buffer,0,0x1210);
        DAT_2001ba2d = 0;
        iVar12 = get_work_mode();
        **(undefined1 **)(iVar12 + 0x1000) = 0;
      }
      uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
      if (param_4 != 2) goto switchD_0003f438_caseD_4;
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
      if (param_4 != 2) {
        if ((param_4 == 1) && (pcVar6 = (char *)get_work_mode(), *pcVar6 == '\x01')) {
          FUN_00047ba8();
        }
        uVar24 = FUN_0007d35a();
        iVar12 = (int)((ulonglong)uVar24 >> 0x20);
        iVar7 = DAT_20004bd4 + DAT_20004bdc + (uint)CARRY4(DAT_20004bd0,DAT_20004bd8);
        bVar22 = DAT_20004bd0 + DAT_20004bd8 < (uint)uVar24;
        uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
        if ((int)((iVar7 - iVar12) - (uint)bVar22) < 0 !=
            (SBORROW4(iVar7,iVar12) != SBORROW4(iVar7 - iVar12,(uint)bVar22))) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): exec navigation auto exit ...\n","ui_navigation_task");
            }
            else {
              handle_heartbeat();
            }
          }
          iVar12 = get_work_mode();
          **(undefined1 **)(iVar12 + 0x1000) = 0;
          FUN_0004382c();
          fill_memory_buffer(&DAT_20004bb8,0,0x38);
          uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
        }
        goto switchD_0003f438_caseD_4;
      }
      break;
    default:
      goto switchD_0003f438_caseD_4;
    }
    FUN_0004382c();
LAB_0003f47e:
    fill_memory_buffer(&DAT_20004bb8,0,0x38);
    fill_memory_buffer(&display_buffer,0,0x1210);
    DAT_2001ba2d = 0;
    uVar24 = CONCAT44(DAT_20004bec,DAT_20004be8);
switchD_0003f438_caseD_4:
    DAT_20004bec = (undefined4)((ulonglong)uVar24 >> 0x20);
    DAT_20004be8 = (undefined4)uVar24;
    return 0;
  case 0xb:
    iVar12 = get_work_mode(iVar12,param_3);
    FUN_000431b4(param_1 + 0xb90);
    FUN_000432d0();
    if (DAT_2000f6ec == '\0') {
      if (param_4 == 1) {
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
        FUN_000436f8();
        fill_memory_buffer(&DAT_2000f6ee,0,0x10);
        iVar7 = 0;
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
        FUN_000432ec();
        do {
          uVar16 = (uint)*(byte *)(iVar12 + 0xf0);
          if (((uVar16 < 0x13) && (uVar14 = *(byte *)(iVar12 + 0xef) - 1, (uVar14 & 0xff) < 0x12))
             && (uVar16 != 0)) {
            local_34 = 0;
            local_30 = 0;
            local_2c = local_2c & 0xffff0000;
            FUN_00077914(&local_34,10,"%s>%s",*(undefined4 *)(&DAT_200024f4 + (uVar16 - 1) * 4),
                         *(undefined4 *)(&DAT_200024f4 + uVar14 * 4));
            if (3 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): draw translate type content\n","ui_translate_task");
              }
              else {
                handle_heartbeat();
              }
            }
            uVar13 = get_ui_x_offset();
            iVar8 = get_ui_y_offset();
            iVar9 = get_ui_x_offset();
            iVar10 = get_ui_y_offset();
            gui_utf_draw(0,&local_34,3,uVar13,iVar8 + 0x6e,iVar9 + 0x50,iVar10 + 0x89,1,0,0,0,0);
            DAT_2000f6fd = *(byte *)(iVar12 + 0xf0);
            DAT_2000f6fc = *(byte *)(iVar12 + 0xef);
          }
          else if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                          ,"ui_translate_task",uVar16,(uint)*(byte *)(iVar12 + 0xef));
            }
            else {
              handle_heartbeat("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                               ,"ui_translate_task");
            }
          }
          iVar8 = get_work_mode();
          iVar8 = *(byte *)(*(int *)(iVar8 + 0xfec) + 0x5e) - 1;
          if (iVar8 != 0) {
            iVar8 = 1;
          }
          uVar13 = FUN_0007d224();
          uVar15 = get_ui_x_offset();
          iVar9 = get_ui_y_offset();
          iVar10 = get_ui_x_offset();
          iVar11 = get_ui_y_offset();
          EVEN_DASHBOARD_CLOCK_32x_TTF(uVar13,uVar15,iVar9 + 2,iVar10 + 0x50,iVar11 + 0x1d,3,iVar8);
          uVar16 = 0;
          do {
            iVar8 = 0;
            do {
              local_34 = 0x7050301;
              local_30 = 0x7070707;
              iVar9 = *(int *)(param_1 + 0xb90 + uVar16 * 4);
              bVar1 = *(byte *)(iVar9 + iVar8);
              if (bVar1 != 0) {
                *(byte *)(iVar9 + iVar8) =
                     bVar1 & (&DAT_000aae20)
                             [iVar8 + (uint)*(byte *)(iVar7 + (int)&local_34) * 0x140 +
                                      (uVar16 % 0x1a) * 0xa00];
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != 0x140);
            uVar16 = uVar16 + 1;
          } while (uVar16 != 199);
          iVar8 = get_work_mode();
          uVar13 = *(undefined4 *)(iVar8 + 0xeb4);
          iVar8 = get_work_mode();
          iVar7 = iVar7 + 1;
          _reflash_fb_data_to_lcd(uVar13,*(undefined4 *)(iVar8 + 0xeb8),0,0,0x280,199);
        } while (iVar7 != 4);
        FUN_000432d0();
        return 0;
      }
      if (param_4 != 2) {
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
    if (param_4 != 1) {
      if (param_4 == 0) {
        if (DAT_2000f6ee == '\0') {
          uVar13 = get_ui_x_offset();
          iVar12 = get_ui_y_offset();
          gui_bmp_dynamic_bitmap_draw(1,uVar13,iVar12 + 0x36,0,0,0,0);
        }
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        uVar13 = FUN_0007d224();
        unix_timestamp_to_datetime(uVar13,&local_34);
        if (((uint)DAT_2000f6f8 == (local_2c & 0xffff)) && (DAT_2000f6f6 == local_30._2_2_)) {
          return 0;
        }
        DAT_2000f6f8 = (ushort)local_2c;
        DAT_2000f6f6 = local_30._2_2_;
        iVar12 = get_work_mode();
        iVar12 = *(byte *)(*(int *)(iVar12 + 0xfec) + 0x5e) - 1;
        if (iVar12 != 0) {
          iVar12 = 1;
        }
        uVar13 = FUN_0007d224();
        uVar15 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar9 = get_ui_y_offset();
        EVEN_DASHBOARD_CLOCK_32x_TTF(uVar13,uVar15,iVar7 + 2,iVar8 + 0x50,iVar9 + 0x1d,3,iVar12);
        return 0;
      }
      if (param_4 != 2) {
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
      FUN_0004382c();
      goto LAB_00040162;
    }
    fill_memory_buffer(&DAT_2001cc3e,0,400);
    resource_mutex_acquire(&DAT_20007b3c,extraout_r1,0xffffffff,0xffffffff);
    DAT_2000f6ee = *(char *)(iVar12 + 0xf1);
    bVar1 = *(byte *)(iVar12 + 0xf2);
    memcpy(&DAT_2001cc3e,iVar12 + 0xf5,400);
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
      uVar13 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x1b,uVar13,iVar7 + 0x36,0,0,0);
    }
    uVar16 = (uint)*(byte *)(iVar12 + 0xf0);
    if (uVar16 < 0x13) {
      uVar14 = *(byte *)(iVar12 + 0xef) - 1;
      if (((uVar14 & 0xff) < 0x12) && (uVar16 != 0)) {
        if ((DAT_2000f6fd != uVar16) || ((uint)DAT_2000f6fc != (uint)*(byte *)(iVar12 + 0xef))) {
          local_34 = 0;
          local_30 = 0;
          local_2c = local_2c & 0xffff0000;
          FUN_00077914(&local_34,10,"%s>%s",*(undefined4 *)(&DAT_200024f4 + (uVar16 - 1) * 4),
                       *(undefined4 *)(&DAT_200024f4 + uVar14 * 4));
          if (3 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): draw translate type content\n","ui_translate_task");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar13 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar8 = get_ui_x_offset();
          iVar9 = get_ui_y_offset();
          gui_utf_draw(0,&local_34,3,uVar13,iVar7 + 0x6e,iVar8 + 0x50,iVar9 + 0x89,1,0,0,0,0);
          DAT_2000f6fd = *(byte *)(iVar12 + 0xf0);
          DAT_2000f6fc = *(byte *)(iVar12 + 0xef);
        }
        goto LAB_0004027a;
      }
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                    ,"ui_translate_task",uVar16,(uint)*(byte *)(iVar12 + 0xef));
      }
      else {
        handle_heartbeat("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                         ,"ui_translate_task");
      }
    }
LAB_0004027a:
    if (bVar1 - 3 < 2) {
      iVar7 = get_work_mode();
      iVar12 = 0x640;
      while( true ) {
        for (iVar8 = get_ui_y_offset(); iVar9 = get_ui_y_offset(), iVar8 <= iVar9 + 0x87;
            iVar8 = iVar8 + 1) {
          iVar9 = get_ui_x_offset();
          puVar18 = &DAT_000aae20 + (iVar8 % 0x1a) * 0xa00 + iVar12;
          for (iVar9 = iVar9 + 0x58; iVar10 = get_ui_x_offset(), iVar9 < (iVar10 + 0x240) / 2;
              iVar9 = iVar9 + 1) {
            iVar10 = *(int *)(iVar7 + 0xb90 + iVar8 * 4);
            bVar1 = *(byte *)(iVar10 + iVar9);
            if (bVar1 != 0) {
              *(byte *)(iVar10 + iVar9) = bVar1 & puVar18[iVar9];
            }
          }
        }
        iVar8 = get_work_mode();
        uVar19 = *(undefined4 *)(iVar8 + 0xeb4);
        iVar8 = get_work_mode();
        uVar15 = *(undefined4 *)(iVar8 + 0xeb8);
        iVar8 = get_ui_x_offset();
        uVar13 = get_ui_y_offset();
        iVar9 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        _reflash_fb_data_to_lcd(uVar19,uVar15,iVar8 + 0x58,uVar13,iVar9 + 0x240,iVar10 + 0x88);
        if (iVar12 == 0x500) break;
        iVar12 = 0x500;
      }
      iVar12 = get_ui_x_offset();
      uVar13 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar9 = get_ui_y_offset();
      _clean_fb_data(iVar7 + 0xb90,0,iVar12 + 0x58,uVar13,iVar8 + 0x240,iVar9 + 0x88);
      if (DAT_2000f6ee == '\0') {
        uVar13 = get_ui_x_offset();
        iVar12 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(1,uVar13,iVar12 + 0x36,0,0,0,0);
      }
      FUN_000432ec();
      iVar12 = 2;
      while( true ) {
        iVar8 = get_ui_x_offset();
        uVar13 = get_ui_y_offset();
        iVar9 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        gui_utf_draw(0,&DAT_2001cc3e,0,iVar8 + 0x58,uVar13,iVar9 + 0x240,iVar10 + 0x88,5,0,0,0,0);
        iVar8 = get_ui_x_offset();
        iVar8 = iVar8 + 0x58;
        iVar9 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        iVar11 = get_ui_y_offset();
        for (uVar16 = 0; (int)uVar16 < (iVar11 + 0x88) - iVar10; uVar16 = uVar16 + 1) {
          for (iVar17 = 0; iVar17 < ((iVar9 + 0x240) - iVar8) / 2; iVar17 = iVar17 + 1) {
            local_34 = 0x7050301;
            local_30 = 0x7070707;
            iVar20 = iVar17 + iVar8 / 2;
            iVar21 = *(int *)(iVar7 + iVar10 * 4 + 0xb90 + uVar16 * 4);
            bVar1 = *(byte *)(iVar21 + iVar20);
            if (bVar1 != 0) {
              *(byte *)(iVar21 + iVar20) =
                   bVar1 & (&DAT_000aae20)
                           [iVar17 + (uint)*(byte *)((int)&local_34 + iVar12) * 0x140 +
                                     (uVar16 % 0x1a) * 0xa00];
            }
          }
        }
        iVar17 = get_work_mode();
        uVar13 = *(undefined4 *)(iVar17 + 0xeb4);
        iVar17 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar13,*(undefined4 *)(iVar17 + 0xeb8),iVar8,iVar10,iVar9 + 0x240,iVar11 + 0x88);
        if (iVar12 != 2) break;
        iVar12 = 3;
      }
      FUN_000432d0();
      if (DAT_2000f6ee == '\0') {
        uVar13 = get_ui_x_offset();
        iVar12 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(1,uVar13,iVar12 + 0x36,0,0,0,0);
      }
    }
    else {
      iVar12 = get_ui_x_offset();
      uVar13 = get_ui_y_offset();
      iVar7 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,&DAT_2001cc3e,0,iVar12 + 0x58,uVar13,iVar7 + 0x240,iVar8 + 0x88,5,0,0,0,0);
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
    uVar13 = ui_QuickNote_task(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 0xc;
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
    uVar13 = ui_onboarding_task(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 0xe;
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
    uVar13 = ui_raster_height_task(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 0xf;
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
    uVar13 = ui_even_ai_task(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 0x10;
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
    uVar13 = ui_set_imu_pitch_task(iVar12,param_3,param_4);
    if (LOG_LEVEL < 3) {
      return uVar13;
    }
    param_2 = 0x11;
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("%s(): exit screen_id = %d\n","ui_refalsh_warp",param_2);
  }
  else {
    handle_heartbeat();
  }
  return uVar13;
}


