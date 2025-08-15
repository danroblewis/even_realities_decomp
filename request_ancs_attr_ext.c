/*
 * Function: request_ancs_attr_ext
 * Entry:    000191e4
 * Prototype: undefined request_ancs_attr_ext()
 */


int request_ancs_attr_ext(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = get_bluetooth_manager();
  iVar2 = initialize_data_structure_with_configuration
                    (&DAT_20006ae8,&ANCS_DATA_SOURCE_HANDLER_STATE,&LAB_0001827c_1);
  uVar3 = 0;
  do {
    if ((((ANCS_ATTRIBUTE_REQUEST_STATE == 0) && ((ushort)ANCS_DATA_SOURCE_HANDLER_STATE != 0)) &&
        (*BLUETOOTH_ANCS_DATA_SOURCE_HANDLER != '\0')) && (*(char *)(iVar1 + 0x44) != '\0'))
    goto LAB_0001925a;
    calculate_ble_schedule_timing(0x21,0);
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 != 0x3e9);
  if (0 < LOG_LEVEL) {
    param_1 = calculate_string_length(BLUETOOTH_ANCS_DATA_SOURCE_HANDLER);
    param_2 = (uint)*(byte *)(iVar1 + 0x44);
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): notif_attr_app_id_latest.attr_id %d notif_attr_app_id_latest.attr_len %d strlen(notif_attr_app_id_latest.attr_data) %d c->notifi_data.app_identifier %d\n"
                  ,"request_ancs_attr_ext",ANCS_ATTRIBUTE_REQUEST_STATE,
                  (uint)(ushort)ANCS_DATA_SOURCE_HANDLER_STATE,param_1,param_2);
    }
    else {
      handle_heartbeat("%s(): notif_attr_app_id_latest.attr_id %d notif_attr_app_id_latest.attr_len %d strlen(notif_attr_app_id_latest.attr_data) %d c->notifi_data.app_identifier %d\n"
                       ,"request_ancs_attr_ext",ANCS_ATTRIBUTE_REQUEST_STATE);
    }
  }
  if (ANCS_ATTRIBUTE_REQUEST_STATE == 0) {
LAB_0001925a:
    if (((ushort)ANCS_DATA_SOURCE_HANDLER_STATE != 0) &&
       (*BLUETOOTH_ANCS_DATA_SOURCE_HANDLER != '\0')) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("Request for %s: retry_time %d\n",BLUETOOTH_ANCS_DATA_SOURCE_HANDLER,uVar3,0,
                    param_1,param_2,param_3);
      }
      else {
        handle_heartbeat();
      }
      for (; uVar3 < 200; uVar3 = uVar3 + 1 & 0xffff) {
        iVar2 = thunk_process_data_with_ble_buffer_management
                          (&DAT_20006ae8,BLUETOOTH_ANCS_DATA_SOURCE_HANDLER,
                           (ushort)ANCS_DATA_SOURCE_HANDLER_STATE,&LAB_0001827c_1);
        if (iVar2 == 0) goto LAB_00019286;
        calculate_ble_schedule_timing(0xa4,0);
      }
      if (iVar2 != 0) {
        DEBUG_PRINT("Failed requesting attributes for a given app (err: %d)\n",iVar2);
      }
    }
  }
LAB_00019286:
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("notif_attr_app_id_latest.attr_id (%d/%d) retry_time %d\n",
                ANCS_ATTRIBUTE_REQUEST_STATE,(uint)(ushort)ANCS_DATA_SOURCE_HANDLER_STATE,uVar3,
                param_1,param_2);
  }
  else {
    handle_heartbeat("notif_attr_app_id_latest.attr_id (%d/%d) retry_time %d\n",
                     ANCS_ATTRIBUTE_REQUEST_STATE,(uint)(ushort)ANCS_DATA_SOURCE_HANDLER_STATE,uVar3
                    );
  }
  return iVar2;
}


