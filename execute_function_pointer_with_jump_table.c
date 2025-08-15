/*
 * Function: execute_function_pointer_with_jump_table
 * Entry:    0007a404
 * Prototype: undefined execute_function_pointer_with_jump_table()
 */


void execute_function_pointer_with_jump_table(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0007a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE_3)(*(undefined4 *)*param_1);
  return;
}


