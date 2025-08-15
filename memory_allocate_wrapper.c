/*
 * Function: memory_allocate_wrapper
 * Entry:    000778f4
 * Prototype: undefined memory_allocate_wrapper()
 */


void memory_allocate_wrapper(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  MEMORY_ERROR_CODE = 0;
  iVar1 = heap_allocate_memory(param_2);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}


