/*
 * Function: FUN_00058b78
 * Entry:    00058b78
 * Prototype: undefined FUN_00058b78()
 */


void FUN_00058b78(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x37c,param_4);
    uVar1 = 0x37c;
  }
  else if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","req",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x37d,param_4);
    uVar1 = 0x37d;
  }
  else if (*(int *)(param_2 + 4) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","req->func",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x37e,param_4);
    uVar1 = 0x37e;
  }
  else {
    if (*(int *)(param_1 + 0x124) == 0) {
      FUN_00082030();
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!chan->req",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x37f,param_4);
    uVar1 = 0x37f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",uVar1);
}


