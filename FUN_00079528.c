/*
 * Function: FUN_00079528
 * Entry:    00079528
 * Prototype: undefined FUN_00079528()
 */


void FUN_00079528(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = execute_resource_function_with_mutex(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


