/*
 * Function: execute_callback_function_pointer
 * Entry:    0007c85e
 * Prototype: undefined execute_callback_function_pointer()
 */


void execute_callback_function_pointer(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0007c86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 8))();
  return;
}


