/*
 * Function: handle_device_operation_by_code
 * Entry:    0005fb8c
 * Prototype: undefined handle_device_operation_by_code()
 */


uint handle_device_operation_by_code(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_40;
  char *local_3c;
  int iStack_38;
  undefined4 local_20;
  char *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x10);
  switch(param_2) {
  case 0:
  case 2:
    if (*(char *)(iVar2 + 0x51) != '\0') {
      *(undefined1 *)(iVar2 + 0x52) = 1;
      FUN_00066300();
    }
    break;
  case 1:
  case 3:
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0x50) << 0x1e)) {
      local_1c = "Device is not configured";
      local_20 = 2;
      FUN_000837a2(&DAT_000881a0,0x1040,&local_20);
      return 0xfffffffb;
    }
    if (*(char *)(iVar2 + 0x51) == '\0') {
      *(undefined1 *)(iVar2 + 0x52) = 0;
      puVar3 = *(undefined4 **)(param_1 + 0x10);
      *(undefined1 *)((int)puVar3 + 0x51) = 1;
      if (-1 < (int)((uint)*(byte *)(puVar3 + 0x14) << 0x1f)) {
        uVar1 = validate_device_state_and_manage_tasks(puVar3);
        return uVar1 & (int)uVar1 >> 0x1f;
      }
      puVar3[4] = 0;
      puVar3[2] = &LAB_000837a8_1;
      puVar3[3] = 3;
      iStack_38 = manage_task_state_transition_with_priority_control(*puVar3,puVar3 + 1);
      if (iStack_38 < 0) {
        *(undefined1 *)((int)puVar3 + 0x51) = 0;
        local_3c = "Failed to request clock: %d";
        local_40 = 3;
        FUN_000837a2(&DAT_000881a0,0x1840,&local_40);
        return 0xfffffffb;
      }
    }
    break;
  default:
    local_3c = "Invalid command: %d";
    local_40 = 3;
    iStack_38 = param_2;
    FUN_000837a2(&DAT_000881a0,0x1840,&local_40);
    return 0xffffffea;
  }
  return 0;
}


