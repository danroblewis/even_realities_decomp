/*
 * Function: update_persist_task_status
 * Entry:    0002bef4
 * Prototype: undefined update_persist_task_status()
 */


uint update_persist_task_status(int param_1,uint param_2,uint param_3)

{
  char *format_string;
  uint uVar1;
  
  while (PERSISTENT_TASK_STATUS_MANAGER != '\0') {
    short_timing_delay();
  }
  PERSISTENT_TASK_STATUS_MANAGER = 1;
  if (**(uint **)(param_1 + 0x1054) == param_2) {
    uVar1 = (uint)(byte)(*(uint **)(param_1 + 0x1054))[1];
    if (uVar1 == 1) {
      PERSISTENT_TASK_STATUS_MANAGER = 0;
      return param_3;
    }
    if (uVar1 == param_3) {
      PERSISTENT_TASK_STATUS_MANAGER = 0;
      return param_3;
    }
  }
  if ((*(char *)(param_1 + 0xd5) == '\0') || (*(char *)(param_1 + 0xd5) == '\x01')) {
    if (param_3 == 2) goto LAB_0002bf4a;
  }
  else {
    display_close_screen(*(undefined1 *)(param_1 + 0xd5));
    if (param_3 == 2) {
      if (0x10 < param_2) {
        PERSISTENT_TASK_STATUS_MANAGER = 0;
        return 2;
      }
      if (-1 < (int)((0x10050U >> (param_2 & 0xff)) << 0x1f)) {
        PERSISTENT_TASK_STATUS_MANAGER = 0;
        return 2;
      }
LAB_0002bf4a:
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): persist task [running]: %d\n","update_persist_task_status",param_2);
        }
        else {
          handle_heartbeat();
        }
      }
      if ((param_2 == 0x10) && (DAT_20018d9d = *(char *)(param_1 + 0xf98), DAT_20018d9d == '\x01'))
      {
        *(undefined1 *)(param_1 + 0xf98) = 0;
      }
      goto LAB_0002bf78;
    }
  }
  if (param_3 == 3) {
    if (LOG_LEVEL < 1) goto LAB_0002bf78;
    format_string = "%s(): persist task [pause]: %d\n";
  }
  else {
    if (LOG_LEVEL < 1) goto LAB_0002bf78;
    format_string = "%s(): persist task [stop]: %d\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"update_persist_task_status",param_2);
  }
  else {
    handle_heartbeat();
  }
LAB_0002bf78:
  *(char *)(param_1 + 0xd5) = (char)param_2;
  **(uint **)(param_1 + 0x1054) = param_2;
  *(char *)(*(int *)(param_1 + 0x1054) + 4) = (char)param_3;
  PERSISTENT_TASK_STATUS_MANAGER = 0;
  return param_3;
}


