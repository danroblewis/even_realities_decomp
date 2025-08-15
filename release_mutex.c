/*
 * Function: release_mutex
 * Entry:    00051134
 * Prototype: undefined release_mutex()
 */


void release_mutex(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","lock != ((void *)0)",
                 "WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",0x1c2,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",0x1c2);
  }
  mutex_unlock();
  return;
}


