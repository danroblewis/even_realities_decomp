/*
 * Function: check_sw0_status
 * Entry:    0002a868
 * Prototype: undefined check_sw0_status()
 */


void check_sw0_status(void)

{
  int iVar1;
  
  iVar1 = FUN_00017e30();
  if (iVar1 == 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): interrupt line low!!!\n","check_sw0_status");
      }
      else {
        handle_heartbeat();
      }
    }
    DAT_20007af0 = DAT_20007af0 + 1;
    if (3 < DAT_20007af0) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): interrupt line abnormal, now reset\n","check_sw0_status");
        }
        else {
          handle_heartbeat();
        }
      }
      FUN_00030c90();
      return;
    }
  }
  else {
    DAT_20007af0 = 0;
  }
  return;
}


