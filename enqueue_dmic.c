/*
 * Function: enqueue_dmic
 * Entry:    0002ec5c
 * Prototype: undefined enqueue_dmic()
 */


int enqueue_dmic(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_d8 [204];
  
  memcpy(auStack_d8,&DAT_000885cc,200);
  if ((DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE == 8) &&
     (manage_ble_connection_state_comprehensive(&DAT_20007b7c,auStack_d8,0,0), 0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enqueue_dmic num is full, drop it %d\r\n\n","enqueue_dmic",8);
    }
    else {
      handle_heartbeat();
    }
  }
  memcpy(auStack_d8,param_1,200);
  iVar1 = enqueue_message_to_queue(&DAT_20007b7c,auStack_d8,0,0);
  if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enqueue_dmic failed\r\n\n","enqueue_dmic");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}


