/*
 * Function: spec_ble_command_hook
 * Entry:    0000ef28
 * Prototype: undefined __stdcall spec_ble_command_hook(undefined4 param_1, undefined4 tx_data_len)
 */


undefined4 spec_ble_command_hook(undefined4 param_1,undefined4 tx_data_len)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 enabled;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  code *pcVar11;
  uint uVar12;
  int sec;
  char *pos;
  char *pcVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 cmd_type;
  int local_5c0;
  undefined1 auStack_5bc [28];
  undefined4 value;
  undefined1 auStack_59c [124];
  undefined1 local_520;
  undefined1 uStack_51f;
  char cStack_51e;
  undefined1 uStack_51d;
  undefined1 uStack_51c;
  undefined1 local_51b;
  undefined4 jstr_len;
  int local_41c;
  int iStack_418;
  int local_414;
  
  sec = get_bluetooth_manager();
  local_520 = 0;
  uStack_51f = 0;
  cStack_51e = '\0';
  uStack_51d = 0;
  fill_memory_buffer(&uStack_51c,0,0xfc);
  validate_memory_bounds(&local_520,param_1,tx_data_len,0x100);
  iVar3 = FUN_0000eefe(&local_520,&CMD_TEST_BLE_UNPAIR);
  if (iVar3 == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): test:BLE_REQ_POST_BT_UNPAIR\n\n","spec_ble_command_hook");
      }
      else {
        handle_heartbeat();
      }
    }
    enabled = 1;
    local_520 = 0x47;
    goto LAB_0000ef7e;
  }
  iVar3 = strstr(&local_520,&CMD_SCREEN_ID);
  if (iVar3 != 0) {
    value = 0;
    fill_memory_buffer(auStack_59c,0,0x1c);
    jstr_len = 0;
    fill_memory_buffer(&local_41c,0,0x7c);
    pcVar9 = (char *)(iVar3 + 3);
    pos = pcVar9;
    do {
      pcVar13 = pos;
      pos = pcVar13 + 1;
    } while (*pcVar13 != '@');
    FUN_00087080(&value,pcVar9,(int)pcVar13 - (int)pcVar9,0x20);
    FUN_00086ffe(&jstr_len,pcVar13 + 1,0x80);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&DEBUG_MSG_SCREEN_ID_CMD,"spec_ble_command_hook",&value,&jstr_len);
      }
      else {
        handle_heartbeat(&DEBUG_MSG_SCREEN_ID_CMD,"spec_ble_command_hook",&value,&jstr_len);
      }
    }
    piVar4 = &value;
    goto LAB_0000effe;
  }
  iVar3 = strstr(&local_520,&CMD_LOG_LEVEL);
  if (iVar3 == 0) {
    iVar3 = strstr(&local_520,&CMD_DISPLAY_MODE);
    if (iVar3 == 0) {
      iVar3 = strstr(&local_520,&CMD_WORK_MODE);
      if (iVar3 == 0) {
        iVar5 = strstr(&local_520,&CMD_BUFFER_DATA);
        if (iVar5 != 0) {
          local_41c = iVar3;
          iStack_418 = iVar3;
          local_414 = iVar3;
          jstr_len = *(int *)(iVar5 + 3);
          pos = (char *)&jstr_len;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): buf:%s\n\n","spec_ble_command_hook",&jstr_len);
            }
            else {
              handle_heartbeat();
            }
          }
          do {
            pcVar9 = pos + 1;
            if (*pos == '\0') break;
            pos = pcVar9;
          } while (*pcVar9 != '@');
          local_5c0 = 0;
          validate_memory_bounds(&local_5c0,&jstr_len,(int)pos - (int)&jstr_len,4);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): cmd:%s\n\n","spec_ble_command_hook",&local_5c0);
            }
            else {
              handle_heartbeat();
            }
          }
          pos = pos + 1;
          value = 0;
          pcVar9 = pos;
          do {
            pcVar13 = pcVar9;
            pcVar9 = pcVar13 + 1;
          } while (*pcVar13 != '\0');
          validate_memory_bounds(&value,pos,(int)pcVar13 - (int)pos,4);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): en:%s\n\n","spec_ble_command_hook",&value);
            }
            else {
              handle_heartbeat();
            }
          }
          sec = FUN_00086a06(&local_5c0);
          sec = sec * 0x3c + 0xe1a;
          local_520 = 7;
          uStack_51f = (undefined1)sec;
          cStack_51e = (char)((uint)sec >> 8);
          uStack_51d = (undefined1)((uint)sec >> 0x10);
          uStack_51c = (undefined1)((uint)sec >> 0x18);
          enabled = FUN_00086a06(&value);
          local_51b = (undefined1)enabled;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): enable: %d, sec:%d\n\n","spec_ble_command_hook",enabled,sec);
            }
            else {
              handle_heartbeat("%s(): enable: %d, sec:%d\n\n","spec_ble_command_hook",enabled,sec);
            }
          }
          enabled = 6;
          goto LAB_0000ef7e;
        }
        iVar3 = strstr(&local_520,"#cmd@");
        if (iVar3 != 0) {
          pos = (char *)(iVar3 + 5);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): pos=%s, tx_data_len=%d\n\n","spec_ble_command_hook",pos,tx_data_len
                         );
            }
            else {
              handle_heartbeat("%s(): pos=%s, tx_data_len=%d\n\n","spec_ble_command_hook",pos,
                               tx_data_len);
            }
          }
          value = 0;
          cmd_type = 0;
          fill_memory_buffer(auStack_59c,0,0x7c);
          dump_hex_data("ble",pos,8);
          pcVar9 = pos;
          do {
            pcVar13 = pcVar9;
            pcVar9 = pcVar13 + 1;
          } while (*pcVar13 != '@');
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): 11 len=%d\n","spec_ble_command_hook",(int)pcVar13 - (int)pos);
            }
            else {
              handle_heartbeat();
            }
          }
          validate_memory_bounds(&cmd_type,pos,(int)pcVar13 - (int)pos,4);
          sec = FUN_00086a06(&cmd_type);
          if (LOG_LEVEL < 3) {
            if (sec == 4) goto LAB_0000f2fc;
            if (sec == 9) goto LAB_0000f39a;
          }
          else {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): cmd=%d\n","spec_ble_command_hook",sec);
            }
            else {
              handle_heartbeat();
            }
            if (sec == 4) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(&DEBUG_MSG_WHITELIST_CMD,"spec_ble_command_hook");
                }
                else {
                  handle_heartbeat();
                }
              }
