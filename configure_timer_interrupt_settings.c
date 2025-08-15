/*
 * Function: configure_timer_interrupt_settings
 * Entry:    00063570
 * Prototype: undefined configure_timer_interrupt_settings()
 */


int configure_timer_interrupt_settings
              (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (1 < param_1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan >= 0 && chan < (1 + 1)",
                 "WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0x86,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0x86);
  }
  return param_1 * 4 + 0x50015140;
}


