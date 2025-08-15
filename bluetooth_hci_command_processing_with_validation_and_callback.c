/*
 * Function: bluetooth_hci_command_processing_with_validation_and_callback
 * Entry:    00054b70
 * Prototype: undefined bluetooth_hci_command_processing_with_validation_and_callback()
 */


int bluetooth_hci_command_processing_with_validation_and_callback(void)

{
  int iVar1;
  undefined4 local_40;
  char *local_3c;
  int iStack_38;
  undefined4 local_20;
  char *local_1c;
  
  if (BLUETOOTH_HCI_COMMAND_STATE == 0) {
    iVar1 = -0x13;
    local_1c = "No HCI driver registered";
    local_20 = 2;
    call_system_cleanup_alt(&DAT_00088138,0x1040,&local_20);
  }
  else if (*(int *)(BLUETOOTH_HCI_COMMAND_STATE + 0x10) == 0) {
    iVar1 = -0x86;
  }
  else {
    iVar1 = set_bits(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION,2);
    if (iVar1 << 0x1e < 0) {
      iVar1 = -0x78;
    }
    else {
      clear_bit_in_bitmap(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION,0xfffffffb);
      iVar1 = (**(code **)(BLUETOOTH_HCI_COMMAND_STATE + 0x10))();
      if (iVar1 == 0) {
        fill_memory_buffer(&DAT_20002080,0,0x40);
        copy_data_structure(&DAT_20002068,&DAT_000f2b3a);
        handle_bluetooth_privacy_mode_management_with_state_validation();
        validate_and_process_ble_characteristics_with_parameter_validation_and_callback();
        bt_connection_state_transition_with_state_management();
        DAT_2000ff06 = 0;
        process_data_with_callback_validation_alt5(&DAT_20005e30);
        process_data_with_callback_validation_alt5(&DAT_20005f08);
        clear_bit_in_bitmap(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION,0xfffffffe);
      }
      else {
        local_3c = "HCI driver close failed (%d)";
        local_40 = 3;
        iStack_38 = iVar1;
        call_system_cleanup_alt(&DAT_00088138,0x1840,&local_40);
        set_bits(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION,4);
      }
    }
  }
  return iVar1;
}


