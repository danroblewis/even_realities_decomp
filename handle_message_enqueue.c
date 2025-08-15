/*
 * Function: handle_message_enqueue
 * Entry:    00017eec
 * Prototype: undefined handle_message_enqueue()
 */


int handle_message_enqueue(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_114;
  undefined1 auStack_113 [263];
  
  fill_memory_buffer(&local_114,0,0x101);
  if (MESSAGE_ENQUEUE_HANDLER_STATE == 0x30) {
    manage_ble_connection_state_comprehensive(&DAT_200038f8,&local_114,0,0);
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("enqueue_bt_data drop package! \n");
    }
    else {
      handle_heartbeat();
    }
  }
  local_114 = param_2;
  memcpy(auStack_113,param_1,0x100);
  iVar1 = enqueue_message_to_queue(&DAT_200038f8,&local_114,0,0);
  if (iVar1 != 0) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("enqueue_bt_data failed !\n");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}


