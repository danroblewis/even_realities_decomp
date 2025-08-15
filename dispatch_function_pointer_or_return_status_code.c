/*
 * Function: dispatch_function_pointer_or_return_status_code
 * Entry:    0007c3da
 * Prototype: undefined dispatch_function_pointer_or_return_status_code()
 */


undefined4 dispatch_function_pointer_or_return_status_code(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 7;
  }
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007c3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xc))();
    return uVar1;
  }
  return 0xf;
}


