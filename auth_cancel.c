/*
 * Function: auth_cancel
 * Entry:    0001849c
 * Prototype: undefined auth_cancel()
 */


void auth_cancel(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_28 [32];
  
  uVar1 = get_connection_data_pointer();
  format_status_message(uVar1,auStack_28);
  DEBUG_PRINT("Pairing cancelled: %s\n",auStack_28);
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): bt_conn_disconnect because Pairing cancelled\n","auth_cancel");
    }
    else {
      handle_heartbeat();
    }
  }
  bt_connection_disconnect(param_1,0x13);
  return;
}


