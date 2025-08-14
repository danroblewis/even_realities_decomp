/*
 * Function: FUN_0007cdb6
 * Entry:    0007cdb6
 * Prototype: undefined FUN_0007cdb6()
 */


void FUN_0007cdb6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0002bed0();
  if ((iVar1 != 0) &&
     ((*(char *)(param_1 + 0xd5) == '\x06' || (*(char *)(param_1 + 0xd5) == '\x04')))) {
    if (param_2 != 0) {
      send_event_status(0);
    }
    update_persist_task_status_to_idle(param_1);
    fill_memory_buffer(param_1 + 0xef,0,0x5dc,param_4);
    return;
  }
  return;
}


