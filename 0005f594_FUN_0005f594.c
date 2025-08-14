/*
 * Function: FUN_0005f594
 * Entry:    0005f594
 * Prototype: undefined FUN_0005f594()
 */


void FUN_0005f594(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(ushort *)(param_1 + 1) < param_2) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len >= len",
                 "WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x199,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x199);
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) - (short)param_2;
  *param_1 = param_2 + *param_1;
  return;
}


