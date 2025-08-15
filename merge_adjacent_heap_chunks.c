/*
 * Function: merge_adjacent_heap_chunks
 * Entry:    0007dfe6
 * Prototype: void merge_adjacent_heap_chunks(void * heap_structure, int start_index, int end_index)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void merge_heap_chunks_for_allocation(void *heap_structure, int start_index,
   int end_index) */

void merge_adjacent_heap_chunks(void *heap_structure,int start_index,int end_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = set_heap_chunk_flag_wrapper();
  iVar2 = set_heap_chunk_flag_wrapper(heap_structure,end_index);
  set_heap_chunk_flag_wrapper(heap_structure,start_index,iVar1 + iVar2);
  iVar3 = set_heap_chunk_flag_wrapper(heap_structure,end_index);
  set_heap_chunk_metadata(heap_structure,end_index + iVar3,0,iVar1 + iVar2);
  return;
}


