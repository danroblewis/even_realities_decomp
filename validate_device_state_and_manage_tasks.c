/*
 * Function: validate_device_state_and_manage_tasks
 * Entry:    0005fb30
 * Prototype: undefined validate_device_state_and_manage_tasks()
 */


undefined4 validate_device_state_and_manage_tasks(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iStack_18 = FUN_00066214();
  if (iStack_18 == 0xbad0000) {
    uVar1 = 0;
  }
  else {
    local_1c = "Failed to start PDM: 0x%08x";
    local_20 = 3;
    FUN_000837a2(&DAT_000881a0,0x1840,&local_20);
    if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1f) < 0) {
      manage_task_state_decrement_with_priority_control(*param_1);
    }
    uVar1 = 0xfffffffb;
    *(undefined1 *)((int)param_1 + 0x51) = 0;
  }
  return uVar1;
}


