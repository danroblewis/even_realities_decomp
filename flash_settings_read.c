/*
 * Function: flash_settings_read
 * Entry:    000225b4
 * Prototype: undefined flash_settings_read()
 */


int flash_settings_read(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar1 == 0) {
      DEBUG_PRINT(" [%s] device not ready.\n","mx25r6435f@0");
      iVar1 = -1;
    }
    else {
      iVar1 = get_work_mode();
      pcVar3 = *(code **)(iVar1 + 0x1030);
      uVar2 = get_work_mode();
      iVar1 = (*pcVar3)(uVar2,param_1,param_2,param_3,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      DEBUG_PRINT("Flash read failed! %d\n",iVar1);
    }
    if (iVar4 == 10) break;
    get_schedule_timing(0xccd,0);
    iVar4 = iVar4 + 1;
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): flash read fail, retry again, retry time %d\n","flash_settings_read",
                    iVar4);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return iVar1;
}


