/*
 * Function: execute_double_indirect_function_pointer
 * Entry:    0007a3f0
 * Prototype: undefined execute_double_indirect_function_pointer()
 */


undefined4 execute_double_indirect_function_pointer(undefined4 *param_1)

{
  (*SYSTEM_STATE_TRANSITION_HANDLING_WITH_CALLBACK_EXECUTION)(*(undefined4 *)*param_1);
  return 0;
}


