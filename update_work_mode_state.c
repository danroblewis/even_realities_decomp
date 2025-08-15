/*
 * Function: update_work_mode_state
 * Entry:    0007c108
 * Prototype: undefined update_work_mode_state()
 */


int update_work_mode_state(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  if (*(char *)(iVar1 + 0x1058) == '\x02') {
    iVar1 = validate_and_process_ble_characteristics_with_validation();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x1058) = 3;
  }
  return 0;
}


