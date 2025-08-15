/*
 * Function: set_parameter_with_bounds_check
 * Entry:    00048b44
 * Prototype: undefined set_parameter_with_bounds_check()
 */


undefined4 set_parameter_with_bounds_check(int param_1)

{
  if (0x7c < param_1) {
    param_1 = 0x7d;
  }
  if (param_1 < 0x21) {
    param_1 = 0x21;
  }
  DAT_20002544 = param_1;
  return 0;
}


