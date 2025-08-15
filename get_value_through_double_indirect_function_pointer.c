/*
 * Function: get_value_through_double_indirect_function_pointer
 * Entry:    0007f064
 * Prototype: undefined get_value_through_double_indirect_function_pointer()
 */


undefined4 get_value_through_double_indirect_function_pointer(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0xc))();
  return *puVar1;
}


