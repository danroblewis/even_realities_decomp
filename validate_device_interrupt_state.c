/*
 * Function: validate_device_interrupt_state
 * Entry:    00061f64
 * Prototype: undefined validate_device_interrupt_state()
 */


undefined4
validate_device_interrupt_state
          (uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 >> 5 == 0) {
    if ((int)((0xffffffffU >> (uVar2 & 0xff)) << 0x1f) < 0) {
      uVar1 = 0x50842500;
      goto LAB_00061fa8;
    }
  }
  else if ((uVar2 >> 5 == 1) && (uVar2 = uVar2 & 0x1f, (int)((0xffffU >> uVar2) << 0x1f) < 0)) {
    uVar1 = 0x50842800;
LAB_00061fa8:
    *param_1 = uVar2;
    return uVar1;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
               "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f,param_4);
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
}


