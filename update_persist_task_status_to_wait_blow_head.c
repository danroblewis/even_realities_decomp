/*
 * Function: update_persist_task_status_to_wait_blow_head
 * Entry:    0002c180
 * Prototype: undefined update_persist_task_status_to_wait_blow_head()
 */


void update_persist_task_status_to_wait_blow_head
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  while (DAT_20018d9c != '\0') {
    short_timing_delay();
  }
  DAT_20018d9c = 1;
  if ((*(char *)(param_1 + 0xd5) != '\0') && (*(char *)(param_1 + 0xd5) != '\x01')) {
    display_close_screen(*(undefined1 *)(param_1 + 0xd5));
  }
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): persist task [stop]: %d\n","update_persist_task_status_to_wait_blow_head",1
                  ,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  *(undefined1 *)(param_1 + 0xd5) = 1;
  puVar1 = *(undefined1 **)(param_1 + 0x1054);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  DAT_20018d9c = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1054) + 4) = 1;
  return;
}


