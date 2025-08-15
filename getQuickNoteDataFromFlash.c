/*
 * Function: getQuickNoteDataFromFlash
 * Entry:    00024534
 * Prototype: undefined getQuickNoteDataFromFlash(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
getQuickNoteDataFromFlash
          (uint param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1 < 4) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): read quicknote flash data to ram...\r\n\n","getQuickNoteDataFromFlash");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar2 == 0) {
      if (LOG_LEVEL < 1) {
        return 0xffffffff;
      }
      pcVar4 = "mx25r6435f@0";
      pcVar1 = "%s():  [%s] device not ready.\n\n";
    }
    else {
      fill_memory_buffer(&DAT_20018465,0,0x800);
      iVar2 = get_work_mode();
      pcVar6 = *(code **)(iVar2 + 0x1030);
      uVar3 = get_work_mode();
      iVar2 = (*pcVar6)(uVar3,0x403000,&DAT_20018465,0x800);
      if (iVar2 == 0) {
        iVar2 = param_1 * 0x200;
        if ((&DAT_20018465)[iVar2] == -0x56) {
          if (0x28 < param_3) {
            param_3 = 0x29;
          }
          memcpy(param_2,&DAT_20018466 + iVar2,param_3);
          iVar5 = 0x119;
          if (param_5 < 0x11a) {
            iVar5 = param_5;
          }
          memcpy(param_4,iVar2 + 0x2001848f,iVar5);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): export flash data to global ram...\n","getQuickNoteDataFromFlash");
              return 0;
            }
            handle_heartbeat();
            return 0;
          }
          return 0;
        }
        if (LOG_LEVEL < 3) {
          return 0xffffffff;
        }
        pcVar1 = "%s(): quicknote data is invaild,don\'t export to global ram..\n";
        goto LAB_00024554;
      }
      if (LOG_LEVEL < 1) {
        return 0xffffffff;
      }
      pcVar4 = (char *)0x403000;
      pcVar1 = "%s():  form address [%d] read data failed.\n\n";
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar1,"getQuickNoteDataFromFlash",pcVar4);
    }
    else {
      handle_heartbeat();
    }
  }
  else {
    if (LOG_LEVEL < 1) {
      return 0xffffffff;
    }
    pcVar1 = "%s(): quicknote upgrade index out of range\n";
LAB_00024554:
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar1,"getQuickNoteDataFromFlash");
    }
    else {
      handle_heartbeat();
    }
  }
  return 0xffffffff;
}


