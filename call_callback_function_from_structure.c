/*
 * Function: call_callback_function_from_structure
 * Entry:    000822ae
 * Prototype: undefined call_callback_function_from_structure()
 */


void call_callback_function_from_structure(undefined4 param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*param_2 + 0xc) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000822b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_2 + 8);
    return;
  }
  return;
}


