/*
 * Function: FUN_00076154
 * Entry:    00076154
 * Prototype: undefined FUN_00076154()
 */


float FUN_00076154(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  uint uVar5;
  
  fVar2 = ABS(param_2);
  if (((uint)fVar2 < 0x7f800001) && (fVar3 = ABS(param_1), (uint)fVar3 < 0x7f800001)) {
    if (param_2 == 1.0) {
      fVar2 = (float)FUN_000768e0();
      return fVar2;
    }
    uVar5 = (int)param_2 >> 0x1e & 2U | (uint)param_1 >> 0x1f;
    if (fVar3 == 0.0) {
      if (uVar5 == 2) {
        param_1 = 3.1415927;
      }
      else {
        param_1 = (float)((uint)(uVar5 == 3) * -0x3fb6f025 + (uint)(uVar5 != 3) * (int)param_1);
      }
    }
    else {
      if (fVar2 != 0.0) {
        if (fVar2 == INFINITY) {
          uVar5 = uVar5 - 1;
          if (fVar3 == INFINITY) {
            if (2 < uVar5) {
              return 0.7853982;
            }
            puVar4 = &DAT_00098690;
          }
          else {
            if (2 < uVar5) {
              return 0.0;
            }
            puVar4 = &DAT_00098684;
          }
          return *(float *)(puVar4 + uVar5 * 4);
        }
        if (fVar3 != INFINITY) {
          iVar1 = (int)fVar3 - (int)fVar2 >> 0x17;
          if ((int)fVar3 - (int)fVar2 < 0x1e800000) {
            if (((int)param_2 < 0) && (iVar1 + 0x3c < 0 != SCARRY4(iVar1,0x3c))) {
              fVar2 = 0.0;
            }
            else {
              FUN_000868ee(param_1 / param_2);
              fVar2 = (float)FUN_000768e0();
            }
          }
          else {
            fVar2 = 1.5707964;
          }
          if (uVar5 == 1) {
            return (float)((int)fVar2 + -0x80000000);
          }
          if (uVar5 == 2) {
            return 3.1415927 - (fVar2 + 8.742278e-08);
          }
          if (uVar5 == 0) {
            return fVar2;
          }
          return (fVar2 + 8.742278e-08) - 3.1415927;
        }
      }
      param_1 = (float)((uint)(-1 < (int)param_1) * 0x3fc90fdb +
                       (uint)(-1 >= (int)param_1) * -0x4036f025);
    }
  }
  else {
    param_1 = param_1 + param_2;
  }
  return param_1;
}


