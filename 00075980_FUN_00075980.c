/*
 * Function: FUN_00075980
 * Entry:    00075980
 * Prototype: undefined FUN_00075980()
 */


bool FUN_00075980(uint param_1)

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


