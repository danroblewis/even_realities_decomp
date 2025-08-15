/*
 * Function: delVoiceBlock
 * Entry:    0002f4a8
 * Prototype: undefined delVoiceBlock()
 */


void delVoiceBlock(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *format_string;
  undefined4 uVar4;
  code *pcVar5;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): received audio delete command\n","delVoiceBlock");
    }
    else {
      handle_heartbeat();
    }
  }
  if (((param_1 - 5 & 0xff) < 0xfa) || (param_1 == 0)) {
    if (0 < LOG_LEVEL) {
      pcVar2 = "%s(): input parameter error...\n";
LAB_0002f4da:
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return;
      }
      DEBUG_PRINT(pcVar2,"delVoiceBlock");
      return;
    }
  }
  else {
    iVar3 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar3 == 0) {
      if (0 < LOG_LEVEL) {
        pcVar2 = "mx25r6435f@0";
        format_string = "%s():  [%s] device not ready.\n\n";
LAB_0002f50e:
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return;
        }
        DEBUG_PRINT(format_string,"delVoiceBlock",pcVar2,param_4);
        return;
      }
    }
    else {
      fill_memory_buffer(&DAT_20018daa,0,0x1000);
      iVar3 = get_work_mode();
      pcVar5 = *(code **)(iVar3 + 0x1030);
      uVar4 = get_work_mode();
      iVar3 = (*pcVar5)(uVar4,0x400000,&DAT_20018daa,0x1000);
      if (iVar3 == 0) {
        iVar3 = get_work_mode();
        pcVar5 = *(code **)(iVar3 + 0x1038);
        uVar4 = get_work_mode();
        pcVar2 = (char *)(*pcVar5)(uVar4,0x400000,0x1000);
        iVar3 = LOG_LEVEL;
        if (pcVar2 == (char *)0x0) {
          DAT_20018dab = 0xaa;
          DAT_20018daa = 0x5a;
          DAT_20018dac = 0xa5;
          DAT_20018dad = 0x5a;
          DAT_20018dae = 0;
          DAT_20018daf = 0;
          DAT_20018db0 = 0;
          DAT_20018db1 = 0;
          if (param_1 < 5) {
            iVar1 = (param_1 - 1) * 0x14;
            (&DAT_20018db2)[iVar1] = 0;
            (&DAT_20018db3)[iVar1] = 0;
            (&DAT_20018db4)[iVar1] = 0;
            (&DAT_20018db5)[iVar1] = 0;
            (&DAT_20018dbe)[iVar1] = 0;
            (&DAT_20018dbf)[iVar1] = 0;
            (&DAT_20018dc0)[iVar1] = 0;
            (&DAT_20018dc1)[iVar1] = 0;
            if (2 < iVar3) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): success delete voice block num.(%d)\n","delVoiceBlock",param_1);
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else {
            memcpy(&DAT_20018daa,&DAT_0008a050,0x58);
            if (2 < iVar3) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): success delete all voice block \n","delVoiceBlock");
              }
              else {
                handle_heartbeat();
              }
            }
          }
          iVar3 = get_work_mode();
          pcVar5 = *(code **)(iVar3 + 0x1034);
          uVar4 = get_work_mode();
          pcVar2 = (char *)(*pcVar5)(uVar4,0x400000,&DAT_20018daa,0x1000);
          if (pcVar2 == (char *)0x0) {
            if (2 < LOG_LEVEL) {
              pcVar2 = "%s(): audio manager block delete success\n";
              goto LAB_0002f4da;
            }
          }
          else if (0 < LOG_LEVEL) {
            format_string = "%s(): Flash write failed! %d\n\n";
            goto LAB_0002f50e;
          }
        }
        else if (2 < LOG_LEVEL) {
          format_string = "%s(): Flash erase failed! %d\n\n";
          goto LAB_0002f50e;
        }
      }
      else if (0 < LOG_LEVEL) {
        pcVar2 = (char *)0x400000;
        format_string = "%s():  form address [%d] read data failed.\n\n";
        goto LAB_0002f50e;
      }
    }
  }
  return;
}


