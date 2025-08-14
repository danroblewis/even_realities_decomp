/*
 * Function: FUN_0005f518
 * Entry:    0005f518
 * Prototype: undefined FUN_0005f518()
 */


void FUN_0005f518(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if ((uint)(*param_1 - param_1[2]) < param_2) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","net_buf_simple_headroom(buf) >= len",
                 "WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x12d,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x12d);
  }
  *param_1 = *param_1 - param_2;
  *(short *)(param_1 + 1) = (short)param_2 + (short)param_1[1];
  return;
}


