/*
 * Function: log_timeout_message_states_for_debugging
 * Entry:    00033b0c
 * Prototype: undefined log_timeout_message_states_for_debugging()
 */


void log_timeout_message_states_for_debugging
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY;
  do {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("normal g_arrMsgContent[%d].uidTail is %d %d recvTime %d\n",iVar1,puVar2[2],
                  puVar2[1],*puVar2,param_2,param_3);
    }
    else {
      handle_heartbeat("normal g_arrMsgContent[%d].uidTail is %d %d recvTime %d\n");
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x6d;
  } while (iVar1 != 10);
  return;
}


