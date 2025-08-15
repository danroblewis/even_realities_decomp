/*
 * Function: handle_work_mode_finish
 * Entry:    0007cbfe
 * Prototype: undefined __stdcall handle_work_mode_finish(undefined4 work_mode_context, undefined4 send_event_flag)
 */


void handle_work_mode_finish(int work_mode_context,int send_event_flag)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  iVar1 = check_work_mode_state_valid();
  if (iVar1 == 0) {
    return;
  }
  if ((*(char *)(*(int *)(work_mode_context + 0x1004) + 6) != '\0') ||
     (cVar3 = *(char *)(*(int *)(work_mode_context + 0x1008) + 6), cVar3 != '\0')) {
    enable_dmic_stream();
    fill_memory_buffer(*(int *)(work_mode_context + 0x1008) + 6,0,400);
    fill_memory_buffer(*(int *)(work_mode_context + 0x1004) + 6,0,400);
    cVar3 = '\x01';
  }
  if (**(char **)(work_mode_context + 0x1000) != '\0') {
    **(char **)(work_mode_context + 0x1000) = '\0';
    cVar3 = '\x01';
  }
  if (*(char *)(*(int *)(work_mode_context + 0xffc) + 1) != '\0') {
    enable_dmic_stream();
    *(undefined1 *)(*(int *)(work_mode_context + 0xffc) + 1) = 0;
    cVar3 = '\x01';
  }
  if (**(char **)(work_mode_context + 0x1020) != '\0') {
    enable_dmic_stream();
    **(undefined1 **)(work_mode_context + 0x1020) = 0;
    cVar3 = '\x01';
  }
  if (*(char *)(work_mode_context + 0xd5) == '\x06') {
    cVar3 = '\x01';
  }
  else if (*(char *)(work_mode_context + 0xd5) == '\x04') {
    cVar3 = '\x01';
  }
  if (**(char **)(work_mode_context + 0x1014) != '\0') {
    **(char **)(work_mode_context + 0x1014) = '\0';
    cVar3 = '\x01';
  }
  if (**(char **)(work_mode_context + 0x1018) != '\0') {
    **(char **)(work_mode_context + 0x1018) = '\0';
    cVar3 = '\x01';
  }
  if (*(char *)(*(int *)(work_mode_context + 0x100c) + 7) == '\0') {
    pcVar2 = *(char **)(work_mode_context + 0x101c);
    if (*pcVar2 == '\0') {
      if (cVar3 == '\0') {
        return;
      }
      goto LAB_0007ccb2;
    }
  }
  else {
    enable_dmic_stream();
    clear_work_mode_flags_and_buffers(1);
    pcVar2 = *(char **)(work_mode_context + 0x101c);
    if (*pcVar2 == '\0') goto LAB_0007ccb2;
  }
  *pcVar2 = '\0';
LAB_0007ccb2:
  if (send_event_flag != 0) {
    send_event_status(0);
  }
  update_persist_task_status_to_idle(work_mode_context);
  fill_memory_buffer(work_mode_context + 0xef,0,0x5dc);
  return;
}


