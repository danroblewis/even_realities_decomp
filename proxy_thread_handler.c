/*
 * Function: proxy_thread_handler
 * Entry:    00047c48
 * Prototype: undefined proxy_thread_handler()
 */


/* WARNING: Removing unreachable block (ram,0x000487fa) */

void proxy_thread_handler(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *format_string;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  undefined *puVar8;
  ushort uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  char cVar12;
  undefined1 local_4c;
  char local_4b;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [2];
  ushort local_3e;
  char local_3c;
  char local_3b;
  
  fill_memory_buffer(local_40,0,0x18);
  if (LOG_LEVEL < 3) goto LAB_00047c76;
  pcVar1 = "%s(): running proxy thread... \n";
LAB_00047c6a:
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar1,"proxy_thread_handler");
  }
  else {
    handle_heartbeat();
  }
LAB_00047c76:
  do {
    if ((*(char *)(param_1 + 1) != '\x01') && (*(char *)(param_1 + 1) != '\b')) {
      if (-1 < (int)((uint)*(ushort *)(param_1 + 0x105c) << 0x18)) {
        uVar2 = 0x8000;
        goto LAB_00047c86;
      }
      fill_memory_buffer(local_40,0,0x18);
      iVar3 = manage_ble_connection_state_comprehensive
                        (&MESSAGE_QUEUE_CONTEXT,local_40,0xffffffff,0xffffffff);
      cVar12 = local_3c;
      if (iVar3 == 0) {
        switch(local_40[0]) {
        case 0:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): store app response data to cache\n","proxy_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          fill_memory_buffer(&DAT_2001d432,0,0x14);
          uVar9 = local_3e;
          if (0x13 < local_3e) {
            uVar9 = 0x14;
          }
          memcpy(&DAT_2001d432,&local_3c,uVar9);
          PROXY_THREAD_HANDLER_READ_WRITE_DATA = '\x01';
          PROXY_THREAD_HANDLER_DATA = uVar9;
          goto LAB_00047c76;
        case 1:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): received send response data to app command\n",
                          "proxy_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          if (PROXY_THREAD_HANDLER_READ_WRITE_DATA != '\0') {
            iVar3 = (**(code **)(param_1 + 0x788))(&DAT_2001d432,PROXY_THREAD_HANDLER_DATA);
            if ((iVar3 < 0) && (1 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Failed to send data over BLE connection: ret = %d \n",
                            "proxy_thread_handler");
              }
              else {
                handle_heartbeat();
              }
            }
            local_48 = 0;
            local_44 = 0;
            calculate_elapsed_time(&local_48);
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): success send cache data to app ,diff_time = %lld\n",
                            "proxy_thread_handler",local_48,local_44);
              }
              else {
                handle_heartbeat("%s(): success send cache data to app ,diff_time = %lld\n",
                                 "proxy_thread_handler");
              }
            }
            PROXY_THREAD_HANDLER_READ_WRITE_DATA = '\0';
            PROXY_THREAD_HANDLER_DATA = 0;
          }
          goto LAB_00047c76;
        case 2:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): running proxy thread,send audio stream data to app \n",
                          "proxy_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          if (local_3c == '\0') {
            PROXY_THREAD_DATA_PROCESSING_STATE = local_3b - 1;
            iVar3 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
            if (iVar3 == 0) goto LAB_00047de2;
            fill_memory_buffer(&PROXY_THREAD_BUFFER_2,0,0xe6);
            iVar3 = get_work_mode();
            pcVar10 = *(code **)(iVar3 + 0x1030);
            uVar2 = get_work_mode();
            iVar3 = (*pcVar10)(uVar2,0x400000,&PROXY_THREAD_BUFFER_2,0xe6);
            if (iVar3 == 0) {
              if ((PROXY_THREAD_BUFFER_2 == 0x5aa5aa5a) &&
                 ((&DAT_2001d353)[(uint)PROXY_THREAD_DATA_PROCESSING_STATE * 5] == 2)) {
                PROXY_THREAD_HANDLER_DATA_BUFFER =
                     (&DAT_2001d357)[(uint)PROXY_THREAD_DATA_PROCESSING_STATE * 5];
                PROXY_THREAD_HANDLER_STATE_AND_DATA =
                     (&DAT_2001d35b)[(uint)PROXY_THREAD_DATA_PROCESSING_STATE * 5];
              }
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): read voice manager block data,start send voice data to app\n",
                              "proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              fill_memory_buffer(&PROXY_THREAD_BUFFER_2,0,0xe6);
              iVar3 = get_work_mode();
              pcVar10 = *(code **)(iVar3 + 0x1030);
              uVar2 = get_work_mode();
              iVar3 = (*pcVar10)(uVar2,PROXY_THREAD_HANDLER_DATA_BUFFER,&PROXY_THREAD_BUFFER_2,0xbe)
              ;
              if (iVar3 == 0) {
                PROXY_THREAD_HANDLER_COMMUNICATION_STATE =
                     (PROXY_THREAD_HANDLER_STATE_AND_DATA - PROXY_THREAD_HANDLER_DATA_BUFFER) / 0xbe
                ;
                if (PROXY_THREAD_HANDLER_STATE_AND_DATA - PROXY_THREAD_HANDLER_DATA_BUFFER !=
                    ((PROXY_THREAD_HANDLER_STATE_AND_DATA - PROXY_THREAD_HANDLER_DATA_BUFFER) / 0xbe
                    ) * 0xbe) {
                  PROXY_THREAD_HANDLER_COMMUNICATION_STATE =
                       PROXY_THREAD_HANDLER_COMMUNICATION_STATE + 1;
                }
                PROXY_THREAD_HANDLER_STATE_EXTENDED =
                     PROXY_THREAD_HANDLER_STATE_AND_DATA - PROXY_THREAD_HANDLER_DATA_BUFFER;
                PROXY_THREAD_BUFFER_1 = '\0';
                PROXY_THREAD_HANDLER_STATE = 0;
                PROXY_THREAD_STATE_BUFFER = 0;
                fill_memory_buffer(&PROXY_THREAD_DATA_BUFFER,0,0xe6);
                PROXY_THREAD_DATA_BUFFER = 0x1e;
                DAT_2001d266 = 0;
                DAT_2001d267 = PROXY_THREAD_BUFFER_1;
                PROXY_THREAD_BUFFER_1 = PROXY_THREAD_BUFFER_1 + '\x01';
                DAT_2001d268 = 2;
                iVar3 = 3;
                PROXY_THREAD_HANDLER_STATE_1 = (char)PROXY_THREAD_HANDLER_COMMUNICATION_STATE;
                PROXY_THREAD_HANDLER_STATE_2 =
                     (undefined1)((uint)PROXY_THREAD_HANDLER_COMMUNICATION_STATE >> 8);
                PROXY_THREAD_HANDLER_STATE = PROXY_THREAD_HANDLER_STATE + 1;
                DAT_2001d26b = (undefined1)PROXY_THREAD_HANDLER_STATE;
                DAT_2001d26c = (undefined1)((uint)PROXY_THREAD_HANDLER_STATE >> 8);
                DAT_2001d26d = PROXY_THREAD_DATA_PROCESSING_STATE + 1;
                if (PROXY_THREAD_HANDLER_STATE_EXTENDED - PROXY_THREAD_STATE_BUFFER < 0xbe) {
                  iVar5 = PROXY_THREAD_HANDLER_STATE_EXTENDED - PROXY_THREAD_STATE_BUFFER;
                }
                else {
                  iVar5 = 0xbe;
                }
                validate_memory_bounds(&DAT_2001d26e,&PROXY_THREAD_BUFFER_2,iVar5,0xdc);
                PROXY_THREAD_COMMUNICATION_STATE = (char)iVar5 + 10;
                while (iVar7 = (**(code **)(param_1 + 0x788))
                                         (&PROXY_THREAD_DATA_BUFFER,PROXY_THREAD_COMMUNICATION_STATE
                                         ), iVar7 < 0) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): Failed to send data over BLE connection: ret = %d \n",
                                  "proxy_thread_handler");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  iVar3 = iVar3 + -1;
                  if (iVar3 == 0) {
                    if (LOG_LEVEL < 2) goto LAB_00047c76;
                    pcVar1 = 
                    "%s(): send audio stream more than retry count,break audio send process....\n";
                    goto LAB_00047c6a;
                  }
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): retry send audio data first packet\n",
                                  "proxy_thread_handler");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                DAT_2001d262 = '\x01';
                PROXY_THREAD_STATE_BUFFER = PROXY_THREAD_STATE_BUFFER + iVar5;
                exchange_sensor_data_value(PROXY_THREAD_DATA_PROCESSING_STATE);
                goto LAB_00048054;
              }
            }
