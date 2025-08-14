/*
 * Function: post_notification_cmd_response
 * Entry:    000340c4
 * Prototype: undefined post_notification_cmd_response(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
post_notification_cmd_response
          (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  undefined *format_string;
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || ((param_4 == 0 || (param_5 == 0))))
     || (param_6 == (undefined4 *)0x0)) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): input parm invalid !\n","post_notification_cmd_response",param_5,0,
                    param_1,param_2,param_3);
      }
      else {
        handle_heartbeat();
      }
    }
    return 0;
  }
  iVar1 = param_2;
  iVar4 = param_3;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): BLE_REQ_POST_NOTIFICATION_MSG source:%d\n","post_notification_cmd_response"
                  ,(uint)*(byte *)(param_4 + 1),0,param_1,param_2,param_3);
    }
    else {
      handle_heartbeat();
    }
  }
  if (*(char *)(param_4 + 1) == '\x04') {
    FUN_0008705a(*(int *)(param_1 + 0xff8) + 8,param_2 + 0x54,0x10);
    FUN_0008705a(*(int *)(param_1 + 0xff8) + 0x19,param_2 + 0x94,0x96);
    puVar2 = *(undefined1 **)(param_1 + 0xff8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if (*(char *)(param_1 + 0xd5) == '\0') {
      *(undefined1 *)(param_1 + 0xb0d) = 1;
    }
    if (2 < LOG_LEVEL) {
      puVar3 = *(undefined4 **)(param_1 + 0xff8);
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): schedule_notif#title:%s, desc:%s, ts:%d, date:%s\n",
                    "post_notification_cmd_response",puVar3 + 2,(int)puVar3 + 0x19,*puVar3,
                    param_2 + 0x194);
      }
      else {
        handle_heartbeat("%s(): schedule_notif#title:%s, desc:%s, ts:%d, date:%s\n");
      }
    }
  }
  else {
    if (*(ushort *)(param_4 + 2) != 0x1b4) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat("%s(): [%s-%d] invliad  message len, data_len is %d\n\n",
                         "post_notification_cmd_response","post_notification_cmd_response");
        return 0;
      }
      DEBUG_PRINT("%s(): [%s-%d] invliad  message len, data_len is %d\n\n",
                  "post_notification_cmd_response","post_notification_cmd_response",0x158,
                  (uint)*(ushort *)(param_4 + 2),iVar1,iVar4);
      return 0;
    }
    if ((*(uint *)(param_2 + 0x1b4) < 2) &&
       (iVar1 = FUN_00034bd4(param_2 + 0x14), 1 < (iVar1 - 2U & 0xff))) {
      if (iVar1 == 1) {
        FUN_0003384c(param_2 + 4);
      }
    }
    else {
      push_message(param_2 + 4);
    }
  }
  if (*(char *)(param_3 + 1) == '\x04') {
    if (LOG_LEVEL < 3) goto LAB_000341a8;
    format_string = &DAT_000a7fae;
  }
  else {
    if ((*(char *)(param_3 + 1) != '\x06') || (LOG_LEVEL < 3)) goto LAB_000341a8;
    format_string = &UNK_000a7fe3;
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"post_notification_cmd_response");
  }
  else {
    handle_heartbeat();
  }
LAB_000341a8:
  *param_6 = 0x646f6f47;
  *(undefined1 *)(param_6 + 1) = 0;
  return 5;
}


