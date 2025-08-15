/*
 * Function: handle_bluetooth_privacy_mode_management_with_validation
 * Entry:    00055094
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_validation()
 */


void handle_bluetooth_privacy_mode_management_with_validation(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  char *local_44;
  int iStack_40;
  undefined4 local_28;
  char *local_24;
  
  if (param_1 == 0) {
    return;
  }
  if (BLUETOOTH_PRIVACY_MODE_STATE == 0) {
    if (BLUETOOTH_PRIVACY_MODE_CURRENT_STATE == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","bt_dev.le.rl_entries > 0",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x433);
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x433);
    }
  }
  else if ((uint)BLUETOOTH_PRIVACY_MODE_CURRENT_STATE <= BLUETOOTH_PRIVACY_MODE_STATE + 1) {
    iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback(0,0,6);
    if (iVar1 != 0) {
      BLUETOOTH_PRIVACY_MODE_CONFIGURATION = BLUETOOTH_PRIVACY_MODE_CONFIGURATION | 0x8000;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
      validate_and_process_ble_characteristics_with_callback_validation_and_state_management();
      return;
    }
    handle_bluetooth_privacy_mode_management_with_validation_and_callback_execution
              (&LAB_000810aa_1,0);
    iVar1 = process_bluetooth_hci_command_202d(0);
    if (iVar1 == 0) {
      if (BLUETOOTH_PRIVACY_MODE_STATE < BLUETOOTH_PRIVACY_MODE_CURRENT_STATE) {
        BLUETOOTH_PRIVACY_MODE_CURRENT_STATE = BLUETOOTH_PRIVACY_MODE_CURRENT_STATE - 1;
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
        handle_ble_attribute_properties(2,&LAB_00081034_1,0);
      }
      else {
        iVar1 = process_data_with_initialization_and_store(0x2028,7);
        if (iVar1 != 0) {
          uVar2 = ble_memory_allocation_utility(iVar1 + 0xc,7);
          copy_memory_word_short_and_byte(uVar2,param_1 + 1);
          iVar1 = process_data_with_initialization_and_validation(0x2028,iVar1,0);
          if (iVar1 == 0) {
            BLUETOOTH_PRIVACY_MODE_CURRENT_STATE = BLUETOOTH_PRIVACY_MODE_CURRENT_STATE - 1;
            *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
            goto LAB_00055142;
          }
        }
        local_24 = "Failed to remove IRK from controller";
        local_28 = 2;
        execute_bluetooth_privacy_mode_data_compression(&DAT_00088150,0x1040,&local_28);
      }
    }
    else {
      local_44 = "Disabling address resolution failed (err %d)";
      local_48 = 3;
      iStack_40 = iVar1;
      execute_bluetooth_privacy_mode_data_compression(&DAT_00088150,0x1840,&local_48);
    }
LAB_00055142:
    if (BLUETOOTH_PRIVACY_MODE_CURRENT_STATE != 0) {
      process_bluetooth_hci_command_202d(1);
    }
    handle_bluetooth_privacy_mode_management_with_validation_and_callback_execution(0x81081,0);
    return;
  }
  BLUETOOTH_PRIVACY_MODE_CURRENT_STATE = BLUETOOTH_PRIVACY_MODE_CURRENT_STATE - 1;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
  return;
}


