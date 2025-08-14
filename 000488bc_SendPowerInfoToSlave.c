/*
 * Function: SendPowerInfoToSlave
 * Entry:    000488bc
 * Prototype: undefined SendPowerInfoToSlave()
 */


undefined4 SendPowerInfoToSlave(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined2 local_2e;
  undefined1 local_2c;
  
  fill_memory_buffer(&uStack_2f,0,0x17);
  local_30 = 4;
  local_2c = (undefined1)param_1;
  local_2e = 1;
  iVar3 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_30,0,0);
  if (iVar3 == 0) {
    uVar5 = 0;
    if (2 < LOG_LEVEL) {
      pcVar4 = "battery value > 20";
      if (IS_DEBUG == 0) {
        if (param_1 == 1) {
          pcVar4 = "lower power";
        }
        DEBUG_PRINT("%s(): send power infomation to slave . power status = %s\n",
                    "SendPowerInfoToSlave",pcVar4);
      }
      else {
        if (param_1 == 1) {
          pcVar4 = "lower power";
        }
        handle_heartbeat("%s(): send power infomation to slave . power status = %s\n",
                         "SendPowerInfoToSlave",pcVar4);
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          iVar3 = get_work_mode();
          bVar2 = *(byte *)(iVar3 + 0xfc0);
          iVar3 = get_work_mode();
          DEBUG_PRINT("%s(): GLOBAL->battery_info[0] = %d , GLOBAL->battery_info[1] = %d\n",
                      "SendPowerInfoToSlave",(uint)bVar2,(uint)*(byte *)(iVar3 + 0xfc1));
        }
        else {
          iVar3 = get_work_mode();
          uVar1 = *(undefined1 *)(iVar3 + 0xfc0);
          iVar3 = get_work_mode();
          handle_heartbeat("%s(): GLOBAL->battery_info[0] = %d , GLOBAL->battery_info[1] = %d\n",
                           "SendPowerInfoToSlave",uVar1,*(undefined1 *)(iVar3 + 0xfc1));
        }
      }
    }
  }
  else {
    DEBUG_PRINT("message queue send failed %s\r\n","SendPowerInfoToSlave");
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


