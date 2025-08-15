/*
 * Function: upgradeDashboardStartupModeInfoToFlash
 * Entry:    00023bfc
 * Prototype: undefined upgradeDashboardStartupModeInfoToFlash()
 */


undefined4
upgradeDashboardStartupModeInfoToFlash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  uint local_14;
  undefined4 uStack_10;
  
  local_18 = 0x10003;
  local_14 = CONCAT31((int3)((uint)param_2 >> 8),(char)param_1) & 0xffff00ff;
  uStack_10 = param_3;
  iVar1 = enqueue_message_to_queue(&DAT_20003994,&local_18,0,0);
  if (iVar1 == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send startup mode  store Command, mode = %d\n",
                    "upgradeDashboardStartupModeInfoToFlash",param_1);
      }
      else {
        handle_heartbeat();
      }
    }
    z_spin_lock_valid(&DAT_200079e4);
    uVar2 = 0;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): setting flash store queue fill failed\r\n\n",
                    "upgradeDashboardStartupModeInfoToFlash");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


