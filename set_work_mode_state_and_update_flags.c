/*
 * Function: set_work_mode_state_and_update_flags
 * Entry:    0007d2f8
 * Prototype: undefined set_work_mode_state_and_update_flags()
 */


void set_work_mode_state_and_update_flags(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 3) &&
     ((iVar1 = get_work_mode(), *(byte *)(*(int *)(iVar1 + 0x1010) + 2) != param_1 ||
      (iVar1 = get_work_mode(), *(char *)(iVar1 + 0xd5) != '\a')))) {
    iVar1 = get_work_mode();
    *(char *)(*(int *)(iVar1 + 0x1010) + 2) = (char)param_1;
    iVar1 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar1 + 0x1010) + 1) = 1;
  }
  return;
}


