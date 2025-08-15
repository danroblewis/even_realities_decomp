/*
 * Function: execute_callback_function_with_parameter
 * Entry:    0007f97c
 * Prototype: undefined execute_callback_function_with_parameter()
 */


void execute_callback_function_with_parameter(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0007f988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0xc));
  return;
}


