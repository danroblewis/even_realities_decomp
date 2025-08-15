/*
 * Function: mic_transm_thread
 * Entry:    000324bc
 * Prototype: undefined mic_transm_thread()
 */


void mic_transm_thread(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char local_f8 [4];
  undefined2 local_f4;
  char local_f2 [206];
  
  uVar5 = 0;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\0';
  fill_memory_buffer(&local_f4,0,0xca);
  setup_bluetooth_stack(&MICROPHONE_THREAD_SYNC,0,1);
  uVar3 = extraout_r1;
  do {
    FUN_00072908(&MICROPHONE_THREAD_SYNC,uVar3,0xffffffff,0xffffffff);
    local_f8[0] = 'Z';
    local_f8[1] = -0x5b;
    local_f8[2] = -0xf;
    local_f8[3] = '\x01';
    iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar2 == 0) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s():  [%s] device not ready.\n","mic_transm_thread","mx25r6435f@0");
        }
        else {
          handle_heartbeat();
        }
      }
      local_f4 = 0xca00;
LAB_00032570:
      iVar2 = get_work_mode();
      (**(code **)(iVar2 + 0x788))(local_f8,10);
    }
    else {
      iVar2 = get_work_mode();
      if (*(int *)(iVar2 + 0x1030) != 0) {
        uVar6 = 0;
        while( true ) {
          uVar7 = uVar6 * 200 + DAT_20002420;
          DEBUG_PRINT("start send mic data,flash address:0x%x,seq:%d\n",uVar7,uVar6);
          iVar2 = FUN_0007d120(&FLASH_DRIVER_INTERFACE,uVar7,local_f2,200);
          if (iVar2 != 0) break;
          iVar4 = 6;
          local_f4 = (ushort)(byte)uVar6;
          iVar2 = 0;
          do {
            pcVar1 = local_f8 + iVar4;
            iVar4 = iVar4 + 1;
            if (*pcVar1 == -1) {
              iVar2 = iVar2 + 1;
            }
          } while (iVar4 != 0x1a);
          if ((iVar2 == 0x14) || (0x410000 < uVar7)) {
            local_f4 = 0x100;
            goto LAB_00032570;
          }
          iVar2 = get_work_mode();
          iVar2 = (**(code **)(iVar2 + 0x788))(local_f8,0xce);
          if (iVar2 < 0) {
            uVar5 = uVar5 + 1 & 0xff;
            if (9 < uVar5) {
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): BLE send failed for %d times\n","mic_transm_thread",uVar5);
                }
                else {
                  handle_heartbeat();
                }
              }
              uVar5 = 0;
              goto LAB_0003257e;
            }
          }
          else {
            uVar6 = uVar6 + 1 & 0xffff;
          }
          delay_ms(0x14);
        }
        DEBUG_PRINT("Flash read failed! %d\n");
        local_f4 = CONCAT11(0xca,(byte)uVar6);
        goto LAB_00032570;
      }
    }
LAB_0003257e:
    fill_memory_buffer(local_f8,0,0xce);
    uVar3 = extraout_r1_00;
  } while( true );
}


