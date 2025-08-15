/*
 * Function: find_ble_uuid_in_table
 * Entry:    0005e938
 * Prototype: undefined find_ble_uuid_in_table()
 */


undefined1 * find_ble_uuid_in_table(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x11a);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x11a);
  }
  if ((BLE_ATTRIBUTE_TABLE != param_1) ||
     (iVar1 = memcmp_byte_arrays(&DAT_2000af4d,param_2,7), iVar1 != 0)) {
    if ((BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE != param_1) ||
       (iVar1 = memcmp_byte_arrays(&DAT_2000afa9,param_2,7), iVar1 != 0)) {
      return (undefined1 *)0x0;
    }
    iVar1 = 1;
  }
  return &BLE_ATTRIBUTE_TABLE + iVar1 * 0x5c;
}


