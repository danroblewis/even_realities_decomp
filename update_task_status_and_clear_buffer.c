/*
 * Function: update_task_status_and_clear_buffer
 * Entry:    0007cdb6
 * Prototype: undefined __stdcall update_task_status_and_clear_buffer(undefined4 work_mode_context, undefined4 send_status_event, undefined4 unused_param3, undefined4 buffer_fill_value)
 */


void update_task_status_and_clear_buffer
               (int work_mode_context,int send_status_event,undefined4 param_3,
               undefined4 buffer_fill_value)

{
  int iVar1;
  
  iVar1 = check_work_mode_state_valid();
  if ((iVar1 != 0) &&
     ((*(char *)(work_mode_context + 0xd5) == '\x06' ||
      (*(char *)(work_mode_context + 0xd5) == '\x04')))) {
    if (send_status_event != 0) {
      send_event_status(0);
    }
    update_persist_task_status_to_idle(work_mode_context);
    fill_memory_buffer(work_mode_context + 0xef,0,0x5dc,buffer_fill_value);
    return;
  }
  return;
}


