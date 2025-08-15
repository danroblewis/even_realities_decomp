/*
 * Function: bluetooth_hci_command_processing_with_parameter_validation_and_callback
 * Entry:    00054c74
 * Prototype: undefined bluetooth_hci_command_processing_with_parameter_validation_and_callback()
 */


undefined4
bluetooth_hci_command_processing_with_parameter_validation_and_callback(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  char *local_14;
  
  uVar1 = calculate_string_length();
  if (uVar1 < 0x1d) {
    iVar2 = compare_byte_arrays(&BLUETOOTH_HCI_COMMAND_PROCESSING_STATE,param_1);
    if (iVar2 != 0) {
      memcpy(&BLUETOOTH_HCI_COMMAND_PROCESSING_STATE,param_1,uVar1);
      (&BLUETOOTH_HCI_COMMAND_PROCESSING_STATE)[uVar1] = 0;
      iVar2 = format_bluetooth_log_message_with_validation_and_callback
                        (&BLUETOOTH_HCI_COMMAND_PROCESSING_STATE,uVar1);
      if (iVar2 != 0) {
        local_14 = "Unable to store name";
        local_18 = 2;
        call_system_cleanup_alt(&DAT_00088138,0x1080,&local_18);
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


