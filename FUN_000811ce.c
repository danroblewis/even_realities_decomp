/*
 * Function: FUN_000811ce
 * Entry:    000811ce
 * Prototype: undefined FUN_000811ce(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined1 param_6, undefined1 param_7)
 */


int FUN_000811ce(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6,
                char param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  
  fill_memory_buffer(&local_38,0,0x10);
  if (param_7 != '\0') {
    local_3c = bluetooth_hci_command_processing_with_callback_execution_and_parameter();
    if (param_2 != 0) {
      for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
        if (*(byte *)(param_2 + iVar1 * 8) - 8 < 2) {
          return -0x16;
        }
      }
    }
    if (param_4 != 0) {
      for (iVar1 = 0; param_5 != iVar1; iVar1 = iVar1 + 1) {
        if (*(byte *)(param_4 + iVar1 * 8) - 8 < 2) {
          return -0x16;
        }
      }
    }
    local_3f = calculate_string_length(local_3c);
    local_40 = 9;
    if (param_7 == '\x01') {
      uVar3 = 2;
      local_2c = 1;
      local_30 = &local_40;
      goto LAB_000811fa;
    }
  }
  uVar3 = 1;
LAB_000811fa:
  local_38 = param_2;
  local_34 = param_3;
  iVar1 = handle_bluetooth_privacy_mode_management_with_parameter_validation_and_callback
                    (0x2008,&local_38,uVar3);
  if (iVar1 == 0) {
    if (param_6 != '\0') {
      uVar3 = 1;
      if (param_7 == '\x02') {
        local_2c = 1;
        uVar3 = 2;
      }
      if (param_7 == '\x02') {
        local_30 = &local_40;
      }
      local_34 = param_5;
      local_38 = param_4;
      iVar2 = handle_bluetooth_privacy_mode_management_with_parameter_validation_and_callback
                        (0x2009,&local_38,uVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  }
  return iVar1;
}


