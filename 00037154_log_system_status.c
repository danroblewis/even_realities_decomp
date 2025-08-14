/*
 * Function: log_system_status
 * Entry:    00037154
 * Prototype: undefined log_system_status()
 */


void log_system_status(void)

{
  DAT_20004953 = 0;
  DAT_2001b815 = 0;
  if (LOG_LEVEL < 3) {
    return;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a95b8);
    return;
  }
  DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a95b8,&LAB_000a95b8,0);
  return;
}


