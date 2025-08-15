/*
 * Function: calculate_and_set_interrupt_bit_mask
 * Entry:    000852e6
 * Prototype: undefined calculate_and_set_interrupt_bit_mask()
 */


void calculate_and_set_interrupt_bit_mask(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  iVar1 = calculate_interrupt_bit_mask_alt(&local_c);
  *(int *)(iVar1 + 8) = 1 << (local_c & 0xff);
  return;
}


