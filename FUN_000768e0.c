/*
 * Function: FUN_000768e0
 * Entry:    000768e0
 * Prototype: undefined FUN_000768e0()
 */


float FUN_000768e0(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = ABS(param_1);
  if ((uint)fVar2 < 0x50800000) {
    if ((uint)fVar2 < 0x3ee00000) {
      if (((uint)fVar2 < 0x31000000) && (1.0 < param_1 + 1e+30)) {
        return param_1;
      }
      iVar1 = -1;
      fVar4 = param_1;
    }
    else {
      fVar4 = (float)setup_audio_mixing();
      if ((uint)fVar2 < 0x3f980000) {
        if ((uint)fVar2 < 0x3f300000) {
          iVar1 = 0;
          fVar4 = (fVar4 * 2.0 + -1.0) / (fVar4 + 2.0);
        }
        else {
          iVar1 = 1;
          fVar4 = (fVar4 - 1.0) / (fVar4 + 1.0);
        }
      }
      else if ((uint)fVar2 < 0x401c0000) {
        iVar1 = 2;
        fVar4 = (fVar4 - 1.5) / (fVar4 * 1.5 + 1.0);
      }
      else {
        iVar1 = 3;
        fVar4 = -1.0 / fVar4;
      }
    }
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar2 * fVar2;
    fVar2 = fVar4 * (((((fVar3 * -0.03653157 + -0.058335703) * fVar3 + -0.07691876) * fVar3 +
                      -0.111111104) * fVar3 + -0.2) * fVar3 +
                    (((((fVar3 * 0.01628582 + 0.04976878) * fVar3 + 0.06661073) * fVar3 + 0.09090887
                      ) * fVar3 + 0.14285715) * fVar3 + 0.33333334) * fVar2);
    if (iVar1 == -1) {
      fVar4 = fVar4 - fVar2;
    }
    else {
      fVar4 = *(float *)(&UNK_000986cc + iVar1 * 4) -
              ((fVar2 - *(float *)(&UNK_000986bc + iVar1 * 4)) - fVar4);
      if ((int)param_1 < 0) {
        fVar4 = -fVar4;
      }
    }
  }
  else if ((uint)fVar2 < 0x7f800001) {
    fVar4 = (float)((uint)(0 < (int)param_1) * 0x3fc90fdb + (uint)((int)param_1 < 1) * -0x4036f025);
  }
  else {
    fVar4 = param_1 + param_1;
  }
  return fVar4;
}


