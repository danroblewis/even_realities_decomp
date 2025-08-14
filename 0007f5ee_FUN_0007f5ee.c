/*
 * Function: FUN_0007f5ee
 * Entry:    0007f5ee
 * Prototype: undefined FUN_0007f5ee()
 */


void FUN_0007f5ee(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
  FUN_0007f5d8(param_3 + -0x10,2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3 + -0x14,param_2);
    return;
  }
  return;
}


