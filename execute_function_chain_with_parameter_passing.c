/*
 * Function: execute_function_chain_with_parameter_passing
 * Entry:    00084b14
 * Prototype: undefined execute_function_chain_with_parameter_passing()
 */


void execute_function_chain_with_parameter_passing
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


