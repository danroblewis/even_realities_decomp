/*
 * Function: initialize_zephyr_heap
 * Entry:    000863aa
 * Prototype: undefined __stdcall initialize_zephyr_heap(undefined4 heap_struct, undefined4 heap_start, undefined4 heap_size)
 */


void initialize_zephyr_heap(uint *heap_struct,int heap_start,uint heap_size)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  heap_struct[3] = (uint)(heap_struct + 3);
  heap_struct[4] = (uint)(heap_struct + 3);
  if (heap_size < 0x40000) {
    if (heap_size < 5) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","bytes > heap_footer_bytes(bytes)",
                   "WEST_TOPDIR/zephyr/lib/os/heap.c",0x1f2);
      DEBUG_PRINT2("\theap size is too small\n");
      uVar2 = 0x1f2;
      goto LAB_0004b3ee;
    }
    iVar4 = 4;
  }
  else {
    iVar4 = 8;
  }
  uVar5 = heap_start + 7U & 0xfffffff8;
  uVar3 = (heap_start + (heap_size - iVar4) & 0xfffffff8) - uVar5;
  uVar6 = uVar3 >> 3;
  if (uVar3 < 0x18) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","heap_sz > chunksz(sizeof(struct z_heap))",
                 "WEST_TOPDIR/zephyr/lib/os/heap.c",0x1fb);
    DEBUG_PRINT2("\theap size is too small\n");
    uVar2 = 0x1fb;
  }
  else {
    *heap_struct = uVar5;
    *(uint *)(uVar5 + 8) = uVar6;
    *(undefined4 *)(uVar5 + 0xc) = 0;
    iVar4 = calculate_heap_chunk_size(uVar6,uVar6);
    iVar1 = calculate_heap_chunk_overhead(uVar6,1,iVar4 + 5);
    uVar3 = extraout_r2 * 4 + 7U >> 3;
    if (iVar1 + uVar3 <= uVar6) {
      iVar1 = extraout_r2 * 4 + -0x10;
      if (iVar4 < -1) {
        iVar1 = 0;
      }
      fill_memory_buffer(uVar5 + 0x10,0,iVar1);
      set_heap_chunk_size(uVar5,0,uVar3);
      set_heap_chunk_metadata(uVar5,0,0,0);
      uVar2 = set_heap_chunk_flags(uVar5,0,1);
      set_heap_chunk_size(uVar2,uVar3,uVar6 - uVar3);
      set_heap_chunk_metadata(uVar5,uVar3,0,uVar3);
      set_heap_chunk_size(uVar5,uVar6);
      set_heap_chunk_metadata(uVar5,uVar6,0,uVar6 - uVar3);
      uVar2 = set_heap_chunk_flags(uVar5,uVar6,1);
      link_heap_chunks(uVar2,uVar3);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chunk0_size + min_chunk_size(h) <= heap_sz",
                 "WEST_TOPDIR/zephyr/lib/os/heap.c",0x20c);
    DEBUG_PRINT2("\theap size is too small\n");
    uVar2 = 0x20c;
  }
LAB_0004b3ee:
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/lib/os/heap.c",uVar2);
}


