/*
 * Function: set_hardware_interrupt_enable_bit_alt
 * Entry:    00065e4c
 * Prototype: undefined set_hardware_interrupt_enable_bit_alt()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_hardware_interrupt_enable_bit_alt
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_2000b328 != '\x01') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x72,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x72);
  }
  _DAT_5002a308 = 1 << (param_1 & 0xff);
  return;
}


