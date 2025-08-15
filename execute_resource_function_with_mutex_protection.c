/*
 * Function: execute_resource_function_with_mutex_protection
 * Entry:    00079528
 * Prototype: undefined execute_resource_function_with_mutex_protection()
 */


void execute_resource_function_with_mutex_protection
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = execute_resource_function_with_mutex(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


