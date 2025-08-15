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
  iVar2 = FUN_0007f6b6(&DAT_20006ae8,&DAT_20006aac,&LAB_0001827c_1);
  uVar3 = 0;
  do {
    if ((((DAT_20006aa4 == 0) && ((ushort)DAT_20006aa0 != 0)) && (*DAT_20006aa8 != '\0')) &&
       (*(char *)(iVar1 + 0x44) != '\0')) goto LAB_0001925a;
    calculate_ble_schedule_timing(0x21,0);
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 != 0x3e9);
  if (0 < LOG_LEVEL) {
    param_1 = calculate_string_length(DAT_20006aa8);
    param_2 = (uint)*(byte *)(iVar1 + 0x44);
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): notif_attr_app_id_latest.attr_id %d notif_attr_app_id_latest.attr_len %d strlen(notif_attr_app_id_latest.attr_data) %d c->notifi_data.app_identifier %d\n"
                  ,"request_ancs_attr_ext",DAT_20006aa4,(uint)(ushort)DAT_20006aa0,param_1,param_2);
    }
    else {
      handle_heartbeat("%s(): notif_attr_app_id_latest.attr_id %d notif_attr_app_id_latest.attr_len %d strlen(notif_attr_app_id_latest.attr_data) %d c->notifi_data.app_identifier %d\n"
                       ,"request_ancs_attr_ext",DAT_20006aa4);
    }
  }
  if (DAT_20006aa4 == 0) {
LAB_0001925a:
    if (((ushort)DAT_20006aa0 != 0) && (*DAT_20006aa8 != '\0')) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("Request for %s: retry_time %d\n",DAT_20006aa8,uVar3,0,param_1,param_2,param_3);
      }
      else {
        handle_heartbeat();
      }
      for (; uVar3 < 200; uVar3 = uVar3 + 1 & 0xffff) {
        iVar2 = thunk_FUN_0007f7d2(&DAT_20006ae8,DAT_20006aa8,(ushort)DAT_20006aa0,&LAB_0001827c_1);
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
    DEBUG_PRINT("notif_attr_app_id_latest.attr_id (%d/%d) retry_time %d\n",DAT_20006aa4,
                (uint)(ushort)DAT_20006aa0,uVar3,param_1,param_2);
  }
  else {
    handle_heartbeat("notif_attr_app_id_latest.attr_id (%d/%d) retry_time %d\n",DAT_20006aa4,
                     (uint)(ushort)DAT_20006aa0,uVar3);
  }
  return iVar2;
}


