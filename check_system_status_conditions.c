/*
 * Function: check_system_status_conditions
 * Entry:    00034808
 * Prototype: undefined check_system_status_conditions()
 */


bool check_system_status_conditions(void)

{
  int iVar1;
  
  iVar1 = count_active_system_entries();
  if (iVar1 != 0) {
    if ((SYSTEM_STATUS_AND_TIMER_CONTROL == '\x05') && (iVar1 = is_msg_expiration(), iVar1 == 1)) {
      return true;
    }
    if (SYSTEM_STATUS_AND_TIMER_CONTROL == '\x03') {
      iVar1 = check_work_mode_timestamp_status();
      return iVar1 == 1;
    }
  }
  return false;
}


