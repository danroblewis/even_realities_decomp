/*
 * Function: push_message
 * Entry:    00033f54
 * Prototype: undefined push_message()
 */


char push_message(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char *format_string;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar7 = LOG_LEVEL;
  if (param_1 == 0) {
    uVar4 = 0x34f;
    pcVar3 = "push_message";
    format_string = "[%s-%d] message is NULL \n";
  }
  else if (*(int *)(param_1 + 0x1b0) == 0) {
    uVar8 = validate_data_entry_exists
                      (0x14,*(undefined4 *)(param_1 + 8),param_3,0,param_1,param_2,param_3);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
LAB_00033fb2:
      *(undefined1 *)(param_1 + 0xf) = 0;
      bVar1 = SYSTEM_MESSAGE_QUEUE;
      uVar6 = (uint)SYSTEM_MESSAGE_QUEUE;
      if (uVar6 < 0x14) {
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(byte *)(param_1 + 0xc) = bVar1;
        memcpy(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + uVar6 * 0x6d,param_1);
        if (0 < iVar7) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): update pos to %d, uidtail %d message->startShowTime %d action %d\n",
                        "push_message",uVar6,*(undefined4 *)(param_1 + 8),
                        *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1b0));
          }
          else {
            handle_heartbeat(
                            "%s(): update pos to %d, uidtail %d message->startShowTime %d action %d\n"
                            );
          }
        }
        SYSTEM_MESSAGE_QUEUE = SYSTEM_MESSAGE_QUEUE + 1;
      }
      else {
        if (0 < iVar7) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): update pos to %d, uidtail %d message->startShowTime %d\n",
                        "push_message",0x13,uVar4,*(undefined4 *)(param_1 + 4));
          }
          else {
            handle_heartbeat("%s(): update pos to %d, uidtail %d message->startShowTime %d\n",
                             "push_message",0x13);
          }
        }
        iVar7 = 10;
        puVar5 = &MESSAGE_BUFFER_MANAGEMENT_SYSTEM;
        do {
          if (*(char *)((int)puVar5 + 0xd) == '\0') {
            iVar2 = memcpy(puVar5,puVar5 + 0x6d,0x1b4);
            *(char *)(iVar2 + 0xc) = (char)iVar7;
            if (*(char *)(iVar2 + 0xe) == '\0') {
              *(undefined1 *)(param_1 + 0xd) = 0;
            }
          }
          iVar7 = iVar7 + 1;
          puVar5 = puVar5 + 0x6d;
        } while (iVar7 != 0x13);
        memcpy(&DAT_20009e08,param_1,0x1b4);
        SYSTEM_MESSAGE_QUEUE = '\x14';
        MESSAGE_PUSH_STATE_1 = 0x13;
        MESSAGE_PUSH_STATE_2 = 0;
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("[csh_debug_msg]push_message g_msg_num_push is %d \n");
        return SYSTEM_MESSAGE_QUEUE;
      }
      handle_heartbeat();
      return SYSTEM_MESSAGE_QUEUE;
    }
    if (iVar7 < 1) {
      return '\0';
    }
    pcVar3 = "push_message";
    format_string = "%s(): slave add found same message, uidtail %d\n";
  }
  else {
    uVar8 = validate_data_entry_exists
                      (0x14,*(undefined4 *)(param_1 + 8),param_3,*(int *)(param_1 + 0x1b0),param_1,
                       param_2,param_3);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) goto LAB_00033fb2;
    if (iVar7 < 1) {
      return '\0';
    }
    pcVar3 = "push_message";
    format_string = "%s(): can not found same message, uidtail %d\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,pcVar3,uVar4);
  }
  else {
    handle_heartbeat();
  }
  return '\0';
}


