/*
 * Function: FUN_00078570
 * Entry:    00078570
 * Prototype: undefined FUN_00078570()
 */


void FUN_00078570(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = is_precision_small(param_2);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


