/*
 * Function: set_heap_chunk_metadata
 * Entry:    0007de02
 * Prototype: undefined __stdcall set_heap_chunk_metadata(undefined4 heap_struct, undefined4 chunk_index, undefined4 field_index, undefined4 value)
 */


void set_heap_chunk_metadata(int heap_struct,int chunk_index,int field_index,undefined4 value)

{
  int iVar1;
  
  iVar1 = heap_struct + chunk_index * 8;
  if (*(uint *)(heap_struct + 8) < 0x8000) {
    *(short *)(iVar1 + field_index * 2) = (short)value;
  }
  else {
    *(undefined4 *)(iVar1 + field_index * 4) = value;
  }
  return;
}


