/*
 * Function: process_bluetooth_hci_and_copy_string
 * Entry:    000829f0
 * Prototype: undefined process_bluetooth_hci_and_copy_string(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void process_bluetooth_hci_and_copy_string
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5)

{
  undefined4 uVar1;
  
  uVar1 = bluetooth_hci_command_processing_with_callback_execution_and_parameter();
  calculate_string_length();
  safe_memory_copy_with_bounds_check(param_3,param_4,param_5,uVar1);
  return;
}


