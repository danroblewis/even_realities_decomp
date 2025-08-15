/*
 * Function: execute_callback_function_with_validation
 * Entry:    0004cb90
 * Prototype: undefined __stdcall execute_callback_function_with_validation(undefined4 callback_context, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4
execute_callback_function_with_validation
          (int callback_context,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (callback_context == 0) {
    process_and_compress_data_with_validation_wrapper
              (&DAT_000881d8,0x1040,&stack0xfffffff0,2,0,param_2,param_3,param_4);
    uVar1 = 0xffffffea;
  }
  else if (*(undefined4 **)(callback_context + 8) == (undefined4 *)0x0) {
    process_and_compress_data_with_validation_wrapper
              (&DAT_000881d8,0x1040,&stack0xfffffff0,2,callback_context,param_2,param_3,param_4);
    uVar1 = 0xfffffffb;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(callback_context + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0004cbda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


