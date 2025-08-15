/*
 * Function: FUN_00082f3a
 * Entry:    00082f3a
 * Prototype: undefined FUN_00082f3a()
 */


void FUN_00082f3a(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined1 *)find_ble_service_by_uuid();
  iVar2 = FUN_00080f92(param_1,param_2);
  if ((iVar2 != 0) && (puVar1 != (undefined1 *)0x0)) {
    puVar3 = (undefined4 *)(puVar1 + 8);
    iVar2 = FUN_000826f6(puVar3,0xfffffffe);
    if (iVar2 << 0x1f < 0) {
      process_ble_handle_mapping_and_log(param_1,param_2);
    }
    iVar2 = FUN_000826f6(puVar3,0xfffffffd);
    if (iVar2 << 0x1e < 0) {
      log_ble_characteristic_status(param_1,param_2);
    }
    iVar2 = get_ble_handle_value(puVar3);
    if (iVar2 == 0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *puVar3 = 0;
    }
  }
  return;
}


