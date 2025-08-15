/*
 * Function: initialize_ble_attribute
 * Entry:    0005e6a8
 * Prototype: undefined initialize_ble_attribute()
 */


void initialize_ble_attribute(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x59,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x59);
  }
  manage_ble_attribute_table();
  return;
}


