/*
 * Function: check_and_allocate_memory_with_fallback
 * Entry:    0004cd24
 * Prototype: undefined __stdcall check_and_allocate_memory_with_fallback(undefined4 allocation_context, undefined4 result_ptr, undefined4 primary_size, undefined4 fallback_size)
 */


bool check_and_allocate_memory_with_fallback
               (undefined4 allocation_context,int *result_ptr,undefined4 primary_size,
               undefined4 fallback_size)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0007eae4(allocation_context,primary_size,primary_size,fallback_size,fallback_size);
  bVar1 = iVar2 != 0;
  if (!bVar1) {
    iVar2 = FUN_0007eae4(allocation_context,&LAB_000a8ea0);
  }
  *result_ptr = iVar2;
  return bVar1;
}


