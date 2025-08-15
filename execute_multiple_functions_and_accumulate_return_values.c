/*
 * Function: execute_multiple_functions_and_accumulate_return_values
 * Entry:    0007fc04
 * Prototype: undefined __stdcall execute_multiple_functions_and_accumulate_return_values(undefined4 context, undefined4 data)
 */


int execute_multiple_functions_and_accumulate_return_values(undefined4 context,undefined4 data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = call_function_pointer_with_bit_manipulation(context,2);
  iVar2 = execute_callback_function_with_parameter(context,0x46,data,2);
  iVar3 = call_function_pointer_with_bit_manipulation(context,0);
  return iVar3 + iVar1 + iVar2;
}