LAB_0000f2fc:
              jstr_len = 0;
              fill_memory_buffer(&local_41c,0,0xfc);
              strcpy_safe(&jstr_len,
                          "{\"whitelist_app\":\"com.apple.MobileSMS:com.tencent.xin:com.tencent.mqq\"}"
                         );
              enabled = FUN_0000ef12(&jstr_len);
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): cmd_type:%s, value=%s, tx_len=%d, jstr_len=%d, jsonstr=%s\n\n",
                              "spec_ble_command_hook",&cmd_type,&value,0,enabled,&jstr_len);
                }
                else {
                  handle_heartbeat("%s(): cmd_type:%s, value=%s, tx_len=%d, jstr_len=%d, jsonstr=%s\n\n"
                                   ,"spec_ble_command_hook",&cmd_type,&value,0,enabled,&jstr_len);
                }
              }
              subcontracing_send_data_pkcs7(&jstr_len,enabled,4,(undefined *)0x7c245);
              return 0;
            }
            if (sec == 0x9) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): simulator->BLE_REQ_PUT_TELEPROMPTER_INFO.\n\n",
                              "spec_ble_command_hook");
                }
                else {
                  handle_heartbeat();
                }
              }
LAB_0000f39a:
              enabled = create_json_obj();
              add_json_field_simple(0,enabled,"enable");
              add_json_field_complex(enabled,"text",&TELEPROMPTER_TEXT_FIELD);
              uVar6 = create_json_obj();
              add_json_named_object(uVar6,"teleprompter_info",enabled);
              enabled = FUN_00085014(uVar6);
              uVar7 = FUN_0000ef12();
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): cmd_type:%s, value=%s, tx_len=%d, jstr_len=%d, jsonstr=%s\n\n",
                              "spec_ble_command_hook",&cmd_type,&value,0,uVar7,enabled);
                }
                else {
                  handle_heartbeat("%s(): cmd_type:%s, value=%s, tx_len=%d, jstr_len=%d, jsonstr=%s\n\n"
                                   ,"spec_ble_command_hook",&cmd_type,&value,0);
                }
              }
              uVar10 = 9;
              goto LAB_0000f3f4;
            }
          }
          if (sec == 0xa) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): simulator->BLE_REQ_PUT_NAVIGATION_INFO.\n\n",
                            "spec_ble_command_hook");
              }
              else {
                handle_heartbeat();
              }
            }
            enabled = create_json_obj();
            add_json_field_simple(0,enabled,"enable");
            add_json_field_simple(0,enabled,"direction");
            add_json_field_complex(enabled,"info",&NAVIGATION_INFO_FIELD);
            uVar6 = create_json_obj();
            add_json_named_object(uVar6,"navigation_info",enabled);
            enabled = FUN_00085014(uVar6);
            uVar7 = FUN_0000ef12();
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): cmd_type:%s, value=%s, tx_len=%d, jstr_len=%d, jsonstr=%s\n\n",
                            "spec_ble_command_hook",&cmd_type,&value,0,uVar7,enabled);
              }
              else {
                handle_heartbeat("%s(): cmd_type:%s, value=%s, tx_len=%d, jstr_len=%d, jsonstr=%s\n\n"
                                 ,"spec_ble_command_hook",&cmd_type,&value,0);
              }
            }
            uVar10 = 10;
