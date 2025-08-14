/*
 * Function: FUN_0005f2d4
 * Entry:    0005f2d4
 * Prototype: undefined FUN_0005f2d4()
 */


void FUN_0005f2d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x202,
                 param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/net/buf.c",0x202);
  }
  *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
  return;
}


