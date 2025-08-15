/*
 * Function: combine_pointer_offset_and_function_dispatch_results
 * Entry:    0007c41c
 * Prototype: undefined combine_pointer_offset_and_function_dispatch_results()
 */


int combine_pointer_offset_and_function_dispatch_results(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = calculate_pointer_offset_from_flags();
  iVar2 = dispatch_function_pointer_with_complex_pointer_chain(param_1);
  return iVar2 + iVar1;
}


