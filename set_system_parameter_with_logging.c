/*
 * Function: set_system_parameter_with_logging
 * Entry:    00037108
 * Prototype: undefined set_system_parameter_with_logging()
 */


undefined4
set_system_parameter_with_logging
          (byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CURRENT_STOCK_ID = param_1;
  SYSTEM_PARAMETER_LOGGING_BUFFER = param_1;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a95c8_1,&LAB_000a95c8_1,(uint)param_1,param_4);
    }
    else {
      handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a95c8_1);
    }
  }
  return 0;
}


