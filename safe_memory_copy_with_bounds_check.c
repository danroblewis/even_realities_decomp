/*
 * Function: safe_memory_copy_with_bounds_check
 * Entry:    00082932
 * Prototype: undefined safe_memory_copy_with_bounds_check(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


uint safe_memory_copy_with_bounds_check
               (undefined4 param_1,uint param_2,uint param_3,int param_4,ushort param_5)

{
  uint uVar1;
  
  if (param_5 < param_3) {
    uVar1 = 0xfffffff9;
  }
  else {
    uVar1 = param_5 - param_3;
    if ((int)param_2 <= (int)uVar1) {
      uVar1 = param_2;
    }
    uVar1 = uVar1 & 0xffff;
    memcpy(param_1,param_4 + param_3,uVar1,param_4,param_4);
  }
  return uVar1;
}


