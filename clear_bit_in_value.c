/*
 * Function: clear_bit_in_value
 * Entry:    0008304c
 * Prototype: undefined clear_bit_in_value()
 */


void clear_bit_in_value(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}