LAB_0000f3f4:
            subcontracing_send_data_pkcs7(enabled,uVar7,uVar10,(undefined *)0x7c245);
            FUN_00064b1c(uVar6);
            return 0;
          }
          if (sec == 0x58) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(&DEBUG_MSG_CALENDAR_TRIGGER,"spec_ble_command_hook");
              }
              else {
                handle_heartbeat();
              }
            }
            simulator_ancs_calendar_schedule_trigger();
            return 0;
          }
          if (sec == 0x4b) {
            pcVar13 = pcVar13 + 1;
            pos = pcVar13;
            do {
              pcVar9 = pos;
              pos = pcVar9 + 1;
            } while (*pcVar9 != '\0');
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): 22 len=%d\n","spec_ble_command_hook",(int)pcVar9 - (int)pcVar13);
              }
              else {
                handle_heartbeat();
              }
            }
            validate_memory_bounds(&value,pcVar13,(int)pcVar9 - (int)pcVar13,0x80);
            pos = (char *)&value;
            do {
              pcVar9 = pos;
              pos = pcVar9 + 1;
            } while (*pcVar9 != '#');
            FUN_00087080(&local_5c0,&value,(int)pcVar9 - (int)&value,0x20);
            FUN_00086ffe(&jstr_len,pcVar9 + 1,0x80);
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): #cmd_type:%s, title=%s, msg=%s\n\n","spec_ble_command_hook",
                            &cmd_type,&local_5c0,&jstr_len);
              }
              else {
                handle_heartbeat("%s(): #cmd_type:%s, title=%s, msg=%s\n\n","spec_ble_command_hook",
                                 &cmd_type,&local_5c0,&jstr_len);
              }
            }
            piVar4 = &local_5c0;
