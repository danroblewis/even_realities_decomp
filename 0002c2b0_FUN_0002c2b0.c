/*
 * Function: FUN_0002c2b0
 * Entry:    0002c2b0
 * Prototype: undefined FUN_0002c2b0()
 */


void FUN_0002c2b0(void)

{
  int iVar1;
  
  while ((iVar1 = FUN_00034410(), iVar1 == 5 && (iVar1 = is_msg_expiration(), iVar1 == 2))) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("[csh_debug_msg] check showing msg timeout \n");
    }
    else {
      handle_heartbeat();
    }
    iVar1 = sync_message_signal_to_slave(2);
    if (iVar1 < 3000) {
      FUN_00034274();
      iVar1 = get_work_mode();
      if (*(char *)(iVar1 + 0xdd) == '\0') {
        FUN_0003443c();
        return;
      }
      FUN_0003443c(6);
    }
  }
  return;
}


