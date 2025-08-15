/*
 * Function: handle_data_verification
 * Entry:    00022658
 * Prototype: undefined handle_data_verification()
 */


int handle_data_verification
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *format_string;
  code *pcVar5;
  
  iVar1 = malloc_maybe(0x1000);
  if (iVar1 == 0) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("[%s-%d]error, have no memory ! \n","flash_settings_write_and_verify",0xd2,0,
                  param_4);
    }
    else {
      handle_heartbeat();
    }
    return -1;
  }
  iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
  if (iVar2 == 0) {
    DEBUG_PRINT(" [%s] device not ready.\n","mx25r6435f@0");
    iVar4 = -1;
  }
  else {
    fill_memory_buffer(iVar1,0,0x1000);
    iVar2 = get_work_mode();
    pcVar5 = *(code **)(iVar2 + 0x1030);
    uVar3 = get_work_mode();
    iVar2 = (*pcVar5)(uVar3,param_1,iVar1,0x1000);
    if (iVar2 == 0) {
      iVar4 = memcmp_byte_arrays(param_2,iVar1,param_3);
      if (iVar4 == 0) {
        format_string = "write data and read data is same, exit\n";
      }
      else {
        iVar4 = get_work_mode();
        pcVar5 = *(code **)(iVar4 + 0x1038);
        uVar3 = get_work_mode();
        iVar4 = (*pcVar5)(uVar3,param_1,0x1000);
        if (iVar4 != 0) {
          DEBUG_PRINT("Flash erase failed! %d\n",iVar4);
          goto LAB_000226a4;
        }
        fill_memory_buffer(iVar1,0,0x1000);
        validate_memory_bounds(iVar1,param_2,param_3,0x1000);
        iVar4 = get_work_mode();
        pcVar5 = *(code **)(iVar4 + 0x1034);
        uVar3 = get_work_mode();
        iVar4 = (*pcVar5)(uVar3,param_1,iVar1,0x1000);
        if (iVar4 != 0) {
          DEBUG_PRINT("Flash write failed! %d addr %08X size %d\n",iVar4,param_1,param_3);
          goto LAB_000226a4;
        }
        iVar4 = get_work_mode();
        pcVar5 = *(code **)(iVar4 + 0x1030);
        uVar3 = get_work_mode();
        iVar4 = (*pcVar5)(uVar3,param_1,iVar1,0x1000);
        if (iVar4 != 0) {
          DEBUG_PRINT("Flash read failed! %d\n",iVar4);
          goto LAB_000226a4;
        }
        iVar4 = memcmp_byte_arrays(param_2,iVar1,param_3);
        if (iVar4 != 0) {
          DEBUG_PRINT("flash verify failed\n");
          iVar4 = 1;
          goto LAB_000226a4;
        }
        format_string = "flash verify success!\n";
      }
      DEBUG_PRINT(format_string);
      iVar4 = iVar2;
    }
    else {
      DEBUG_PRINT("Flash read failed! %d\n",iVar2);
      iVar4 = iVar2;
    }
  }
LAB_000226a4:
  call_data_verification_handler(iVar1);
  return iVar4;
}


