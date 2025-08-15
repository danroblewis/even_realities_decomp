/*
 * Function: find_ble_service_by_uuid
 * Entry:    00059b94
 * Prototype: undefined find_ble_service_by_uuid()
 */


undefined1 *
find_ble_service_by_uuid(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_20006329;
  while (((byte)puVar3[-1] != param_1 ||
         (iVar1 = compare_byte_arrays_7_bytes(param_2,puVar3,param_3,(uint)(byte)puVar3[-1],param_4)
         , param_3 = extraout_r2, iVar1 == 0))) {
    iVar2 = iVar2 + 0xc;
    puVar3 = puVar3 + 0xc;
    if (iVar2 == 0x24) {
      return (undefined1 *)0x0;
    }
  }
  return &DAT_20006328 + iVar2;
}


