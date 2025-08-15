/*
 * Function: calculate_and_set_interrupt_bit_mask_alt
 * Entry:    000852fe
 * Prototype: undefined calculate_and_set_interrupt_bit_mask_alt()
 */


void calculate_and_set_interrupt_bit_mask_alt(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  iVar1 = calculate_interrupt_bit_mask_alt(&local_c);
  *(int *)(iVar1 + 0xc) = 1 << (local_c & 0xff);
  return;
}


