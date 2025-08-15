/*
 * Function: log_notification_data
 * Entry:    0004a3d0
 * Prototype: undefined __stdcall log_notification_data(undefined4 log_tag, undefined4 notification_data, undefined4 unused1, undefined4 unused2)
 */


void log_notification_data
               (undefined4 param_1,int notification_data,undefined4 param_3,undefined4 unused2)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r2_00;
  
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("app_identifier:(%s)\n",notification_data + 0x10);
  }
  else {
    handle_heartbeat();
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("message:(%s)\n",notification_data + 0x90);
    uVar1 = extraout_r2_00;
  }
  else {
    handle_heartbeat();
    uVar1 = extraout_r2;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat();
    return;
  }
  DEBUG_PRINT("uid :(%d)\n",*(undefined4 *)(notification_data + 8),uVar1,unused2);
  return;
}


