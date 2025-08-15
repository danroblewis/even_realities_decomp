/*
 * Function: clear_bits_and_execute_callbacks
 * Entry:    0007f5ee
 * Prototype: undefined clear_bits_and_execute_callbacks()
 */


void clear_bits_and_execute_callbacks(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
  clear_specific_bit_by_position(param_3 + -0x10,2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3 + -0x14,param_2);
    return;
  }
  return;
}


