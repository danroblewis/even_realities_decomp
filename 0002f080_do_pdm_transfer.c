/*
 * Function: do_pdm_transfer
 * Entry:    0002f080
 * Prototype: undefined do_pdm_transfer()
 */


uint do_pdm_transfer(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined *local_54;
  char *local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_46 [6];
  undefined4 *local_40;
  undefined1 local_2c;
  undefined1 local_2a;
  
  iVar1 = get_bluetooth_manager();
  iVar2 = get_work_mode();
  uVar5 = *(ushort *)(iVar2 + 0x105c) & 2;
  if ((*(ushort *)(iVar2 + 0x105c) & 2) != 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): DMIC sample\n","dmic_stream_start");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar2 = FUN_0008638c(&DAT_00087d40);
    if (iVar2 == 0) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): %s is not ready\n","dmic_stream_start","pdm@26000");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): %s is ready\n","dmic_stream_start","pdm@26000");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar2 = init_dmic_msgq();
      if (iVar2 == 0) {
        local_54 = &DAT_20003778;
        fill_memory_buffer(auStack_46,0,0x1e);
        local_50 = "size";
        uStack_4c = 3500000;
        local_48 = 0x28;
        local_47 = 0x3c;
        local_40 = &local_5c;
        local_2a = 1;
        local_2c = 1;
        local_5c = 16000;
        uStack_58 = 0xc800010;
        iVar2 = get_system_ready_state();
        if ((iVar2 == 1) && (uVar5 = erase_audio_buffer(), (int)uVar5 < 0)) {
          if (0 < LOG_LEVEL) {
            pcVar3 = "%s(): Failed to erase_audio_buffer %d\n";
LAB_0002f1b4:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(pcVar3,"dmic_stream_start",uVar5);
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          uVar5 = configure_device(&DAT_00087d40,&local_50);
          if ((int)uVar5 < 0) {
            if (0 < LOG_LEVEL) {
              pcVar3 = "%s(): Failed to configure the driver: %d\n";
              goto LAB_0002f1b4;
            }
          }
          else {
            uVar5 = FUN_0005fb8c(&DAT_00087d40,1);
            if (-1 < (int)uVar5) {
              DMIC_DATA_READY_FLAG = 0;
              DMIC_STREAM_STATE = '\0';
              while (DMIC_STREAM_STATE != '\x01') {
                local_64 = 0;
                iVar2 = get_system_ready_state();
                if (((iVar2 == 1) && (iVar2 = get_work_mode(), *(char *)(iVar2 + 0x108c) == '\x01'))
                   && (iVar2 = FUN_0008638c(&DAT_00087bf0), iVar2 == 0)) {
                  if (LOG_LEVEL < 1) goto LAB_0002f252;
                  pcVar4 = "mx25r6435f@0";
                  pcVar3 = "%s():  [%s] device not ready.\n";
LAB_0002f26a:
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT(pcVar3,"do_pdm_transfer",pcVar4);
                  }
                  else {
                    handle_heartbeat();
                  }
                  if (local_64 != 0) goto LAB_0002f258;
LAB_0002f2a6:
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): !!!do_pdm_transfer exec failed.\n","dmic_stream_start");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  goto LAB_0002f1c6;
                }
                pcVar4 = (char *)FUN_0005fa94(&DAT_00087d40,0,&local_64,&local_60,1000);
                if (pcVar4 != (char *)0x0) {
                  if (0 < LOG_LEVEL) {
                    pcVar3 = "%s(): dmic_read failed %d\n";
                    goto LAB_0002f26a;
                  }
LAB_0002f252:
                  if (local_64 != 0) {
LAB_0002f258:
                    FUN_00071cf4(&DAT_20003778);
                    goto LAB_0002f2a6;
                  }
                  goto LAB_0002f1c6;
                }
                iVar2 = get_system_ready_state();
                if ((iVar2 == 1) && (iVar2 = get_work_mode(), *(char *)(iVar2 + 0x108c) == '\x01'))
                {
                  if (DAT_20002404 < 0x410000U - local_60) {
                    pcVar4 = (char *)FUN_00060f20();
                    if (pcVar4 != (char *)0x0) {
                      if (0 < LOG_LEVEL) {
                        pcVar3 = "%s(): Flash write failed! %d\n\n";
                        goto LAB_0002f26a;
                      }
                      goto LAB_0002f252;
                    }
                    if (0 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): Flash write to addr 0x%x\n\n","do_pdm_transfer",
                                    DAT_20002404);
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    DAT_20002404 = DAT_20002404 + local_60;
                  }
joined_r0x0002f3fa:
                  if (local_64 != 0) {
                    FUN_00071cf4(&DAT_20003778,local_64);
                  }
                }
                else if (local_64 != 0) {
                  app_codec_lc3_test(local_64,local_60);
                  goto joined_r0x0002f3fa;
                }
                uVar5 = 0;
                if (((DMIC_STREAM_STATE == '\0') && (iVar2 = get_system_ready_state(), iVar2 == 0))
                   && (DAT_20007ba0 != 0)) {
                  if ((*(char *)(iVar1 + 0x248) == '\0') && (*(int *)(iVar1 + 0x220) == 0)) {
                    DMIC_DATA_READY_FLAG = 1;
                    z_spin_lock_valid(iVar1 + 0x218);
                  }
                  else {
                    local_60 = CONCAT13(local_60._3_1_,0xcc00f1);
                    FUN_00017eec(&local_60,3);
                  }
                }
              }
              goto LAB_0002f0dc;
            }
            if (0 < LOG_LEVEL) {
              pcVar3 = "%s(): START trigger failed: %d\n";
              goto LAB_0002f1b4;
            }
          }
        }
LAB_0002f1c6:
        uVar5 = 0xffffffff;
        goto LAB_0002f0dc;
      }
    }
    uVar5 = 1;
  }
LAB_0002f0dc:
  iVar1 = FUN_0005fb8c(&DAT_00087d40,0);
  if (iVar1 < 0) {
    if (LOG_LEVEL < 1) goto LAB_0002f104;
    pcVar3 = "%s(): STOP trigger failed\n";
  }
  else {
    if (LOG_LEVEL < 1) goto LAB_0002f104;
    pcVar3 = "%s(): STOP trigger Success\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar3,"dmic_stream_start");
  }
  else {
    handle_heartbeat();
  }
LAB_0002f104:
  clean_dmic_msgq();
  DAT_20002404 = 0x400000;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Exiting\n","dmic_stream_start");
    }
    else {
      handle_heartbeat();
    }
  }
  return uVar5;
}


