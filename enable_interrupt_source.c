/*
 * Function: enable_interrupt_source
 * Entry:    00067138
 * Prototype: undefined enable_interrupt_source()
 */


void enable_interrupt_source(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  undefined4 uStack_8;
  
  if (param_1 != -1) {
    local_c = param_1;
    uStack_8 = param_3;
    iVar1 = calculate_interrupt_bit_mask_alt(&local_c);
    iVar1 = iVar1 + local_c * 4;
    *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | 2;
  }
  return;
}


