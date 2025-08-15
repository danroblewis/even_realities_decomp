/*
 * Function: map_value_category
 * Entry:    00080e14
 * Prototype: undefined __stdcall map_value_category(undefined4 input_value)
 */


uint map_value_category(uint input_value)

{
  bool bVar1;
  
  if (input_value < 0x10) {
    if (0xd < input_value) {
      return 1;
    }
    bVar1 = input_value == 5;
    if (bVar1) {
      input_value = 3;
    }
  }
  else {
    if (input_value == 0x13) {
      return 1;
    }
    bVar1 = input_value == 0x1a;
    if (bVar1) {
      input_value = 1;
    }
  }
  if (!bVar1) {
    input_value = 2;
  }
  return input_value;
}


