/*
 * Function: set_or_clear_bit_flag
 * Entry:    000811a4
 * Prototype: undefined set_or_clear_bit_flag()
 */


void set_or_clear_bit_flag(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0xff);
  if (param_3 == 0) {
    apply_bitwise_and_mask(param_1,~uVar1);
    return;
  }
  *param_1 = *param_1 | uVar1;
  return;
}


