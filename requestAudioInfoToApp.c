/*
 * Function: requestAudioInfoToApp
 * Entry:    00048840
 * Prototype: undefined requestAudioInfoToApp()
 */


undefined4 requestAudioInfoToApp(undefined1 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined2 local_1e;
  undefined1 local_1c;
  
  fill_memory_buffer(&uStack_1f,0,0x17);
  local_20 = 3;
  local_1e = 1;
  local_1c = param_1;
  iVar1 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_20,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): requestAudioInfoToApp ...\n","requestAudioInfoToApp");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","requestAudioInfoToApp");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


