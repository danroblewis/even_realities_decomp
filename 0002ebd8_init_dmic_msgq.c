/*
 * Function: init_dmic_msgq
 * Entry:    0002ebd8
 * Prototype: undefined init_dmic_msgq()
 */


int init_dmic_msgq(void)

{
  int iVar1;
  
  iVar1 = FUN_00086448(&DAT_20007b7c,200,8);
  if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): dmic init failed\n","init_dmic_msgq");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}


