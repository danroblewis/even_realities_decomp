/*
 * Function: clear_bit_in_bitmap
 * Entry:    00080ea8
 * Prototype: undefined clear_bit_in_bitmap()
 */


void clear_bit_in_bitmap(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & param_2;
  return;
}


