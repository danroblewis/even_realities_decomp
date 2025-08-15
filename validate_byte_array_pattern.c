/*
 * Function: validate_byte_array_pattern
 * Entry:    000826c2
 * Prototype: undefined validate_byte_array_pattern()
 */


byte * validate_byte_array_pattern(byte *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (*param_1 == param_3) {
    iVar1 = compare_byte_arrays_7_bytes(param_1 + 1);
    if (iVar1 == 0) {
      param_1 = (byte *)0x0;
    }
  }
  else {
    param_1 = (byte *)0x0;
  }
  return param_1;
}


