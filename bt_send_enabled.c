/*
 * Function: bt_send_enabled
 * Entry:    00017e3c
 * Prototype: undefined bt_send_enabled()
 */


void bt_send_enabled(int param_1)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): status:%d\n\n","bt_send_enabled",param_1);
    }
    else {
      handle_heartbeat();
    }
  }
  *(bool *)(BLUETOOTH_MANAGER + 0x366) = param_1 == 0;
  return;
}


