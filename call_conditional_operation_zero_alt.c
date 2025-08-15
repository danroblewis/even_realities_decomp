/*
 * Function: call_conditional_operation_zero_alt
 * Entry:    00018a1c
 * Prototype: undefined call_conditional_operation_zero_alt()
 */


void call_conditional_operation_zero_alt(undefined4 param_1)

{
  DEBUG_PRINT("GATT Service could not be found during the discovery\n");
  handle_conditional_operation(param_1,0);
  return;
}


