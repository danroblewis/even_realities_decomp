/*
 * Function: process_data_with_initialization_and_parameter_validation
 * Entry:    00054250
 * Prototype: undefined process_data_with_initialization_and_parameter_validation()
 */


undefined1 process_data_with_initialization_and_parameter_validation(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 < 0x2a) {
    uVar1 = (&UNK_000f33e9)[param_1];
  }
  else {
    uVar1 = 9;
  }
  return uVar1;
}


