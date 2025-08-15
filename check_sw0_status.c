/*
 * Function: check_sw0_status
 * Entry:    0002a868
 * Prototype: undefined check_sw0_status()
 */


void check_sw0_status(void)

{
  int iVar1;
  
  iVar1 = call_validated_event_handler_9();
  if (iVar1 == 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): interrupt line low!!!\n","check_sw0_status");
      }
      else {
        handle_heartbeat();
      }
    }
    DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE =
         DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE + 1;
    if (3 < DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): interrupt line abnormal, now reset\n","check_sw0_status");
        }
        else {
          handle_heartbeat();
        }
      }
      initialize_sensor_system();
      return;
    }
  }
  else {
    DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE = 0;
  }
  return;
}


