/*
 * Function: display_DelayClose
 * Entry:    000498c0
 * Prototype: undefined display_DelayClose()
 */


undefined4 display_DelayClose(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined2 local_1e;
  undefined4 local_1c;
  
  fill_memory_buffer(&uStack_1f,0,0x17);
  local_20 = 4;
  local_1e = 4;
  local_1c = param_1;
  iVar1 = enqueue_message_to_queue(&DAT_200038c4,&local_20,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send display delay close command.......\n","display_DelayClose");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","display_DelayClose");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


