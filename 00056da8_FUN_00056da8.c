/*
 * Function: FUN_00056da8
 * Entry:    00056da8
 * Prototype: undefined FUN_00056da8()
 */


void FUN_00056da8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 9);
  FUN_000819ea();
  for (iVar3 = DAT_2000ad1c; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    pcVar1 = *(code **)(iVar3 + 0x14);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,*(undefined1 *)(param_1 + 9),param_3,pcVar1,param_4);
    }
  }
  puVar2 = &DAT_00087fec;
  while( true ) {
    if (&DAT_00088058 < puVar2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x8ca);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x8ca);
    }
    if (&UNK_00088057 < puVar2) break;
    if ((code *)puVar2[5] != (code *)0x0) {
      (*(code *)puVar2[5])(param_1,*(undefined1 *)(param_1 + 9),param_3);
    }
    puVar2 = puVar2 + 9;
  }
  return;
}


