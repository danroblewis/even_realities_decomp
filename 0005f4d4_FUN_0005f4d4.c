/*
 * Function: FUN_0005f4d4
 * Entry:    0005f4d4
 * Prototype: undefined FUN_0005f4d4()
 */


void FUN_0005f4d4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",
                 0x2b,param_4);
    uVar1 = 0x2b;
  }
  else {
    if ((short)param_1[1] == 0) {
      *param_1 = param_1[2] + param_2;
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len == 0U",
                 "WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x2c,param_4);
    uVar1 = 0x2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",uVar1);
}


