/*
 * Function: FUN_0005e6a8
 * Entry:    0005e6a8
 * Prototype: undefined FUN_0005e6a8()
 */


void FUN_0005e6a8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x59,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x59);
  }
  FUN_0005e614();
  return;
}


