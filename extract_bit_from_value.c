/*
 * Function: extract_bit_from_value
 * Entry:    00082ff6
 * Prototype: undefined extract_bit_from_value()
 */


uint extract_bit_from_value(int *param_1,uint param_2)

{
  return *param_1 >> (param_2 & 0xff) & 1;
}


