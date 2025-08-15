/*
 * Function: check_precision_with_error_handling
 * Entry:    00078570
 * Prototype: undefined check_precision_with_error_handling()
 */


void check_precision_with_error_handling(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = is_precision_small(param_2);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


