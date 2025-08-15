/*
 * Function: bt_connection_disconnect_with_callbacks_and_params
 * Entry:    000570a0
 * Prototype: undefined __stdcall bt_connection_disconnect_with_callbacks_and_params(undefined4 connection_obj)
 */


/* WARNING: Removing unreachable block (ram,0x000571a4) */
/* WARNING: Removing unreachable block (ram,0x0005715e) */

void bt_connection_disconnect_with_callbacks_and_params(int connection_obj)

{
  undefined4 *puVar1;
  int iVar2;
  uint *connection_flags;
  int connection_ptr;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* Handles Bluetooth connection disconnection with callback execution and
                       parameter processing */
  connection_ptr = connection_obj + -0x60;
  if (*(char *)(connection_obj + -0x53) == '\0') {
    bt_connection_update_state(connection_ptr);
    for (iVar2 = BT_CONNECTION_CALLBACK_LIST_HEAD; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      if (*(code **)(iVar2 + 4) != (code *)0x0) {
        (**(code **)(iVar2 + 4))(connection_ptr,*(undefined1 *)(connection_obj + -0x54));
      }
    }
    puVar1 = &BT_CONNECTION_CALLBACK_LIST_START;
    while( true ) {
      if (&BT_CONNECTION_CALLBACK_LIST_END < puVar1) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5fe);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5fe);
      }
      if (&UNK_00088057 < puVar1) break;
      if ((code *)puVar1[1] != (code *)0x0) {
        (*(code *)puVar1[1])(connection_ptr,*(undefined1 *)(connection_obj + -0x54));
      }
      puVar1 = puVar1 + 9;
    }
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management
              (connection_ptr);
    return;
  }
  if (*(char *)(connection_obj + -0x5e) != '\x01') {
    return;
  }
  connection_flags = (uint *)(connection_obj + -0x5c);
  iVar2 = bt_connection_update_flags(connection_flags,0xfffffdff);
  if (iVar2 << 0x16 < 0) {
    local_20 = *(undefined4 *)(connection_obj + 0x48);
    local_1c = *(undefined4 *)(connection_obj + 0x50);
    iStack_28 = bt_connection_disconnect_with_validation_and_state_management
                          (connection_ptr,&local_20);
    if (iStack_28 == 0) {
      bt_connection_update_flags(connection_flags,0xfffffeff);
      goto LAB_0005714e;
    }
    local_2c = "Send LE param update failed (err %d)";
  }
  else {
    local_20 = 0x280018;
    local_1c = 0x2a0000;
    iStack_28 = bt_connection_disconnect_with_validation_and_state_management
                          (connection_ptr,&local_20);
    if (iStack_28 == 0) {
      *connection_flags = *connection_flags | 0x100;
      goto LAB_0005714e;
    }
    local_2c = "Send auto LE param update failed (err %d)";
  }
  local_30 = 3;
  bt_log_connection_error(&DAT_00088108,0x1880,&local_30);
LAB_0005714e:
  *connection_flags = *connection_flags | 0x80;
  return;
}


