/*
 * Function: validate_and_update_work_mode_state
 * Entry:    00040708
 * Prototype: undefined validate_and_update_work_mode_state()
 */


void validate_and_update_work_mode_state(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_200034f5;
  iVar1 = get_work_mode();
  if ((uVar2 != *(byte *)(*(int *)(iVar1 + 0x1014) + 2)) ||
     ((((iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) != '\x05' &&
        (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) != '\x13')) &&
       (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) != '\x14')) &&
      (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) != '\x15')))) {
    WORK_MODE_ANIMATION_STATE = 0;
    WORK_MODE_STATE_VALIDATION_FLAGS = 0;
  }
  DAT_2001cdd3 = 1;
  iVar1 = get_work_mode();
  DAT_200034f5 = *(undefined1 *)(*(int *)(iVar1 + 0x1014) + 2);
  return;
}


