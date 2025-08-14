/*
 * Function: FUN_0004d8f8
 * Entry:    0004d8f8
 * Prototype: undefined FUN_0004d8f8()
 */


void FUN_0004d8f8(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend != ((void *)0)",
                 "WEST_TOPDIR/zephyr/include/zephyr/logging/log_backend.h",0xdf);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/include/zephyr/logging/log_backend.h",0xdf);
  }
  *(char *)(*(int *)(param_1 + 4) + 4) = (char)(param_1 + -0x882a0 >> 4) + '\x01';
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = param_3;
  **(undefined4 **)(param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 5) = 1;
  if (DAT_2001d44b == '\0') {
    z_spin_lock_valid(&DAT_200039f8);
  }
  DAT_2001d44b = 1;
  return;
}


