/*
 * Function: pairing_failed
 * Entry:    00018444
 * Prototype: undefined pairing_failed()
 */


void pairing_failed(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = FUN_00081526();
  format_status_message(uVar1,auStack_30);
  DEBUG_PRINT("Pairing failed conn: %s, reason %d\n",auStack_30,param_2);
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): bt_conn_disconnect because Pairing failed\n","pairing_failed");
    }
    else {
      handle_heartbeat();
    }
  }
  bt_connection_disconnect(param_1,0x13);
  return;
}


