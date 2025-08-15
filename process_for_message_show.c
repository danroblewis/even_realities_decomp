/*
 * Function: process_for_message_show
 * Entry:    0002c714
 * Prototype: undefined process_for_message_show()
 */


undefined4 process_for_message_show(char *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  
  sVar7 = 1000;
  do {
    iVar3 = get_work_mode();
    if (*(char *)(iVar3 + 0xdd) == '\0') break;
    iVar3 = get_work_mode();
    iVar3 = get_data_by_index_offset(*(byte *)(iVar3 + 0xdd) - 1);
    if (iVar3 == 4) break;
    sVar7 = sVar7 + -1;
    get_schedule_timing(0x21,0);
  } while (sVar7 != 0);
  uVar8 = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  control_timer_operation(4);
  uVar2 = map_work_mode_to_state_value(param_1[0xfea],0xf);
  *(undefined1 *)(param_2 + 7) = uVar2;
  do {
    while( true ) {
      if (param_1[0x108f] == '\0') {
        bVar9 = *param_3 == 1;
      }
      else {
        iVar3 = is_msg_expiration();
        bVar9 = iVar3 == 2;
      }
      if (((bVar9) || (*(char *)(param_2 + 7) == '\0')) && (param_1[0xfea] == '\n')) break;
      if (((param_1[1] == '\x01') || (iVar3 = get_work_mode(), *(char *)(iVar3 + 1) == '\b')) ||
         (iVar3 = get_work_mode(), *(char *)(iVar3 + 0xfea) == '\f')) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): #2 %d: I will go to suspend, goodbye!\n","process_for_message_show",
                        (uint)*(byte *)(param_2 + 1));
          }
          else {
            handle_heartbeat();
          }
        }
        update_persist_task_status_to_idle(param_1);
        *param_4 = "imu-trigger-off-imm";
        control_timer_operation(5);
        return 10;
      }
      if (*(char *)(param_2 + 1) != '\x04') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): #3 %d: screen_id is changed, I will go to next screen, goodbye!\n",
                        "process_for_message_show",(uint)*(byte *)(param_2 + 1));
          }
          else {
            handle_heartbeat();
          }
        }
        if (*(char *)(param_2 + 1) != '\0') {
          return 0xb;
        }
        goto LAB_0002c884;
      }
      uVar8 = uVar8 + 1;
      if (((uVar8 & 0xf) == 0) && (2 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&DAT_000a29be,"process_for_message_show",uVar8,
                      **(undefined4 **)(param_1 + 0xff0),(uint)*param_3,(uint)*(byte *)(param_2 + 9)
                      ,(uint)*(byte *)(param_2 + 0xf),*(undefined4 *)(param_2 + 0xb),
                      (uint)*(byte *)(param_2 + 8));
        }
        else {
          handle_heartbeat();
        }
      }
      if (((param_1[0x108f] != '\0') && (*param_1 == '\x01')) &&
         ((uVar8 * -0x33333333 >> 2 | uVar8 * 0x40000000) < 0xccccccd)) {
        bVar1 = *(byte *)(param_2 + 7);
        bVar6 = bVar1;
        if (bVar1 < 0x14) {
          bVar6 = bVar1 - 1;
        }
        if (bVar1 < 0x14) {
          *(byte *)(param_2 + 7) = bVar6;
        }
      }
LAB_0002c894:
      get_schedule_timing(0x667,0);
    }
    if ((*(char *)(param_2 + 1) == '\x06') ||
       ((*(char *)(param_2 + 1) != '\x06' && (*param_3 == 2)))) {
      iVar3 = get_work_mode();
      if ((*(char *)(iVar3 + 0x108f) != '\0') &&
         (pcVar4 = (char *)get_work_mode(), *pcVar4 == '\x01')) {
        iVar3 = get_work_mode();
        uVar8 = *(uint *)(iVar3 + 0x1060);
        *(uint *)(iVar3 + 0x1060) = uVar8 - 1000;
        *(uint *)(iVar3 + 0x1064) = *(int *)(iVar3 + 0x1064) + -1 + (uint)(999 < uVar8);
      }
      sync_to_slave(param_1,0xc,0);
      uVar5 = get_work_mode();
      update_temp_task_status(uVar5,6,2);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #0 %d: I will go to dashboard, goodbye!\n","process_for_message_show",
                      (uint)*(byte *)(param_2 + 1));
        }
        else {
          handle_heartbeat();
        }
      }
      return 0xb;
    }
    sync_to_slave(param_1,8,0);
    if (*param_1 == '\x01') {
      update_persist_task_status_to_idle(param_1);
    }
    else if (*(char *)(param_2 + 1) == '\x04') goto LAB_0002c894;
    control_timer_operation(5);
    if (*param_1 == '\x01') {
      get_schedule_timing(0x4000,0);
    }
    iVar3 = get_system_status_value();
  } while (iVar3 == 4);
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #1 %d: I will go to suspend, goodbye!\n","process_for_message_show",
                  (uint)*(byte *)(param_2 + 1));
    }
    else {
      handle_heartbeat();
    }
  }
LAB_0002c884:
  *param_4 = "imu-trigger-off-imm";
  return 10;
}


