/*
 * Function: set_interrupt_priority_level
 * Entry:    0006666c
 * Prototype: undefined set_interrupt_priority_level()
 */


void set_interrupt_priority_level(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 >> 5 == 0) {
    if ((int)((0xffffffffU >> (param_1 & 0xff)) << 0x1f) < 0) {
      iVar1 = 0x50842500;
      goto LAB_0006669a;
    }
  }
  else if ((param_1 >> 5 == 1) &&
          (param_1 = param_1 & 0x1f, (int)((0xffffU >> param_1) << 0x1f) < 0)) {
    iVar1 = 0x50842800;
LAB_0006669a:
    iVar1 = iVar1 + param_1 * 4;
    *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | param_2 << 8 | 2;
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
               "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f,param_4);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
}


