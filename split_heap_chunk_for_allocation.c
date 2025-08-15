/*
 * Function: split_heap_chunk_for_allocation
 * Entry:    0007df98
 * Prototype: void split_heap_chunk_for_allocation(void * heap_structure, int start_index, int end_index)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void split_heap_chunk_for_allocation(void *heap_structure, int start_index,
   int end_index) */

void split_heap_chunk_for_allocation(void *heap_structure,int start_index,int end_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = set_heap_chunk_flag_wrapper();
  iVar1 = (start_index - end_index) + iVar1;
  set_heap_chunk_flag_wrapper(heap_structure,start_index,end_index - start_index);
  set_heap_chunk_flag_wrapper(heap_structure,end_index,iVar1);
  set_heap_chunk_metadata(heap_structure,end_index,0,end_index - start_index);
  iVar2 = set_heap_chunk_flag_wrapper(heap_structure,end_index);
  set_heap_chunk_metadata(heap_structure,end_index + iVar2,0,iVar1);
  return;
}


