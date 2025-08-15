/*
 * Function: FUN_0005f200
 * Entry:    0005f200
 * Prototype: undefined FUN_0005f200()
 */


void FUN_0005f200(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","fifo","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x1c7,
                 param_4);
    uVar1 = 0x1c7;
  }
  else {
    if (param_2 != 0) {
      initialize_debug_system();
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x1c8,
                 param_4);
    uVar1 = 0x1c8;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf.c",uVar1);
}


