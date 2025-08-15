/*
 * Function: extract_float_exponent
 * Entry:    00080786
 * Prototype: undefined __stdcall extract_float_exponent(undefined4 float_value)
 */


uint extract_float_exponent(undefined4 float_value)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = TT(float_value);
  uVar1 = uVar2 & 0xff;
  if ((uVar2 & 0x10000) == 0) {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


