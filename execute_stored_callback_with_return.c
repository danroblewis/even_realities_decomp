/*
 * Function: execute_stored_callback_with_return
 * Entry:    000858ec
 * Prototype: undefined execute_stored_callback_with_return()
 */


undefined4 execute_stored_callback_with_return(int param_1,int param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (param_2 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x20) + 0x84),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000858fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


