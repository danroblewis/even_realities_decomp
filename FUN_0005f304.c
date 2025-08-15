/*
 * Function: FUN_0005f304
 * Entry:    0005f304
 * Prototype: undefined FUN_0005f304()
 */


int FUN_0005f304(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x236,
                 param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf.c",0x236);
  }
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 4);
  } while (param_1 != 0);
  return iVar1;
}


