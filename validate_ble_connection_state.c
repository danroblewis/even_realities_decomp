/*
 * Function: validate_ble_connection_state
 * Entry:    00073e88
 * Prototype: undefined validate_ble_connection_state()
 */


void validate_ble_connection_state(int param_1)

{
  if (*(char *)(param_1 + 0xd) < '\0') {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
    remove_ble_connection_from_list(&DMIC_BUFFER_POINTER,param_1);
  }
  manage_ble_connection_priority(DMIC_BUFFER_SIZE == param_1);
  return;
}


