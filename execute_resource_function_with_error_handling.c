/*
 * Function: execute_resource_function_with_error_handling
 * Entry:    00078598
 * Prototype: undefined execute_resource_function_with_error_handling()
 */


void execute_resource_function_with_error_handling
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = execute_resource_function_with_validation(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


