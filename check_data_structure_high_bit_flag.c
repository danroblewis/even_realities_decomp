/*
 * Function: check_data_structure_high_bit_flag
 * Entry:    0007ef6e
 * Prototype: undefined __stdcall check_data_structure_high_bit_flag(undefined4 data_structure)
 */


uint check_data_structure_high_bit_flag(int data_structure)

{
  uint uVar1;
  
  uVar1 = *(uint *)(data_structure + 0x14);
  if (uVar1 != 0) {
    uVar1 = (uint)(*(int *)(uVar1 + 4) << 0x19) >> 0x1f;
  }
  return uVar1;
}


