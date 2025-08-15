/*
 * Function: handle_timer_interrupt_callback
 * Entry:    00063778
 * Prototype: undefined handle_timer_interrupt_callback(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


void handle_timer_interrupt_callback
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan > 0 && chan < (1 + 1)",
                 "WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0x18d,param_1,param_2,param_3,
                 param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0x18d);
  }
  manage_hardware_timer();
  return;
}


