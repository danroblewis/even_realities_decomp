/*
 * Function: safe_memory_copy_with_bounds_check_alt
 * Entry:    0007feaa
 * Prototype: undefined safe_memory_copy_with_bounds_check_alt()
 */


uint safe_memory_copy_with_bounds_check_alt
               (undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 < param_4) {
    param_4 = 0;
  }
  else {
    memcpy(param_1,param_3,param_4,param_4,param_4);
  }
  return param_4;
}


