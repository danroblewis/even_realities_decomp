/*
 * Function: SlaveDoubleClickEventInject
 * Entry:    00048ad4
 * Prototype: undefined SlaveDoubleClickEventInject()
 */


undefined4 SlaveDoubleClickEventInject(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 auStack_1f [23];
  
  fill_memory_buffer(auStack_1f,0,0x17);
  local_20 = 7;
  iVar1 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_20,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): received slave send double click event ,boot or close dashboard function\n"
                    ,"SlaveDoubleClickEventInject");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","SlaveDoubleClickEventInject");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


