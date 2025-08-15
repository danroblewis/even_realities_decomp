/*
 * Function: clean_dmic_msgq
 * Entry:    0002ec1c
 * Prototype: undefined clean_dmic_msgq()
 */


int clean_dmic_msgq(void)

{
  int iVar1;
  
  iVar1 = initialize_thread_safety(&DAT_20007b7c);
  if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): dmic cleanup failed\n","clean_dmic_msgq");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}


