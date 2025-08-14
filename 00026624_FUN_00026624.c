/*
 * Function: FUN_00026624
 * Entry:    00026624
 * Prototype: undefined FUN_00026624()
 */


void FUN_00026624(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,int param_8)

{
  int iVar1;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  float fVar2;
  float extraout_s7;
  float extraout_s8;
  float fVar3;
  float extraout_s9;
  float extraout_s9_00;
  float extraout_s10;
  float extraout_s11;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = *(float *)(param_8 + 0x18);
  fVar9 = *(float *)(param_8 + 0x10);
  fVar8 = *(float *)(param_8 + 0xc);
  fVar7 = *(float *)(param_8 + 0x14);
  fVar3 = 0.5;
  if (((param_4 != 0.0) || (param_5 != 0.0)) || (param_6 != 0.0)) {
    iVar1 = FUN_000265e8(param_5 * param_5 + param_4 * param_4 + param_6 * param_6);
    fVar2 = extraout_s7 * fVar7 + fVar9 * fVar8;
    fVar4 = fVar9 * extraout_s7 - fVar8 * fVar7;
    fVar5 = (fVar8 * fVar8 - extraout_s9) + extraout_s7 * extraout_s7;
    fVar3 = extraout_s4 * extraout_s0 * fVar5 - extraout_s5 * extraout_s0 * fVar2;
    fVar2 = extraout_s3 * extraout_s0 * fVar2 - extraout_s4 * extraout_s0 * fVar4;
    fVar6 = extraout_s5 * extraout_s0 * fVar4 - extraout_s3 * extraout_s0 * fVar5;
    fVar5 = 0.0;
    fVar4 = *(float *)(iVar1 + 8);
    if (fVar4 <= 0.0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      param_2 = extraout_s1;
      param_3 = extraout_s2;
      param_1 = extraout_s11;
    }
    else {
      param_1 = *(float *)(iVar1 + 0x1c) + fVar4 * fVar3 * extraout_s6;
      param_2 = *(float *)(iVar1 + 0x20) + fVar4 * fVar6 * extraout_s6;
      fVar5 = *(float *)(iVar1 + 0x24) + fVar4 * fVar2 * extraout_s6;
      *(float *)(iVar1 + 0x1c) = param_1;
      *(float *)(iVar1 + 0x20) = param_2;
      param_1 = extraout_s11 + param_1;
      param_2 = extraout_s1 + param_2;
      param_3 = extraout_s2 + fVar5;
    }
    *(float *)(iVar1 + 0x24) = fVar5;
    fVar4 = *(float *)(iVar1 + 4);
    param_1 = param_1 + fVar4 * fVar3;
    param_2 = param_2 + fVar4 * fVar6;
    param_3 = param_3 + fVar4 * fVar2;
    param_7 = extraout_s6;
    fVar2 = extraout_s7;
    fVar3 = extraout_s9;
  }
  param_7 = param_7 * fVar3;
  param_3 = param_7 * param_3;
  param_1 = param_7 * param_1;
  param_7 = param_7 * param_2;
  fVar4 = ((param_3 * fVar7 + param_1 * fVar8) - fVar2 * param_7) + fVar9;
  fVar3 = ((-(param_7 * fVar7) + -(fVar9 * param_1)) - fVar2 * param_3) + fVar8;
  fVar5 = (param_7 * fVar8 - param_3 * fVar9) + fVar2 * param_1 + fVar7;
  fVar2 = ((param_7 * fVar9 + param_3 * fVar8) - param_1 * fVar7) + fVar2;
  iVar1 = FUN_000265e8(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
  *(float *)(iVar1 + 0xc) = extraout_s8 * extraout_s0_00;
  *(float *)(iVar1 + 0x10) = extraout_s9_00 * extraout_s0_00;
  *(float *)(iVar1 + 0x14) = extraout_s10 * extraout_s0_00;
  *(float *)(iVar1 + 0x18) = extraout_s1_00 * extraout_s0_00;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  return;
}


