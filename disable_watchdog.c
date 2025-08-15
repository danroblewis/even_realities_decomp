/*
 * Function: disable_watchdog
 * Entry:    0002aeb4
 * Prototype: undefined disable_watchdog()
 */


int disable_watchdog(void)

{
  undefined4 in_r3;
  int iVar1;
  int iVar2;
  
  if (DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE < 0) {
    if (3 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): watchdog is disabled\n","disable_watchdog",
                    DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE,0
                    ,in_r3);
      }
      else {
        handle_heartbeat();
      }
    }
LAB_0002aed6:
    iVar1 = 0;
  }
  else {
    iVar2 = 5;
    do {
      if (3 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): disable watchdog...\n","disable_watchdog");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar1 = execute_callback_and_update_state_on_success(&HARDWARE_OPERATION_MESSAGE);
      if (iVar1 == 0) {
        DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE = -0x10;
        goto LAB_0002aed6;
      }
      calculate_ble_schedule_timing(0x667,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}


