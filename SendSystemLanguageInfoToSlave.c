/*
 * Function: SendSystemLanguageInfoToSlave
 * Entry:    00048998
 * Prototype: undefined SendSystemLanguageInfoToSlave()
 */


undefined4 SendSystemLanguageInfoToSlave(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 local_26;
  undefined1 local_24;
  
  fill_memory_buffer(&uStack_27,0,0x17);
  local_28 = 5;
  local_24 = (undefined1)param_1;
  local_26 = 1;
  iVar1 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_28,0,0);
  if (iVar1 == 0) {
    uVar4 = 0;
    if (2 < LOG_LEVEL) {
      uVar3 = param_1 - 1;
      if (IS_DEBUG == 0) {
        if ((uVar3 & 0xff) < 0x11) {
          pcVar2 = *(char **)(&DAT_200024f4 + uVar3 * 4);
        }
        else {
          pcVar2 = "unknown";
        }
        DEBUG_PRINT("%s(): send APP Language infomation to slave . app language = %s\n",
                    "SendSystemLanguageInfoToSlave",pcVar2);
      }
      else {
        if ((uVar3 & 0xff) < 0x11) {
          pcVar2 = *(char **)(&DAT_200024f4 + uVar3 * 4);
        }
        else {
          pcVar2 = "unknown";
        }
        handle_heartbeat("%s(): send APP Language infomation to slave . app language = %s\n",
                         "SendSystemLanguageInfoToSlave",pcVar2);
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","SendSystemLanguageInfoToSlave");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


