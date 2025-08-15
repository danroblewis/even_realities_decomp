/*
 * Function: FUN_00075a0c
 * Entry:    00075a0c
 * Prototype: undefined FUN_00075a0c()
 */


float FUN_00075a0c(float param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 0.0) {
    return param_1;
  }
  if (0x7f7fffff < (uint)fVar1) {
    return param_1 + param_1;
  }
  if (((uint)param_1 & 0x7f800000) == 0) {
    param_1 = param_1 * 33554432.0;
    if (param_2 < -50000) {
      fVar1 = 1e-30;
      goto LAB_00075a66;
    }
    uVar2 = ((uint)((int)param_1 << 1) >> 0x18) - 0x19;
  }
  else {
    uVar2 = (uint)fVar1 >> 0x17;
  }
  param_2 = param_2 + uVar2;
  if (param_2 < 0xff) {
    if (0 < param_2) {
      return (float)((uint)param_1 & 0x807fffff | param_2 * 0x800000);
    }
    if (param_2 + 0x16 < 0 == SCARRY4(param_2,0x16)) {
      uVar2 = (uint)param_1 & 0x807fffff;
      param_1 = 2.9802322e-08;
      fVar1 = (float)(uVar2 | (param_2 + 0x19) * 0x800000);
LAB_00075a66:
      return fVar1 * param_1;
    }
    fVar1 = 1e-30;
    iVar3 = -0x725dbda0;
  }
  else {
    fVar1 = 1e+30;
    iVar3 = -0xeb60d36;
  }
  return (float)((uint)(-1 < (int)param_1) * (int)fVar1 + (uint)(-1 >= (int)param_1) * iVar3) *
         fVar1;
}


