/*
 * Function: set_bit_in_value
 * Entry:    00083090
 * Prototype: undefined set_bit_in_value()
 */


void set_bit_in_value(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0xff);
  return;
}


