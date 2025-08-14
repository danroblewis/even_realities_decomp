/*
 * Function: FUN_00056d1c
 * Entry:    00056d1c
 * Prototype: undefined FUN_00056d1c()
 */


void FUN_00056d1c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar3 = param_1 + 0x9e;
  }
  else {
    iVar3 = param_1 + 0x97;
  }
  for (iVar2 = DAT_2000ad1c; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
      (**(code **)(iVar2 + 0x10))(param_1,iVar3,param_1 + 0x90);
    }
  }
  puVar1 = &DAT_00087fec;
  while( true ) {
    if (&DAT_00088058 < puVar1) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x85c);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x85c);
    }
    if (&UNK_00088057 < puVar1) break;
    if ((code *)puVar1[4] != (code *)0x0) {
      (*(code *)puVar1[4])(param_1,iVar3,param_1 + 0x90);
    }
    puVar1 = puVar1 + 9;
  }
  return;
}


