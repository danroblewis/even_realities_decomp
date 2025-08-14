/*
 * Function: FUN_000371e8
 * Entry:    000371e8
 * Prototype: undefined FUN_000371e8()
 */


undefined4 FUN_000371e8(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_20004955 = param_1;
  DAT_2001b814 = param_1;
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


