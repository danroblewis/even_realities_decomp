/*
 * Function: check_work_mode_and_ancs_status
 * Entry:    00026c28
 * Prototype: undefined check_work_mode_and_ancs_status()
 */


bool check_work_mode_and_ancs_status(void)

{
  char ancs_connection_handle;
  int work_mode_ptr2;
  int work_mode_ptr;
  char *work_mode_char_ptr;
  
  work_mode_ptr2 = get_work_mode();
  work_mode_ptr = get_work_mode();
  ancs_connection_handle = get_ancs_connection_handle();
  if ((ANCS_STATUS_AND_WORK_MODE_FLAGS == '\x03') && (ancs_connection_handle != '\0')) {
    work_mode_char_ptr = (char *)get_work_mode();
    if (*work_mode_char_ptr == '\x01') {
      if ((int)((uint)*(byte *)(work_mode_ptr + 0x6de) << 0x1f) < 0) {
        *(byte *)(work_mode_ptr2 + 0xe4) = *(byte *)(work_mode_ptr2 + 0xe4) | 3;
      }
    }
    else {
      *(byte *)(work_mode_ptr + 0x6de) = *(byte *)(work_mode_ptr + 0x6de) | 1;
    }
  }
  return (*(byte *)(work_mode_ptr2 + 0xe4) & 3) == 3;
}


