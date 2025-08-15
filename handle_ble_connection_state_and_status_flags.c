/*
 * Function: handle_ble_connection_state_and_status_flags
 * Entry:    00083906
 * Prototype: undefined handle_ble_connection_state_and_status_flags()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_ble_connection_state_and_status_flags(int param_1)

{
  undefined4 extraout_r1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  set_status_flag_bit_in_data_structure();
  manage_ble_connection_state_comprehensive(iVar1 + 0x18,extraout_r1,0xffffffff,0xffffffff);
  if (*(char *)(iVar1 + 0x60) == '\0') {
    _DAT_500055b8 = 0;
  }
  return;
}


