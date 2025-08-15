/*
 * Function: set_sensor_interrupt_flags_alt
 * Entry:    00064f78
 * Prototype: undefined __stdcall set_sensor_interrupt_flags_alt(undefined4 flags, undefined4 structure_pointer, undefined4 unused_param, undefined4 debug_param)
 */


void set_sensor_interrupt_flags_alt
               (uint flags,int structure_pointer,undefined4 param_3,undefined4 debug_param)

{
  if (structure_pointer == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","tep",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",0x4a,debug_param);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",0x4a)
    ;
  }
  *(uint *)(structure_pointer + 0x80) = flags | 0x80000000;
  return;
}


