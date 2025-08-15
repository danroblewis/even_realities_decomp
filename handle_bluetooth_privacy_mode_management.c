/*
 * Function: handle_bluetooth_privacy_mode_management
 * Entry:    0005505c
 * Prototype: undefined handle_bluetooth_privacy_mode_management()
 */


void handle_bluetooth_privacy_mode_management(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [7];
  undefined1 local_29;
  undefined4 local_20;
  char *local_1c;
  
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  if ((DAT_20002120 == 0) || (DAT_20002120 < DAT_20002121)) {
    DAT_20002121 = DAT_20002121 + 1;
    param_1[8] = param_1[8] | 4;
    return;
  }
  iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback(0,0,6);
  if (iVar1 != 0) {
    DAT_200020d4 = DAT_200020d4 | 0x8000;
    param_1[8] = param_1[8] | 1;
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management();
    return;
  }
  handle_bluetooth_privacy_mode_management_with_validation_and_callback_execution(&LAB_000810aa_1,0)
  ;
  if ((DAT_20002121 == 0) || (iVar1 = process_bluetooth_hci_command_202d(0), iVar1 == 0)) {
    if (DAT_20002121 == DAT_20002120) {
      local_1c = "Resolving list size exceeded. Switching to host.";
      local_20 = 2;
      execute_bluetooth_privacy_mode_data_compression(&DAT_00088150,0x1080,&local_20);
      iVar1 = process_data_with_initialization_and_validation(0x2029,0);
      if (iVar1 == 0) {
        DAT_20002121 = DAT_20002121 + 1;
        param_1[8] = param_1[8] | 4;
        goto LAB_00054f5c;
      }
      local_1c = "Failed to clear resolution list";
    }
    else {
      iVar1 = process_bluetooth_hci_command_with_memory_allocation
                        (*param_1,param_1 + 1,param_1 + 0x2a);
      if (iVar1 == 0) {
        DAT_20002121 = DAT_20002121 + 1;
        param_1[8] = param_1[8] | 4;
        if (-1 < (int)((uint)DAT_200020a7 << 0x1d)) {
          local_1c = "Set privacy mode command is not supported";
          goto LAB_00054efa;
        }
        copy_memory_word_short_and_byte(auStack_30,param_1 + 1);
        local_29 = 1;
        iVar1 = process_data_with_initialization_and_store(0x204e,8);
        if (iVar1 != 0) {
          ble_memory_copy_utility(iVar1 + 0xc,auStack_30,8);
          iVar1 = process_data_with_initialization_and_validation(0x204e,iVar1,0);
          if (iVar1 == 0) goto LAB_00054f5c;
        }
        local_1c = "Failed to set privacy mode";
      }
      else {
        local_1c = "Failed to add IRK to controller";
      }
    }
    uVar2 = 0x1040;
  }
  else {
    local_1c = "Failed to disable address resolution";
LAB_00054efa:
    uVar2 = 0x1080;
  }
  local_20 = 2;
  execute_bluetooth_privacy_mode_data_compression(&DAT_00088150,uVar2,&local_20);
LAB_00054f5c:
  process_bluetooth_hci_command_202d(1);
  handle_bluetooth_privacy_mode_management_with_validation_and_callback_execution(0x81081,0);
  return;
}


