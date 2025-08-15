/*
 * Function: update_ble_connection_handle_counter
 * Entry:    00059cb4
 * Prototype: undefined update_ble_connection_handle_counter()
 */


void update_ble_connection_handle_counter(void)

{
  undefined4 *puVar1;
  short sVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_000826e0(&DAT_2000af04,2);
  if (((uint)uVar5 & (uint)((ulonglong)uVar5 >> 0x20)) == 0) {
    puVar4 = &BT_CONNECTION_CALLBACK_LIST_END;
    bVar3 = false;
    sVar2 = DAT_2000ff3c;
    while( true ) {
      if (&DAT_00088070 < puVar4) {
        if (bVar3) {
          DAT_2000ff3c = sVar2;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","svc <= _bt_gatt_service_static_list_end",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x5ad);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x5ad);
      }
      if (&UNK_0008806f < puVar4) break;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 2;
      sVar2 = sVar2 + (short)*puVar1;
      bVar3 = true;
    }
    if (bVar3) {
      DAT_2000ff3c = sVar2;
    }
  }
  return;
}


