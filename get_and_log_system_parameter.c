/*
 * Function: get_and_log_system_parameter
 * Entry:    000370bc
 * Prototype: undefined get_and_log_system_parameter()
 */


undefined1 get_and_log_system_parameter(void)

{
  CURRENT_STOCK_ID = DAT_2001b815;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a95d8);
    }
    else {
      handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a95d8);
    }
  }
  return CURRENT_STOCK_ID;
}


