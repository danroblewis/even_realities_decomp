/*
 * Function: process_bluetooth_hci_command_with_callback
 * Entry:    00083896
 * Prototype: undefined process_bluetooth_hci_command_with_callback()
 */


undefined4
process_bluetooth_hci_command_with_callback
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = bluetooth_hci_command_processing_with_callback_validation();
  if (iVar1 != 0) {
    uVar2 = process_data_with_initialization_and_callback(param_2,param_3);
    return uVar2;
  }
  return 0xfffffff5;
}


