/*
 * Function: get_glassbox_charge_percent
 * Entry:    000327c4
 * Prototype: undefined get_glassbox_charge_percent()
 */


byte get_glassbox_charge_percent(void)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): batterPercent is :%d \n\n","get_glassbox_charge_percent",
                  GLASSBOX_CHARGE_STATUS_AND_SENSOR_BITS & 0x7f);
    }
    else {
      handle_heartbeat();
    }
  }
  return GLASSBOX_CHARGE_STATUS_AND_SENSOR_BITS & 0x7f;
}


