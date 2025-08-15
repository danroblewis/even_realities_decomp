/*
 * Function: handle_bluetooth_privacy_mode_management_with_callback
 * Entry:    00055204
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_callback()
 */


uint handle_bluetooth_privacy_mode_management_with_callback(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_18;
  char *local_14;
  
  if ((param_1 != (char *)0x0) &&
     (iVar1 = compare_byte_arrays_7_bytes(param_1,&DAT_000f2b3a), iVar1 == 0)) {
    if ((*param_1 != '\x01') || ((param_1[6] & 0xc0U) != 0xc0)) {
      local_14 = "Only static random identity address supported";
      local_18 = 2;
      execute_bluetooth_privacy_mode_data_compression(&DAT_00088150,0x1040,&local_18);
      return 0xffffffea;
    }
    iVar1 = bluetooth_hci_command_processing_with_validation_and_parameter(param_1);
    if (-1 < iVar1) {
      return 0xffffff88;
    }
  }
  if (param_2 == 0) {
    if (BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE == 1) {
      return 0xfffffff4;
    }
    iVar1 = dereference_pointer_value(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION);
    if ((iVar1 << 0x1f < 0) ||
       ((param_1 != (char *)0x0 &&
        (iVar1 = compare_byte_arrays_7_bytes(param_1,&DAT_000f2b3a), iVar1 == 0)))) {
      uVar3 = (uint)BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE;
      BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE = BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE + 1;
      uVar2 = bluetooth_hci_command_processing_with_state_management_and_parameter(uVar3,param_1);
      if (uVar2 != 0) {
        BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE = BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE + -1;
        return uVar2;
      }
      return uVar3;
    }
  }
  return 0xffffffea;
}


