/*
 * Function: calculate_heap_chunk_size
 * Entry:    0007de82
 * Prototype: undefined __stdcall calculate_heap_chunk_size(undefined4 chunk_size, undefined4 heap_size, undefined4 unused1, undefined4 unused2)
 */


int calculate_heap_chunk_size
              (undefined4 chunk_size,undefined4 heap_size,undefined4 param_3,undefined4 unused2)

{
  int iVar1;
  int extraout_r2;
  
  iVar1 = calculate_heap_chunk_overhead(chunk_size,1,heap_size,unused2,unused2);
  return 0x1f - LZCOUNT((extraout_r2 + 1) - iVar1);
}


