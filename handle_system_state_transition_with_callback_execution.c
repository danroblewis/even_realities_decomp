/*
 * Function: handle_system_state_transition_with_callback_execution
 * Entry:    00079780
 * Prototype: undefined handle_system_state_transition_with_callback_execution()
 */


void handle_system_state_transition_with_callback_execution(undefined4 *param_1,undefined4 *param_2)

{
  SYSTEM_STATE_TRANSITION_HANDLING_WITH_CALLBACK_EXECUTION = param_1[1];
  SYSTEM_EVENT_FUNCTION_POINTER_TABLE_2 = (code *)*param_1;
  SYSTEM_EVENT_FUNCTION_POINTER_TABLE_3 = param_1[2];
  SYSTEM_EVENT_FUNCTION_POINTER_TABLE = param_1[3];
  SYSTEM_STATE_TRANSITION_CALLBACK_EXECUTION_STATE_1 = *param_2;
  SYSTEM_STATE_TRANSITION_CALLBACK_EXECUTION_STATE_2 = param_2[1];
  SYSTEM_STATE_TRANSITION_CALLBACK_EXECUTION_STATE_3 = param_2[2];
  SYSTEM_STATE_TRANSITION_CALLBACK_EXECUTION_STATE_4 = param_2[3];
  SYSTEM_REFERENCE_COUNTER_AND_EVENT_MANAGEMENT = param_2[4];
  if ((DAT_2000cd48 & 0x3a000000) != 0) {
    DAT_2000cd44 = 0;
    DAT_2000cde8 = 0;
    DAT_2000cd48 = 0xa95c5f2c;
    SYSTEM_STATE_TRANSITION_CALLBACK_EXECUTION_STATE_5 = 0xa95c5f2c;
    (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE_2)(&DAT_2000cd44);
                    /* WARNING: Could not recover jumptable at 0x000797dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE_2)(&DAT_2000cde8);
    return;
  }
  return;
}


