/*
 * Function: global_ipc_service_send
 * Entry:    00025b78
 * Prototype: undefined global_ipc_service_send()
 */


int global_ipc_service_send(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((SERIALIZATION_INITIALIZATION_STATE == 1) &&
      (iVar1 = get_work_mode(), *(char *)(iVar1 + 1) != '\b')) &&
     (iVar1 = get_work_mode(), *(char *)(iVar1 + 1) != '\t')) {
    iVar1 = execute_callback_with_pointer_validation(&DAT_20007a78,param_1,param_2);
    if (iVar1 < 0) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) goto LAB_00025bf2;
        handle_heartbeat("%s(): ipc_service_send data failed with ret %d %d\n",
                         "global_ipc_service_send",iVar1,GLOBAL_IPC_SERVICE_STATE);
      }
      while (GLOBAL_IPC_SERVICE_STATE = GLOBAL_IPC_SERVICE_STATE + 1, 2 < GLOBAL_IPC_SERVICE_STATE)
      {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): sys reboot because ipc failed\n","global_ipc_service_send");
          }
          else {
            handle_heartbeat();
          }
        }
        calculate_ble_schedule_timing(0x4000,0);
        system_fatal_error_handler_with_priority_control(1);
LAB_00025bf2:
        DEBUG_PRINT("%s(): ipc_service_send data failed with ret %d %d\n","global_ipc_service_send",
                    iVar1);
      }
      return iVar1;
    }
    GLOBAL_IPC_SERVICE_STATE = 0;
    return iVar1;
  }
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): ipc_service not ready!\n","global_ipc_service_send");
    }
    else {
      handle_heartbeat();
    }
  }
  return -1;
}


