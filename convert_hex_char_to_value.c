/*
 * Function: convert_hex_char_to_value
 * Entry:    0007dcda
 * Prototype: undefined convert_hex_char_to_value()
 */


undefined4 convert_hex_char_to_value(int param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = (char)(param_1 - 0x30U);
  if (9 < (param_1 - 0x30U & 0xff)) {
    if (param_1 - 0x61U < 6) {
      cVar1 = (char)param_1 + -0x57;
    }
    else {
      if (5 < param_1 - 0x41U) {
        return 0xffffffea;
      }
      cVar1 = (char)param_1 + -0x37;
    }
  }
  *param_2 = cVar1;
  return 0;
}


