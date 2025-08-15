/*
 * Function: reset_all_static_info
 * Entry:    00016738
 * Prototype: undefined reset_all_static_info()
 */


void reset_all_static_info
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): delete memory_keep_data\n","reset_all_static_info",param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  SYSTEM_STATIC_INFO_RESET_1 = 0;
  SYSTEM_STATIC_INFO_RESET_2 = 0;
  WORK_MODE_TIMESTAMP_OPERATIONS_BUFFER = 0;
  DAT_2007fc04 = 0;
  SYSTEM_STATIC_INFO_RESET_5 = 0;
  DAT_2007fc60 = 0;
  SYSTEM_STATIC_INFO_RESET_6 = 0;
  DAT_2007fc68 = 0;
  fill_memory_buffer(&SYSTEM_STATIC_INFO_RESET_3,0,0x25);
  fill_memory_buffer(&SYSTEM_STATIC_INFO_RESET_4,0,0x25);
  SYSTEM_STATIC_INFO_RESET_7 = 0;
  return;
}


