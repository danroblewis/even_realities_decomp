/*
 * Function: set_system_parameter_with_logging_alt
 * Entry:    000371e8
 * Prototype: undefined set_system_parameter_with_logging_alt()
 */


undefined4
set_system_parameter_with_logging_alt
          (byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CURRENT_NEWS_INDEX = param_1;
  WORK_MODE_FLAGS = param_1;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a959e,&LAB_000a959e,(uint)param_1,param_4);
    }
    else {
      handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a959e);
    }
  }
  return 0;
}


