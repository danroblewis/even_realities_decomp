/*
 * Function: init_float_context_with_error_handling
 * Entry:    00077e4c
 * Prototype: undefined init_float_context_with_error_handling()
 */


void init_float_context_with_error_handling
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = init_float_context(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


