/*
 * Function: FUN_00055fb4
 * Entry:    00055fb4
 * Prototype: undefined FUN_00055fb4()
 */


void FUN_00055fb4(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_2000ad1c; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[8]) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1,*(undefined1 *)(param_1 + 0xc));
    }
  }
  puVar1 = &DAT_00087fec;
  while( true ) {
    if (&DAT_00088058 < puVar1) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5ef);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5ef);
    }
    if (&UNK_00088057 < puVar1) break;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1,*(undefined1 *)(param_1 + 0xc));
    }
    puVar1 = puVar1 + 9;
  }
  return;
}


