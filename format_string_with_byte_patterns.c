/*
 * Function: format_string_with_byte_patterns
 * Entry:    0007ca80
 * Prototype: undefined format_string_with_byte_patterns()
 */


undefined4 format_string_with_byte_patterns(undefined1 *param_1)

{
  *param_1 = param_1[4];
  param_1[1] = param_1[5];
  param_1[2] = 0x2d;
  param_1[3] = param_1[6];
  param_1[4] = param_1[7];
  param_1[5] = 0x20;
  param_1[6] = param_1[9];
  param_1[7] = param_1[10];
  param_1[8] = 0x3a;
  param_1[9] = param_1[0xb];
  param_1[10] = param_1[0xc];
  param_1[0xb] = 0;
  return 0xc;
}


