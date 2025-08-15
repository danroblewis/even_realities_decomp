/*
 * Function: SettingStoreHandler
 * Entry:    00023f04
 * Prototype: undefined SettingStoreHandler()
 */


uint SettingStoreHandler(void)

{
  int iVar1;
  char *pcVar2;
  char *format_string;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined2 local_24;
  byte local_22;
  undefined1 local_20 [4];
  byte local_1c;
  
  iVar1 = FUN_00072240(&DAT_20003994,local_20,0,0);
  if (iVar1 == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): received setting command .\n","SettingStoreHandler");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar4 = 0;
    switch(local_20[0]) {
    case 1:
      uVar4 = (uint)local_1c;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): start setting  parameter check. language type = %d\n",
                      "SettingStoreHandler",uVar4);
        }
        else {
          handle_heartbeat();
        }
      }
      if (uVar4 - 1 < 0x12) {
        if (SETTING_STORE_FLAG_1 == uVar4) {
          bVar8 = SBORROW4(LOG_LEVEL,2);
          iVar1 = LOG_LEVEL + -2;
          bVar7 = LOG_LEVEL == 2;
          goto LAB_00023fc4;
        }
        iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
        if (iVar1 != 0) {
          local_24 = 0;
          local_22 = 0;
          iVar1 = get_work_mode();
          pcVar6 = *(code **)(iVar1 + 0x1030);
          uVar3 = get_work_mode();
          iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
          if (iVar1 == 0) {
            local_24 = CONCAT11(local_1c,0xaa);
            iVar1 = get_work_mode();
            pcVar6 = *(code **)(iVar1 + 0x1038);
            uVar3 = get_work_mode();
            uVar4 = (*pcVar6)(uVar3,0x13e000,0x1000);
            if (uVar4 != 0) goto LAB_00024044;
            iVar1 = get_work_mode();
            pcVar6 = *(code **)(iVar1 + 0x1034);
            uVar3 = get_work_mode();
            uVar4 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
            if (uVar4 != 0) goto LAB_00024074;
            local_24 = 0;
            local_22 = 0;
            iVar1 = get_work_mode();
            pcVar6 = *(code **)(iVar1 + 0x1030);
            uVar3 = get_work_mode();
            iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
            if (iVar1 == 0) {
              SETTING_STORE_FLAG_1 = local_24._1_1_;
              uVar5 = 0;
              if (LOG_LEVEL < 3) {
                return 0;
              }
              uVar4 = (uint)local_24._1_1_;
              pcVar2 = "%s(): language infomation  %d store sucess\n";
              goto LAB_000240c6;
            }
          }
          goto LAB_00024178;
        }
LAB_00023fda:
        if (LOG_LEVEL < 1) break;
LAB_00023fe2:
        pcVar2 = "mx25r6435f@0";
        format_string = "%s():  [%s] device not ready.\n\n";
        goto LAB_00023fea;
      }
      if (0 < LOG_LEVEL) {
        pcVar2 = "%s(): Setting Task received error language parameters.\n";
        goto LAB_00023f56;
      }
      break;
    case 2:
      iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
      if (iVar1 != 0) {
        local_24 = 0;
        local_22 = 0;
        iVar1 = get_work_mode();
        pcVar6 = *(code **)(iVar1 + 0x1030);
        uVar3 = get_work_mode();
        iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
        if (iVar1 == 0) {
          local_24 = 0x2aa;
          iVar1 = get_work_mode();
          pcVar6 = *(code **)(iVar1 + 0x1038);
          uVar3 = get_work_mode();
          uVar4 = (*pcVar6)(uVar3,0x13e000,0x1000);
          if (uVar4 != 0) {
LAB_00024044:
            if (LOG_LEVEL < 3) {
              return uVar4;
            }
            pcVar2 = "%s(): Flash erase failed! %d\n\n";
            uVar5 = uVar4;
LAB_000240c6:
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return uVar5;
            }
            DEBUG_PRINT(pcVar2,"SettingStoreHandler",uVar4);
            return uVar5;
          }
          iVar1 = get_work_mode();
          pcVar6 = *(code **)(iVar1 + 0x1034);
          uVar3 = get_work_mode();
          uVar4 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
          if (uVar4 != 0) {
LAB_00024074:
            if (LOG_LEVEL < 1) {
              return uVar4;
            }
            pcVar2 = "%s(): Flash write failed! %d\n\n";
            uVar5 = uVar4;
            goto LAB_000240c6;
          }
          local_24 = 0;
          local_22 = 0;
          iVar1 = get_work_mode();
          pcVar6 = *(code **)(iVar1 + 0x1030);
          uVar3 = get_work_mode();
          iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
          if (iVar1 == 0) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): App language clean success.\n","SettingStoreHandler");
              }
              else {
                handle_heartbeat();
              }
            }
            SETTING_STORE_FLAG_1 = 2;
            return 0;
          }
        }
        goto LAB_00024178;
      }
