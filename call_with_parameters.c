/*
 * Function: call_with_parameters
 * Entry:    0008099e
 * Prototype: undefined __stdcall call_with_parameters(undefined4 func_ptr, undefined4 param1, undefined4 param2)
 */


void call_with_parameters(undefined4 func_ptr,undefined4 param1,undefined4 param2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param1;
  uStack_c = param2;
  uStack_8 = param2;
  FUN_0008633e(func_ptr,&local_10);
  return;
}


