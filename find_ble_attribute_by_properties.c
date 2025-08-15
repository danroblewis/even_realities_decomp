/*
 * Function: find_ble_attribute_by_properties
 * Entry:    0005e83c
 * Prototype: undefined find_ble_attribute_by_properties()
 */


undefined1 *
find_ble_attribute_by_properties(uint param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xe9);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xe9);
  }
  if ((*param_2 == '\x01') && ((param_2[6] & 0xc0U) == 0x40)) {
    if ((int)((uint)BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACKS << 0x1e) < 0) {
      if (BLE_ATTRIBUTE_TABLE != param_1) {
        if ((int)((uint)BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACK_MANAGEMENT << 0x1e) < 0) {
LAB_0005e8ea:
          if ((BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE == param_1) &&
             (iVar2 = memcmp_byte_arrays(param_2 + 1,&DAT_2000afe2,6,
                                         (uint)BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE,param_4),
             iVar2 == 0)) goto LAB_0005e8fe;
          goto LAB_0005e904;
        }
LAB_0005e8a2:
        if (-1 < (int)((uint)BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACK_MANAGEMENT << 0x1e))
        goto LAB_0005e85e;
        goto LAB_0005e8aa;
      }
      iVar2 = memcmp_byte_arrays(param_2 + 1,&DAT_2000af86,6,(uint)BLE_ATTRIBUTE_TABLE,param_4);
      if (iVar2 == 0) goto LAB_0005e900;
      if ((int)((uint)BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACK_MANAGEMENT << 0x1e) < 0)
      goto LAB_0005e8ea;
LAB_0005e904:
      if ((BLE_ATTRIBUTE_TABLE != param_1) ||
         (iVar2 = validate_identifier(&DAT_2000af76,param_2 + 1), iVar2 == 0)) goto LAB_0005e8a2;
      iVar2 = 0;
    }
    else {
      if (-1 < (int)((uint)BLE_ATTRIBUTE_PROPERTIES_AND_CALLBACK_MANAGEMENT << 0x1e))
      goto LAB_0005e85e;
      if (BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE == param_1) {
        iVar2 = memcmp_byte_arrays(param_2 + 1,&DAT_2000afe2,6,
                                   (uint)BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE,param_4);
        if (iVar2 != 0) goto LAB_0005e8a2;
LAB_0005e8fe:
        iVar2 = 0x5c;
LAB_0005e900:
        return &BLE_ATTRIBUTE_TABLE + iVar2;
      }
LAB_0005e8aa:
      if ((BLE_ATTRIBUTE_TABLE_MANAGEMENT_STATE != param_1) ||
         (iVar2 = validate_identifier(&DAT_2000afd2,param_2 + 1), iVar2 == 0)) goto LAB_0005e85e;
      iVar2 = 0x5c;
    }
    *(undefined4 *)((int)&DAT_2000af86 + iVar2) = *(undefined4 *)(param_2 + 1);
    puVar1 = &BLE_ATTRIBUTE_TABLE + iVar2;
    *(undefined2 *)((int)&DAT_2000af8a + iVar2) = *(undefined2 *)(param_2 + 5);
  }
  else {
LAB_0005e85e:
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}


