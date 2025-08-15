/*
 * Function: FUN_0005e9a0
 * Entry:    0005e9a0
 * Prototype: undefined FUN_0005e9a0()
 */


void FUN_0005e9a0(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","keys != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x12a,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x12a);
  }
  *(ushort *)(param_1 + 0xe) = param_2 | *(ushort *)(param_1 + 0xe);
  return;
}


