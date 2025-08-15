/*
 * Function: set_hardware_interrupt_enable_bit
 * Entry:    00065e10
 * Prototype: undefined __stdcall set_hardware_interrupt_enable_bit(undefined4 bit_position, undefined4 unused_param1, undefined4 unused_param2, undefined4 debug_parameter)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_hardware_interrupt_enable_bit
               (uint bit_position,undefined4 param_2,undefined4 param_3,undefined4 debug_parameter)

{
  if (DAT_2000b328 != '\x01') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x6c,debug_parameter);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x6c);
  }
  _DAT_5002a304 = 1 << (bit_position & 0xff);
  return;
}


