/*
 * Function: execute_function_pointer_with_error_handling
 * Entry:    0007a3dc
 * Prototype: undefined execute_function_pointer_with_error_handling()
 */


undefined4 execute_function_pointer_with_error_handling(undefined4 *param_1)

{
  (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE_2)(*(undefined4 *)*param_1);
  return 0;
}


