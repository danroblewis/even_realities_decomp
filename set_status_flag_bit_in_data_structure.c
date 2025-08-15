/*
 * Function: set_status_flag_bit_in_data_structure
 * Entry:    0007ef3e
 * Prototype: undefined set_status_flag_bit_in_data_structure()
 */


void set_status_flag_bit_in_data_structure(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 4);
    *puVar1 = *puVar1 | 1;
  }
  return;
}


