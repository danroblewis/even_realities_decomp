/*
 * Function: FUN_0004df40
 * Entry:    0004df40
 * Prototype: undefined FUN_0004df40()
 */


void FUN_0004df40(undefined4 param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0004d420(DAT_2000a0fc);
                    /* WARNING: Could not recover jumptable at 0x0004df58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DAT_0008ad08,param_2,0xf);
  return;
}


