/*
 * Function: call_conditional_operation_one
 * Entry:    000188b0
 * Prototype: undefined call_conditional_operation_one()
 */


void call_conditional_operation_one(undefined4 param_1)

{
  DEBUG_PRINT("The discovery procedure for ANCS failed, err %d\n");
  FUN_0007c08e(&DAT_20006ab4,0xfffffffe);
  handle_conditional_operation(param_1,1);
  return;
}


