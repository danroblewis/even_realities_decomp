/*
 * Function: float_compare_boolean
 * Entry:    0000ddc8
 * Prototype: undefined float_compare_boolean()
 */


bool float_compare_boolean(void)

{
  char in_ZR;
  
  call_float_compare();
  return in_ZR != '\0';
}


