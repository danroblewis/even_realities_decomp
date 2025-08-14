/*
 * Function: FUN_000510fc
 * Entry:    000510fc
 * Prototype: undefined FUN_000510fc()
 */


void FUN_000510fc(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","lock != ((void *)0)",
                 "WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",0x1a6);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",0x1a6);
  }
  resource_mutex_acquire(param_1,param_2,0xffffffff,0xffffffff);
  return;
}


