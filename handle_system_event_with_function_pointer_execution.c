/*
 * Function: handle_system_event_with_function_pointer_execution
 * Entry:    0007a428
 * Prototype: undefined handle_system_event_with_function_pointer_execution()
 */


void handle_system_event_with_function_pointer_execution(void)

{
  int iVar1;
  
  iVar1 = (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE_3)(SYSTEM_REFERENCE_COUNTER_AND_EVENT_MANAGEMENT);
  if (iVar1 != 0) {
    (*DAT_20002ef4)("Could not lock power save mutex");
  }
  SYSTEM_REFERENCE_COUNTER_MANAGEMENT = 0;
                    /* WARNING: Could not recover jumptable at 0x0007a44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE)(SYSTEM_REFERENCE_COUNTER_AND_EVENT_MANAGEMENT);
  return;
}


