/*
 * Function: set_heap_chunk_size
 * Entry:    0007de54
 * Prototype: undefined __stdcall set_heap_chunk_size(undefined4 heap_struct, undefined4 chunk_index, undefined4 size_in_chunks)
 */


void set_heap_chunk_size(undefined4 heap_struct,undefined4 chunk_index,int size_in_chunks)

{
  set_heap_chunk_metadata(heap_struct,chunk_index,1,size_in_chunks << 1);
  return;
}


