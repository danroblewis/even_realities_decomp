/*
 * Function: handle_hardware_interrupt_trigger
 * Entry:    00066bc4
 * Prototype: undefined handle_hardware_interrupt_trigger()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int handle_hardware_interrupt_trigger
              (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER;
  if (uVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2e8,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2e8)
    ;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    if (HARDWARE_CONFIGURATION_AND_INTERRUPT_HANDLING_MANAGER == 0) {
      HARDWARE_INTERRUPT_FLAG_REGISTER = 0;
      _DAT_5002b51c = param_2;
      _DAT_5002b520 = param_1;
      if ((HARDWARE_INTERRUPT_TRIGGER_REGISTER != '\0') ||
         (iVar1 = trigger_hardware_interrupt_operation(1), iVar1 != 0xbad0007)) {
        _DAT_5002b100 = 0;
        _DAT_5002b00c = 1;
        iVar1 = wait_for_hardware_interrupt_flag_with_timeout();
        return iVar1;
      }
    }
    else if (uVar2 == 1) {
      HARDWARE_INTERRUPT_FLAG_REGISTER = 0;
      HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER = 4;
      _DAT_5002b100 = uVar3;
      _DAT_5002b304 = uVar2;
      if (HARDWARE_INTERRUPT_TRIGGER_REGISTER == '\0') {
        _DAT_5002b51c = param_2;
        _DAT_5002b520 = param_1;
        trigger_hardware_interrupt_operation(0);
      }
      else {
        _DAT_5002b00c = 1;
        _DAT_5002b51c = param_2;
        _DAT_5002b520 = param_1;
      }
      iVar1 = 0xbad0000;
    }
    else {
      iVar1 = 0xbad000b;
    }
  }
  else {
    iVar1 = 0xbad000a;
  }
  return iVar1;
}


