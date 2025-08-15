/*
 * Function: SendDashboardLockInfoToApp
 * Entry:    00025e2c
 * Prototype: undefined SendDashboardLockInfoToApp()
 */


void SendDashboardLockInfoToApp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 extraout_var;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_0007ca4e(&DASHBOARD_LOCK_STATUS);
  if ((((iVar1 << 0x1e < 0) && (iVar1 = FUN_0007ca4e(&DAT_20007aa0), -1 < iVar1 << 0x1e)) &&
      (iVar1 = FUN_0007ca4e(&DASHBOARD_LOCK_CONTROL), -1 < iVar1 << 0x1e)) &&
     (iVar1 = FUN_0007ca4e(&DASHBOARD_LOCK_STATUS), iVar1 << 0x1e < 0)) {
    local_10 = CONCAT22(extraout_var,0x650);
    local_c = CONCAT22(local_c._2_2_,0x101);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send dashboard lock info to app ,status = %d\n \n",
                    "SendDashboardLockInfoToApp",1);
      }
      else {
        handle_heartbeat();
      }
    }
    send_response_data_to_msgqueue(&local_10,6);
    enqueue_message_to_queue_with_work_mode_check();
    DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL | 2;
  }
  return;
}


