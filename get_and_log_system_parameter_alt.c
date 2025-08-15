/*
 * Function: get_and_log_system_parameter_alt
 * Entry:    0003719c
 * Prototype: undefined get_and_log_system_parameter_alt()
 */


undefined1 get_and_log_system_parameter_alt(void)

{
  CURRENT_NEWS_INDEX = WORK_MODE_FLAGS;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a95aa_1);
    }
    else {
      handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a95aa_1);
    }
  }
  return CURRENT_NEWS_INDEX;
}


