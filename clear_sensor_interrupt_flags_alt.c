/*
 * Function: clear_sensor_interrupt_flags_alt
 * Entry:    00064fd4
 * Prototype: undefined __stdcall clear_sensor_interrupt_flags_alt(undefined4 unused_param1, undefined4 structure_pointer, undefined4 unused_param2, undefined4 debug_param)
 */


void clear_sensor_interrupt_flags_alt
               (undefined4 param_1,int structure_pointer,undefined4 param_3,undefined4 debug_param)

{
  if (structure_pointer == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","tep",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",99,debug_param);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",99);
  }
  *(undefined4 *)(structure_pointer + 0x80) = 0;
  return;
}


