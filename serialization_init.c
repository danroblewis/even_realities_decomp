/*
 * Function: serialization_init
 * Entry:    00025c54
 * Prototype: undefined serialization_init()
 */


undefined4 serialization_init(void)

{
  int iVar1;
  char *format_string;
  undefined8 uVar2;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): IPC-service HOST init started\n","serialization_init");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = execute_callback_function_with_validation(&DAT_00087c08);
  if ((iVar1 < 0) && (iVar1 != -0x78)) {
    if (LOG_LEVEL < 1) {
      return 0xffffffff;
    }
    format_string = "%s(): ipc_service_open_instance() failure\n";
  }
  else {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ipc open %d\n","serialization_init");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = execute_callback_with_context_validation(&DAT_00087c08,&DAT_20007a78,&DAT_200023dc);
    if (-1 < (int)uVar2) {
      manage_ble_connection_state_comprehensive
                (&DAT_200039c8,(int)((ulonglong)uVar2 >> 0x20),0xffffffff,0xffffffff);
      DAT_20007a80 = 1;
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ipc_service[HOST] has ready!\n\n","serialization_init");
        }
        else {
          handle_heartbeat();
        }
      }
      return 0;
    }
    if (LOG_LEVEL < 1) {
      return 0xffffffff;
    }
    format_string = "%s(): ipc_service_register_endpoint() failure\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"serialization_init");
  }
  else {
    handle_heartbeat();
  }
  return 0xffffffff;
}


