/*
 * Function: initialize_debug_system_with_validation
 * Entry:    0005f200
 * Prototype: undefined initialize_debug_system_with_validation()
 */


void initialize_debug_system_with_validation
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/net/buf.c",uVar1);
}


