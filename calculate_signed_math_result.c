/*
 * Function: calculate_signed_math_result
 * Entry:    0000ec34
 * Prototype: undefined calculate_signed_math_result()
 */


int calculate_signed_math_result(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = float_compare_boolean_inverted(param_1,param_2,0,0);
  if (iVar1 == 0) {
    iVar1 = calculate_mathematical_formula(param_1,param_2);
    return iVar1;
  }
  iVar1 = calculate_mathematical_formula(param_1,param_2 + -0x80000000);
  return -iVar1;
}


