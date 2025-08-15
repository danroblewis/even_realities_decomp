/*
 * Function: float_compare_boolean_or
 * Entry:    0000ddf0
 * Prototype: undefined float_compare_boolean_or()
 */


bool float_compare_boolean_or(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  call_float_compare();
  return !(bool)in_CY || (bool)in_ZR;
}


