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
  
  if ((DAT_200020d4 & 1) != 0) {
    if (DAT_2000216c == '\0') {
      bluetooth_hci_command_processing_with_parameter_validation_and_callback("Even G1");
    }
    if ((DAT_20002007 == '\0') &&
       ((iVar1 = handle_bluetooth_privacy_mode_management_with_parameter_validation(), iVar1 != 0 ||
        ((DAT_20002007 == '\0' &&
         (iVar1 = handle_bluetooth_privacy_mode_management_with_validation_and_callback(),
         iVar1 != 0)))))) {
      local_1c = "Unable to setup an identity address";
      local_20 = 2;
      process_and_compress_data_with_validation(&DAT_00088178,0x1040,&local_20,0);
      return iVar1;
    }
    if (-1 < (int)(DAT_200020d4 << 0x1d)) {
      bluetooth_hci_command_processing_with_state_management();
    }
    uVar2 = DAT_200020d4 & 0xfffeffff;
    iVar1 = DAT_200020d4 << 0xf;
    DAT_200020d4 = uVar2;
    if (iVar1 < 0) {
      check_system_status_and_compress();
    }
  }
  return 0;
}


