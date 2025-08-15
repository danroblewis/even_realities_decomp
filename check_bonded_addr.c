/*
 * Function: check_bonded_addr
 * Entry:    000183e4
 * Prototype: undefined check_bonded_addr()
 */


void check_bonded_addr(undefined4 param_1)

{
  undefined1 auStack_28 [36];
  
  format_status_message(param_1,auStack_28);
  STATUS_MESSAGE_AND_BONDED_ADDRESS_MANAGEMENT = STATUS_MESSAGE_AND_BONDED_ADDRESS_MANAGEMENT + 1;
  *(undefined1 *)(ANCS_CONNECTION_HANDLE + 0x367) = 0;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Got %s bind addr %d\n\n","check_bonded_addr",auStack_28);
    }
    else {
      handle_heartbeat("%s(): Got %s bind addr %d\n\n","check_bonded_addr",auStack_28);
    }
  }
  return;
}


