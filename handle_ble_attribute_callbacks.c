/*
 * Function: handle_ble_attribute_callbacks
 * Entry:    0005e6d4
 * Prototype: undefined handle_ble_attribute_callbacks()
 */


void handle_ble_attribute_callbacks(uint param_1,code *param_2,undefined4 param_3)

{
  uint local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  if (param_2 == (code *)0x0) {
    local_20 = param_1;
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","func != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xa0);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xa0);
  }
  if ((BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACKS != 0) && (BLE_ATTRIBUTE_TABLE == param_1)) {
    local_20 = DAT_2000af4d;
    local_1c._3_1_ = (undefined1)((uint)param_2 >> 0x18);
    local_1c._0_3_ = CONCAT12(DAT_2000af53,DAT_2000af51);
    (*param_2)(&local_20,param_3);
  }
  if ((BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACK_MANAGEMENT != 0) &&
     (BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE == param_1)) {
    local_20 = DAT_2000afa9;
    local_1c._0_3_ = CONCAT12(DAT_2000afaf,DAT_2000afad);
    (*param_2)(&local_20,param_3);
  }
  return;
}


