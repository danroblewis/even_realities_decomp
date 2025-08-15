/*
 * Function: call_conditional_operation_one_alt
 * Entry:    00018978
 * Prototype: undefined call_conditional_operation_one_alt()
 */


void call_conditional_operation_one_alt(undefined4 param_1)

{
  DEBUG_PRINT("ANCS could not be found during the discovery\n");
  clear_system_flags_with_bitwise_and(&ANCS_SECURITY_AND_CONDITIONAL_OPERATIONS,0xfffffffe);
  handle_conditional_operation(param_1,1);
  return;
}


