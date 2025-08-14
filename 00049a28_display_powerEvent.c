/*
 * Function: display_powerEvent
 * Entry:    00049a28
 * Prototype: undefined display_powerEvent()
 */


undefined4 display_powerEvent(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [28];
  
  fill_memory_buffer(local_28,0,0x18);
  if (param_1 == 1) {
    local_28[0] = 7;
  }
  else {
    local_28[0] = 8;
  }
  iVar1 = enqueue_message_to_queue(&DAT_200038c4,local_28,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send display power event command , low_power_en = %d\n",
                    "display_powerEvent",param_1);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","display_powerEvent");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


