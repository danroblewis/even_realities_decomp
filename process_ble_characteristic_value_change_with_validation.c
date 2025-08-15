/*
 * Function: process_ble_characteristic_value_change_with_validation
 * Entry:    00058b78
 * Prototype: undefined process_ble_characteristic_value_change_with_validation()
 */


void process_ble_characteristic_value_change_with_validation
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",uVar1);
}


