/*
 * Function: check_system_status_and_compress
 * Entry:    000530c4
 * Prototype: undefined check_system_status_and_compress()
 */


int check_system_status_and_compress(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20;
  char *local_1c;
  
  if ((BLUETOOTH_PRIVACY_MODE_CONFIGURATION & 1) != 0) {
    if (BLUETOOTH_HCI_COMMAND_PROCESSING_STATE == '\0') {
      bluetooth_hci_command_processing_with_parameter_validation_and_callback("Even G1");
    }
    if ((BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE == '\0') &&
       ((iVar1 = handle_bluetooth_privacy_mode_management_with_parameter_validation(), iVar1 != 0 ||
        ((BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE == '\0' &&
         (iVar1 = handle_bluetooth_privacy_mode_management_with_validation_and_callback(),
         iVar1 != 0)))))) {
      local_1c = "Unable to setup an identity address";
      local_20 = 2;
      process_and_compress_data_with_validation(&DAT_00088178,0x1040,&local_20,0);
      return iVar1;
    }
    if (-1 < (int)(BLUETOOTH_PRIVACY_MODE_CONFIGURATION << 0x1d)) {
      bluetooth_hci_command_processing_with_state_management();
    }
    uVar2 = BLUETOOTH_PRIVACY_MODE_CONFIGURATION & 0xfffeffff;
    iVar1 = BLUETOOTH_PRIVACY_MODE_CONFIGURATION << 0xf;
    BLUETOOTH_PRIVACY_MODE_CONFIGURATION = uVar2;
    if (iVar1 < 0) {
      check_system_status_and_compress();
    }
  }
  return 0;
}


