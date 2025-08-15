/*
 * Function: cleanup_hardware_interrupt_configuration
 * Entry:    00066b24
 * Prototype: undefined cleanup_hardware_interrupt_configuration()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cleanup_hardware_interrupt_configuration(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_r3;
  
  if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2b1,in_r3);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2b1)
    ;
  }
  process_data_with_callback_and_parameter_alt3(0x2b);
  reset_hardware_interrupt_registers();
  uVar5 = _DAT_5002b53c;
  uVar4 = _DAT_5002b538;
  uVar3 = _DAT_5002b534;
  uVar2 = _DAT_5002b530;
  uVar1 = _DAT_5002b528;
  if (DAT_2000b382 == '\0') {
    set_interrupt_priority_level_wrapper(_DAT_5002b524 & 0xff);
    set_interrupt_priority_level_wrapper(uVar1 & 0xff);
    set_interrupt_priority_level_wrapper(uVar2 & 0xff);
    set_interrupt_priority_level_wrapper(uVar3 & 0xff);
    if ((uVar4 & 0xff) != 0xff) {
      set_interrupt_priority_level_wrapper(uVar4 & 0xff);
    }
    if ((uVar5 & 0xff) != 0xff) {
      set_interrupt_priority_level_wrapper(uVar5 & 0xff);
    }
  }
  HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER = 0;
  return;
}