LAB_0000effe:
            enabled = ncs_notification(piVar4,&jstr_len,(undefined *)0x7c245);
            return enabled;
          }
          local_520 = (undefined1)sec;
          uStack_51f = FUN_00086a06(&value);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): **cmd_type:%s, value=%s, tx_len=%d\n\n","spec_ble_command_hook",
                          &cmd_type,&value,2);
            }
            else {
              handle_heartbeat("%s(): **cmd_type:%s, value=%s, tx_len=%d\n\n",
                               "spec_ble_command_hook",&cmd_type);
            }
          }
          enabled = 2;
          goto LAB_0000ef7e;
        }
        local_5c0 = compare_string_offsets(&local_520,&CMD_AUDIO_DATA_TEST,2);
        if (local_5c0 == 0) {
          DEBUG_PRINT("\n*****test callback audio data*****\n");
          fill_memory_buffer(auStack_5bc,0,0x10);
          local_5c0 = CONCAT31(local_5c0._1_3_,0x6e);
          do {
            uVar15 = (**(code **)(sec + 0xc))(&local_5c0,0x14);
            if ((int)uVar15 == 0) {
              FUN_00072908(sec + 0x230,(int)((ulonglong)uVar15 >> 0x20),0xffffffff,0xffffffff);
              DEBUG_PRINT("\n*****start upload audio*****\n");
              pos = (char *)&jstr_len;
              jstr_len = (int)uVar15;
              fill_memory_buffer(&local_41c,0,0x3fc);
              iVar3 = 0;
              pcVar9 = pos;
              do {
                bVar1 = (byte)iVar3;
                iVar3 = iVar3 + 1;
                *pcVar9 = (bVar1 & 0xf) + 0x30;
                pcVar9 = pcVar9 + 1;
              } while (iVar3 != 0x400);
              iVar5 = get_current_time_ms();
              uVar14 = 0;
              iVar3 = 0;
              do {
                value._0_3_ = CONCAT12((char)iVar3,0xaf1);
                memcpy((int)&value + 3,pos,0x68);
                while (iVar8 = (**(code **)(sec + 0xc))(&value,0x6b), iVar8 != 0) {
                  uVar14 = uVar14 + 1 & 0xffff;
                  get_schedule_timing(0x148,0);
                  if ((*(char *)(sec + 0x365) == '\0') || (*(char *)(sec + 0x366) == '\0')) {
                    if (LOG_LEVEL < 1) {
                      return 0;
                    }
                    pos = 
                    "%s(): unable to audio transfer, due to no connected or notification disabled\n"
                    ;
                    goto LAB_0000f660;
                  }
                }
                iVar3 = iVar3 + 1;
                pos = pos + 0x68;
                if (iVar3 == 9) {
                  sec = get_current_time_ms();
                  DEBUG_PRINT("t0 = %d error count = %d \n",sec - iVar5,uVar14);
                  return 0;
                }
              } while( true );
            }
            get_schedule_timing(0x148,0);
          } while ((*(char *)(sec + 0x365) != '\0') && (*(char *)(sec + 0x366) != '\0'));
          if (LOG_LEVEL < 1) {
            return 0;
          }
          pos = 
          "%s(): unable to change MTU for audio transfer, due to no connected or notification disabled\n"
          ;
LAB_0000f660:
          if (IS_DEBUG != 0) {
            handle_heartbeat();
            return 0;
          }
          DEBUG_PRINT(pos,"spec_ble_command_hook");
          return 0;
        }
        iVar3 = compare_string_offsets(&local_520,&CMD_ESB_CHANNEL_SET,2);
        if (iVar3 == 0) {
          bVar1 = FUN_00086a06(&cStack_51e);
          *(byte *)(sec + -0x77a) = bVar1;
          DEBUG_PRINT("\n*****test set esb channel***** %d\n",(uint)bVar1);
LAB_0000f6c2:
          *(undefined4 *)(sec + 0x8d0) = 0;
        }
        else {
          iVar3 = compare_string_offsets(&local_520,&CMD_POWER_MODE_CONTROL,2);
          if (iVar3 != 0) {
            iVar3 = compare_string_offsets(&local_520,&CMD_SYSTEM_REBOO,2);
            if (iVar3 == 0) {
              if (cStack_51e != '0') {
                bVar1 = *(byte *)(sec + 0x8dd) | 4;
                goto LAB_0000f750;
              }
              enable_dmic_stream();
            }
            else {
              iVar3 = compare_string_offsets(&local_520,&CMD_POWER_MODE_CHECK,2);
              if (iVar3 != 0) {
                jstr_len = compare_string_offsets(&local_520,&CMD_STATS_REPORT,2);
                if (jstr_len == 0) {
                  fill_memory_buffer(&local_41c,0,0xc4);
                  pos = "TX:%d,fail:%d,RX:%d,Signal:%d";
                  uVar14 = BATTERY_SIGNAL_STRENGTH;
                  iVar3 = BATTERY_RX_COUNT;
                  iVar5 = BATTERY_FAIL_COUNT;
                  uVar12 = BATTERY_VOLTAGE_LEVEL;
LAB_0000f7ec:
                  FUN_00086f00(&jstr_len,0,200,pos,uVar14,iVar3,iVar5,uVar12);
LAB_0000f9d4:
                  enabled = 200;
                  pcVar11 = *(code **)(sec + 0xc);
                  goto LAB_0000f9d8;
                }
                iVar3 = compare_string_offsets(&local_520,&CMD_SYSTEM_REBOOT,2);
                if (iVar3 == 0) {
                  if (0 < LOG_LEVEL) {
                    pos = "%s(): sys reboot because reboot cmd\n";
                    if (IS_DEBUG == 0) goto LAB_0000f82a;
                    handle_heartbeat("%s(): sys reboot because reboot cmd\n","spec_ble_command_hook"
                                    );
                  }
                  do {
                    get_schedule_timing(0x4000,0);
                    pos = (char *)FUN_0004c0a8(1);
LAB_0000f82a:
                    DEBUG_PRINT(pos);
                  } while( true );
                }
                iVar3 = compare_string_offsets(&local_520,&CMD_DEBUG_MODE_TOGGLE,2);
                if (iVar3 == 0) {
                  sec = FUN_00086a06(&cStack_51e);
                  IS_DEBUG = (uint)(sec != 1);
                  return 0;
                }
                jstr_len = compare_string_offsets(&local_520,&CMD_BASE_VALUE_SET,2);
                if (jstr_len == 0) {
                  fill_memory_buffer(&local_41c,0,0x10);
                  uVar14 = ATTITUDE_PITCH_VALUE;
                  *(uint *)(sec + 0x7e8) = ATTITUDE_PITCH_VALUE;
                  pos = "base: %d";
LAB_0000f87e:
                  FUN_00086f00(&jstr_len,0,0x14,pos,uVar14);
                  (**(code **)(sec + 0xc))(&jstr_len,0x14);
                  goto LAB_0000f6c2;
                }
                jstr_len = compare_string_offsets(&local_520,&CMD_LIGHT_SENSOR_READ,2);
                if (jstr_len == 0) {
                  fill_memory_buffer(&local_41c,0,0x10);
                  iVar3 = opt3007_get_max_lux();
                  if (cStack_51e != '\0') {
                    uVar14 = FUN_00086a06(&cStack_51e);
                    if (uVar14 < 2) {
                      uVar2 = FUN_00086a06(&cStack_51e);
                      *(undefined1 *)(sec + 0x81c) = uVar2;
                    }
                    else {
                      *(undefined1 *)(sec + 0x81c) = 0;
                      uVar2 = FUN_00086a06(&cStack_51e);
                      *(undefined1 *)(sec + 0x759) = uVar2;
                    }
                  }
                  if (iVar3 == -1) {
                    iVar3 = 80000;
                  }
                  FUN_00086f00(&jstr_len,0,0x14,"base: %d",iVar3);
                  (**(code **)(sec + 0xc))(&jstr_len,0x14);
                  goto LAB_0000f70c;
                }
                jstr_len = compare_string_offsets(&local_520,&CMD_LEVEL_DISPLAY,2);
                if (jstr_len == 0) {
                  fill_memory_buffer(&local_41c,0,0x10);
                  pos = "level: %d";
                  uVar14 = (uint)*(byte *)(sec + 0x759);
LAB_0000f932:
                  FUN_00086f00(&jstr_len,0,0x14,pos,uVar14);
                }
                else {
                  jstr_len = compare_string_offsets(&local_520,&CMD_LEVEL_SET,2);
                  if (jstr_len == 0) {
                    fill_memory_buffer(&local_41c,0,0x10);
                    bVar1 = FUN_00086a06(&cStack_51e);
                    *(byte *)(sec + 0x778) = bVar1;
                    uVar14 = (uint)bVar1;
                    pos = "level: %d";
                    goto LAB_0000f87e;
                  }
                  iVar3 = compare_string_offsets(&local_520,&CMD_PITCH_DISPLAY,2);
                  if (iVar3 == 0) {
                    jstr_len = 0;
                    fill_memory_buffer(&local_41c,0,0x10);
                    pos = "pitch: %d";
                    uVar14 = ATTITUDE_PITCH_VALUE;
                    goto LAB_0000f932;
                  }
                  jstr_len = compare_string_offsets(&local_520,&CMD_VERSION_INFO,2);
                  if (jstr_len == 0) {
                    fill_memory_buffer(&local_41c,0,0xc4);
                    FUN_00086f00(&jstr_len,0,200,
                                 "net build time: %s, app build time %s, ver %d.%d.%d, JBD DeviceID %x\n\r"
                                 ,&BUILD_DATE_STRING,"2024-12-28 20:20:45",1,4,5,JBD_SPI_ID);
                    goto LAB_0000f9d4;
                  }
                  jstr_len = compare_string_offsets(&local_520,&CMD_BATTERY_STATUS,2);
                  if (jstr_len == 0) {
                    fill_memory_buffer(&local_41c,0,0xc4);
                    uVar12 = (uint)*(byte *)(sec + 0x84a);
                    iVar5 = *(byte *)(sec + 0x849) - 0x80;
                    iVar3 = *(byte *)(sec + 0x848) + 200;
                    uVar14 = (uint)*(byte *)(sec + 0x844);
                    pos = "B:%d, V:%d, A:%d, T:%d";
                    goto LAB_0000f7ec;
                  }
                  jstr_len = compare_string_offsets(&local_520,&CMD_VADC_TIMER_READ,2);
                  if (jstr_len == 0) {
                    fill_memory_buffer(&local_41c,0,0x3c);
                    enabled = FUN_00025448();
                    FUN_00086f00(&jstr_len,0,0x40,"VADC:%d TMR:%d",enabled,0);
LAB_0000fa4a:
                    enabled = 0x40;
                    pcVar11 = *(code **)(sec + 0xc);
                    goto LAB_0000f9d8;
                  }
                  jstr_len = compare_string_offsets(&local_520,&CMD_FLASH_CONTROL,2);
                  if (jstr_len == 0) {
                    fill_memory_buffer(&local_41c,0,0x10);
                    iVar3 = FUN_00086a06(&cStack_51e);
                    if (iVar3 == 1) {
                      (**(code **)(sec + 0x394))();
                      (**(code **)(sec + 0x3b8))(sec + 0x3b4);
                      pos = "init flash";
                    }
                    else {
                      (**(code **)(sec + 0x394))(sec + 0x394);
                      (**(code **)(sec + 0x3b8))(sec + 0x3b4);
                      pos = "deinit flash";
                    }
                    strcpy_safe(&jstr_len,pos);
                  }
                  else {
                    jstr_len = compare_string_offsets(&local_520,&CMD_MAC_ADDRESS_MANAGE,2);
                    if (jstr_len != 0) {
                      jstr_len = compare_string_offsets(&local_520,&CMD_WORK_MODE_CHANGE,2);
                      if (jstr_len != 0) {
                        return 0xffffffff;
                      }
                      fill_memory_buffer(&local_41c,0,0x3c);
                      iVar3 = FUN_00086a06(&cStack_51e);
                      if (iVar3 == 1) {
                        enabled = 0x19;
                      }
                      else {
                        if (iVar3 != 2) {
                          FUN_00086f00(&jstr_len,0,0x40,
                                       "master mac: %02X:%02X:%02X:%02X:%02X:%02X, slave mac: %02X:%02X:%02X:%02X:%02X:%02X"
                                       ,*(undefined1 *)(sec + 0x85e),*(undefined1 *)(sec + 0x85f),
                                       *(undefined1 *)(sec + 0x860),*(undefined1 *)(sec + 0x861),
                                       *(undefined1 *)(sec + 0x862),*(undefined1 *)(sec + 0x863),
                                       *(undefined1 *)(sec + 0x864),*(undefined1 *)(sec + 0x865),
                                       *(undefined1 *)(sec + 0x866),*(undefined1 *)(sec + 0x867),
                                       *(undefined1 *)(sec + 0x868),*(undefined1 *)(sec + 0x869));
                          goto LAB_0000fa4a;
                        }
                        *(undefined4 *)(sec + 0x85e) = 0xffffffff;
                        *(undefined2 *)(sec + 0x862) = 0xffff;
                        *(undefined4 *)(sec + 0x864) = 0xffffffff;
                        *(undefined2 *)(sec + 0x868) = 0xffff;
                        enabled = 0x1a;
                      }
                      *(undefined4 *)(sec + 0x8d0) = enabled;
                      z_spin_lock_valid(sec + -0x6fc);
                      goto LAB_0000fa4a;
                    }
                    fill_memory_buffer(&local_41c,0,0x10);
                    if (cStack_51e == '\0') {
                      enabled = 7;
                    }
                    else {
                      enabled = FUN_00086a06(&cStack_51e);
                    }
                    change_work_mode_to(enabled);
                  }
                }
                enabled = 0x14;
                pcVar11 = *(code **)(sec + 0xc);
LAB_0000f9d8:
                (*pcVar11)(&jstr_len,enabled);
                return 0;
              }
              bVar1 = *(byte *)(sec + 0x8dd) | 8;
LAB_0000f750:
              *(byte *)(sec + 0x8dd) = bVar1;
            }
            iVar3 = -0x714;
            goto LAB_0000f742;
          }
          bVar1 = FUN_00086a06(&cStack_51e);
          *(byte *)(sec + 0x86e) = bVar1;
          DEBUG_PRINT("\n*****display mode***** %d\n",(uint)bVar1);
          if (*(char *)(sec + 0x86e) == '\v') {
            *(undefined1 *)(sec + 0x768) = 2;
            change_work_mode_to();
            if (*(char *)(sec + -0x77c) == '\x02') {
              z_spin_lock_valid(sec + -0x75c);
            }
          }
          else {
            *(undefined1 *)(sec + 0x768) = 1;
            change_work_mode_to(3);
          }
LAB_0000f70c:
          *(undefined4 *)(sec + 0x8d0) = 0;
        }
        iVar3 = -0x6fc;
