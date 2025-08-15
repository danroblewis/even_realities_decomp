/*
 * Function: call_conditional_operation_zero
 * Entry:    00018894
 * Prototype: undefined call_conditional_operation_zero()
 */


void call_conditional_operation_zero(undefined4 param_1)

{
  DEBUG_PRINT("The discovery procedure for GATT Service failed, err %d\n");
  handle_conditional_operation(param_1,0);
  return;
}


