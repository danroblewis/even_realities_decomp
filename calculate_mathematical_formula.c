/*
 * Function: calculate_mathematical_formula
 * Entry:    0000e274
 * Prototype: undefined calculate_mathematical_formula()
 */


void calculate_mathematical_formula(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  float_multiply_64bit_alt(param_1,param_2,0,0x3df00000);
  float_to_int_conversion();
  uVar1 = int_to_float_64bit();
  uVar1 = float_multiply_64bit_alt((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x41f00000);
  float_add_64bit(param_1,param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  float_to_int_conversion();
  return;
}


