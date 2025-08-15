/*
 * Function: update_persist_task_status_to_idle
 * Entry:    0002c0e8
 * Prototype: undefined update_persist_task_status_to_idle()
 */


void update_persist_task_status_to_idle(int param_1)

{
  while (DAT_20018d9c != '\0') {
    short_timing_delay();
  }
  DAT_20018d9c = 1;
  if ((*(char *)(param_1 + 0xd5) != '\0') || (*(char *)(*(int *)(param_1 + 0x1054) + 4) != '\x01'))
  {
    if ((*(char *)(param_1 + 0xd5) != '\0') && (*(char *)(param_1 + 0xd5) != '\x01')) {
      display_close_screen(*(undefined1 *)(param_1 + 0xd5));
    }
    if (*(char *)(param_1 + 0xd5) == '\x10') {
      *(undefined1 *)(param_1 + 0xf98) = DAT_20018d9d;
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): persist task [stop]: %d\n","update_persist_task_status_to_idle");
      }
      else {
        handle_heartbeat("%s(): persist task [stop]: %d\n","update_persist_task_status_to_idle",0);
      }
    }
    *(undefined1 *)(param_1 + 0xd5) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1054) + 4) = 1;
  }
  DAT_20018d9c = 0;
  return;
}


