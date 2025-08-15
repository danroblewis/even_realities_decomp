/*
 * Function: render_panoramic_view
 * Entry:    0007cce8
 * Prototype: undefined __stdcall render_panoramic_view(undefined4 panoramic_context, undefined4 send_status)
 */


void render_panoramic_view(int panoramic_context,int send_status)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  iVar1 = check_work_mode_state_valid();
  if (iVar1 == 0) {
    return;
  }
  if ((*(char *)(*(int *)(panoramic_context + 0x1004) + 6) != '\0') ||
     (cVar3 = *(char *)(*(int *)(panoramic_context + 0x1008) + 6), cVar3 != '\0')) {
    enable_dmic_stream();
    fill_memory_buffer(*(int *)(panoramic_context + 0x1008) + 6,0,400);
    fill_memory_buffer(*(int *)(panoramic_context + 0x1004) + 6,0,400);
    cVar3 = '\x01';
  }
  if (**(char **)(panoramic_context + 0x1000) != '\0') {
    **(char **)(panoramic_context + 0x1000) = '\0';
    cVar3 = '\x01';
  }
  if (*(char *)(*(int *)(panoramic_context + 0xffc) + 1) != '\0') {
    enable_dmic_stream();
    *(undefined1 *)(*(int *)(panoramic_context + 0xffc) + 1) = 0;
    cVar3 = '\x01';
  }
  if (**(char **)(panoramic_context + 0x1020) != '\0') {
    enable_dmic_stream();
    **(undefined1 **)(panoramic_context + 0x1020) = 0;
    cVar3 = '\x01';
  }
  if (**(char **)(panoramic_context + 0x1010) != '\0') {
    **(char **)(panoramic_context + 0x1010) = '\0';
    cVar3 = '\x01';
  }
  if (**(char **)(panoramic_context + 0x1014) != '\0') {
    **(char **)(panoramic_context + 0x1014) = '\0';
    cVar3 = '\x01';
  }
  if (*(char *)(*(int *)(panoramic_context + 0x100c) + 7) == '\0') {
    pcVar2 = *(char **)(panoramic_context + 0x101c);
    if (*pcVar2 == '\0') {
      if (cVar3 == '\0') {
        return;
      }
      goto LAB_0007cd8a;
    }
  }
  else {
    enable_dmic_stream();
    clear_work_mode_flags_and_buffers(1);
    pcVar2 = *(char **)(panoramic_context + 0x101c);
    if (*pcVar2 == '\0') goto LAB_0007cd8a;
  }
  *pcVar2 = '\0';
LAB_0007cd8a:
  if (send_status != 0) {
    send_event_status(0);
  }
  fill_memory_buffer(panoramic_context + 0xef,0,0x5dc);
  return;
}


