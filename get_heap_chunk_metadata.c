/*
 * Function: get_heap_chunk_metadata
 * Entry:    0007ddec
 * Prototype: int get_heap_chunk_metadata(void * heap_structure, int index1, int index2)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int get_heap_chunk_data_by_index(void *heap_structure, int index1, int index2)
    */

int get_heap_chunk_metadata(void *heap_structure,int index1,int index2)

{
  uint uVar1;
  
  if (*(uint *)((int)heap_structure + 8) < 0x8000) {
    uVar1 = (uint)*(ushort *)((int)heap_structure + index2 * 2 + index1 * 8);
  }
  else {
    uVar1 = *(uint *)((int)heap_structure + index2 * 4 + index1 * 8);
  }
  return uVar1;
}


