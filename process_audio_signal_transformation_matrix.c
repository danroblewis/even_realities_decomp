/*
 * Function: process_audio_signal_transformation_matrix
 * Entry:    0006b9b8
 * Prototype: undefined process_audio_signal_transformation_matrix(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


void process_audio_signal_transformation_matrix
               (int param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float **ppfVar7;
  float **ppfVar8;
  float *pfVar9;
  int iVar10;
  float **ppfVar11;
  float **ppfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *local_58;
  int local_54;
  float *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  float *local_3c;
  float **local_38;
  float *local_34;
  
  iVar10 = param_3 + 1;
  if (param_3 == 4) {
    iVar10 = 6;
  }
  iVar4 = param_2 + 1;
  if (param_2 == 4) {
    iVar4 = 6;
  }
  iVar4 = (param_1 + 3) * iVar4;
  local_38 = &local_58 + iVar4 * -0x14;
  local_40 = *(int **)(&DAT_20002c90 + (param_1 * 5 + param_2) * 4);
  local_48 = iVar4 * 0x14;
  local_44 = iVar4 * 10;
  if (param_1 == 0) {
    uVar5 = (uint)(iVar4 * 0x1cc) / 0x1e;
  }
  else {
    uVar5 = iVar4 * 100 >> 3;
  }
  local_34 = *(float **)(&DAT_20002c68 + (param_1 * 5 + param_2) * 4);
  pfVar1 = param_4 + (local_48 - uVar5);
  local_54 = (local_48 - uVar5) * 4;
  pfVar3 = local_34 + iVar4 * 0x14;
  local_4c = iVar4 * 0x50;
  local_50 = pfVar3 + uVar5;
  local_58 = param_5 + uVar5;
  ppfVar7 = local_38 + iVar4 * 10;
  pfVar9 = pfVar1;
  pfVar15 = pfVar1;
  ppfVar11 = ppfVar7;
  pfVar17 = pfVar3;
  ppfVar12 = ppfVar7;
  pfVar13 = pfVar3;
  pfVar2 = param_5;
  pfVar14 = local_34;
  if (param_4 < pfVar1) {
    do {
      fVar19 = *pfVar9;
      fVar18 = pfVar2[1];
      ppfVar11[-1] = (float *)(-(pfVar17[-1] * pfVar15[-1]) + *pfVar2 * *pfVar14);
      *pfVar2 = fVar19;
      *ppfVar12 = (float *)(*pfVar13 * fVar19);
      fVar19 = pfVar15[-2];
      fVar23 = pfVar17[-2];
      fVar20 = pfVar14[1];
      fVar21 = pfVar9[1];
      pfVar2[1] = fVar21;
      ppfVar11[-2] = (float *)(-(fVar23 * fVar19) + fVar18 * fVar20);
      pfVar15 = pfVar15 + -2;
      ppfVar12[1] = (float *)(pfVar13[1] * fVar21);
      ppfVar11 = ppfVar11 + -2;
      pfVar17 = pfVar17 + -2;
      pfVar2 = pfVar2 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar9 = pfVar9 + 2;
      pfVar14 = pfVar14 + 2;
      ppfVar12 = ppfVar12 + 2;
    } while (param_4 < pfVar15);
    iVar6 = (local_54 - 1U & 0xfffffff8) + 8;
    param_5 = (float *)((int)param_5 + iVar6);
    pfVar9 = (float *)((int)pfVar1 - iVar6);
    local_34 = (float *)((int)local_34 + iVar6);
    pfVar13 = (float *)((int)pfVar3 - iVar6);
    pfVar1 = (float *)((int)pfVar1 + iVar6);
    pfVar3 = (float *)((int)pfVar3 + iVar6);
    ppfVar12 = (float **)((int)ppfVar7 + iVar6);
    ppfVar7 = (float **)((int)ppfVar7 - iVar6);
  }
  pfVar9 = pfVar9 + iVar4 * 0x14;
  pfVar14 = local_58;
  pfVar15 = local_50;
  pfVar2 = local_34;
  if (pfVar1 < pfVar9) {
    do {
      fVar21 = pfVar13[-1];
      fVar23 = pfVar14[-1];
      fVar20 = *pfVar2;
      fVar19 = *param_5;
      fVar18 = *pfVar1;
      *param_5 = fVar18;
      fVar24 = pfVar9[-1];
      ppfVar7[-1] = (float *)(-(fVar21 * fVar23) + fVar19 * fVar20);
      fVar19 = *pfVar3;
      pfVar14[-1] = fVar24;
      *ppfVar12 = (float *)(fVar24 * pfVar15[-1] + fVar18 * fVar19);
      fVar19 = pfVar14[-2];
      fVar23 = pfVar13[-2];
      fVar20 = pfVar2[1];
      fVar21 = pfVar1[1];
      fVar18 = param_5[1];
      param_5[1] = fVar21;
      fVar24 = pfVar9[-2];
      ppfVar7[-2] = (float *)(-(fVar23 * fVar19) + fVar18 * fVar20);
      fVar19 = pfVar3[1];
      pfVar14[-2] = fVar24;
      pfVar1 = pfVar1 + 2;
      pfVar9 = pfVar9 + -2;
      pfVar13 = pfVar13 + -2;
      ppfVar7 = ppfVar7 + -2;
      ppfVar12[1] = (float *)(fVar24 * pfVar15[-2] + fVar21 * fVar19);
      pfVar14 = pfVar14 + -2;
      pfVar15 = pfVar15 + -2;
      pfVar3 = pfVar3 + 2;
      param_5 = param_5 + 2;
      pfVar2 = pfVar2 + 2;
      ppfVar12 = ppfVar12 + 2;
    } while (pfVar1 < pfVar9);
  }
  pfVar2 = (float *)local_40[1];
  pfVar13 = pfVar2 + *local_40 * 2;
  ppfVar12 = local_38;
  ppfVar7 = local_38 + *local_40 * 2;
  if (local_38 < local_38 + *local_40 * 2) {
    do {
      pfVar17 = ppfVar7[-2];
      fVar21 = pfVar13[-2];
      pfVar15 = *ppfVar12;
      pfVar14 = ppfVar7[-1];
      pfVar9 = ppfVar12[1];
      fVar18 = pfVar13[-1];
      fVar20 = pfVar2[1];
      fVar19 = *pfVar2;
      ppfVar8 = ppfVar7 + -2;
      ppfVar11 = ppfVar12 + 2;
      *ppfVar12 = (float *)(fVar20 * (float)pfVar15 + -fVar19 * (float)pfVar14);
      pfVar2 = pfVar2 + 2;
      ppfVar12[1] = (float *)(fVar20 * (float)pfVar14 + fVar19 * (float)pfVar15);
      pfVar13 = pfVar13 + -2;
      *ppfVar8 = (float *)(fVar21 * (float)pfVar9 + -fVar18 * (float)pfVar17);
      ppfVar7[-1] = (float *)-(fVar21 * (float)pfVar17 + fVar18 * (float)pfVar9);
      ppfVar12 = ppfVar11;
      ppfVar7 = ppfVar8;
    } while (ppfVar11 < ppfVar8);
  }
  local_3c = param_4;
  iVar4 = process_audio_signal_transformation_matrix(local_38,local_44,local_38,param_6);
  fVar19 = (float)(longlong)((param_1 + 3) * iVar10 * 0x14);
  fVar19 = SQRT((fVar19 + fVar19) / (float)(longlong)(local_48 * local_48));
  iVar10 = *local_40 >> 1;
  pfVar9 = param_6 + *local_40;
  pfVar2 = (float *)(local_40[1] + iVar10 * 8);
  pfVar13 = (float *)(iVar4 + iVar10 * 8);
  if (param_6 < pfVar9) {
    pfVar15 = pfVar13 + -4;
    pfVar17 = pfVar2 + -4;
    pfVar14 = pfVar9;
    do {
      fVar18 = pfVar13[1];
      fVar21 = *pfVar13;
      fVar22 = *pfVar2;
      fVar16 = pfVar15[3];
      fVar25 = pfVar17[2];
      fVar23 = pfVar15[2];
      fVar20 = pfVar2[1];
      fVar24 = pfVar17[3];
      pfVar3 = pfVar9 + -2;
      *pfVar14 = fVar19 * (fVar21 * fVar22 + fVar18 * fVar20);
      pfVar14[1] = fVar19 * (-(fVar25 * fVar16) + fVar23 * fVar24);
      pfVar9[-1] = fVar19 * (-(fVar22 * fVar18) + fVar20 * fVar21);
      *pfVar3 = fVar19 * (fVar23 * fVar25 + fVar24 * fVar16);
      pfVar15 = pfVar15 + -2;
      pfVar17 = pfVar17 + -2;
      pfVar9 = pfVar3;
      pfVar2 = pfVar2 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar14 = pfVar14 + 2;
    } while (param_6 < pfVar3);
  }
  return;
}


