/*
 * Function: bluetooth_hci_command_processing_with_parameter_validation
 * Entry:    000549ec
 * Prototype: undefined bluetooth_hci_command_processing_with_parameter_validation()
 */


undefined4
bluetooth_hci_command_processing_with_parameter_validation
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE == '\0') {
    call_system_cleanup_alt(&DAT_00088138,0x10c0,&stack0xfffffff0);
  }
  else {
    set_bits(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION,8,param_3,BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE,
             param_1,param_2,param_3,param_4);
    bluetooth_hci_command_processing_with_state_management();
  }
  return 0;
}


