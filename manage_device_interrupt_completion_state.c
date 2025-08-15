/*
 * Function: manage_device_interrupt_completion_state
 * Entry:    00066300
 * Prototype: undefined manage_device_interrupt_completion_state()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 manage_device_interrupt_completion_state(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_r3;
  
  if (INTERRUPT_CONFIGURATION_AND_STATE_MANAGEMENT == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.drv_state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0x132,in_r3);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0x132);
  }
  bVar1 = INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE;
  uVar2 = (uint)INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE;
  if (INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE == 1) {
    INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE = 3;
    INTERRUPT_CONFIGURATION_AND_STATE_MANAGEMENT = bVar1;
    _DAT_50026004 = uVar2;
  }
  else {
    if ((INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE != 0) &&
       (INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE != 2)) {
      return 0xbad000b;
    }
    _DAT_50026500 = 0;
    INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE = 0;
  }
  return 0xbad0000;
}


