/*
 * Function: initialize_recursive_mutex
 * Entry:    0005109c
 * Prototype: undefined initialize_recursive_mutex()
 */


void initialize_recursive_mutex(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","lock != ((void *)0)",
                 "WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",0x179);
    uVar2 = 0x179;
  }
  else {
    iVar1 = malloc_maybe(0x14);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      init_mutex();
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","*lock != ((void *)0)",
                 "WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",0x181);
    DEBUG_PRINT2("\trecursive lock allocation failed\n");
    uVar2 = 0x181;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/lib/libc/newlib/libc-hooks.c",uVar2);
}


