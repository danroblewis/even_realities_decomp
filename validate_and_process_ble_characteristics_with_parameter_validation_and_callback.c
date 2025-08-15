/*
 * Function: validate_and_process_ble_characteristics_with_parameter_validation_and_callback
 * Entry:    000562a4
 * Prototype: undefined validate_and_process_ble_characteristics_with_parameter_validation_and_callback()
 */


int validate_and_process_ble_characteristics_with_parameter_validation_and_callback
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == param_2) {
      return 0;
    }
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 == 0) break;
    param_1 = param_1 + 0xd8;
    iVar1 = iVar1 + 1;
  }
  *piVar2 = 1;
  if (param_1 == 0) {
    return 0;
  }
  fill_memory_buffer(param_1,0,0xd0,piVar2,param_4);
  initialize_data_structure_with_buffer_setup(param_1 + 0x60,0x570a1);
  initialize_data_structure_with_validation(param_1 + 0x28,&LAB_000813d0_1);
  return param_1;
}


