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
  DAT_2007fc08 = 0;
  DAT_2007fc0c = 0;
  DAT_2007fc00 = 0;
  DAT_2007fc04 = 0;
  DAT_2007fc5f = 0;
  DAT_2007fc60 = 0;
  DAT_2007fc62 = 0;
  DAT_2007fc68 = 0;
  fill_memory_buffer(&DAT_2007fc10,0,0x25);
  fill_memory_buffer(&DAT_2007fc35,0,0x25);
  DAT_2007fc64 = 0;
  return;
}


