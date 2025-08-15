/*
 * Function: calc_flash_crc
 * Entry:    00022974
 * Prototype: undefined calc_flash_crc()
 */


undefined4 calc_flash_crc(undefined2 *param_1,int param_2,uint param_3)

{
  char *format_string;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  byte local_428 [1028];
  
  if (LOG_LEVEL < 3) {
    if (param_1 == (undefined2 *)0x0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): join in calc_flash_crc\n\n","calc_flash_crc");
    }
    else {
      handle_heartbeat();
    }
    if ((param_1 == (undefined2 *)0x0) || (param_3 == 0)) {
      if (LOG_LEVEL < 3) {
        return 0xffffffff;
      }
      pcVar3 = "calc_flash_crc";
      format_string = "%s(): calc_flash_crc para is NULL\n\n";
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 0xffffffff;
      }
      goto LAB_00022a22;
    }
  }
  uVar4 = (param_3 << 6) >> 0x10;
  if ((param_3 & 0x3ff) != 0) {
    uVar4 = uVar4 + 1 & 0xffff;
  }
  local_428[0] = 0xff;
  local_428[1] = 0;
  local_428[2] = 0;
  local_428[3] = 0;
  fill_memory_buffer(local_428 + 4,0,0x3fc);
  uVar9 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
  if ((int)uVar9 != 0) {
    uVar2 = extraout_r2;
    iVar6 = param_2;
    while( true ) {
      if (iVar6 == param_2 + uVar4 * 0x400) {
        if ((DAT_2000302c != '\0') && (DAT_20018d90 == '\0')) {
          execute_hardware_operation_with_retry((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,0);
        }
        return 0;
      }
      iVar5 = (param_3 + param_2) - iVar6;
      if (0x3ff < iVar5) {
        iVar5 = 0x400;
      }
      iVar1 = get_work_mode();
      pcVar7 = *(code **)(iVar1 + 0x1030);
      uVar2 = get_work_mode();
      iVar1 = (*pcVar7)(uVar2,iVar6,local_428,iVar5);
      if (iVar1 != 0) break;
      for (uVar8 = 0; (int)(uVar8 & 0xff) < iVar5; uVar8 = uVar8 + 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): 0x%x \n","calc_flash_crc",(uint)local_428[uVar8 & 0xff]);
          }
          else {
            handle_heartbeat("%s(): 0x%x \n","calc_flash_crc");
          }
        }
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): \n\n","calc_flash_crc");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar9 = calculate_crc_with_parameter_validation(*param_1,local_428,iVar5);
      iVar6 = iVar6 + 0x400;
      *param_1 = (short)uVar9;
      uVar2 = extraout_r2_00;
    }
    DEBUG_PRINT("Flash read 0x%x failed: %d\n",iVar6,iVar1);
    return 0xffffffff;
  }
  pcVar3 = "mx25r6435f@0";
  format_string = " [%s] device not ready.\n";
LAB_00022a22:
  DEBUG_PRINT(format_string,pcVar3);
  return 0xffffffff;
}


