/*
 * Function: execute_function_pointer_with_offset_handling
 * Entry:    0007a414
 * Prototype: undefined execute_function_pointer_with_offset_handling()
 */


undefined4 execute_function_pointer_with_offset_handling(undefined4 *param_1)

{
  (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE)(*(undefined4 *)*param_1);
  return 0;
}


