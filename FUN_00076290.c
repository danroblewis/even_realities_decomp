/*
 * Function: FUN_00076290
 * Entry:    00076290
 * Prototype: undefined FUN_00076290()
 */


float FUN_00076290(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float in_s14;
  float in_s15;
  
  fVar3 = ABS(param_1);
  if (0x7f800000 < (uint)fVar3) {
    return param_1 + param_1;
  }
  if (fVar3 == INFINITY) {
    return (float)((uint)(-1 < (int)param_1) * (int)param_1);
  }
  if (0x42b17217 < (int)param_1) {
    return INFINITY;
  }
  if (((int)param_1 < 0) && (0x42cff1b5 < (uint)fVar3)) {
    return 0.0;
  }
  if ((uint)fVar3 < 0x3eb17219) {
    if (((uint)fVar3 < 0x31800000) && (1.0 < param_1 + 1e+30)) {
      return param_1 + 1.0;
    }
    iVar2 = 0;
  }
  else {
    iVar1 = ((int)param_1 >> 0x1f) * -4;
    if ((uint)fVar3 < 0x3f851592) {
      in_s14 = param_1 - *(float *)(&DAT_000986a4 + iVar1);
      iVar2 = ((int)param_1 >> 0x1f) * 2 + 1;
      in_s15 = *(float *)(&DAT_0009869c + iVar1);
    }
    else {
      iVar2 = (int)(*(float *)(&DAT_000986ac + iVar1) + param_1 * 1.442695);
      in_s14 = param_1 + -(float)(longlong)iVar2 * 0.6931381;
      in_s15 = (float)(longlong)iVar2 * 9.058001e-06;
    }
    param_1 = in_s14 - in_s15;
  }
  fVar3 = param_1 * param_1;
  fVar3 = param_1 + -((((fVar3 * 4.138137e-08 + -1.6533902e-06) * fVar3 + 6.613756e-05) * fVar3 +
                      -0.0027777778) * fVar3 + 0.16666667) * fVar3;
  if (iVar2 != 0) {
    bVar5 = SCARRY4(iVar2,0x7d);
    bVar4 = iVar2 + 0x7d < 0;
    if (bVar4 != bVar5) {
      iVar2 = iVar2 + 100;
    }
    fVar3 = 1.0 - ((in_s15 - (param_1 * fVar3) / (2.0 - fVar3)) - in_s14);
    if (bVar4 == bVar5) {
      fVar3 = (float)((int)fVar3 + iVar2 * 0x800000);
    }
    else {
      fVar3 = (float)((int)fVar3 + iVar2 * 0x800000) * 7.888609e-31;
    }
    return fVar3;
  }
  return 1.0 - ((param_1 * fVar3) / (fVar3 - 2.0) - param_1);
}


