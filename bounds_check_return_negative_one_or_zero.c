/*
 * Function: bounds_check_return_negative_one_or_zero
 * Entry:    0007d860
 * Prototype: undefined bounds_check_return_negative_one_or_zero()
 */


undefined4 bounds_check_return_negative_one_or_zero(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (0x1f < param_1) {
    uVar1 = 0;
  }
  return uVar1;
}


