/*
 * Function: FUN_0007cbae
 * Entry:    0007cbae
 * Prototype: undefined FUN_0007cbae()
 */


char * FUN_0007cbae(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 local_11 [5];
  
  pcVar2 = (char *)get_work_mode();
  if (((*pcVar2 != '\x01') ||
      (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1010) + 1) == '\0')) ||
     (iVar3 = is_panoramic_mode_active(), iVar3 == 0)) {
    pcVar2 = (char *)get_work_mode();
    if (*pcVar2 != '\x02') {
      return pcVar2;
    }
    iVar3 = get_work_mode();
    if (*(char *)(*(int *)(iVar3 + 0x1010) + 1) == '\0') {
      return (char *)(iVar3 + 0x1000);
    }
  }
  iVar3 = get_work_mode();
  local_11[0] = *(undefined1 *)(*(int *)(iVar3 + 0x1010) + 2);
  iVar3 = get_work_mode();
  if (*(char *)(*(int *)(iVar3 + 0x1010) + 1) != '\0') {
    pcVar2 = (char *)not_disturb_sync_data(local_11,1);
    if (pcVar2 != (char *)0x0) {
      return pcVar2;
    }
    iVar3 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar3 + 0x1010) + 1) = 0;
    pcVar2 = (char *)get_work_mode();
    if (*pcVar2 == '\x01') {
      reset_audio_stream_flag();
      DAT_2001b9ab = local_11[0];
      iVar3 = get_work_mode();
      *(undefined1 *)(iVar3 + 0xcd) = DAT_2001b9ab;
      iVar3 = get_work_mode();
      **(undefined1 **)(iVar3 + 0x1010) = 1;
      uVar1 = get_work_mode();
      update_persist_task_status(uVar1,7,2);
    }
  }
  return (char *)0x0;
}


