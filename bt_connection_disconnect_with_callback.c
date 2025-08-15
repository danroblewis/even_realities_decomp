/*
 * Function: bt_connection_disconnect_with_callback
 * Entry:    00056c78
 * Prototype: undefined bt_connection_disconnect_with_callback()
 */


int bt_connection_disconnect_with_callback(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00080f14(param_2);
  iVar3 = DAT_2000ad1c;
  if (iVar1 == 0) {
LAB_00056c8a:
    iVar1 = 0;
  }
  else {
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
      if ((*(code **)(iVar3 + 8) != (code *)0x0) &&
         ((iVar2 = (**(code **)(iVar3 + 8))(param_1,param_2), iVar2 == 0 ||
          (iVar2 = FUN_00080f14(param_2), iVar2 == 0)))) goto LAB_00056c8a;
    }
    puVar4 = &DAT_00087fec;
    while( true ) {
      if (&DAT_00088058 < puVar4) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x676);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x676);
      }
      if (&UNK_00088057 < puVar4) break;
      if (((code *)puVar4[2] != (code *)0x0) &&
         ((iVar3 = (*(code *)puVar4[2])(param_1,param_2), iVar3 == 0 ||
          (iVar3 = FUN_00080f14(param_2), iVar3 == 0)))) goto LAB_00056c8a;
      puVar4 = puVar4 + 9;
    }
  }
  return iVar1;
}