LAB_000240dc:
      if (0 < LOG_LEVEL) goto LAB_00023fe2;
      break;
    case 3:
      uVar4 = (uint)local_1c;
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): start setting  parameter check. startup_mode type = %d\n",
                      "SettingStoreHandler",uVar4);
        }
        else {
          handle_heartbeat();
        }
      }
      if (SETTING_STORE_FLAG_2 == uVar4) {
        bVar8 = false;
        bVar7 = LOG_LEVEL == 0;
        iVar1 = LOG_LEVEL;
LAB_00023fc4:
        if (!bVar7 && iVar1 < 0 == bVar8) {
          pcVar2 = "%s(): Setting Task received same language parameters.drop it ..\n";
          goto LAB_00023f56;
        }
      }
      else {
        if (uVar4 < 3) {
          iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
          if (iVar1 == 0) goto LAB_00023fda;
          local_24 = 0;
          local_22 = 0;
          iVar1 = get_work_mode();
          pcVar6 = *(code **)(iVar1 + 0x1030);
          uVar3 = get_work_mode();
          iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
          if (iVar1 == 0) {
            local_22 = local_1c;
            local_24 = CONCAT11(local_24._1_1_,0xaa);
            iVar1 = get_work_mode();
            pcVar6 = *(code **)(iVar1 + 0x1038);
            uVar3 = get_work_mode();
            uVar4 = (*pcVar6)(uVar3,0x13e000,0x1000);
            if (uVar4 != 0) goto LAB_00024044;
            iVar1 = get_work_mode();
            pcVar6 = *(code **)(iVar1 + 0x1034);
            uVar3 = get_work_mode();
            uVar4 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
            if (uVar4 != 0) goto LAB_00024074;
            local_24 = 0;
            local_22 = 0;
            iVar1 = get_work_mode();
            pcVar6 = *(code **)(iVar1 + 0x1030);
            uVar3 = get_work_mode();
            iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
            if (iVar1 == 0) {
              SETTING_STORE_FLAG_2 = local_22;
              uVar5 = 0;
              if (LOG_LEVEL < 3) {
                return 0;
              }
              uVar4 = (uint)local_22;
              pcVar2 = "%s(): startup mode  infomation  %d store sucess\n";
              goto LAB_000240c6;
            }
          }
          goto LAB_00024178;
        }
        if (0 < LOG_LEVEL) {
          pcVar2 = "%s(): dashboard startup mode value error,exit...\n";
          goto LAB_00023f56;
        }
      }
      break;
    case 4:
      iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
      if (iVar1 == 0) goto LAB_000240dc;
      local_24 = 0;
      local_22 = 0;
      iVar1 = get_work_mode();
      pcVar6 = *(code **)(iVar1 + 0x1030);
      uVar3 = get_work_mode();
      iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
      if (iVar1 == 0) {
        local_22 = 0;
        local_24 = CONCAT11(local_24._1_1_,0xaa);
        iVar1 = get_work_mode();
        pcVar6 = *(code **)(iVar1 + 0x1038);
        uVar3 = get_work_mode();
        uVar4 = (*pcVar6)(uVar3,0x13e000,0x1000);
        if (uVar4 != 0) goto LAB_00024044;
        iVar1 = get_work_mode();
        pcVar6 = *(code **)(iVar1 + 0x1034);
        uVar3 = get_work_mode();
        uVar4 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
        if (uVar4 != 0) goto LAB_00024074;
        local_24 = 0;
        local_22 = 0;
        iVar1 = get_work_mode();
        pcVar6 = *(code **)(iVar1 + 0x1030);
        uVar3 = get_work_mode();
        iVar1 = (*pcVar6)(uVar3,0x13e000,&local_24,3);
        if (iVar1 == 0) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): App language clean success.\n","SettingStoreHandler");
            }
            else {
              handle_heartbeat();
            }
          }
          SETTING_STORE_FLAG_2 = 0;
          return 0;
        }
      }
LAB_00024178:
      if (0 < LOG_LEVEL) {
        pcVar2 = (char *)0x13e000;
        format_string = "%s():  form address [%d] read data failed.\n\n";
LAB_00023fea:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(format_string,"SettingStoreHandler",pcVar2);
        }
        else {
          handle_heartbeat();
        }
      }
      break;
    default:
      goto switchD_00023f2c_caseD_4;
    }
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): setting storage queue get failed\r\n\n","getSettingStorageQueueCacheData");
    }
    else {
      handle_heartbeat();
    }
    if (0 < LOG_LEVEL) {
      pcVar2 = "%s(): setting storage get queue data failed\n";
LAB_00023f56:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar2,"SettingStoreHandler");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  uVar4 = 0xffffffff;
switchD_00023f2c_caseD_4:
  return uVar4;
}


