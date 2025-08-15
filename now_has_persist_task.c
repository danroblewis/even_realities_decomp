/*
 * Function: now_has_persist_task
 * Entry:    0002be64
 * Prototype: undefined now_has_persist_task()
 */


undefined1 now_has_persist_task(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  while (PERSISTENT_TASK_STATUS_MANAGER != '\0') {
    short_timing_delay();
  }
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x1054) + 4);
  uVar1 = 0;
  if (1 < uVar2) {
    if (3 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): persist task is status: %d, screen: %d/%d\n","now_has_persist_task",uVar2
                    ,param_2,(uint)*(byte *)(param_1 + 0xd5),uVar3);
      }
      else {
        handle_heartbeat("%s(): persist task is status: %d, screen: %d/%d\n","now_has_persist_task",
                         uVar2,param_2,*(undefined1 *)(param_1 + 0xd5));
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


