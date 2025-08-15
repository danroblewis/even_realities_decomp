/*
 * Function: classify_float_number
 * Entry:    00075980
 * Prototype: undefined classify_float_number()
 */


bool classify_float_number(uint param_1)

{
  param_1 = param_1 & 0x7fffffff;
  if (param_1 == 0) {
    return (bool)2;
  }
  if (0x7effffff < param_1 - 0x800000) {
    if (0x7ffffe < param_1 - 1) {
      return param_1 == 0x7f800000;
    }
    return (bool)3;
  }
  return (bool)4;
}


