/*
 * Function: FUN_00017858
 * Entry:    00017858
 * Prototype: undefined FUN_00017858()
 */


void FUN_00017858(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((param_2 & 0x600000) == 0x600000) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(flags & ((1U << 21) | (1U << 22))) != ((1U << 21) | (1U << 22))",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x36a);
    DEBUG_PRINT2("\tCannot both enable and disable interrupts\n");
    uVar2 = 0x36a;
  }
  else if ((param_2 & 0x600000) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(flags & ((1U << 21) | (1U << 22))) != 0U",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x36e);
    DEBUG_PRINT2("\tMust either enable or disable interrupts\n");
    uVar2 = 0x36e;
  }
  else if ((param_2 & 0x6400000) == 0x400000) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "((flags & (1U << 22)) == 0) || ((flags & ((1U << 25) | (1U << 26))) != 0)",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x378);
    DEBUG_PRINT2("\tAt least one of GPIO_INT_LOW_0, GPIO_INT_HIGH_1 has to be enabled.\n");
    uVar2 = 0x378;
  }
  else {
    uVar3 = 1 << (uint)*(byte *)(param_1 + 1);
    if ((uVar3 & **(uint **)(iVar1 + 4)) != 0) {
      if (((int)(param_2 << 8) < 0) && ((uVar3 & **(uint **)(iVar1 + 0x10)) != 0)) {
        param_2 = param_2 ^ 0x6000000;
      }
                    /* WARNING: Could not recover jumptable at 0x00017912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(iVar1 + 8) + 0x18))
                (iVar1,(uint)*(byte *)(param_1 + 1),param_2 & 0x1600000,param_2 & 0x6000000);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(cfg->port_pin_mask & (gpio_port_pins_t)(1UL << (pin))) != 0U",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x382);
    DEBUG_PRINT2("\tUnsupported pin\n");
    uVar2 = 0x382;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",uVar2);
}


