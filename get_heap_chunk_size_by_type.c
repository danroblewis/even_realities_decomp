/*
 * Function: get_heap_chunk_size_by_type
 * Entry:    0007e18e
 * Prototype: int get_heap_chunk_size_by_type(void * heap_chunk)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int get_heap_chunk_status_for_task(void *heap_chunk) */

int get_heap_chunk_size_by_type(void *heap_chunk)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)((int)heap_chunk + 0x1c) & 7;
  if ((*(ushort *)((int)heap_chunk + 0x1c) & 7) == 0) {
                    /* WARNING: Load size is inaccurate */
    if (*heap_chunk == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 3;
    }
    return iVar1;
  }
  if (uVar2 != 2) {
    if (uVar2 != 1) {
      return 0;
    }
                    /* WARNING: Load size is inaccurate */
    if (*heap_chunk == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 5;
    }
    return iVar1;
  }
  return (uint)(*(short *)((int)heap_chunk + 0x1e) == 0) << 2;
}