LAB_00047e22:
            if (0 < LOG_LEVEL) {
              pcVar1 = (char *)0x400000;
              format_string = "%s():  form address [%d] read data failed.\n\n";
              goto LAB_00047e36;
            }
            goto LAB_00047c76;
          }
          if (local_3c != '\x01') goto LAB_00047c76;
          if (DAT_2001d262 == '\0') {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): error packet order,can\'t send any audio data to app\n",
                            "proxy_thread_handler");
              }
              else {
                handle_heartbeat();
              }
            }
LAB_00048082:
            get_and_reset_sensor_data_value();
            goto LAB_00047c76;
          }
          if (PROXY_THREAD_STATE_BUFFER < PROXY_THREAD_HANDLER_STATE_EXTENDED) {
            fill_memory_buffer(&PROXY_THREAD_DATA_BUFFER,0,0xe6);
            if (PROXY_THREAD_HANDLER_STATE_EXTENDED - PROXY_THREAD_STATE_BUFFER < 0xbe) {
              iVar3 = 0;
              if (PROXY_THREAD_HANDLER_STATE_EXTENDED - PROXY_THREAD_STATE_BUFFER < 0xbe) {
                iVar3 = PROXY_THREAD_HANDLER_STATE_EXTENDED - PROXY_THREAD_STATE_BUFFER;
              }
            }
            else {
              iVar3 = 0xbe;
            }
            PROXY_THREAD_DATA_BUFFER = 0x1e;
            PROXY_THREAD_COMMUNICATION_STATE = (char)iVar3 + 10;
            DAT_2001d266 = 0;
            DAT_2001d267 = PROXY_THREAD_BUFFER_1;
            PROXY_THREAD_BUFFER_1 = PROXY_THREAD_BUFFER_1 + '\x01';
            DAT_2001d268 = 2;
            PROXY_THREAD_HANDLER_STATE_1 = (char)PROXY_THREAD_HANDLER_COMMUNICATION_STATE;
            PROXY_THREAD_HANDLER_STATE_2 =
                 (undefined1)((uint)PROXY_THREAD_HANDLER_COMMUNICATION_STATE >> 8);
            PROXY_THREAD_HANDLER_STATE = PROXY_THREAD_HANDLER_STATE + 1;
            DAT_2001d26b = (undefined1)PROXY_THREAD_HANDLER_STATE;
            DAT_2001d26c = (undefined1)((uint)PROXY_THREAD_HANDLER_STATE >> 8);
            DAT_2001d26d = PROXY_THREAD_DATA_PROCESSING_STATE + 1;
            fill_memory_buffer(&PROXY_THREAD_BUFFER_2,0,0xe6);
            iVar5 = get_work_mode();
            pcVar10 = *(code **)(iVar5 + 0x1030);
            uVar2 = get_work_mode();
            iVar5 = (*pcVar10)(uVar2,PROXY_THREAD_STATE_BUFFER + PROXY_THREAD_HANDLER_DATA_BUFFER,
                               &PROXY_THREAD_BUFFER_2,iVar3);
            if (iVar5 != 0) {
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s():  form address [%d] read data failed.\n\n",
                              "proxy_thread_handler",0x400000);
                }
                else {
                  handle_heartbeat();
                }
              }
