/*
 * Function: FUN_00067548
 * Entry:    00067548
 * Prototype: undefined FUN_00067548()
 */


void FUN_00067548(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 >> 5 == 0) {
    if ((int)((0xffffffffU >> (param_1 & 0xff)) << 0x1f) < 0) {
      iVar1 = 0x50842500;
      goto LAB_00067576;
    }
  }
  else if ((param_1 >> 5 == 1) &&
          (param_1 = param_1 & 0x1f, (int)((0xffffU >> param_1) << 0x1f) < 0)) {
    iVar1 = 0x50842800;
LAB_00067576:
    iVar1 = iVar1 + param_1 * 4;
    *(uint *)(iVar1 + 0x200) =
         param_4 << 8 | param_3 << 2 | param_2 << 1 | *(uint *)(iVar1 + 0x200) & 0xfffcf0f0;
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
               "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
}


