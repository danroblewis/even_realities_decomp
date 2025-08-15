/*
 * Function: handle_message_expiration_and_sync
 * Entry:    0002c2b0
 * Prototype: undefined handle_message_expiration_and_sync()
 */


void handle_message_expiration_and_sync(void)

{
  int iVar1;
  
  while ((iVar1 = get_system_status_value(), iVar1 == 5 && (iVar1 = is_msg_expiration(), iVar1 == 2)
         )) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("[csh_debug_msg] check showing msg timeout \n");
    }
    else {
      handle_heartbeat();
    }
    iVar1 = sync_message_signal_to_slave(2);
    if (iVar1 < 3000) {
      manage_timeout_message_states();
      iVar1 = get_work_mode();
      if (*(char *)(iVar1 + 0xdd) == '\0') {
        control_timer_operation();
        return;
      }
      control_timer_operation(6);
    }
  }
  return;
}


