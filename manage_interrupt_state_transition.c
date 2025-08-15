/*
 * Function: manage_interrupt_state_transition
 * Entry:    00066214
 * Prototype: undefined manage_interrupt_state_transition()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 manage_interrupt_state_transition(void)

{
  undefined4 in_r3;
  
  if (INTERRUPT_CONFIGURATION_AND_STATE_MANAGEMENT == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.drv_state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0xdd,in_r3);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0xdd);
  }
  if (INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE == '\0') {
    INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE = '\x02';
    INTERRUPT_STATE_TRANSITION_MANAGEMENT_STATE = 1;
    _DAT_e000e204 = 0x40;
  }
  else if (INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE != '\x01') {
    return 0xbad000b;
  }
  return 0xbad0000;
}


