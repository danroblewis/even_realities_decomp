/*
 * Function: conditional_callback_execution_with_parameter_packing
 * Entry:    00084c7e
 * Prototype: undefined conditional_callback_execution_with_parameter_packing()
 */


undefined4 conditional_callback_execution_with_parameter_packing(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = pack_parameters_and_call_callback(**(undefined4 **)(param_1 + 4),7,4,1);
    return uVar1;
  }
  return 0xffffffea;
}


