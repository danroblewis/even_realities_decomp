/*
 * Function: process_data_with_validation_and_error_handling
 * Entry:    00065584
 * Prototype: undefined __stdcall process_data_with_validation_and_error_handling(undefined4 data_pointer, undefined4 data_value, undefined4 data_value2, undefined4 debug_parameter)
 */


undefined4
process_data_with_validation_and_error_handling
          (undefined4 *data_pointer,undefined4 param_2,undefined4 param_3,undefined4 debug_parameter
          )

{
  undefined4 uVar1;
  uint extraout_r2;
  undefined8 uVar2;
  
  uVar2 = perform_bit_manipulation_operation
                    (*data_pointer,data_pointer,*data_pointer,debug_parameter,debug_parameter);
  if ((int)uVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
    uVar1 = 0x32f;
LAB_000655a4:
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",uVar1);
  }
  *(uint *)((ulonglong)uVar2 >> 0x20) = extraout_r2 & 0x1f;
  if (extraout_r2 >> 5 == 0) {
    uVar1 = 0x50842500;
  }
  else {
    if (extraout_r2 >> 5 != 1) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x338);
      uVar1 = 0x338;
      goto LAB_000655a4;
    }
    uVar1 = 0x50842800;
  }
  return uVar1;
}


