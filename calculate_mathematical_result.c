/*
 * Function: calculate_mathematical_result
 * Entry:    00012580
 * Prototype: undefined calculate_mathematical_result()
 */


void calculate_mathematical_result(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar2 = float_divide_64bit((int)((ulonglong)param_2 * (ulonglong)param_3),
                             param_3 * ((int)param_2 >> 0x1f) +
                             (int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20));
  float_multiply_64bit_alt((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x3a92a305,0x40239d01);
  uVar2 = calculate_signed_math_result();
  uVar1 = handle_signed_division((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),"size",0);
  *param_1 = uVar1;
  param_1[1] = extraout_r2;
  return;
}


