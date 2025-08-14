/*
 * Function: FUN_000370bc
 * Entry:    000370bc
 * Prototype: undefined FUN_000370bc()
 */


undefined1 FUN_000370bc(void)

{
  DAT_20004953 = DAT_2001b815;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a95d8);
    }
    else {
      handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a95d8);
    }
  }
  return DAT_20004953;
}


