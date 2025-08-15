/*
 * Function: handle_configuration_setting_with_memory
 * Entry:    0004e964
 * Prototype: undefined handle_configuration_setting_with_memory()
 */


void handle_configuration_setting_with_memory(void)

{
  TASK_STATE_FLAGS = TASK_STATE_FLAGS | 2;
  if ((code *)*TASK_CALLBACK_FUNCTION_PTR == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0004e982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*TASK_CALLBACK_FUNCTION_PTR)(&TASK_CALLBACK_PARAMETER_1,TASK_CALLBACK_PARAMETER_2);
  return;
}


