/*
 * Function: FUN_0005e9d0
 * Entry:    0005e9d0
 * Prototype: undefined FUN_0005e9d0()
 */


int FUN_0005e9d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xd2,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xd2);
  }
  iVar1 = FUN_0005e7c8();
  if ((iVar1 == 0) && (iVar1 = FUN_0005e6a8(param_2,param_3), iVar1 != 0)) {
    FUN_0005e9a0(iVar1,param_1);
  }
  return iVar1;
}