LAB_0004820e:
              DAT_2001d262 = '\0';
              goto LAB_00048082;
            }
            validate_memory_bounds(&DAT_2001d26e,&PROXY_THREAD_BUFFER_2,iVar3,0xdc);
            iVar5 = 3;
            while (iVar7 = (**(code **)(param_1 + 0x788))
                                     (&PROXY_THREAD_DATA_BUFFER,PROXY_THREAD_COMMUNICATION_STATE),
                  iVar7 < 0) {
              if (1 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): Failed to send data over BLE connection: ret = %d \n",
                              "proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar5 = iVar5 + -1;
              if (iVar5 == 0) {
                if (1 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): send audio stream more than retry count,break audio send process....\n"
                                ,"proxy_thread_handler");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                goto LAB_0004820e;
              }
              if (1 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): retry send audio data\n","proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            PROXY_THREAD_STATE_BUFFER = PROXY_THREAD_STATE_BUFFER + iVar3;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): send %d byte data to app,total send data length = %d\n",
                            "proxy_thread_handler",iVar3,PROXY_THREAD_STATE_BUFFER);
              }
              else {
                handle_heartbeat("%s(): send %d byte data to app,total send data length = %d\n",
                                 "proxy_thread_handler",iVar3,PROXY_THREAD_STATE_BUFFER);
              }
            }
