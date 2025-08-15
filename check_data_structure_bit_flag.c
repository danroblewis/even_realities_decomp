/*
 * Function: check_data_structure_bit_flag
 * Entry:    0007ef2e
 * Prototype: undefined check_data_structure_bit_flag()
 */


uint check_data_structure_bit_flag(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    uVar1 = *(uint *)(uVar1 + 4) & 1;
  }
  return uVar1;
}


