/*
 * Function: calc_flash_crc
 * Entry:    00022974
 * Prototype: undefined calc_flash_crc()
 */


undefined4 calc_flash_crc(undefined2 *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  char *format_string;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
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
      pcVar5 = "calc_flash_crc";
      format_string = "%s(): calc_flash_crc para is NULL\n\n";
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 0xffffffff;
      }
      goto LAB_00022a22;
    }
  }
  uVar6 = (param_3 << 6) >> 0x10;
  if ((param_3 & 0x3ff) != 0) {
    uVar6 = uVar6 + 1 & 0xffff;
  }
  local_428[0] = 0xff;
  local_428[1] = 0;
  local_428[2] = 0;
  local_428[3] = 0;
  fill_memory_buffer(local_428 + 4,0,0x3fc);
  iVar2 = FUN_0008638c(&DAT_00087bf0);
  if (iVar2 != 0) {
    iVar2 = param_2;
    while( true ) {
      if (iVar2 == param_2 + uVar6 * 0x400) {
        if ((DAT_2000302c != '\0') && (DAT_20018d90 == '\0')) {
          FUN_0002ae84();
        }
        return 0;
      }
      iVar7 = (param_3 + param_2) - iVar2;
      if (0x3ff < iVar7) {
        iVar7 = 0x400;
      }
      iVar3 = get_work_mode();
      pcVar8 = *(code **)(iVar3 + 0x1030);
      uVar4 = get_work_mode();
      iVar3 = (*pcVar8)(uVar4,iVar2,local_428,iVar7);
      if (iVar3 != 0) break;
      for (uVar9 = 0; (int)(uVar9 & 0xff) < iVar7; uVar9 = uVar9 + 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): 0x%x \n","calc_flash_crc",(uint)local_428[uVar9 & 0xff]);
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
      uVar1 = FUN_0007da4a(*param_1,local_428,iVar7);
      iVar2 = iVar2 + 0x400;
      *param_1 = uVar1;
    }
    DEBUG_PRINT("Flash read 0x%x failed: %d\n",iVar2,iVar3);
    return 0xffffffff;
  }
  pcVar5 = "mx25r6435f@0";
  format_string = " [%s] device not ready.\n";
LAB_00022a22:
  DEBUG_PRINT(format_string,pcVar5);
  return 0xffffffff;
}


