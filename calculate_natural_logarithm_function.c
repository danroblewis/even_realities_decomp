/*
 * Function: calculate_natural_logarithm_function
 * Entry:    00076718
 * Prototype: undefined calculate_natural_logarithm_function()
 */


float calculate_natural_logarithm_function(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (ABS(param_1) == 0.0) {
    param_1 = -33554432.0;
  }
  else {
    if (-1 < (int)param_1) {
      if (0x7f7fffff < (int)param_1) {
        return param_1 + param_1;
      }
      if ((int)param_1 < 0x800000) {
        iVar2 = -0x19;
        param_1 = param_1 * 33554432.0;
      }
      else {
        iVar2 = 0;
      }
      iVar2 = ((int)param_1 >> 0x17) + -0x7f + iVar2;
      iVar1 = iVar2 >> 0x1f;
      fVar4 = (float)(longlong)(iVar2 - iVar1);
      fVar3 = (float)calculate_logarithm_function
                               ((uint)param_1 & 0x7fffff | (iVar1 + 0x7f) * 0x800000);
      return fVar3 * 0.4342945 + fVar4 * 7.903415e-07 + fVar4 * 0.3010292;
    }
    param_1 = param_1 - param_1;
  }
  return param_1 / 0.0;
}


