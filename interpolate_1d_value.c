/*
 * Function: interpolate_1d_value
 * Entry:    0000eb7c
 * Prototype: undefined interpolate_1d_value()
 */


float interpolate_1d_value(float param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float unaff_s16;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *param_2;
  fVar8 = *param_3;
  fVar6 = param_3[2];
  fVar5 = param_2[2];
  pfVar2 = param_2;
  do {
    fVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    iVar1 = validate_float_value(fVar3);
    if (iVar1 != 0) {
      return unaff_s16;
    }
  } while (param_2 + 3 != pfVar2);
  fVar3 = param_2[1];
  if ((int)((uint)(fVar3 < *param_2) << 0x1f) < 0) {
    fVar7 = param_2[2];
    fVar8 = param_3[2];
    fVar6 = *param_3;
    fVar5 = *param_2;
  }
  fVar9 = param_3[1];
  iVar1 = validate_float_value(param_1);
  if (iVar1 != 0) {
    return IMU_ATTITUDE_CALCULATION_DATA;
  }
  fVar4 = (fVar9 - fVar8) / (fVar3 - fVar7);
  fVar5 = ((fVar6 - fVar9) / (fVar5 - fVar3) - fVar4) / (fVar5 - fVar7);
  return fVar8 + (fVar4 + -(fVar3 - fVar7) * fVar5 + fVar5 * (param_1 - fVar7)) * (param_1 - fVar7);
}


