/*
 * Function: calculate_heap_chunk_overhead
 * Entry:    0007de70
 * Prototype: undefined __stdcall calculate_heap_chunk_overhead(undefined4 heap_size, undefined4 chunk_size)
 */


uint calculate_heap_chunk_overhead(uint heap_size,int chunk_size)

{
  int iVar1;
  
  if (heap_size < 0x8000) {
    iVar1 = 4;
  }
  else {
    iVar1 = 8;
  }
  return (uint)(chunk_size + 7 + iVar1) >> 3;
}


