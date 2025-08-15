/*
 * Function: pull_message
 * Entry:    000342e0
 * Prototype: undefined pull_message()
 */


byte pull_message(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): [%s-%d] message is NULL \n\n","pull_message","pull_message",0x3bd,param_4
                   );
      }
      else {
        handle_heartbeat("%s(): [%s-%d] message is NULL \n\n","pull_message","pull_message",0x3bd);
      }
    }
  }
  else {
    iVar1 = get_work_mode();
    if (*(byte *)(iVar1 + 0xdd) < 0xb) {
      *param_1 = &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + (uint)TIMEOUT_MESSAGE_STATE * 0x6d;
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return TIMEOUT_MESSAGE_STATE;
      }
      DEBUG_PRINT("[csh_debug_msg]g_curShowMsgIdx is %d \n");
      return TIMEOUT_MESSAGE_STATE;
    }
    if (IS_DEBUG == 0) {
      iVar1 = get_work_mode();
      DEBUG_PRINT("exception handle, GLOBAL->master_sync_pkg.panel_data_pkg.unread_msg_num is %d \n"
                  ,(uint)*(byte *)(iVar1 + 0xdd));
    }
    else {
      iVar1 = get_work_mode();
      handle_heartbeat("exception handle, GLOBAL->master_sync_pkg.panel_data_pkg.unread_msg_num is %d \n"
                       ,*(undefined1 *)(iVar1 + 0xdd));
    }
  }
  return 10;
}


