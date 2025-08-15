/*
 * Function: manage_heap_chunk_with_validation
 * Entry:    0004b214
 * Prototype: undefined manage_heap_chunk_with_validation()
 */


void manage_heap_chunk_with_validation
               (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    return;
  }
  uVar4 = *param_1;
  iVar1 = FUN_0007de5c(uVar4,param_2,1);
  iVar2 = FUN_0007ddec(uVar4,iVar1);
  if (iVar2 << 0x1f < 0) {
    iVar2 = FUN_0007de18(uVar4,iVar1);
    iVar3 = FUN_0007ddec(uVar4,iVar1 + iVar2,0);
    if (iVar1 == (iVar1 + iVar2) - iVar3) {
      uVar4 = set_heap_chunk_flags(uVar4,iVar1);
      FUN_0007e0a6(uVar4,iVar1);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","left_chunk(h, right_chunk(h, c)) == c",
                 "WEST_TOPDIR/zephyr/lib/os/heap.c",0xb7,param_4);
    DEBUG_PRINT2("\tcorrupted heap bounds (buffer overflow?) for memory at %p\n",param_2);
    uVar4 = 0xb7;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chunk_used(h, c)",
                 "WEST_TOPDIR/zephyr/lib/os/heap.c",0xaf,param_4);
    DEBUG_PRINT2("\tunexpected heap state (double-free?) for memory at %p\n",param_2);
    uVar4 = 0xaf;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/lib/os/heap.c",uVar4);
}


