/*
 * Function: float_to_int
 * Entry:    0000de58
 * Prototype: undefined __stdcall float_to_int(undefined4 float_mantissa_low, undefined4 float_full)
 */


uint float_to_int(uint float_mantissa_low,uint float_full)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = float_full * 2 + 0x200000;
  if (float_full * 2 < 0xffe00000) {
    if (-1 < iVar2) {
      return 0;
    }
    uVar1 = iVar2 >> 0x15;
    uVar3 = -uVar1 - 0x3e1;
    if (uVar1 < 0xfffffc20 && uVar3 != 0) {
      uVar1 = (float_full << 0xb | 0x80000000 | float_mantissa_low >> 0x15) >> (uVar3 & 0xff);
      if ((float_full & 0x80000000) != 0) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
  }
  else if (float_mantissa_low != 0 || (float_full & 0xfffff) != 0) {
    return 0;
  }
  float_full = float_full & 0x80000000;
  if (float_full == 0) {
    float_full = 0x7fffffff;
  }
  return float_full;
}


