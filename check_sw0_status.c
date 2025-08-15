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
    SW0_STATUS_CHECK_BUFFER = SW0_STATUS_CHECK_BUFFER + 1;
    if (3 < SW0_STATUS_CHECK_BUFFER) {
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
    SW0_STATUS_CHECK_BUFFER = 0;
  }
  return;
}


