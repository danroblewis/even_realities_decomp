/*
 * Function: send_response_data_to_msgqueue
 * Entry:    00047b1c
 * Prototype: undefined send_response_data_to_msgqueue()
 */


undefined4 send_response_data_to_msgqueue(int param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined1 auStack_24 [24];
  
  pcVar1 = (char *)get_work_mode();
  if (*pcVar1 == '\x02') {
LAB_00047b2e:
    uVar2 = 0;
  }
  else {
    fill_memory_buffer(auStack_28,0,0x18);
    if (param_2 < 0x15) {
      if (param_1 != 0) {
        memcpy(auStack_24,param_1,param_2);
        local_26 = (undefined2)param_2;
      }
      iVar3 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,auStack_28,0,0);
      if (iVar3 == 0) goto LAB_00047b2e;
      DEBUG_PRINT("message queue send failed %s\r\n","send_response_data_to_msgqueue");
    }
    else if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send data length more than %d,can\'t load it,exit ...\n",
                    "send_response_data_to_msgqueue",0x14);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


