/*
 * Function: FUN_000863aa
 * Entry:    000863aa
 * Prototype: undefined FUN_000863aa()
 */


void FUN_000863aa(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[3] = (uint)(param_1 + 3);
  param_1[4] = (uint)(param_1 + 3);
  if (param_3 < 0x40000) {
    if (param_3 < 5) {
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
  uVar5 = param_2 + 7U & 0xfffffff8;
  uVar3 = (param_2 + (param_3 - iVar4) & 0xfffffff8) - uVar5;
  uVar6 = uVar3 >> 3;
  if (uVar3 < 0x18) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","heap_sz > chunksz(sizeof(struct z_heap))",
                 "WEST_TOPDIR/zephyr/lib/os/heap.c",0x1fb);
    DEBUG_PRINT2("\theap size is too small\n");
    uVar2 = 0x1fb;
  }
  else {
    *param_1 = uVar5;
    *(uint *)(uVar5 + 8) = uVar6;
    *(undefined4 *)(uVar5 + 0xc) = 0;
    iVar4 = FUN_0007de82(uVar6,uVar6);
    iVar1 = FUN_0007de70(uVar6,1,iVar4 + 5);
    uVar3 = extraout_r2 * 4 + 7U >> 3;
    if (iVar1 + uVar3 <= uVar6) {
      iVar1 = extraout_r2 * 4 + -0x10;
      if (iVar4 < -1) {
        iVar1 = 0;
      }
      fill_memory_buffer(uVar5 + 0x10,0,iVar1);
      FUN_0007de54(uVar5,0,uVar3);
      FUN_0007de02(uVar5,0,0,0);
      uVar2 = FUN_0007de24(uVar5,0,1);
      FUN_0007de54(uVar2,uVar3,uVar6 - uVar3);
      FUN_0007de02(uVar5,uVar3,0,uVar3);
      FUN_0007de54(uVar5,uVar6);
      FUN_0007de02(uVar5,uVar6,0,uVar6 - uVar3);
      uVar2 = FUN_0007de24(uVar5,uVar6,1);
      FUN_0007e022(uVar2,uVar3);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chunk0_size + min_chunk_size(h) <= heap_sz",
                 "WEST_TOPDIR/zephyr/lib/os/heap.c",0x20c);
    DEBUG_PRINT2("\theap size is too small\n");
    uVar2 = 0x20c;
  }
LAB_0004b3ee:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/lib/os/heap.c",uVar2);
}


