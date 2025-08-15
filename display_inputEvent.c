/*
 * Function: display_inputEvent
 * Entry:    00049938
 * Prototype: undefined display_inputEvent()
 */


undefined4 display_inputEvent(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 local_26;
  undefined1 local_24;
  undefined1 local_23;
  
  fill_memory_buffer(&uStack_27,0,0x17);
  local_28 = 5;
  local_26 = 2;
  local_24 = param_1;
  local_23 = param_2;
  iVar1 = enqueue_message_to_queue(&DAT_200038c4,&local_28,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send display input event command.......\n","display_inputEvent");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","display_inputEvent");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