LAB_00048054:
            send_audio_stream_file_to_app(1,0);
            goto LAB_00047c76;
          }
          DAT_2001d262 = '\0';
          PROXY_THREAD_HANDLER_COMMUNICATION_STATE = 0;
          PROXY_THREAD_HANDLER_STATE_EXTENDED = 0;
          PROXY_THREAD_STATE_BUFFER = 0;
          PROXY_THREAD_BUFFER_1 = '\0';
          PROXY_THREAD_HANDLER_STATE = 0;
          PROXY_THREAD_HANDLER_STATE_AND_DATA = 0;
          PROXY_THREAD_HANDLER_DATA_BUFFER = 0;
          get_and_reset_sensor_data_value();
          if (LOG_LEVEL < 1) goto LAB_00047c76;
          if (IS_DEBUG == 0) {
            iVar3 = get_work_mode();
            pcVar1 = (char *)**(int **)(iVar3 + 0xfec);
            format_string = "%s(): app request over size data ,break,last packet timestamp = %d\n";
            goto LAB_000480f4;
          }
          iVar3 = get_work_mode();
          pcVar1 = (char *)**(int **)(iVar3 + 0xfec);
          format_string = "%s(): app request over size data ,break,last packet timestamp = %d\n";
          break;
        case 3:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): running proxy thread,send audio infomation data to app \n",
                          "proxy_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
          if (iVar3 == 0) {
LAB_00047de2:
            if (LOG_LEVEL < 1) goto LAB_00047c76;
            pcVar1 = "mx25r6435f@0";
            format_string = "%s():  [%s] device not ready.\n\n";
          }
          else {
            fill_memory_buffer(&PROXY_THREAD_BUFFER_2,0,0xe6);
            iVar3 = get_work_mode();
            pcVar10 = *(code **)(iVar3 + 0x1030);
            uVar2 = get_work_mode();
            iVar3 = (*pcVar10)(uVar2,0x400000,&PROXY_THREAD_BUFFER_2,0xe6);
            if (iVar3 != 0) goto LAB_00047e22;
            puVar4 = (undefined1 *)fill_memory_buffer(&PROXY_THREAD_DATA_BUFFER,0,0xe6);
            if (local_3c == '\0') {
              uVar6 = 0x1e;
            }
            else {
              uVar6 = 0x21;
            }
            *puVar4 = uVar6;
            puVar4[2] = 0;
            cVar12 = '\0';
            puVar4[3] = PROXY_THREAD_BUFFER_1;
            PROXY_THREAD_BUFFER_1 = PROXY_THREAD_BUFFER_1 + '\x01';
            puVar4[4] = 1;
            iVar3 = 0;
            puVar4 = &PROXY_THREAD_HANDLER_STATE_2;
            do {
              iVar5 = iVar3 + 1;
              if (2 < LOG_LEVEL) {
                iVar7 = (&DAT_2001d357)[iVar3 * 5];
                if (IS_DEBUG == 0) {
                  puVar8 = &UNK_000ef077;
                  if ((&DAT_2001d353)[iVar3 * 5] != 2) {
                    puVar8 = &UNK_000ef07c;
                  }
                  DEBUG_PRINT("%s(): voice %d %s, timestamp = %d,crc32 = 0x%x start addr = %d,end addr = %d,total audio stream size = %d\n"
                              ,"proxy_thread_handler",iVar5,puVar8,
                              (&PROXY_THREAD_HANDLER_READ_DATA_1)[iVar3 * 5],
                              (&PROXY_THREAD_HANDLER_READ_DATA_2)[iVar3 * 5],iVar7,
                              (&DAT_2001d35b)[iVar3 * 5],(&DAT_2001d35b)[iVar3 * 5] - iVar7);
                }
                else {
                  puVar8 = &UNK_000ef077;
                  if ((&DAT_2001d353)[iVar3 * 5] != 2) {
                    puVar8 = &UNK_000ef07c;
                  }
                  handle_heartbeat("%s(): voice %d %s, timestamp = %d,crc32 = 0x%x start addr = %d,end addr = %d,total audio stream size = %d\n"
                                   ,"proxy_thread_handler",iVar5,puVar8,
                                   (&PROXY_THREAD_HANDLER_READ_DATA_1)[iVar3 * 5],
                                   (&PROXY_THREAD_HANDLER_READ_DATA_2)[iVar3 * 5],iVar7,
                                   (&DAT_2001d35b)[iVar3 * 5],(&DAT_2001d35b)[iVar3 * 5] - iVar7);
                }
              }
              puVar11 = puVar4;
              if ((&DAT_2001d353)[iVar3 * 5] == 2) {
                *puVar4 = (char)iVar5;
                uVar2 = (&PROXY_THREAD_HANDLER_READ_DATA_1)[iVar3 * 5];
                cVar12 = cVar12 + '\x01';
                puVar4[1] = (char)uVar2;
                puVar4[2] = (char)((uint)uVar2 >> 8);
                puVar4[3] = (char)((uint)uVar2 >> 0x10);
                puVar4[4] = (char)((uint)uVar2 >> 0x18);
                uVar2 = (&PROXY_THREAD_HANDLER_READ_DATA_2)[iVar3 * 5];
                puVar11 = puVar4 + 9;
                puVar4[5] = (char)uVar2;
                puVar4[6] = (char)((uint)uVar2 >> 8);
                puVar4[7] = (char)((uint)uVar2 >> 0x10);
                puVar4[8] = (char)((uint)uVar2 >> 0x18);
              }
              iVar3 = iVar5;
              puVar4 = puVar11;
            } while (iVar5 != 4);
            PROXY_THREAD_COMMUNICATION_STATE = cVar12 * '\t' + 6;
            PROXY_THREAD_HANDLER_STATE_1 = cVar12;
            for (iVar3 = 0; iVar3 < (int)(uint)PROXY_THREAD_COMMUNICATION_STATE; iVar3 = iVar3 + 1)
            {
              if (3 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): audio_response_packet_buf[%d] = %d\n\n","proxy_thread_handler",
                              iVar3,(uint)(byte)(&PROXY_THREAD_DATA_BUFFER)[iVar3]);
                }
                else {
                  handle_heartbeat("%s(): audio_response_packet_buf[%d] = %d\n\n",
                                   "proxy_thread_handler",iVar3,(&PROXY_THREAD_DATA_BUFFER)[iVar3]);
                }
              }
            }
            pcVar1 = (char *)(**(code **)(param_1 + 0x788))
                                       (&PROXY_THREAD_DATA_BUFFER,PROXY_THREAD_COMMUNICATION_STATE);
            if ((-1 < (int)pcVar1) || (LOG_LEVEL < 2)) goto LAB_00047c76;
            format_string = "%s(): Failed to send data over BLE connection: ret = %d \n";
          }
