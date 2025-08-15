/*
 * Function: execute_callback_function_pointer_if_valid
 * Entry:    00084840
 * Prototype: undefined execute_callback_function_pointer_if_valid()
 */


void execute_callback_function_pointer_if_valid(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 0xc);
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0008484a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1[1]);
    return;
  }
  return;
}


