/*
 * Function: audioStreamFileManagerHandler
 * Entry:    0002f94c
 * Prototype: undefined audioStreamFileManagerHandler()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 audioStreamFileManagerHandler(void)

{
  int iVar1;
  char *pcVar2;
  char *format_string;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined2 local_f8 [2];
  char local_f4 [2];
  short local_f2;
  byte local_f0 [204];
  
  if (DAT_20019dab == '\0') {
    if (AUDIO_STREAM_STATE == 0) {
      return 0;
    }
    iVar3 = getAudioMessageQueueCacheData(local_f4);
    if (iVar3 != 0) goto LAB_0002f976;
    if (local_f4[0] != '\x01') {
      if (local_f4[0] != '\x03') {
        if (local_f4[0] == '\x04') {
          delVoiceBlock(local_f0[0]);
          return 0;
        }
        if (local_f4[0] != '\x02') {
          return 0;
        }
      }
      process_sensor_data_buffer();
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): start audio stream record!\r\n\n","audioStreamFileManagerHandler");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar3 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar3 == 0) {
LAB_0002f9be:
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = "mx25r6435f@0";
      format_string = "%s():  [%s] device not ready.\n\n";
    }
    else {
      fill_memory_buffer(&DAT_20018daa,0,0x1000);
      iVar3 = get_work_mode();
      pcVar8 = *(code **)(iVar3 + 0x1030);
      uVar4 = get_work_mode();
      iVar3 = (*pcVar8)(uVar4,0x400000,&DAT_20018daa,0x1000);
      if (iVar3 == 0) {
        if (_DAT_20018daa == 0x5aa5aa5a) {
LAB_0002fac2:
          iVar3 = 0x7fffffff;
          uVar5 = 0;
          uVar7 = 0;
          do {
            if (*(int *)(&DAT_20018db2 + uVar7 * 0x14) == 0) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): find a free voice block(%d)!\r\n\n",
                              "audioStreamFileManagerHandler",uVar7);
                }
                else {
                  handle_heartbeat();
                }
              }
              uVar5 = uVar7 & 0xff;
              goto LAB_0002fb54;
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): voice_block_store_timestamp = %d, voice_stream_block_ts = %d\n",
                            "audioStreamFileManagerHandler",
                            *(undefined4 *)(&DAT_20018dbe + uVar7 * 0x14),iVar3);
              }
              else {
                handle_heartbeat("%s(): voice_block_store_timestamp = %d, voice_stream_block_ts = %d\n"
                                 ,"audioStreamFileManagerHandler",
                                 *(undefined4 *)(&DAT_20018dbe + uVar7 * 0x14),iVar3);
              }
            }
            if ((*(int *)(&DAT_20018dbe + uVar7 * 0x14) < iVar3) &&
               ((iVar6 = get_sensor_data_value(), iVar1 = extraout_r2, iVar6 == 0 ||
                (iVar6 = get_sensor_data_value(), iVar1 = extraout_r2_00, iVar6 - 1U != uVar7)))) {
              iVar3 = *(int *)(iVar1 + 4);
              uVar5 = uVar7 & 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 4);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): no free voice block,try to use the oldest voice block(%d)!\n",
                          "audioStreamFileManagerHandler",uVar5);
            }
            else {
              handle_heartbeat();
            }
          }
LAB_0002fb54:
          DAT_20019daa = (byte)uVar5;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): audio manager start check success,will fill up audio stream to Num%d block\n"
                          ,"audioStreamFileManagerHandler",uVar5);
            }
            else {
              handle_heartbeat();
            }
          }
          DAT_20007bb8 = (char *)0x0;
          DAT_20007bb4 = 0;
          fill_memory_buffer(&DAT_20018daa,0,0x1000);
          DAT_20007bbc = 0;
          DAT_20019dab = 1;
          return 0;
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): filesystem need format,try to format,please wait..\n",
                        "audioStreamFileManagerHandler");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer(&DAT_20018daa,0,0x1000);
        memcpy(&DAT_20018daa,&DAT_0008a050,0x58);
        iVar3 = get_work_mode();
        pcVar8 = *(code **)(iVar3 + 0x1038);
        uVar4 = get_work_mode();
        uVar9 = (*pcVar8)(uVar4,0x400000,0x1000);
        pcVar2 = (char *)uVar9;
        if (pcVar2 == (char *)0x0) {
          iVar3 = get_work_mode(0,(int)((ulonglong)uVar9 >> 0x20),0);
          pcVar8 = *(code **)(iVar3 + 0x1034);
          uVar4 = get_work_mode();
          pcVar2 = (char *)(*pcVar8)(uVar4,0x400000,&DAT_20018daa,0x1000);
          if (pcVar2 == (char *)0x0) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): filesystem format sucess\n","audioStreamFileManagerHandler",0);
              }
              else {
                handle_heartbeat();
              }
            }
            goto LAB_0002fac2;
          }
          goto joined_r0x0002fe02;
        }
        goto LAB_0002fa68;
      }
LAB_0002fa04:
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = (char *)0x400000;
      format_string = "%s():  form address [%d] read data failed.\n\n";
    }
LAB_0002fc9e:
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(format_string,"audioStreamFileManagerHandler",pcVar2);
    }
    else {
      handle_heartbeat();
    }
  }
  else {
    if (DAT_20019dab != '\x01') {
      return 0;
    }
    if (AUDIO_STREAM_STATE == 0) {
      return 0;
    }
    iVar1 = getAudioMessageQueueCacheData(local_f4);
    iVar3 = LOG_LEVEL;
    if (iVar1 == 0) {
      if (local_f4[0] != '\x01') {
        if (local_f4[0] == '\x02') {
          pcVar2 = DAT_20007bb8 + local_f2;
          if (0xfff < (int)pcVar2) {
            memcpy(&DAT_20018daa + (int)DAT_20007bb8,local_f0,0x1000 - (int)DAT_20007bb8);
            if (2 < iVar3) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): To complete a sector of data, perform flash write operations\n",
                            "audioStreamFileManagerHandler");
              }
              else {
                handle_heartbeat();
              }
            }
            iVar3 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
            if (iVar3 == 0) goto LAB_0002f9be;
            iVar3 = (uint)DAT_20019daa * 0x20000 + 0x421000 + DAT_20007bb4 * 0x1000;
            if (iVar3 <= (int)((uint)DAT_20019daa * 0x20000 + 0x431000)) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): wirte addr = 0x%08x\n","audioStreamFileManagerHandler",iVar3);
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar1 = get_work_mode();
              pcVar8 = *(code **)(iVar1 + 0x1038);
              uVar4 = get_work_mode();
              uVar9 = (*pcVar8)(uVar4,iVar3,0x1000);
              pcVar2 = (char *)uVar9;
              if (pcVar2 != (char *)0x0) goto LAB_0002fa68;
              iVar1 = get_work_mode(0,(int)((ulonglong)uVar9 >> 0x20),0);
              pcVar8 = *(code **)(iVar1 + 0x1034);
              uVar4 = get_work_mode();
              pcVar2 = (char *)(*pcVar8)(uVar4,iVar3,&DAT_20018daa,0x1000);
              if (pcVar2 == (char *)0x0) {
                DAT_20007bbc = calculate_crc32(DAT_20007bbc,&DAT_20018daa,0x1000);
                DAT_20007bb4 = DAT_20007bb4 + 1;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): wirte 4k voice data to flash,write address = 0x%08x\n",
                                "audioStreamFileManagerHandler",iVar3);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                pcVar2 = DAT_20007bb8;
                DAT_20007bb8 = (char *)0x0;
                fill_memory_buffer(&DAT_20018daa,0,0x1000);
                iVar3 = -(int)pcVar2 + 0x1000;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): Copy remain %d byte data into cache memory\n",
                                "audioStreamFileManagerHandler",local_f2 - iVar3);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                iVar3 = local_f2 - iVar3;
                iVar1 = (int)DAT_20007bb8 + iVar3;
                memcpy(&DAT_20018daa + (int)DAT_20007bb8,&stack0x00000f10 + -(int)pcVar2,iVar3);
                DAT_20007bb8 = (char *)iVar1;
                return 0;
              }
              goto joined_r0x0002fe02;
            }
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): the number of recording files exceeds the upper limit, system automatically stops\n"
                            ,"audioStreamFileManagerHandler");
              }
              else {
                handle_heartbeat();
              }
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): Catch touch release is not recognized, start QuickNote exception recovery mechanism\n"
                              ,"audioStreamFileManagerHandler");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            local_f8[0] = 1;
            uVar4 = get_work_mode();
            sync_to_slave(uVar4,6,local_f8,2);
            display_DelayClose(10000);
            goto LAB_0002fd4a;
          }
          memcpy(&DAT_20018daa + (int)DAT_20007bb8,local_f0);
          if (iVar3 < 3) {
            DAT_20007bb8 = pcVar2;
            return 0;
          }
          format_string = "%s(): copy %d byte into audio cache\n";
          DAT_20007bb8 = pcVar2;
        }
        else {
          if (local_f4[0] != '\x03') {
            if (local_f4[0] != '\x04') {
              return 0;
            }
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): A delete command occurred during the recording process. The recording was stopped and the deletion action was performed,Delete num = %d\n"
                            ,"audioStreamFileManagerHandler",(uint)local_f0[0]);
              }
              else {
                handle_heartbeat();
              }
            }
            delVoiceBlock(local_f0[0]);
            DAT_20019dab = 0;
            return 0;
          }
LAB_0002fd4a:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): received audio stop command,stop audio write process\n",
                          "audioStreamFileManagerHandler");
            }
            else {
              handle_heartbeat();
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): To complete a sector of data, perform flash write operations\n",
                            "audioStreamFileManagerHandler");
              }
              else {
                handle_heartbeat();
              }
            }
          }
          iVar3 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
          if (iVar3 == 0) goto LAB_0002f9be;
          iVar3 = (uint)DAT_20019daa * 0x20000 + 0x421000 + DAT_20007bb4 * 0x1000;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): wirte addr = 0x%08x\n","audioStreamFileManagerHandler",iVar3);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar1 = get_work_mode();
          pcVar8 = *(code **)(iVar1 + 0x1038);
          uVar4 = get_work_mode();
          uVar9 = (*pcVar8)(uVar4,iVar3,0x1000);
          pcVar2 = (char *)uVar9;
          if (pcVar2 == (char *)0x0) {
            iVar1 = get_work_mode(0,(int)((ulonglong)uVar9 >> 0x20),0);
            pcVar8 = *(code **)(iVar1 + 0x1034);
            uVar4 = get_work_mode();
            pcVar2 = (char *)(*pcVar8)(uVar4,iVar3,&DAT_20018daa,0x1000);
            if (pcVar2 != (char *)0x0) {
joined_r0x0002fe02:
              if (LOG_LEVEL < 1) {
                return 0;
              }
              format_string = "%s(): Flash write failed! %d\n\n";
              goto LAB_0002fc9e;
            }
            DAT_20007bbc = calculate_crc32(DAT_20007bbc,&DAT_20018daa,DAT_20007bb8);
            fill_memory_buffer(&DAT_20018daa,0,0x1000);
            iVar3 = get_work_mode();
            pcVar8 = *(code **)(iVar3 + 0x1030);
            uVar4 = get_work_mode();
            iVar3 = (*pcVar8)(uVar4,0x400000,&DAT_20018daa,0x1000);
            if (iVar3 != 0) goto LAB_0002fa04;
            iVar3 = get_work_mode();
            pcVar8 = *(code **)(iVar3 + 0x1038);
            uVar4 = get_work_mode();
            pcVar2 = (char *)(*pcVar8)(uVar4,0x400000,0x1000);
            iVar3 = DAT_20007bb4;
            if (pcVar2 == (char *)0x0) {
              _DAT_20018daa = 0x5aa5aa5a;
              iVar1 = (uint)DAT_20019daa * 0x14;
              iVar6 = (uint)DAT_20019daa * 0x20000 + 0x421000;
              *(int *)(&DAT_20018db6 + iVar1) = iVar6;
              DAT_20018dae = 0;
              DAT_20018daf = 0;
              DAT_20018db0 = 0;
              DAT_20018db1 = 0;
              *(char **)(&DAT_20018dba + iVar1) = DAT_20007bb8 + iVar6 + iVar3 * 0x1000;
              (&DAT_20018db2)[iVar1] = 2;
              (&DAT_20018db3)[iVar1] = 0;
              (&DAT_20018db4)[iVar1] = 0;
              (&DAT_20018db5)[iVar1] = 0;
              uVar4 = get_work_mode_timestamp();
              iVar3 = LOG_LEVEL;
              uVar5 = (uint)DAT_20019daa;
              *(undefined4 *)(&DAT_20018dbe + uVar5 * 0x14) = uVar4;
              *(undefined4 *)(&DAT_20018dc2 + uVar5 * 0x14) = DAT_20007bbc;
              if (2 < iVar3) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): upgrade Num.%d voice manager block,total write sector num = %d, total write byte = %d ,crc32 = %d\n"
                              ,"audioStreamFileManagerHandler");
                }
                else {
                  handle_heartbeat();
                }
              }
              if (*(int *)(&DAT_20018db6 + (uint)DAT_20019daa * 0x14) ==
                  *(int *)(&DAT_20018dba + (uint)DAT_20019daa * 0x14)) {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): voice block start addr = voice block end addr\n",
                                "audioStreamFileManagerHandler");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                DAT_20019dab = '\0';
                DAT_20019daa = 0;
                DAT_20007bb8 = (char *)0x0;
                DAT_20007bb4 = 0;
                process_sensor_data_buffer();
                if (LOG_LEVEL < 1) {
                  return 0;
                }
                pcVar2 = 
                "%s(): The dmic may have a problem. When the size of the recording file is 0, data block 0 is terminated\n"
                ;
              }
              else {
                iVar3 = get_work_mode();
                pcVar8 = *(code **)(iVar3 + 0x1034);
                uVar4 = get_work_mode();
                pcVar2 = (char *)(*pcVar8)(uVar4,0x400000,&DAT_20018daa,0x1000);
                DAT_20019dab = '\0';
                DAT_20019daa = 0;
                DAT_20007bb8 = (char *)0x0;
                DAT_20007bb4 = 0;
                process_sensor_data_buffer();
                requestAudioInfoToApp(1);
                if (pcVar2 != (char *)0x0) goto joined_r0x0002fe02;
                if (LOG_LEVEL < 3) {
                  return 0;
                }
                pcVar2 = "%s(): audio manager block upgrade success\n";
              }
              goto LAB_0002f986;
            }
          }
LAB_0002fa68:
          if (LOG_LEVEL < 3) {
            return 0;
          }
          format_string = "%s(): Flash erase failed! %d\n\n";
        }
        goto LAB_0002fc9e;
      }
      DAT_20019dab = '\0';
      if (LOG_LEVEL < 1) {
        DAT_20019dab = 0;
        return 0;
      }
      pcVar2 = "%s(): A start command occurred during recording to exit the recording\n";
    }
    else {
LAB_0002f976:
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = "%s(): get audio message queue data failed!\n";
    }
LAB_0002f986:
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar2,"audioStreamFileManagerHandler");
    }
    else {
      handle_heartbeat();
    }
  }
  return 0;
}


