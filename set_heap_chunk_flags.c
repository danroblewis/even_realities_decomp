/*
 * Function: set_heap_chunk_flags
 * Entry:    0007de24
 * Prototype: undefined __stdcall set_heap_chunk_flags(undefined4 heap_struct, undefined4 chunk_index, undefined4 is_allocated)
 */


void set_heap_chunk_flags(int heap_struct,int chunk_index,int is_allocated)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  iVar1 = heap_struct + chunk_index * 8;
  if (0x7fff < *(uint *)(heap_struct + 8)) {
    if (is_allocated == 0) {
      uVar3 = *(uint *)(iVar1 + 4) & 0xfffffffe;
    }
    else {
      uVar3 = *(uint *)(iVar1 + 4) | 1;
    }
    *(uint *)(iVar1 + 4) = uVar3;
    return;
  }
  if (is_allocated == 0) {
    uVar2 = *(ushort *)(iVar1 + 2) & 0xfffe;
  }
  else {
    uVar2 = *(ushort *)(iVar1 + 2) | 1;
  }
  *(ushort *)(iVar1 + 2) = uVar2;
  return;
}


