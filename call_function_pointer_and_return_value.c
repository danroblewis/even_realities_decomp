/*
 * Function: call_function_pointer_and_return_value
 * Entry:    0007f000
 * Prototype: undefined call_function_pointer_and_return_value()
 */


undefined4 call_function_pointer_and_return_value(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 0xc))();
  return *puVar1;
}


