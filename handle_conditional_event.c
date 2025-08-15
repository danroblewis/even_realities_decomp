/*
 * Function: handle_conditional_event
 * Entry:    00017768
 * Prototype: undefined handle_conditional_event()
 */


void handle_conditional_event(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 1 << (param_2 & 0xff);
  if ((uVar1 & **(uint **)(param_1 + 4)) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(cfg->port_pin_mask & (gpio_port_pins_t)(1UL << (pin))) != 0U",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x64f);
    DEBUG_PRINT2("\tUnsupported pin\n");
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x64f);
  }
  if ((uVar1 & **(uint **)(param_1 + 0x10)) != 0) {
    param_3 = param_3 ^ 1;
  }
  if (param_3 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x000177ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


