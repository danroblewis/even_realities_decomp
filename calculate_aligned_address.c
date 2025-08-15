/*
 * Function: calculate_aligned_address
 * Entry:    0007e65e
 * Prototype: undefined calculate_aligned_address()
 */


uint calculate_aligned_address(byte *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (1 < uVar1) {
    param_2 = (param_2 - 1) + uVar1 & -uVar1;
  }
  return param_2;
}


