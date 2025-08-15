/*
 * Function: set_brightness_to_panel_reg
 * Entry:    00046e3c
 * Prototype: undefined set_brightness_to_panel_reg()
 */


void set_brightness_to_panel_reg(uint param_1)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): set brightness level = %d\n","set_brightness_to_panel_reg",param_1);
    }
    else {
      handle_heartbeat();
    }
  }
  thunk_jbd_display_command_handler(6);
  thunk_jbd_display_command_handler(0xa9);
  if (5 < param_1) {
    iVar3 = get_work_mode();
    jbd_spi_write_register((*(short *)(iVar3 + 0xed8) + 1) * 0x6f);
    uVar4 = param_1 - 6 & 0xff;
    goto LAB_00046ea0;
  }
  iVar3 = get_work_mode();
  uVar1 = ((ulonglong)*(ushort *)(iVar3 + 0xed8) << 1) / 9;
  iVar3 = (int)uVar1;
  if (iVar3 == 0) {
LAB_00046e7a:
    iVar3 = get_work_mode();
    sVar2 = ((short)((param_1 * 0x6f) / 6) + 1) * (*(short *)(iVar3 + 0xed8) + 1);
  }
  else {
    iVar5 = get_work_mode();
    if (*(ushort *)(iVar5 + 0xed8) < 6) goto LAB_00046e7a;
    iVar5 = get_work_mode();
    sVar2 = ((short)((int)(param_1 * ((uint)*(ushort *)(iVar5 + 0xed8) - iVar3)) / 6) + (short)uVar1
            ) * 0x6f;
  }
  jbd_spi_write_register(sVar2);
  uVar4 = 0;
LAB_00046ea0:
  send_jbd_display_command_0x46(uVar4);
  jbd_spi_write_register(0x31,4);
  thunk_jbd_display_command_handler(0xa3);
  thunk_jbd_display_command_handler(0x97);
  multiply_by_1000_and_jump(1);
  return;
}


