/*
 * Function: free_heap_chunk_with_merging
 * Entry:    0007e0a6
 * Prototype: int free_heap_chunk_with_merging(void * heap_structure, int size)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int find_best_fit_heap_chunk(void *heap_structure, int size) */

int free_heap_chunk_with_merging(void *heap_structure,int size)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  
  iVar1 = set_heap_chunk_flag_wrapper();
  iVar2 = get_heap_chunk_metadata(heap_structure,size + iVar1,1);
  if (-1 < iVar2 << 0x1f) {
    validate_heap_chunk_and_manage(heap_structure,size + iVar1);
    iVar1 = set_heap_chunk_flag_wrapper(heap_structure,size);
    merge_adjacent_heap_chunks(heap_structure,size,size + iVar1);
  }
  iVar1 = get_heap_chunk_metadata(heap_structure,size,0);
  uVar3 = get_heap_chunk_metadata(heap_structure,size - iVar1,1);
  if ((uVar3 & extraout_r2) == 0) {
    validate_heap_chunk_and_manage(heap_structure,size - iVar1);
    iVar1 = get_heap_chunk_metadata(heap_structure,size,0);
    merge_adjacent_heap_chunks(heap_structure,size - iVar1,size);
    iVar1 = get_heap_chunk_metadata(heap_structure,size,0);
    size = size - iVar1;
  }
  iVar1 = add_heap_chunk_to_free_list(heap_structure,size);
  return iVar1;
}


