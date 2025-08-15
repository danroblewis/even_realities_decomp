/*
 * Function: perform_bit_manipulation_operation
 * Entry:    000850f6
 * Prototype: undefined perform_bit_manipulation_operation()
 */


uint perform_bit_manipulation_operation(uint param_1)

{
  uint uVar1;
  
  if (param_1 >> 5 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1 >> 5 != 1) {
      return 0;
    }
    uVar1 = 0xffff;
  }
  return uVar1 >> (param_1 & 0x1f) & 1;
}


