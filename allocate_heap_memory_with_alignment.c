/*
 * Function: allocate_heap_memory_with_alignment
 * Entry:    0004b2b0
 * Prototype: int allocate_heap_memory_with_alignment(int * heap_context, uint size, uint alignment, undefined4 additional_param)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int allocate_heap_memory_with_alignment(int *heap_context, uint size, uint
   alignment, undefined4 additional_param) */

int allocate_heap_memory_with_alignment
              (int *heap_context,uint size,uint alignment,undefined4 additional_param)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint heap_flags;
  uint uVar4;
  int iVar5;
  int heap_ptr;
  uint uVar6;
  
  heap_ptr = *heap_context;
  heap_flags = *(uint *)(heap_ptr + 8);
  if (heap_flags < 0x8000) {
    uVar3 = 4;
  }
  else {
    uVar3 = 8;
  }
  uVar4 = size - 1 & size;
  if (uVar4 == 0) {
    if (size <= uVar3) {
      heap_ptr = *heap_context;
      if ((alignment != 0) && (alignment >> 3 < *(uint *)(heap_ptr + 8))) {
        heap_flags = calculate_heap_chunk_overhead();
        iVar5 = FUN_0007df24(heap_ptr,heap_flags);
        if (iVar5 != 0) {
          uVar3 = FUN_0007de18(heap_ptr,iVar5);
          if (heap_flags < uVar3) {
            FUN_0007df98(heap_ptr,iVar5,heap_flags + iVar5);
            link_heap_chunks(heap_ptr,heap_flags + iVar5);
          }
          iVar2 = set_heap_chunk_flags(heap_ptr,iVar5,1);
          if (*(uint *)(heap_ptr + 8) < 0x8000) {
            heap_ptr = 4;
          }
          else {
            heap_ptr = 8;
          }
          return iVar2 + heap_ptr + iVar5 * 8;
        }
      }
      return 0;
    }
    uVar6 = 0;
    uVar4 = size;
  }
  else {
    uVar6 = -size & size;
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    if ((uVar4 - 1 & uVar4) != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(align & (align - 1)) == 0",
                   "WEST_TOPDIR/zephyr/lib/os/heap.c",0x144,additional_param);
      DEBUG_PRINT2("\talign must be a power of 2\n");
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/lib/os/heap.c",0x144);
    }
  }
  if ((alignment != 0) && (alignment >> 3 < heap_flags)) {
    uVar1 = calculate_heap_chunk_overhead(heap_flags,(alignment + uVar4) - uVar3);
    heap_flags = FUN_0007df24(heap_ptr,uVar1);
    if (heap_flags != 0) {
      if (*(uint *)(heap_ptr + 8) < 0x8000) {
        iVar5 = 4;
      }
      else {
        iVar5 = 8;
      }
      iVar5 = uVar4 * ((uVar6 + heap_flags * 8 + iVar5 + heap_ptr + (uVar4 - 1)) / uVar4) - uVar6;
      uVar4 = FUN_0007de5c(heap_ptr,iVar5);
      uVar3 = (int)((alignment + iVar5 + 7 & 0xfffffff8) - heap_ptr) >> 3;
      if (heap_flags < uVar4) {
        FUN_0007df98(heap_ptr,heap_flags,uVar4);
        link_heap_chunks(heap_ptr,heap_flags);
      }
      iVar2 = FUN_0007de18(heap_ptr,uVar4);
      if (uVar3 < iVar2 + uVar4) {
        FUN_0007df98(heap_ptr,uVar4,uVar3);
        link_heap_chunks(heap_ptr,uVar3);
      }
      set_heap_chunk_flags(heap_ptr,uVar4,1);
      return iVar5;
    }
  }
  return 0;
}


