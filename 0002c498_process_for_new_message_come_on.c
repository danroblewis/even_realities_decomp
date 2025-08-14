/*
 * Function: process_for_new_message_come_on
 * Entry:    0002c498
 * Prototype: undefined process_for_new_message_come_on()
 */


undefined1
process_for_new_message_come_on(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *extraout_r2;
  char cVar5;
  undefined4 *extraout_r3;
  int extraout_r3_00;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = FUN_0002c30c(param_1[0xfea],0xf,param_3,param_4,param_1,param_2,param_3);
  *(undefined1 *)(param_2 + 7) = uVar1;
  FUN_0003443c(2);
  iVar2 = get_work_mode();
  uVar7 = 0;
  piVar3 = (int *)FUN_00033c4c(*(byte *)(iVar2 + 0xdd) - 1);
  iVar2 = *piVar3;
  do {
    if (((param_1[1] == 1) || (iVar4 = get_work_mode(), *(char *)(iVar4 + 1) == '\b')) ||
       (iVar4 = get_work_mode(), *(char *)(iVar4 + 0xfea) == '\f')) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #0 %d: I will go to suspend, goodbye!\n",
                      "process_for_new_message_come_on",(uint)*(byte *)(param_2 + 1));
        }
        else {
          handle_heartbeat();
        }
      }
      update_persist_task_status_to_idle(param_1);
      *extraout_r3 = "message:imu-trigger-off-imm";
      goto LAB_0002c4ec;
    }
    iVar4 = iVar2;
    if (*param_1 == 1) {
      iVar4 = get_work_mode();
      piVar3 = (int *)FUN_00033c4c(*(byte *)(iVar4 + 0xdd) - 1);
      iVar4 = *piVar3;
      if (iVar4 != iVar2) {
        uVar1 = FUN_0002c30c(param_1[0xfea],0xf);
        *(undefined1 *)(param_2 + 7) = uVar1;
        iVar4 = extraout_r3_00;
      }
    }
    if (*(char *)(param_2 + 1) != '\x05') {
      if (LOG_LEVEL < 1) {
        return 0xb;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 0xb;
      }
      DEBUG_PRINT("%s(): goto next screen, new screen %d !\r\n\n","process_for_new_message_come_on",
                  (uint)*(byte *)(param_2 + 1));
      return 0xb;
    }
    if ((*extraout_r2 == '\x02') || (param_1[0xfea] == 0xb)) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&DAT_000a27dc,"process_for_new_message_come_on");
        }
        else {
          handle_heartbeat();
        }
      }
      FUN_00036030();
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): imu trigger on, switch -> show msg screen!\n",
                      "process_for_new_message_come_on");
        }
        else {
          handle_heartbeat();
        }
      }
      if (param_1[0xb0d] == 1) {
        update_temp_task_status(param_1,8,2);
        FUN_0003443c(4);
        return 0xb;
      }
      if ((*(char *)(param_2 + 1) == '\x05') && (uVar6 = (uint)*param_1, uVar6 == 1)) {
        sync_message_signal_to_slave(1);
        clear_timeout_message(0);
        FUN_0002c1fc();
        FUN_0003439c();
        update_temp_task_status(param_1,4,2);
        trigger_screen_state_change("IMU:wakeup:new-notification",param_1,uVar6);
        if (LOG_LEVEL < 1) {
          return 0xb;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0xb;
        }
        DEBUG_PRINT("%s(): goto new message come on task master!\r\n\n",
                    "process_for_new_message_come_on");
        return 0xb;
      }
    }
    uVar7 = uVar7 + 1;
    if (((uVar7 & 0xf) == 0) && (2 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): wait %d s goto suspend if no imu change!\n",
                    "process_for_new_message_come_on",(uint)*(byte *)(param_2 + 7));
      }
      else {
        handle_heartbeat();
      }
    }
    get_schedule_timing(0x667,0);
    if (*param_1 == 1) {
      uVar6 = uVar7 * -0x33333333;
      bVar8 = (uVar6 >> 2 | uVar7 * 0x40000000) < 0xccccccd;
      if (bVar8) {
        uVar6 = (uint)*(byte *)(param_2 + 7);
      }
      cVar5 = (char)uVar6;
      if (bVar8) {
        cVar5 = cVar5 + -1;
      }
      if (bVar8) {
        *(char *)(param_2 + 7) = cVar5;
      }
    }
    iVar2 = iVar4;
  } while (*(char *)(param_2 + 7) != '\0');
  param_1[0xb0d] = 0;
  uVar1 = 0;
  if (*(char *)(param_2 + 7) == '\0') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #0 %d: no imu trigger change, I will go to suspend, goodbye!\n",
                    "process_for_new_message_come_on",(uint)*(byte *)(param_2 + 1));
      }
      else {
        handle_heartbeat();
      }
    }
    *extraout_r3 = "new-msg-timeout-goto-idle";
    sync_to_slave(param_1,8,0);
    if (*extraout_r2 == '\x02') {
      update_persist_task_status_to_wait_blow_head();
    }
    else {
      update_persist_task_status_to_idle(param_1);
    }
    FUN_0003443c(6);
LAB_0002c4ec:
    uVar1 = 10;
  }
  return uVar1;
}


