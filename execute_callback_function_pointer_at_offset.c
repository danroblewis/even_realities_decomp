/*
 * Function: execute_callback_function_pointer_at_offset
 * Entry:    0007cef6
 * Prototype: undefined execute_callback_function_pointer_at_offset()
 */


void execute_callback_function_pointer_at_offset(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0007cefa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x10))();
  return;
}


