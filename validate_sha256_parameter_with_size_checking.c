/*
 * Function: validate_sha256_parameter_with_size_checking
 * Entry:    0007bbf8
 * Prototype: undefined validate_sha256_parameter_with_size_checking()
 */


undefined4 validate_sha256_parameter_with_size_checking(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (0x7f < param_1) {
    return 0xf70001;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (2 < param_2 - 1U) {
    return 0xf70003;
  }
  if (param_1 == 0x7f) {
    uVar1 = 0xf70001;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


