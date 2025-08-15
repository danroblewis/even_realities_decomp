/*
 * Function: handle_hardware_register_operation
 * Entry:    000669f4
 * Prototype: undefined handle_hardware_register_operation()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
handle_hardware_register_operation(byte *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x1dd,param_4);
    uVar2 = 0x1dd;
LAB_00066a1a:
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",uVar2)
    ;
  }
  if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\x01') {
    if ((HARDWARE_INTERRUPT_TRIGGER_REGISTER != '\0') ||
       (iVar1 = trigger_hardware_interrupt_operation(), iVar1 != 0xbad0007)) {
      _DAT_5002b308 = 1;
      backup_and_restore_hardware_config();
      if (param_2 != 0) {
        set_hardware_register_from_bytes(param_1[1],param_2);
      }
      HARDWARE_INTERRUPT_FLAG_REGISTER = 0;
      _DAT_5002b100 = 0;
      _DAT_5002b634 =
           (uint)param_1[2] << 0xc | (uint)param_1[1] << 8 | (uint)*param_1 |
           (uint)param_1[3] << 0xd | (uint)param_1[4] << 0xe | (uint)param_1[5] << 0xf;
      iVar1 = wait_for_hardware_interrupt_flag_with_timeout();
      if (iVar1 != 0xbad0007) {
        _DAT_5002b100 = 0;
        if (param_3 != 0) {
          extract_hardware_register_bytes(param_1[1],param_3);
        }
        return 0xbad0000;
      }
      if (param_1[4] == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config->wipwait",
                     "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x20a,param_4);
        uVar2 = 0x20a;
        goto LAB_00066a1a;
      }
    }
    uVar2 = 0xbad0007;
  }
  else {
    uVar2 = 0xbad000b;
  }
  return uVar2;
}


