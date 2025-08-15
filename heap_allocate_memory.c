/*
 * Function: heap_allocate_memory
 * Entry:    00051074
 * Prototype: undefined heap_allocate_memory()
 */


int heap_allocate_memory(int param_1)

{
  int iVar1;
  
  if (param_1 + HEAP_CURRENT_OFFSET < 0x1ceb4) {
    iVar1 = HEAP_CURRENT_OFFSET + 0x2005314c;
    HEAP_CURRENT_OFFSET = param_1 + HEAP_CURRENT_OFFSET;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


