/*
 * Function: handle_memory_buffer_with_bounds_checking
 * Entry:    00084dea
 * Prototype: undefined handle_memory_buffer_with_bounds_checking()
 */


int handle_memory_buffer_with_bounds_checking
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 auStack_28 [3];
  
  auStack_28[0] = param_1;
  auStack_28[1] = param_2;
  auStack_28[2] = param_3;
  iVar1 = call_function_pointer_and_return_value();
  uVar3 = param_4 + -1 + iVar1 & -iVar1;
  if (uVar3 < 9) {
    uVar2 = call_function_pointer_and_return_byte(param_1);
    validate_memory_bounds(auStack_28,param_3,param_4,8);
    fill_memory_buffer((int)auStack_28 + param_4,uVar2,uVar3 - param_4);
    iVar1 = safe_function_pointer_call_with_bounds_check_alt(param_1,param_2,auStack_28,uVar3);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


