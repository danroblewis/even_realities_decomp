/*
 * Function: FUN_0006b3c8
 * Entry:    0006b3c8
 * Prototype: undefined FUN_0006b3c8()
 */


float * FUN_0006b3c8(int param_1,uint param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float **ppfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  int *piVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float *local_a0;
  float *local_9c;
  float *local_98;
  float *local_94;
  uint local_90;
  int local_8c;
  int local_7c;
  uint local_78;
  float *local_60 [3];
  
  local_60[0] = param_4;
  local_60[1] = param_3;
  local_90 = param_2 / 5;
  pfVar6 = (float *)(param_1 + local_90 * 8);
  pfVar18 = pfVar6 + local_90 * 6;
  pfVar21 = pfVar18 + local_90 * -4;
  pfVar23 = pfVar21 + local_90 * 2;
  pfVar7 = param_4 + 10;
  iVar14 = param_1 + 8;
  do {
    fVar31 = *pfVar6 + *pfVar18;
    fVar37 = *pfVar21 + *pfVar23;
    fVar33 = *pfVar21 - *pfVar23;
    fVar30 = pfVar6[1] + pfVar18[1];
    fVar34 = pfVar6[1] - pfVar18[1];
    fVar36 = pfVar21[1] + pfVar23[1];
    fVar35 = *pfVar6 - *pfVar18;
    fVar32 = pfVar21[1] - pfVar23[1];
    fVar28 = fVar34 * 0.95105654;
    fVar34 = fVar34 * 0.58778524;
    fVar29 = fVar35 * -0.95105654;
    fVar35 = fVar35 * -0.58778524;
    pfVar7[-10] = *(float *)(iVar14 + -8) + fVar31 + fVar37;
    iVar13 = iVar14 + 8;
    pfVar7[-9] = *(float *)(iVar14 + -4) + fVar30 + fVar36;
    pfVar7[-8] = *(float *)(iVar14 + -8) + fVar28 + fVar31 * 0.309017 + fVar37 * -0.809017 +
                 fVar32 * 0.58778524;
    pfVar7[-7] = *(float *)(iVar14 + -4) + fVar29 + fVar30 * 0.309017 + fVar36 * -0.809017 +
                 fVar33 * -0.58778524;
    pfVar7[-6] = *(float *)(iVar14 + -8) + fVar34 + fVar31 * -0.809017 + fVar37 * 0.309017 +
                 fVar32 * -0.95105654;
    pfVar7[-5] = *(float *)(iVar14 + -4) + fVar35 + fVar30 * -0.809017 + fVar36 * 0.309017 +
                 fVar33 * 0.95105654;
    pfVar7[-4] = ((fVar37 * 0.309017 + fVar31 * -0.809017 + *(float *)(iVar14 + -8)) - fVar34) +
                 -fVar32 * -0.95105654;
    pfVar7[-3] = ((fVar36 * 0.309017 + fVar30 * -0.809017 + *(float *)(iVar14 + -4)) - fVar35) +
                 -fVar33 * 0.95105654;
    pfVar7[-2] = ((*(float *)(iVar14 + -8) + fVar37 * -0.809017 + fVar31 * 0.309017) - fVar28) +
                 -fVar32 * 0.58778524;
    pfVar6 = pfVar6 + 2;
    pfVar18 = pfVar18 + 2;
    pfVar21 = pfVar21 + 2;
    pfVar23 = pfVar23 + 2;
    pfVar7[-1] = ((*(float *)(iVar14 + -4) + fVar36 * -0.809017 + fVar30 * 0.309017) - fVar29) +
                 -fVar33 * -0.58778524;
    pfVar7 = pfVar7 + 10;
    iVar14 = iVar13;
  } while (param_1 + 8 + local_90 * 8 != iVar13);
  if ((local_90 - 1 & local_90) == 0) {
    local_7c = 0;
    local_78 = 0;
  }
  else {
    local_7c = 0;
    uVar25 = local_90;
    pfVar7 = param_3;
    param_3 = param_4;
    uVar19 = 0;
    piVar26 = &DAT_20002cf4;
    while( true ) {
      param_4 = pfVar7;
      local_90 = (int)uVar25 / 3;
      local_78 = uVar19 ^ 1;
      iVar14 = *(int *)*piVar26;
      pfVar7 = (float *)((int *)*piVar26)[1];
      local_a0 = param_3 + iVar14 * local_90 * 2;
      pfVar6 = pfVar7 + iVar14 * 4;
      local_9c = param_3 + iVar14 * local_90 * 4;
      pfVar18 = param_4 + iVar14 * 2;
      pfVar21 = param_4 + iVar14 * 4;
      if ((2 < (int)uVar25) && (0 < iVar14)) {
        pfVar23 = param_3 + 2;
        local_8c = 0;
        local_98 = param_4;
        local_94 = param_3;
        do {
          pfVar23 = pfVar23 + iVar14 * 2;
          pfVar20 = local_94 + 2;
          pfVar8 = pfVar6;
          pfVar10 = pfVar6 + iVar14 * 4;
          pfVar17 = pfVar7;
          pfVar22 = pfVar21;
          pfVar24 = pfVar18;
          pfVar27 = local_98;
          pfVar12 = local_a0;
          pfVar15 = local_9c;
          do {
            *pfVar27 = *pfVar15 * pfVar17[2] + *pfVar12 * *pfVar17 + pfVar20[-2] +
                       -pfVar12[1] * pfVar17[1] + -pfVar15[1] * pfVar17[3];
            pfVar27[1] = pfVar20[-1] + *pfVar12 * pfVar17[1] + pfVar12[1] * *pfVar17 +
                         pfVar15[1] * pfVar17[2] + *pfVar15 * pfVar17[3];
            *pfVar24 = pfVar20[-2] + *pfVar15 * pfVar8[2] + *pfVar12 * *pfVar8 +
                       -pfVar12[1] * pfVar8[1] + -pfVar15[1] * pfVar8[3];
            pfVar24[1] = pfVar20[-1] + *pfVar12 * pfVar8[1] + pfVar12[1] * *pfVar8 +
                         pfVar15[1] * pfVar8[2] + *pfVar15 * pfVar8[3];
            *pfVar22 = pfVar20[-2] + *pfVar15 * pfVar10[2] + *pfVar12 * *pfVar10 +
                       -pfVar12[1] * pfVar10[1] + -pfVar15[1] * pfVar10[3];
            pfVar2 = pfVar10 + 1;
            fVar28 = *pfVar10;
            pfVar1 = pfVar20 + -1;
            pfVar3 = pfVar10 + 2;
            pfVar4 = pfVar10 + 3;
            pfVar20 = pfVar20 + 2;
            pfVar8 = pfVar8 + 4;
            pfVar10 = pfVar10 + 4;
            pfVar17 = pfVar17 + 4;
            pfVar27 = pfVar27 + 2;
            pfVar24 = pfVar24 + 2;
            pfVar22[1] = *pfVar1 + *pfVar12 * *pfVar2 + pfVar12[1] * fVar28 + pfVar15[1] * *pfVar3 +
                         *pfVar15 * *pfVar4;
            pfVar22 = pfVar22 + 2;
            pfVar12 = pfVar12 + 2;
            pfVar15 = pfVar15 + 2;
          } while (pfVar23 != pfVar20);
          local_94 = local_94 + iVar14 * 2;
          local_8c = local_8c + 1;
          local_a0 = local_a0 + iVar14 * 2;
          local_9c = local_9c + iVar14 * 2;
          pfVar18 = pfVar18 + iVar14 * 6;
          local_98 = local_98 + iVar14 * 6;
          pfVar21 = pfVar21 + iVar14 * 6;
        } while (local_8c < (int)local_90);
      }
      local_7c = local_7c + 1;
      if ((local_90 - 1 & local_90) == 0) break;
      uVar25 = local_90;
      pfVar7 = local_60[uVar19];
      param_3 = param_4;
      uVar19 = local_78;
      piVar26 = piVar26 + 1;
    }
    if ((int)uVar25 < 6) {
      return param_4;
    }
  }
  iVar14 = 0;
  while( true ) {
    pfVar7 = param_3;
    local_90 = (int)local_90 >> 1;
    iVar13 = **(int **)(&DAT_20002cb8 + iVar14 * 4 + local_7c * 4);
    iVar16 = (*(int **)(&DAT_20002cb8 + iVar14 * 4 + local_7c * 4))[1];
    pfVar18 = pfVar7 + iVar13 * 2;
    pfVar6 = param_4 + iVar13 * local_90 * 2;
    if (0 < iVar13) {
      uVar25 = 0;
      pfVar12 = param_4 + 2;
      pfVar23 = pfVar7;
      pfVar21 = pfVar12;
      while( true ) {
        pfVar21 = pfVar21 + iVar13 * 2;
        iVar9 = iVar16;
        iVar11 = iVar16 + 4;
        pfVar10 = pfVar18;
        pfVar17 = pfVar23;
        pfVar8 = pfVar6;
        do {
          *pfVar17 = pfVar12[-2] + *pfVar8 * *(float *)(iVar11 + -4) +
                     -pfVar8[1] * *(float *)(iVar9 + 4);
          pfVar17[1] = pfVar12[-1] +
                       *pfVar8 * *(float *)(iVar9 + 4) + pfVar8[1] * *(float *)(iVar11 + -4);
          *pfVar10 = pfVar12[-2] + pfVar8[1] * *(float *)(iVar9 + 4) +
                     -*pfVar8 * *(float *)(iVar11 + -4);
          pfVar27 = (float *)(iVar9 + 4);
          pfVar22 = (float *)(iVar11 + -4);
          pfVar24 = pfVar12 + -1;
          pfVar12 = pfVar12 + 2;
          iVar9 = iVar9 + 8;
          iVar11 = iVar11 + 8;
          pfVar17 = pfVar17 + 2;
          pfVar10[1] = *pfVar24 - (*pfVar8 * *pfVar27 + pfVar8[1] * *pfVar22);
          pfVar10 = pfVar10 + 2;
          pfVar8 = pfVar8 + 2;
        } while (pfVar21 != pfVar12);
        uVar25 = uVar25 + 1;
        param_4 = param_4 + iVar13 * 2;
        pfVar6 = pfVar6 + iVar13 * 2;
        pfVar23 = pfVar23 + iVar13 * 4;
        pfVar18 = pfVar18 + iVar13 * 4;
        if (local_90 == uVar25) break;
        pfVar12 = param_4 + 2;
      }
    }
    iVar14 = iVar14 + 3;
    if (local_90 == 1) break;
    ppfVar5 = local_60 + local_78;
    local_78 = local_78 ^ 1;
    param_3 = *ppfVar5;
    param_4 = pfVar7;
  }
  return pfVar7;
}


