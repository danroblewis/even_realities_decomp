/*
 * Function: set_timer_interrupt_flag
 * Entry:    00063898
 * Prototype: undefined set_timer_interrupt_flag()
 */


void set_timer_interrupt_flag(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 1) {
    DAT_2000b2d4 = DAT_2000b2d4 | 2;
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan > 0 && chan < (1 + 1)",
               "WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",599,param_4);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",599);
}


