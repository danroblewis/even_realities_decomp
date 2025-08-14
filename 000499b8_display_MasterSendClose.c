/*
 * Function: display_MasterSendClose
 * Entry:    000499b8
 * Prototype: undefined display_MasterSendClose()
 */


undefined4 display_MasterSendClose(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 auStack_1f [23];
  
  fill_memory_buffer(auStack_1f,0,0x17);
  local_20 = 6;
  iVar1 = enqueue_message_to_queue(&DAT_200038c4,&local_20,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send display delay close command.......\n","display_MasterSendClose");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","display_MasterSendClose");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


