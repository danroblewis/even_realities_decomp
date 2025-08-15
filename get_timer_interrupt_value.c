/*
 * Function: get_timer_interrupt_value
 * Entry:    000635d8
 * Prototype: undefined get_timer_interrupt_value()
 */


undefined4
get_timer_interrupt_value(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (1 < param_1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan >= 0 && chan < (1 + 1)",
                 "WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0xc3,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0xc3);
  }
  return *(undefined4 *)((param_1 + 0x150) * 4 + 0x50015000);
}


