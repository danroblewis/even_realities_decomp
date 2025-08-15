/*
 * Function: getDashboardStartUpModeInfofromFlash
 * Entry:    00023df4
 * Prototype: undefined getDashboardStartUpModeInfofromFlash()
 */


byte getDashboardStartUpModeInfofromFlash(undefined4 param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): read setting flash data to ram...\r\n\n",
                  "getDashboardStartUpModeInfofromFlash",param_3,0,param_1);
    }
    else {
      handle_heartbeat();
    }
  }
  iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
  if (iVar2 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s():  [%s] device not ready.\n\n","getDashboardStartUpModeInfofromFlash",
                    "mx25r6435f@0",0,param_1);
      }
      else {
        handle_heartbeat();
      }
    }
    bVar1 = 0xff;
  }
  else {
    local_14 = local_14 & 0xff000000;
    iVar2 = get_work_mode();
    pcVar4 = *(code **)(iVar2 + 0x1030);
    uVar3 = get_work_mode();
    iVar2 = (*pcVar4)(uVar3,0x13e000,&local_14,3);
    if (iVar2 == 0) {
      if (((char)local_14 == -0x56) && (local_14._2_1_ != 0xff)) {
        SETTING_STORE_FLAG_2 = local_14._2_1_;
      }
      else {
        SETTING_STORE_FLAG_2 = 0;
      }
      bVar1 = SETTING_STORE_FLAG_2;
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): dashboard startup mode = %d\n","getDashboardStartUpModeInfofromFlash",
                      (uint)SETTING_STORE_FLAG_2);
          bVar1 = SETTING_STORE_FLAG_2;
        }
        else {
          handle_heartbeat();
          bVar1 = SETTING_STORE_FLAG_2;
        }
      }
    }
    else {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s():  form address [%d] read data failed.\n\n",
                      "getDashboardStartUpModeInfofromFlash",0x13e000);
        }
        else {
          handle_heartbeat();
        }
      }
      bVar1 = 0;
    }
  }
  return bVar1;
}


