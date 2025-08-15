/*
 * Function: execute_stored_callback
 * Entry:    000858ca
 * Prototype: undefined execute_stored_callback()
 */


void execute_stored_callback(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (param_2 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x20) + 0x7c),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000858d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


