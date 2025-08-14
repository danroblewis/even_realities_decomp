/*
 * Function: FUN_00037108
 * Entry:    00037108
 * Prototype: undefined FUN_00037108()
 */


undefined4 FUN_00037108(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_20004953 = param_1;
  DAT_2001b815 = param_1;
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


