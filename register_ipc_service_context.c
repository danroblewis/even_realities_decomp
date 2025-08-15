/*
 * Function: register_ipc_service_context
 * Entry:    00025d40
 * Prototype: undefined register_ipc_service_context()
 */


undefined4
register_ipc_service_context(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x60) = 0x25b79;
  *(undefined1 **)(param_1 + 100) = &LAB_00025ae8_1;
  DAT_20007a84 = param_1;
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): exit\n\n","register_ipc_service_context",param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  return 0;
}


