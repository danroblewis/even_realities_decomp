/*
 * Function: reset_usr_setting
 * Entry:    00022ddc
 * Prototype: undefined reset_usr_setting()
 */


undefined4 reset_usr_setting(int param_1)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): reset_usr_setting\n","reset_usr_setting");
    }
    else {
      handle_heartbeat();
    }
  }
  *(undefined1 *)(param_1 + 0xfea) = 10;
  *(undefined1 *)(param_1 + 0xed5) = 0x15;
  *(undefined4 *)(param_1 + 0xf6c) = 400;
  *(undefined1 *)(param_1 + 0xf60) = 1;
  *(undefined1 *)(param_1 + 0xf98) = 1;
  *(undefined1 *)(param_1 + 0x108d) = 1;
  *(undefined1 *)(param_1 + 0x1070) = 0;
  *(undefined1 *)(param_1 + 0xec0) = 3;
  *(undefined4 *)(param_1 + 0x1069) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x106c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xef4) = 0x114;
  *(undefined1 *)(param_1 + 0x108f) = 0;
  *(undefined2 *)(param_1 + 0x1090) = 0;
  log_debug_message_with_heartbeat(0);
  *(undefined1 *)(param_1 + 0xec1) = 3;
  *(undefined4 *)(param_1 + 0xf68) = 0;
  handle_data_verification_with_system_state_extraction(param_1,0);
  return 0;
}


