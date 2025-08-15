/*
 * Function: bt_ancs_data_source_handler
 * Entry:    00018c48
 * Prototype: undefined bt_ancs_data_source_handler()
 */


void bt_ancs_data_source_handler(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = param_2;
  iVar1 = get_bluetooth_manager();
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): bt_ancs_data_source_handler response->command_id %d\n",
                  "bt_ancs_data_source_handler",(uint)*param_2,0,param_1,pbVar4,param_3);
    }
    else {
      handle_heartbeat();
    }
  }
  if (*param_2 == 0) {
    if (*(int *)(param_2 + 8) == 0) {
      ANCS_DATA_SOURCE_HANDLER_STATE = *(undefined4 *)(param_2 + 4);
      ANCS_ATTRIBUTE_REQUEST_STATE = *(undefined4 *)(param_2 + 8);
      BLUETOOTH_ANCS_DATA_SOURCE_HANDLER = *(undefined4 *)(param_2 + 0xc);
      DAT_2000ff71 = '\x01';
    }
  }
  else if ((*param_2 == 1) && (DAT_2000ff71 != '\0')) {
    if (ANCS_DATA_SOURCE_HANDLER_STATE != DAT_2000231c) {
      iVar2 = calculate_ble_connection_timing_with_scaling_alt();
      iVar3 = get_work_mode();
      if (9999 < (uint)(iVar2 - *(int *)(iVar3 + 0xae8))) {
        iVar2 = get_work_mode();
        if (*(char *)(iVar2 + 0xd5) != '\v') {
          iVar2 = get_work_mode();
          if (*(char *)(iVar2 + 0xd5) != '\n') {
            iVar2 = get_work_mode();
            if (*(char *)(iVar2 + 0xd5) != '\t') {
              iVar2 = get_work_mode();
              if (*(char *)(iVar2 + 0xd5) != '\f') {
                iVar2 = get_work_mode();
                if ((*(char *)(iVar2 + 0xd5) != '\x10') &&
                   (iVar2 = get_work_mode(), *(char *)(iVar2 + 0xd5) != '\x0e')) {
                  DAT_2000231c = ANCS_DATA_SOURCE_HANDLER_STATE;
                  *(uint *)(iVar1 + 0x1e4) = (uint)DAT_20006ab0;
                  enqueue_ancs(iVar1 + 0x34);
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): =========================>bt_ancs_get_attr_data_sem %d evt_id %d action %d\n"
                                  ,"bt_ancs_data_source_handler",ANCS_DATA_SOURCE_HANDLER_STATE,
                                  (uint)DAT_20006ab0,*(undefined4 *)(iVar1 + 0x1e4));
                    }
                    else {
                      handle_heartbeat(
                                      "%s(): =========================>bt_ancs_get_attr_data_sem %d evt_id %d action %d\n"
                                      );
                    }
                  }
                  fill_memory_buffer(iVar1 + 0x34,0,0x1b4);
                  z_spin_lock_valid(iVar1 + 0x1e8);
                  DAT_2000ff71 = '\0';
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


