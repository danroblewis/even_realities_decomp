/*
 * Function: validate_and_process_ble_characteristics_with_callback_execution_and_parameter
 * Entry:    00055fb4
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback_execution_and_parameter()
 */


void validate_and_process_ble_characteristics_with_callback_execution_and_parameter(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = BT_CONNECTION_CALLBACK_LIST_HEAD; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[8]) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1,*(undefined1 *)(param_1 + 0xc));
    }
  }
  puVar1 = &BT_CONNECTION_CALLBACK_LIST_START;
  while( true ) {
    if (&BT_CONNECTION_CALLBACK_LIST_END < puVar1) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5ef);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5ef);
    }
    if (&UNK_00088057 < puVar1) break;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1,*(undefined1 *)(param_1 + 0xc));
    }
    puVar1 = puVar1 + 9;
  }
  return;
}


