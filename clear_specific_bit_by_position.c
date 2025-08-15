/*
 * Function: clear_specific_bit_by_position
 * Entry:    0007f5d8
 * Prototype: undefined clear_specific_bit_by_position()
 */


void clear_specific_bit_by_position(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}


