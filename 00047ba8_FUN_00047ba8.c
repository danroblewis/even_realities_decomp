/*
 * Function: FUN_00047ba8
 * Entry:    00047ba8
 * Prototype: undefined FUN_00047ba8()
 */


undefined4 FUN_00047ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  pcVar1 = (char *)get_work_mode();
  if (*pcVar1 != '\x02') {
    fill_memory_buffer((int)&local_20 + 1,0,0x17);
    local_20 = CONCAT31(local_20._1_3_,1);
    iVar2 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_20,0,0);
    if (iVar2 != 0) {
      DEBUG_PRINT("message queue send failed %s\r\n","send_response_data_to_ble");
      return 0xffffffff;
    }
  }
  return 0;
}


