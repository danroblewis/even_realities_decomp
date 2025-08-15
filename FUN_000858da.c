/*
 * Function: FUN_000858da
 * Entry:    000858da
 * Prototype: undefined FUN_000858da()
 */


void FUN_000858da(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (param_2 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x20) + 0x80),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000858e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