LAB_00047e36:
          if (IS_DEBUG == 0) {
LAB_000480f4:
            DEBUG_PRINT(format_string,"proxy_thread_handler",pcVar1);
            goto LAB_00047c76;
          }
          break;
        case 4:
          iVar3 = 1;
          local_48._0_2_ = CONCAT11(local_3c,7);
          do {
            uVar2 = get_work_mode();
            iVar5 = sync_to_slave(uVar2,6,&local_48,2);
            if (iVar5 < 5000) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): SEND power event to slave success.\n","proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              display_powerEvent(cVar12);
              manage_ble_connection_priority_with_data_processing();
              break;
            }
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec quick note start function.\n"
                            ,"proxy_thread_handler",iVar3);
              }
              else {
                handle_heartbeat();
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 4);
          goto LAB_00047c76;
        case 5:
          iVar3 = 1;
          local_48._0_2_ = CONCAT11(local_3c,8);
          do {
            uVar2 = get_work_mode();
            iVar5 = sync_to_slave(uVar2,6,&local_48,2);
            if (iVar5 < 5000) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): Send app language upgrade msg to setting proxy task\n",
                              "proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              upgradeAppLanguageInfoToFlash(cVar12);
              break;
            }
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec quick note start function.\n"
                            ,"proxy_thread_handler",iVar3);
              }
              else {
                handle_heartbeat();
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 4);
          goto LAB_00047c76;
        case 6:
          iVar3 = 1;
          local_4c = 9;
          local_4b = local_3c;
          do {
            uVar2 = get_work_mode();
            iVar5 = sync_to_slave(uVar2,6,&local_4c,2);
            if (iVar5 < 5000) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): Send Dashboard startup  mode  msg to setting proxy task\n",
                              "proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              local_48 = CONCAT13(PROXY_THREAD_ID,0x608);
              local_44 = CONCAT31(CONCAT21(local_44._2_2_,cVar12),3);
              iVar3 = (**(code **)(param_1 + 0x788))(&local_48,6);
              if ((iVar3 < 0) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): Failed to send data over BLE connection: ret = %d \n",
                              "proxy_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              upgradeDashboardStartupModeInfoToFlash(cVar12);
              break;
            }
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec quick note start function.\n"
                            ,"proxy_thread_handler",iVar3);
              }
              else {
                handle_heartbeat();
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 4);
          goto LAB_00047c76;
        case 7:
          iVar3 = get_system_byte_2();
          if (((iVar3 == 1) && (iVar3 = get_work_mode(), *(char *)(iVar3 + 0xd5) == '\0')) &&
             (pcVar1 = (char *)get_work_mode(), *pcVar1 == '\x01')) {
            iVar3 = get_work_mode();
            *(undefined1 *)(iVar3 + 0xfe6) = 5;
            iVar3 = get_work_mode();
            iVar5 = get_work_mode();
            *(undefined1 *)(iVar5 + 0xcb) = *(undefined1 *)(iVar3 + 0xed5);
            uVar2 = get_work_mode();
            sync_to_slave(uVar2,2,0,0);
            change_work_mode_to(2);
            local_48 = CONCAT22(local_48._2_2_,0x10a);
            iVar3 = 1;
            do {
              uVar2 = get_work_mode();
              iVar5 = sync_to_slave(uVar2,6,&local_48,2);
              if (iVar5 < 5000) {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): SEND DELAY CLOSE TO SLAVE SUCCESS,master start delay close function\n"
                                ,"proxy_thread_handler");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                PROXY_THREAD_MUTEX = PROXY_THREAD_MUTEX | 2;
                break;
              }
              if (1 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec double click startup dashboard function.\n"
                              ,"proxy_thread_handler",iVar3);
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 4);
          }
          iVar3 = get_system_byte_2();
          if ((((iVar3 == 1) && (iVar3 = get_work_mode(), *(char *)(iVar3 + 0xd5) == '\x06')) ||
              ((iVar3 = get_system_byte_2(), iVar3 == 2 &&
               (iVar3 = get_work_mode(), *(char *)(iVar3 + 0xd5) == '\x06')))) &&
             (pcVar1 = (char *)get_work_mode(), *pcVar1 == '\x01')) {
            local_48 = CONCAT22(local_48._2_2_,0x10a);
            iVar3 = 1;
            do {
              uVar2 = get_work_mode();
              iVar5 = sync_to_slave(uVar2,6,&local_48,2);
              if (iVar5 < 5000) {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): SEND DELAY CLOSE TO SLAVE SUCCESS,master start delay close function\n"
                                ,"proxy_thread_handler");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                PROXY_THREAD_MUTEX = PROXY_THREAD_MUTEX | 2;
                break;
              }
              if (1 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): SYNC TO Slave failed % times,don\'t exec double click startup dashboard function.\n"
                              ,"proxy_thread_handler",iVar3);
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 4);
          }
          goto LAB_00047c76;
        default:
          goto switchD_00047ccc_caseD_8;
        }
        handle_heartbeat(format_string,"proxy_thread_handler",pcVar1);
      }
      goto LAB_00047c76;
    }
    uVar2 = 0x28000;
LAB_00047c86:
    calculate_ble_schedule_timing(uVar2,0);
  } while( true );
switchD_00047ccc_caseD_8:
  if (0 < LOG_LEVEL) goto code_r0x0004880a;
  goto LAB_00047c76;
code_r0x0004880a:
  pcVar1 = "%s(): received unkonwn command,drop it\n";
  goto LAB_00047c6a;
}


