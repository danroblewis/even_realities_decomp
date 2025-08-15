/*
 * Function: get_assign_channel_info
 * Entry:    00031fd8
 * Prototype: undefined get_assign_channel_info()
 */


undefined4
get_assign_channel_info(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 auStack_9c [8];
  char local_94;
  char local_47;
  char local_46;
  
  if (3 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): join in get_assign_channel_info\n\n","get_assign_channel_info");
    }
    else {
      handle_heartbeat();
    }
  }
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): get_assign_channel_info para is NULL\n\n","get_assign_channel_info");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = 0xffffffff;
  }
  else if (SYSTEM_READY_AND_SETTINGS_STATE == '\x01') {
    puVar4 = (undefined1 *)*param_3;
    iVar2 = get_work_mode();
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_1 + 4);
    iVar2 = get_work_mode();
    *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 5);
    iVar2 = get_work_mode();
    *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(param_1 + 6);
    if (3 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        iVar2 = get_work_mode();
        DEBUG_PRINT("%s(): esb_channel: %d\n\n","get_assign_channel_info",(uint)*(byte *)(iVar2 + 2)
                   );
      }
      else {
        iVar2 = get_work_mode();
        handle_heartbeat("%s(): esb_channel: %d\n\n","get_assign_channel_info",
                         *(undefined1 *)(iVar2 + 2));
      }
      if (3 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          iVar2 = get_work_mode();
          DEBUG_PRINT("%s(): esb master addr:%d\n\n","get_assign_channel_info",
                      (uint)*(byte *)(iVar2 + 3));
        }
        else {
          iVar2 = get_work_mode();
          handle_heartbeat("%s(): esb master addr:%d\n\n","get_assign_channel_info",
                           *(undefined1 *)(iVar2 + 3));
        }
        if (3 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            iVar2 = get_work_mode();
            DEBUG_PRINT("%s(): esb slave addr: %d\n\n","get_assign_channel_info",
                        (uint)*(byte *)(iVar2 + 4));
          }
          else {
            iVar2 = get_work_mode();
            handle_heartbeat("%s(): esb slave addr: %d\n\n","get_assign_channel_info",
                             *(undefined1 *)(iVar2 + 4));
          }
        }
      }
    }
    uVar1 = get_work_mode();
    prepare_system_settings_for_verification(uVar1,0);
    cVar3 = '\0';
    *puVar4 = 0x1d;
    puVar4[2] = 3;
    puVar4[1] = 1;
    puVar4[3] = 1;
    puVar4[4] = 0;
    do {
      iVar2 = read_sys_settting_from_flash(auStack_9c);
      if ((((iVar2 == 0) && (*(char *)(param_1 + 4) == local_94)) &&
          (*(char *)(param_1 + 5) == local_47)) && (*(char *)(param_1 + 6) == local_46))
      goto LAB_00032102;
      cVar3 = cVar3 + '\x01';
      delay_ms(100);
    } while (cVar3 != '\x05');
    puVar4[4] = 1;
LAB_00032102:
    uVar1 = 0;
    *param_4 = 5;
  }
  else {
    DEBUG_PRINT("warning: not test mode,disable setting\n");
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}


