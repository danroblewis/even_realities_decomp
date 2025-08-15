/*
 * Function: process_device_data_with_callback_execution
 * Entry:    000838dc
 * Prototype: undefined process_device_data_with_callback_execution()
 */


void process_device_data_with_callback_execution
               (undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *local_c;
  
  local_c = param_2;
  iVar1 = search_data_structure_for_value(param_1,param_2,&local_c,param_4,param_1);
  if (-1 < iVar1) {
    parse_device_configuration_and_interrupt_data(*local_c,*(undefined1 *)(local_c + 1),*param_1);
  }
  return;
}


