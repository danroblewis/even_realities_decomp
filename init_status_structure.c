/*
 * Function: init_status_structure
 * Entry:    00080dda
 * Prototype: undefined __stdcall init_status_structure(undefined4 status_buffer)
 */


void init_status_structure(undefined1 *status_buffer)

{
  int iVar1;
  
  *status_buffer = 1;
  iVar1 = validate_and_process_ble_characteristics_with_callback_execution(status_buffer + 1,6);
  if (iVar1 == 0) {
    status_buffer[6] = status_buffer[6] | 0xc0;
  }
  return;
}


