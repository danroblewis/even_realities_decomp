/*
 * Function: sync_message_signal_to_slave
 * Entry:    0002c224
 * Prototype: undefined sync_message_signal_to_slave()
 */


undefined4 sync_message_signal_to_slave(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *format_string;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_1c;
  undefined4 uStack_18;
  
  uVar2 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  lVar6 = FUN_0007ce40();
  local_1c = CONCAT31((int3)(local_1c >> 8),(char)param_1) & 0xffff00ff;
  uVar1 = get_work_mode();
  uVar2 = sync_to_slave(uVar1,7,&local_1c,1,uVar2);
  iVar3 = get_work_mode();
  if (*(char *)(iVar3 + 0x105a) == '\x02') {
    format_string = "%s successfully !";
  }
  else {
    format_string = "%s failed !";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"sync_message_signal_to_slave");
  }
  else {
    handle_heartbeat();
  }
  uVar7 = FUN_0007ce40();
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)((ulonglong)(lVar6 + 3000) >> 0x20);
  bVar5 = (uint)(lVar6 + 3000) < (uint)uVar7;
  if ((int)((iVar4 - iVar3) - (uint)bVar5) < 0 !=
      (SBORROW4(iVar4,iVar3) != SBORROW4(iVar4 - iVar3,(uint)bVar5))) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("retry sync_to_slave failed !");
    }
    else {
      handle_heartbeat();
    }
  }
  return uVar2;
}


