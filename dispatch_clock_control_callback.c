/*
 * Function: dispatch_clock_control_callback
 * Entry:    00060564
 * Prototype: undefined dispatch_clock_control_callback()
 */


void dispatch_clock_control_callback(int param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined4 uVar1;
  
  uVar1 = handle_clock_control_operation(&PTR_s_clock_5000_00087b30,param_1 + -0x2000b098 >> 5,0x40)
  ;
                    /* WARNING: Could not recover jumptable at 0x00060582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}


