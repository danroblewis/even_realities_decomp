/*
 * Function: bt_connection_disconnect_with_parameter_validation
 * Entry:    00056da8
 * Prototype: undefined bt_connection_disconnect_with_parameter_validation()
 */


void bt_connection_disconnect_with_parameter_validation
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 9);
  process_ble_connections_with_callback();
  for (iVar3 = BT_CONNECTION_CALLBACK_LIST_HEAD; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    pcVar1 = *(code **)(iVar3 + 0x14);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,*(undefined1 *)(param_1 + 9),param_3,pcVar1,param_4);
    }
  }
  puVar2 = &BT_CONNECTION_CALLBACK_LIST_START;
  while( true ) {
    if (&BT_CONNECTION_CALLBACK_LIST_END < puVar2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x8ca);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x8ca);
    }
    if (&UNK_00088057 < puVar2) break;
    if ((code *)puVar2[5] != (code *)0x0) {
      (*(code *)puVar2[5])(param_1,*(undefined1 *)(param_1 + 9),param_3);
    }
    puVar2 = puVar2 + 9;
  }
  return;
}


