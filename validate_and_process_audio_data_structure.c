/*
 * Function: validate_and_process_audio_data_structure
 * Entry:    00071314
 * Prototype: undefined validate_and_process_audio_data_structure()
 */


int validate_and_process_audio_data_structure(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = -0x7d3;
  }
  else {
    manage_ble_connection_state_wrapper_alt(param_1 + 0x58);
    if (*(int *)(*(int *)(param_1 + 0xa0) + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x94) + -0x10;
      if (iVar1 < 1) {
        iVar1 = -0x7d2;
      }
    }
    else {
      iVar1 = -0x7d2;
    }
    z_spin_lock_valid(param_1 + 0x58);
  }
  return iVar1;
}


