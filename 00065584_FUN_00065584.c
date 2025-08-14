/*
 * Function: FUN_00065584
 * Entry:    00065584
 * Prototype: undefined FUN_00065584()
 */


undefined4
FUN_00065584(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint extraout_r2;
  undefined8 uVar2;
  
  uVar2 = FUN_000850f6(*param_1,param_1,*param_1,param_4,param_4);
  if ((int)uVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
    uVar1 = 0x32f;
LAB_000655a4:
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",uVar1);
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


