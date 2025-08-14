/*
 * Function: set_brightness_to_panel_reg_in_running
 * Entry:    00047058
 * Prototype: undefined set_brightness_to_panel_reg_in_running()
 */


void set_brightness_to_panel_reg_in_running(uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): set brightness level = %d\n","set_brightness_to_panel_reg_in_running",
                  param_1);
    }
    else {
      handle_heartbeat();
    }
  }
  iVar2 = get_work_mode();
  if (*(int *)(iVar2 + 0xec8) == 0) {
    return;
  }
  if (5 < param_1) {
    iVar2 = get_work_mode();
    sVar4 = (*(short *)(iVar2 + 0xed8) + 1) * 0x6f;
    uVar5 = param_1 - 6 & 0xff;
    goto LAB_000470b8;
  }
  iVar2 = get_work_mode();
  uVar1 = ((ulonglong)*(ushort *)(iVar2 + 0xed8) << 1) / 9;
  iVar2 = (int)uVar1;
  if (iVar2 == 0) {
LAB_00047096:
    iVar2 = get_work_mode();
    sVar4 = ((short)((param_1 * 0x6f) / 6) + 1) * (*(short *)(iVar2 + 0xed8) + 1);
  }
  else {
    iVar3 = get_work_mode();
    if (*(ushort *)(iVar3 + 0xed8) < 6) goto LAB_00047096;
    iVar3 = get_work_mode();
    sVar4 = ((short)((int)(param_1 * ((uint)*(ushort *)(iVar3 + 0xed8) - iVar2)) / 6) + (short)uVar1
            ) * 0x6f;
  }
  uVar5 = 0;
LAB_000470b8:
  thunk_FUN_0007d77c(6);
  thunk_FUN_0007d77c(0xa9);
  FUN_00047028(sVar4,uVar5);
  jbd_spi_write_register(0x31,4);
  thunk_FUN_0007d77c(0xa3);
  thunk_FUN_0007d77c(0x97);
  FUN_0007d772(1);
  return;
}


