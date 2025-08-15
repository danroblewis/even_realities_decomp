/*
 * Function: link_heap_chunks
 * Entry:    0007e022
 * Prototype: undefined __stdcall link_heap_chunks(undefined4 heap_struct, undefined4 chunk_index)
 */


void link_heap_chunks(int heap_struct,int chunk_index)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(heap_struct + 8);
  iVar1 = FUN_0007de18();
  if ((0x7fff < uVar4) && (iVar1 == 1)) {
    return;
  }
  uVar4 = calculate_heap_chunk_size(uVar4,iVar1);
  iVar2 = heap_struct + uVar4 * 4;
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar1 == 0) {
    *(uint *)(heap_struct + 0xc) = *(uint *)(heap_struct + 0xc) | 1 << (uVar4 & 0xff);
    *(int *)(iVar2 + 0x10) = chunk_index;
    set_heap_chunk_metadata(heap_struct,chunk_index,2,chunk_index);
    uVar3 = 3;
    iVar1 = chunk_index;
  }
  else {
    uVar3 = FUN_0007ddec(heap_struct,iVar1,2);
    set_heap_chunk_metadata(heap_struct,chunk_index);
    set_heap_chunk_metadata(heap_struct,chunk_index,3,iVar1);
    set_heap_chunk_metadata(heap_struct,uVar3);
    uVar3 = 2;
  }
  set_heap_chunk_metadata(heap_struct,iVar1,uVar3);
  return;
}


