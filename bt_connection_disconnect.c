/*
 * Function: bt_connection_disconnect
 * Entry:    00056a68
 * Prototype: undefined __stdcall bt_connection_disconnect(undefined4 conn_handle, undefined1 reason_code)
 */


int bt_connection_disconnect(undefined2 *conn_handle,undefined1 reason_code)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)((int)conn_handle + 0xd)) {
  case 2:
    *(undefined1 *)(conn_handle + 6) = reason_code;
    uVar2 = 0;
    break;
  default:
    return -0x80;
  case 6:
    if (*(char *)(conn_handle + 1) == '\x01') {
      return 0;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5d9);
    DEBUG_PRINT2("\tInvalid conn type %u\n",*(undefined1 *)(conn_handle + 1));
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5d9);
  case 7:
    iVar1 = FUN_00080ed8(*conn_handle);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)((int)conn_handle + 0xd) != '\a') {
      return 0;
    }
    uVar2 = 8;
    break;
  case 8:
    goto LAB_00056a94;
  }
  bt_connection_state_transition(conn_handle,uVar2);
LAB_00056a94:
  return 0;
}


