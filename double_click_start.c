/*
 * Function: double_click_start
 * Entry:    00048a3c
 * Prototype: undefined double_click_start()
 */


undefined4 double_click_start(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 local_26;
  undefined1 local_24;
  
  fill_memory_buffer(&uStack_27,0,0x17);
  local_28 = 6;
  local_24 = (undefined1)param_1;
  local_26 = 1;
  iVar1 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_28,0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if (2 < LOG_LEVEL) {
      pcVar2 = "Head-up startup";
      if (IS_DEBUG == 0) {
        if (param_1 == 1) {
          pcVar2 = "double click start ";
        }
        DEBUG_PRINT("%s(): send dashboard startup mode to slave . startup mode  = %s\n",
                    "SendDashBoardStartupModeInfoToSlave",pcVar2);
      }
      else {
        if (param_1 == 1) {
          pcVar2 = "double click start ";
        }
        handle_heartbeat("%s(): send dashboard startup mode to slave . startup mode  = %s\n",
                         "SendDashBoardStartupModeInfoToSlave",pcVar2);
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","SendDashBoardStartupModeInfoToSlave");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


