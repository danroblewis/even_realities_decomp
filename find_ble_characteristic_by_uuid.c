/*
 * Function: find_ble_characteristic_by_uuid
 * Entry:    00059b5c
 * Prototype: undefined find_ble_characteristic_by_uuid()
 */


undefined1 *
find_ble_characteristic_by_uuid
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_2000aed5;
  while (((byte)puVar3[-1] != param_1 ||
         (iVar1 = compare_byte_arrays_7_bytes(param_2,puVar3,param_3,(uint)(byte)puVar3[-1],param_4)
         , param_3 = extraout_r2, iVar1 == 0))) {
    iVar2 = iVar2 + 0x10;
    puVar3 = puVar3 + 0x10;
    if (iVar2 == 0x30) {
      return (undefined1 *)0x0;
    }
  }
  return &BLE_ATTRIBUTE_SEARCH_AND_LOG_BUFFER + iVar2;
}


