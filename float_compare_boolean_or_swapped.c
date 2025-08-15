/*
 * Function: float_compare_boolean_or_swapped
 * Entry:    0000de04
 * Prototype: undefined float_compare_boolean_or_swapped()
 */


bool float_compare_boolean_or_swapped(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  float_swap_parameters();
  return !(bool)in_CY || (bool)in_ZR;
}


