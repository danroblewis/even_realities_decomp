/*
 * Function: FUN_0007e1e6
 * Entry:    0007e1e6
 * Prototype: undefined FUN_0007e1e6()
 */


void FUN_0007e1e6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0004bb0c(param_2 + 4,param_4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007e20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


