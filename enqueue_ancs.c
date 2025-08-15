/*
 * Function: enqueue_ancs
 * Entry:    00018bb4
 * Prototype: undefined enqueue_ancs()
 */


int enqueue_ancs(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1bc [436];
  
  fill_memory_buffer(auStack_1bc,0,0x1b4);
  if (DAT_20006a7c == 0) {
    iVar1 = 1;
  }
  else {
    if (DAT_20006a90 == 10) {
      manage_ble_connection_state_comprehensive(&DAT_20006a6c,auStack_1bc,0,0);
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("enqueue ancs drop package! \n");
      }
      else {
        handle_heartbeat();
      }
    }
    memcpy(auStack_1bc,param_1,0x1b4);
    iVar1 = enqueue_message_to_queue(&DAT_20006a6c,auStack_1bc,0,0);
    if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): en ancs F\n","enqueue_ancs");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return iVar1;
}