LAB_0000f742:
        z_spin_lock_valid(sec + iVar3);
        return 0;
      }
      iVar3 = iVar3 + 3;
      sec = FUN_00086a06(iVar3);
      if (2 < sec) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): pos:%s, new log_level_set=%d\n\n","spec_ble_command_hook",iVar3,sec);
        }
        else {
          handle_heartbeat("%s(): pos:%s, new log_level_set=%d\n\n","spec_ble_command_hook",iVar3,
                           sec);
        }
      }
      uStack_51f = 2;
      cStack_51e = (char)sec;
    }
    else {
      iVar3 = iVar3 + 3;
      enabled = FUN_00086a06(iVar3);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): pos:%s, new screen_id=%d\n\n","spec_ble_command_hook",iVar3,enabled);
        }
        else {
          handle_heartbeat("%s(): pos:%s, new screen_id=%d\n\n","spec_ble_command_hook",iVar3,
                           enabled);
        }
      }
      uStack_51f = 3;
      cStack_51e = (char)enabled;
    }
  }
  else {
    iVar3 = iVar3 + 3;
    sec = FUN_00086a06(iVar3);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&DEBUG_MSG_LOG_LEVEL_CMD,"spec_ble_command_hook",iVar3,sec);
      }
      else {
        handle_heartbeat(&DEBUG_MSG_LOG_LEVEL_CMD,"spec_ble_command_hook",iVar3,sec);
      }
    }
    if (sec != 0) {
      sec = 1;
    }
    uStack_51f = 1;
    cStack_51e = (char)sec;
  }
  local_520 = 5;
  enabled = 3;
LAB_0000ef7e:
  process_ble_post_request(&local_520,enabled);
  return 0;
}


