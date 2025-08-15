/*
 * Function: handle_bluetooth_privacy_mode_management_with_parameter_validation
 * Entry:    00055330
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_parameter_validation()
 */


void handle_bluetooth_privacy_mode_management_with_parameter_validation
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = handle_bluetooth_privacy_mode_management_with_state_management(&uStack_10);
  DAT_20002007 = (undefined1)iVar1;
  if (iVar1 != 0) {
    bluetooth_hci_command_processing_with_state_management_and_parameter(0,&uStack_10);
  }
  return;
}


