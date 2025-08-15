/*
 * Function: create_ble_attribute_with_properties
 * Entry:    0005e9d0
 * Prototype: undefined create_ble_attribute_with_properties()
 */


int create_ble_attribute_with_properties
              (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xd2,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xd2);
  }
  iVar1 = find_ble_attribute_by_properties();
  if ((iVar1 == 0) && (iVar1 = initialize_ble_attribute(param_2,param_3), iVar1 != 0)) {
    set_ble_attribute_property(iVar1,param_1);
  }
  return iVar1;
}


