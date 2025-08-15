/*
 * Function: bt_connection_disconnect_with_validation
 * Entry:    00056ae0
 * Prototype: undefined bt_connection_disconnect_with_validation()
 */


void bt_connection_disconnect_with_validation
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = BT_CONNECTION_CALLBACK_LIST_HEAD;
  if (((*(int *)(param_1 + 4) << 0x16 < 0) &&
      (*(ushort *)(param_1 + 0xa8) <= *(ushort *)(param_1 + 0xa6))) &&
     (*(ushort *)(param_1 + 0xa6) <= *(ushort *)(param_1 + 0xaa))) {
    if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb0)) {
      bt_connection_update_flags
                ((int *)(param_1 + 4),0xfffffdff,*(int *)(param_1 + 0xac),*(int *)(param_1 + 0xb0),
                 param_4);
      iVar1 = BT_CONNECTION_CALLBACK_LIST_HEAD;
    }
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (*(code **)(iVar1 + 0xc) != (code *)0x0) {
      (**(code **)(iVar1 + 0xc))
                (param_1,*(undefined2 *)(param_1 + 0xa6),*(undefined2 *)(param_1 + 0xac),
                 *(undefined2 *)(param_1 + 0xae));
    }
  }
  puVar2 = &BT_CONNECTION_CALLBACK_LIST_START;
  while( true ) {
    if (&BT_CONNECTION_CALLBACK_LIST_END < puVar2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x634);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x634);
    }
    if (&UNK_00088057 < puVar2) break;
    if ((code *)puVar2[3] != (code *)0x0) {
      (*(code *)puVar2[3])
                (param_1,*(undefined2 *)(param_1 + 0xa6),*(undefined2 *)(param_1 + 0xac),
                 *(undefined2 *)(param_1 + 0xae));
    }
    puVar2 = puVar2 + 9;
  }
  return;
}


