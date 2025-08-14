/*
 * Function: clear_work_mode_flags
 * Entry:    00037234
 * Prototype: undefined clear_work_mode_flags()
 */


void clear_work_mode_flags(void)

{
  DAT_20004955 = 0;
  DAT_2001b814 = 0;
  if (LOG_LEVEL < 3) {
    return;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat(&LAB_000a8ff2_1,&LAB_000a958e_1);
    return;
  }
  DEBUG_PRINT(&LAB_000a8ff2_1,&LAB_000a958e_1,&LAB_000a958e_1,0);
  return;
}


