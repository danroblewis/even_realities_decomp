/*
 * Function: FUN_000730b4
 * Entry:    000730b4
 * Prototype: undefined FUN_000730b4()
 */


void FUN_000730b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","queue != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x2b9);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/work.c",0x2b9);
  }
  fill_memory_buffer(param_1,0,0xf8,param_4,param_4);
  return;
}


