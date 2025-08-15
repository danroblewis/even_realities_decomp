/*
 * Function: conditional_data_copy_based_on_string
 * Entry:    00082988
 * Prototype: undefined conditional_data_copy_based_on_string(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void conditional_data_copy_based_on_string
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_2 + 0xc);
  if (*pcVar1 != '\0') {
    safe_memory_copy_with_bounds_check(param_3,param_4,param_5,pcVar1 + 1);
    return;
  }
  safe_memory_copy_with_bounds_check
            (param_3,param_4,param_5,&stack0xfffffff6,2,param_2,param_3,
             CONCAT22(*(undefined2 *)(pcVar1 + 2),(short)param_4));
  return;
}


