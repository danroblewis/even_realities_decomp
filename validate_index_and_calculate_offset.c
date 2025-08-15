/*
 * Function: validate_index_and_calculate_offset
 * Entry:    000655ec
 * Prototype: undefined __stdcall validate_index_and_calculate_offset(undefined4 index_value, undefined4 unused_param1, undefined4 unused_param2, undefined4 debug_parameter)
 */


int validate_index_and_calculate_offset
              (uint index_value,undefined4 param_2,undefined4 param_3,undefined4 debug_parameter)

{
  if (7 < index_value) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","index < 8",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpiote.h",0x2aa,debug_parameter);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpiote.h",0x2aa);
  }
  return index_value * 4 + 0x100;
}


