/*
 * Function: bluetooth_hci_command_processing_with_validation_and_callback_and_parameter
 * Entry:    0005503c
 * Prototype: undefined bluetooth_hci_command_processing_with_validation_and_callback_and_parameter()
 */


undefined4
bluetooth_hci_command_processing_with_validation_and_callback_and_parameter
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  local_10 = param_1;
  uStack_8 = param_3;
  handle_ble_attribute_properties(2,0x54dd9,&local_10);
  return local_c;
}


