/*
 * Function: log_debug_message_with_heartbeat
 * Entry:    00032ef0
 * Prototype: undefined log_debug_message_with_heartbeat()
 */


void log_debug_message_with_heartbeat(undefined4 param_1)

{
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("set testmode is %d \n",param_1);
  }
  else {
    handle_heartbeat();
  }
  DAT_20019ef3 = (char)param_1;
  return;
}


