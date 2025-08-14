/*
 * Function: FUN_0003719c
 * Entry:    0003719c
 * Prototype: undefined FUN_0003719c()
 */


undefined1 FUN_0003719c(void)

{
  DAT_20004955 = DAT_2001b814;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a95aa_1);
    }
    else {
      handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a95aa_1);
    }
  }
  return DAT_20004955;
}


