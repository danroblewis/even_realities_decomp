/*
 * Function: add_heap_chunk_to_free_list
 * Entry:    0007e022
 * Prototype: undefined __stdcall add_heap_chunk_to_free_list(undefined4 heap_struct, undefined4 chunk_index)
 */


void add_heap_chunk_to_free_list(void *heap_struct,int chunk_index)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)heap_struct + 8);
  iVar1 = set_heap_chunk_flag_wrapper();
  if ((0x7fff < uVar4) && (iVar1 == 1)) {
    return;
  }
  uVar4 = calculate_heap_chunk_size(uVar4,iVar1);
  iVar1 = *(int *)((int)heap_struct + uVar4 * 4 + 0x10);
  if (iVar1 == 0) {
    *(uint *)((int)heap_struct + 0xc) = *(uint *)((int)heap_struct + 0xc) | 1 << (uVar4 & 0xff);
    *(int *)((int)heap_struct + uVar4 * 4 + 0x10) = chunk_index;
    set_heap_chunk_metadata(heap_struct,chunk_index,2,chunk_index);
    uVar3 = 3;
    iVar1 = chunk_index;
  }
  else {
    iVar2 = get_heap_chunk_metadata(heap_struct,iVar1,2);
    set_heap_chunk_metadata(heap_struct,chunk_index);
    set_heap_chunk_metadata(heap_struct,chunk_index,3,iVar1);
    set_heap_chunk_metadata(heap_struct,iVar2);
    uVar3 = 2;
  }
  set_heap_chunk_metadata(heap_struct,iVar1,uVar3);
  return;
}


