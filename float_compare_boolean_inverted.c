/*
 * Function: float_compare_boolean_inverted
 * Entry:    0000dddc
 * Prototype: undefined float_compare_boolean_inverted()
 */


bool float_compare_boolean_inverted(void)

{
  char in_CY;
  
  call_float_compare();
  return in_CY == '\0';
}


