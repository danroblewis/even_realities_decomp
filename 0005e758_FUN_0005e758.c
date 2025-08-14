/*
 * Function: FUN_0005e758
 * Entry:    0005e758
 * Prototype: undefined FUN_0005e758()
 */


void FUN_0005e758(ushort param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3)

{
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","func != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xb3);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xb3);
  }
  if ((DAT_2000af5a & param_1) != 0) {
    (*UNRECOVERED_JUMPTABLE)(&DAT_2000af4c,param_3);
  }
  if ((DAT_2000afb6 & param_1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0005e784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&DAT_2000afa8,param_3);
    return;
  }
  return;
}


