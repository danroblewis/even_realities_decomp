/*
 * Function: FUN_00076538
 * Entry:    00076538
 * Prototype: undefined FUN_00076538()
 */


float FUN_00076538(float param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (ABS(param_1) == 0.0) {
    param_1 = -33554432.0;
  }
  else {
    if (-1 < (int)param_1) {
      if (0x7f7fffff < (int)param_1) {
        return param_1 + param_1;
      }
      if ((int)param_1 < 0x800000) {
        iVar1 = -0x19;
        param_1 = param_1 * 33554432.0;
      }
      else {
        iVar1 = 0;
      }
      uVar2 = (uint)param_1 & 0x7fffff;
      iVar1 = ((int)param_1 >> 0x17) + -0x7f + iVar1 + (uVar2 + 0x4afb20 >> 0x17);
      fVar3 = (float)(uVar2 + 0x4afb20 & 0x800000 ^ 0x3f800000 | uVar2) - 1.0;
      if ((uVar2 + 0xf & 0x7ffff0) != 0) {
        fVar4 = fVar3 / (fVar3 + 2.0);
        fVar5 = (float)(longlong)iVar1;
        fVar6 = fVar4 * fVar4;
        fVar7 = fVar6 * fVar6;
        fVar7 = (((fVar7 * 0.14798199 + 0.18183573) * fVar7 + 0.2857143) * fVar7 + 0.6666667) *
                fVar6 + ((fVar7 * 0.15313838 + 0.22222199) * fVar7 + 0.4) * fVar7;
        if ((int)(0x35c288 - uVar2 | uVar2 - 0x30a3d0) < 1) {
          fVar4 = (fVar3 - fVar7) * fVar4;
          if (iVar1 == 0) {
            return fVar3 - fVar4;
          }
          fVar6 = fVar4 + -fVar5 * 9.058001e-06;
        }
        else {
          fVar6 = fVar3 * 0.5 * fVar3;
          fVar4 = (fVar7 + fVar6) * fVar4;
          if (iVar1 == 0) {
            fVar6 = fVar6 - fVar4;
            goto LAB_000765f4;
          }
          fVar6 = fVar6 - (fVar4 + fVar5 * 9.058001e-06);
        }
        return -(fVar6 - fVar3) + fVar5 * 0.6931381;
      }
      if (fVar3 == 0.0) {
        if (iVar1 == 0) {
          return 0.0;
        }
        return (float)(longlong)iVar1 * 9.058001e-06 + (float)(longlong)iVar1 * 0.6931381;
      }
      fVar6 = fVar3 * fVar3 * (-fVar3 * 0.33333334 + 0.5);
      if (iVar1 != 0) {
        return -((fVar6 + -(float)(longlong)iVar1 * 9.058001e-06) - fVar3) +
               (float)(longlong)iVar1 * 0.6931381;
      }
LAB_000765f4:
      return fVar3 - fVar6;
    }
    param_1 = param_1 - param_1;
  }
  return param_1 / 0.0;
}


