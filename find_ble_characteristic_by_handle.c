/*
 * Function: find_ble_characteristic_by_handle
 * Entry:    00059c70
 * Prototype: undefined find_ble_characteristic_by_handle()
 */


undefined1 * find_ble_characteristic_by_handle(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_2000af18;
  while( true ) {
    if (param_1 == 0) {
      iVar1 = FUN_000826b2(puVar2 + 1,&DAT_000f2b3a);
    }
    else {
      iVar1 = ble_uuid_comparison_handler(param_1,*puVar2);
    }
    if (iVar1 != 0) break;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
    if (iVar3 == 3) {
      return (undefined1 *)0x0;
    }
  }
  return puVar2;
}


