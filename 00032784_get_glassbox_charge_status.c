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
                  (uint)(DAT_20019ef4 >> 7));
    }
    else {
      handle_heartbeat();
    }
  }
  return DAT_20019ef4 >> 7;
}


