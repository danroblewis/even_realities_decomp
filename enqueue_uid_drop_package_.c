/*
 * Function: enqueue_uid_drop_package_
 * Entry:    00018e48
 * Prototype: undefined enqueue_uid_drop_package_()
 */


int enqueue_uid_drop_package_(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  uStack_14 = 0;
  if (UID_DROP_PACKAGE_ENQUEUING_AND_DEQUEUING == 0) {
    iVar1 = 1;
  }
  else {
    uStack_10 = param_3;
    if (UID_DROP_PACKAGE_ENQUEUE_STATE == 10) {
      manage_ble_connection_state_comprehensive(&DAT_20006a38,&local_18,0,0);
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("enqueue uid drop package! \n");
      }
      else {
        handle_heartbeat();
      }
    }
    local_18 = *param_1;
    uStack_14 = param_1[1];
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): local_data uid %d\n","enqueue_uid",local_18);
      }
      else {
        handle_heartbeat();
      }
    }
    iVar1 = enqueue_message_to_queue(&DAT_20006a38,&local_18,0,0);
    if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): en uid F\n","enqueue_uid");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return iVar1;
}


