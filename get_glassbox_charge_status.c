/*
 * Function: get_glassbox_charge_status
 * Entry:    00032784
 * Prototype: undefined get_glassbox_charge_status()
 */


byte get_glassbox_charge_status(void)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): bIsCharging is :%d \n\n","get_glassbox_charge_status",
                  (uint)(GLASSBOX_CHARGE_STATUS_AND_SENSOR_BITS >> 7));
    }
    else {
      handle_heartbeat();
    }
  }
  return GLASSBOX_CHARGE_STATUS_AND_SENSOR_BITS >> 7;
}


