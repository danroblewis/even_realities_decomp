/*
 * Function: calculate_mathematical_function_with_audio_power_integration
 * Entry:    00075f88
 * Prototype: undefined calculate_mathematical_function_with_audio_power_integration()
 */


float calculate_mathematical_function_with_audio_power_integration(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 1.0) {
    fVar4 = param_1 * -4.371139e-08 + param_1 * 1.5707964;
  }
  else if ((uint)fVar1 < 0x3f800001) {
    if ((uint)fVar1 < 0x3f000000) {
      if (0x31ffffff < (uint)fVar1) {
        fVar1 = param_1 * param_1;
        return param_1 + param_1 * (((((((fVar1 * 3.479331e-05 + 0.000791535) * fVar1 + -0.040055536
                                        ) * fVar1 + 0.20121253) * fVar1 + -0.32556581) * fVar1 +
                                     0.16666667) * fVar1) /
                                   ((((fVar1 * 0.077038154 + -0.688284) * fVar1 + 2.0209458) * fVar1
                                    + -2.403395) * fVar1 + 1.0));
      }
      if (1.0 < param_1 + 1e+30) {
        return param_1;
      }
    }
    fVar2 = (float)setup_audio_mixing();
    fVar5 = (1.0 - fVar2) * 0.5;
    fVar2 = (float)initialize_power_management(fVar5);
    fVar3 = ((((((fVar5 * 3.479331e-05 + 0.000791535) * fVar5 + -0.040055536) * fVar5 + 0.20121253)
               * fVar5 + -0.32556581) * fVar5 + 0.16666667) * fVar5) /
            ((((fVar5 * 0.077038154 + -0.688284) * fVar5 + 2.0209458) * fVar5 + -2.403395) * fVar5 +
            1.0);
    if ((uint)fVar1 < 0x3f79999a) {
      fVar1 = (float)((uint)fVar2 & 0xfffff000);
      fVar4 = 0.7853982;
      fVar1 = (-(-((fVar5 + -fVar1 * fVar1) / (fVar2 + fVar1)) * 2.0 + -4.371139e-08) +
              (fVar2 + fVar2) * fVar3) - (-fVar1 * 2.0 + 0.7853982);
    }
    else {
      fVar1 = (fVar2 + fVar2 * fVar3) * 2.0 + 4.371139e-08;
      fVar4 = 1.5707964;
    }
    fVar4 = fVar4 - fVar1;
    if ((int)param_1 < 1) {
      fVar4 = -fVar4;
    }
  }
  else {
    fVar4 = (param_1 - param_1) / (param_1 - param_1);
  }
  return fVar4;
}


