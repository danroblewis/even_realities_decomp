/*
 * Function: FUN_0006c778
 * Entry:    0006c778
 * Prototype: undefined FUN_0006c778(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0006c778(int param_1,int param_2,float *param_3,int param_4,int *param_5,undefined4 param_6
                 ,undefined4 param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float local_33c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8 [4];
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8 [4];
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268 [62];
  uint auStack_170 [2];
  float local_168 [64];
  float fStack_68;
  
  iVar13 = *(int *)(&DAT_00090d50 + param_1 * 0x514 + param_2 * 0x104);
  if (0x3f < iVar13) {
    iVar13 = 0x40;
  }
  iVar3 = 0x40 - iVar13;
  if (iVar3 == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = iVar3 * 4;
    pfVar9 = param_3;
    pfVar4 = local_168;
    do {
      pfVar14 = pfVar9 + 1;
      fVar16 = *pfVar9;
      pfVar4[1] = fVar16;
      *pfVar4 = fVar16;
      pfVar9 = pfVar14;
      pfVar4 = pfVar4 + 2;
    } while (param_3 + iVar3 != pfVar14);
  }
  memcpy(local_168 + iVar3 * 2,(int)param_3 + iVar18,(iVar13 - iVar3) * 4);
  fVar21 = 0.0;
  pfVar4 = (float *)(&DAT_0008c94c + param_2 * 0x100);
  pfVar9 = local_168;
  fVar16 = local_168[0];
  fVar20 = local_168[0];
  do {
    fVar30 = pfVar9[1] * 0.25;
    pfVar14 = pfVar9 + 3;
    fVar28 = fVar16 * 0.25;
    fVar16 = pfVar9[2];
    fVar26 = (fVar30 + fVar20 * 0.5 + fVar28) * *pfVar4;
    fVar28 = fVar20 * 0.25;
    fVar20 = *pfVar14;
    fVar28 = (fVar16 * 0.25 + pfVar9[1] * 0.5 + fVar28) * pfVar4[1];
    fVar30 = (fVar30 + fVar16 * 0.5 + fVar20 * 0.25) * pfVar4[2];
    pfVar9[1] = fVar28;
    *pfVar9 = fVar26;
    pfVar9[2] = fVar30;
    fVar21 = fVar28 + fVar30 + fVar21 + fVar26;
    pfVar4 = pfVar4 + 3;
    pfVar9 = pfVar14;
  } while (local_168 + 0x3f != pfVar14);
  local_168[0x3f] = (fVar16 * 0.25 + fVar20 * 0.75) * *(float *)(&DAT_0008ca48 + param_2 * 0x100);
  uVar36 = FPMaxNum((fVar21 + local_168[0x3f]) * 1.5625e-06,0x2f800000);
  pfVar9 = local_168;
  do {
    uVar19 = FPMaxNum(uVar36,*pfVar9);
    fVar16 = (float)FUN_000759b8(uVar19,local_268);
    *pfVar9 = (((float)(longlong)(int)local_268[0] - 3.5056736) +
              fVar16 * (fVar16 * (fVar16 * (fVar16 * -1.2947968 + 5.11769) + -8.422953) + 8.105579))
              * 0.5;
    pfVar9 = pfVar9 + 1;
  } while (&fStack_68 != pfVar9);
  fVar30 = (local_168[4] + local_168[7]) * 0.16666667 + (local_168[3] + local_168[8]) * 0.083333336
           + (local_168[6] + local_168[5]) * 0.25;
  fVar29 = (local_168[0xf] + local_168[0xc]) * 0.16666667 +
           (local_168[0x10] + local_168[0xb]) * 0.083333336 +
           (local_168[0xe] + local_168[0xd]) * 0.25;
  fVar21 = (local_168[0xb] + local_168[8]) * 0.16666667 +
           (local_168[0xc] + local_168[7]) * 0.083333336 + (local_168[10] + local_168[9]) * 0.25;
  fVar28 = (local_168[0] + local_168[3]) * 0.16666667 + (local_168[0] + local_168[4]) * 0.083333336
           + (local_168[1] + local_168[2]) * 0.25;
  fVar26 = (local_168[0x17] + local_168[0x14]) * 0.16666667 +
           (local_168[0x18] + local_168[0x13]) * 0.083333336 +
           (local_168[0x16] + local_168[0x15]) * 0.25;
  fVar20 = (local_168[0x13] + local_168[0x10]) * 0.16666667 +
           (local_168[0x14] + local_168[0xf]) * 0.083333336 +
           (local_168[0x12] + local_168[0x11]) * 0.25;
  fVar25 = (local_168[0x1b] + local_168[0x18]) * 0.16666667 +
           (local_168[0x1c] + local_168[0x17]) * 0.083333336 +
           (local_168[0x1a] + local_168[0x19]) * 0.25;
  fVar27 = (local_168[0x1f] + local_168[0x1c]) * 0.16666667 +
           (local_168[0x20] + local_168[0x1b]) * 0.083333336 +
           (local_168[0x1e] + local_168[0x1d]) * 0.25;
  fVar22 = (local_168[0x27] + local_168[0x24]) * 0.16666667 +
           (local_168[0x28] + local_168[0x23]) * 0.083333336 +
           (local_168[0x26] + local_168[0x25]) * 0.25;
  fVar16 = (local_168[0x23] + local_168[0x20]) * 0.16666667 +
           (local_168[0x24] + local_168[0x1f]) * 0.083333336 +
           (local_168[0x22] + local_168[0x21]) * 0.25;
  fVar34 = (local_168[0x28] + local_168[0x2b]) * 0.16666667 +
           (local_168[0x2c] + local_168[0x27]) * 0.083333336 +
           (local_168[0x29] + local_168[0x2a]) * 0.25;
  fVar31 = (local_168[0x2c] + local_168[0x2f]) * 0.16666667 +
           (local_168[0x30] + local_168[0x2b]) * 0.083333336 +
           (local_168[0x2d] + local_168[0x2e]) * 0.25;
  fVar23 = (local_168[0x30] + local_168[0x33]) * 0.16666667 +
           (local_168[0x2f] + local_168[0x34]) * 0.083333336 +
           (local_168[0x32] + local_168[0x31]) * 0.25;
  fVar35 = (local_168[0x34] + local_168[0x37]) * 0.16666667 +
           (local_168[0x33] + local_168[0x38]) * 0.083333336 +
           (local_168[0x36] + local_168[0x35]) * 0.25;
  fVar32 = (local_168[0x3b] + local_168[0x38]) * 0.16666667 +
           (local_168[0x3c] + local_168[0x37]) * 0.083333336 +
           (local_168[0x3a] + local_168[0x39]) * 0.25;
  fVar24 = (local_168[0x3f] + local_168[0x3c]) * 0.16666667 +
           (local_168[0x3b] + local_168[0x3f]) * 0.083333336 +
           (local_168[0x3d] + local_168[0x3e]) * 0.25;
  fVar33 = fVar24 + fVar32 + fVar31 + fVar22 + fVar16 + fVar27 + fVar25 + fVar26 + fVar20 + fVar29 +
                                                                                            fVar21 +
                                                                                            fVar28 +
                                                                                            fVar30 +
                                      fVar34 + fVar23 + fVar35;
  local_328 = (fVar28 + -fVar33 * 0.0625) * 0.85;
  local_320 = (fVar21 + -fVar33 * 0.0625) * 0.85;
  local_31c = (fVar29 + -fVar33 * 0.0625) * 0.85;
  local_324 = (fVar30 + -fVar33 * 0.0625) * 0.85;
  local_318 = (fVar20 + -fVar33 * 0.0625) * 0.85;
  local_314 = (fVar26 + -fVar33 * 0.0625) * 0.85;
  local_310 = (fVar25 + -fVar33 * 0.0625) * 0.85;
  local_30c = (fVar27 + -fVar33 * 0.0625) * 0.85;
  local_308 = (fVar16 + -fVar33 * 0.0625) * 0.85;
  local_304 = (fVar22 + -fVar33 * 0.0625) * 0.85;
  local_300 = (fVar34 + -fVar33 * 0.0625) * 0.85;
  local_2fc = (fVar31 + -fVar33 * 0.0625) * 0.85;
  local_2f8 = (fVar23 + -fVar33 * 0.0625) * 0.85;
  local_2f4 = (fVar35 + -fVar33 * 0.0625) * 0.85;
  local_2f0 = (fVar32 + -fVar33 * 0.0625) * 0.85;
  local_2ec = (fVar24 + -fVar33 * 0.0625) * 0.85;
  if (param_4 != 0) {
    fVar20 = local_324 + local_328 + local_320;
    fVar16 = fVar20 + local_31c + local_318;
    fVar24 = (fVar20 + local_31c) * 0.25;
    fVar30 = (float)((uint)(param_1 == 0) * 0x3e99999a + (uint)(param_1 != 0) * 0x3f000000);
    fVar27 = (local_314 - local_328) + fVar16;
    fVar21 = (local_310 - local_324) + fVar27;
    fVar29 = (local_30c - local_320) + fVar21;
    fVar31 = (local_308 - local_31c) + fVar29;
    fVar28 = (local_304 - local_318) + fVar31;
    fVar32 = (local_300 - local_314) + fVar28;
    fVar26 = (local_2fc - local_310) + fVar32;
    fVar33 = (local_2f8 - local_30c) + fVar26;
    fVar34 = (local_2f4 - local_308) + fVar33;
    fVar22 = (local_2f0 - local_304) + fVar34;
    fVar23 = (local_2ec - local_300) + fVar22;
    local_2fc = fVar23 - local_2fc;
    fVar25 = (fVar24 + fVar20 * 0.33333334 + fVar16 * 0.2 + fVar27 * 0.2 + fVar21 * 0.2 +
              fVar29 * 0.2 + fVar31 * 0.2 + fVar28 * 0.2 + fVar32 * 0.2 + fVar26 * 0.2 +
              fVar33 * 0.2 + fVar34 * 0.2 + fVar22 * 0.2 + fVar23 * 0.2 + local_2fc * 0.25 +
             (local_2fc - local_2f8) * 0.33333334) * 0.0625;
    local_324 = (fVar24 - fVar25) * fVar30;
    local_2f0 = fVar30 * (-fVar25 + local_2fc * 0.25);
    local_328 = fVar30 * (-fVar25 + fVar20 * 0.33333334);
    local_2ec = (-fVar25 + (local_2fc - local_2f8) * 0.33333334) * fVar30;
    local_320 = fVar30 * (-fVar25 + fVar16 * 0.2);
    local_31c = fVar30 * (-fVar25 + fVar27 * 0.2);
    local_318 = fVar30 * (-fVar25 + fVar21 * 0.2);
    local_314 = fVar30 * (-fVar25 + fVar29 * 0.2);
    local_310 = fVar30 * (-fVar25 + fVar31 * 0.2);
    local_30c = fVar30 * (-fVar25 + fVar28 * 0.2);
    local_308 = fVar30 * (-fVar25 + fVar32 * 0.2);
    local_304 = fVar30 * (-fVar25 + fVar26 * 0.2);
    local_300 = fVar30 * (-fVar25 + fVar33 * 0.2);
    local_2fc = fVar30 * (-fVar25 + fVar34 * 0.2);
    local_2f8 = fVar30 * (-fVar25 + fVar22 * 0.2);
    local_2f4 = fVar30 * (-fVar25 + fVar23 * 0.2);
  }
  iVar13 = 0;
  pfVar9 = (float *)&DAT_00090850;
  pfVar4 = (float *)&DAT_00090450;
  *param_5 = 0;
  param_5[1] = 0;
  fVar16 = 0.0;
  fVar20 = 0.0;
  do {
    while( true ) {
      fVar21 = (local_324 - pfVar9[1]) * (local_324 - pfVar9[1]) +
               (local_328 - *pfVar9) * (local_328 - *pfVar9) +
               (local_320 - pfVar9[2]) * (local_320 - pfVar9[2]) +
               (local_31c - pfVar9[3]) * (local_31c - pfVar9[3]) +
               (local_318 - pfVar9[4]) * (local_318 - pfVar9[4]) +
               (local_314 - pfVar9[5]) * (local_314 - pfVar9[5]) +
               (local_310 - pfVar9[6]) * (local_310 - pfVar9[6]) +
               (local_30c - pfVar9[7]) * (local_30c - pfVar9[7]);
      fVar28 = (local_304 - pfVar4[1]) * (local_304 - pfVar4[1]) +
               (local_308 - *pfVar4) * (local_308 - *pfVar4) +
               (local_300 - pfVar4[2]) * (local_300 - pfVar4[2]) +
               (local_2fc - pfVar4[3]) * (local_2fc - pfVar4[3]) +
               (local_2f8 - pfVar4[4]) * (local_2f8 - pfVar4[4]) +
               (local_2f4 - pfVar4[5]) * (local_2f4 - pfVar4[5]) +
               (local_2f0 - pfVar4[6]) * (local_2f0 - pfVar4[6]) +
               (local_2ec - pfVar4[7]) * (local_2ec - pfVar4[7]);
      if (iVar13 != 0) break;
      *param_5 = 0;
      param_5[1] = 0;
      iVar13 = 1;
      pfVar9 = pfVar9 + 8;
      pfVar4 = pfVar4 + 8;
      fVar16 = fVar21;
      fVar20 = fVar28;
    }
    if (fVar21 < fVar16) {
      *param_5 = iVar13;
      fVar16 = fVar21;
    }
    if (fVar28 < fVar20) {
      param_5[1] = iVar13;
    }
    iVar13 = iVar13 + 1;
    if (fVar28 < fVar20) {
      fVar20 = fVar28;
    }
    pfVar9 = pfVar9 + 8;
    pfVar4 = pfVar4 + 8;
  } while (iVar13 != 0x20);
  iVar3 = *param_5;
  iVar13 = param_5[1];
  fVar32 = (float)(&DAT_00090850)[iVar3 * 8];
  fVar31 = (float)(&DAT_00090450)[iVar13 * 8];
  fVar29 = (float)(&DAT_00090854)[iVar3 * 8];
  fVar27 = (float)(&DAT_00090454)[iVar13 * 8];
  fVar25 = (float)(&DAT_00090858)[iVar3 * 8];
  fVar24 = (float)(&DAT_00090458)[iVar13 * 8];
  fVar23 = (float)(&DAT_0009085c)[iVar3 * 8];
  fVar22 = (float)(&DAT_0009045c)[iVar13 * 8];
  fVar30 = (float)(&DAT_00090860)[iVar3 * 8];
  fVar26 = (float)(&DAT_00090460)[iVar13 * 8];
  fVar28 = (float)(&DAT_00090864)[iVar3 * 8];
  fVar21 = (float)(&DAT_00090464)[iVar13 * 8];
  fVar20 = (float)(&DAT_00090868)[iVar3 * 8];
  fVar16 = (float)(&DAT_0009086c)[iVar3 * 8];
  fVar33 = (float)(&DAT_00090468)[iVar13 * 8];
  fVar34 = (float)(&DAT_0009046c)[iVar13 * 8];
  pfVar9 = local_2e8;
  pfVar4 = (float *)&DAT_0008ce4c;
  do {
    pfVar14 = pfVar4 + 1;
    *pfVar9 = (local_320 - fVar25) * pfVar4[0x20] + pfVar4[0x10] * (local_324 - fVar29) +
              *pfVar4 * (local_328 - fVar32) + pfVar4[0x30] * (local_31c - fVar23) +
              (local_318 - fVar30) * pfVar4[0x40] + (local_314 - fVar28) * pfVar4[0x50] +
              (local_310 - fVar20) * pfVar4[0x60] + (local_30c - fVar16) * pfVar4[0x70] +
              pfVar4[0x80] * (local_308 - fVar31) + (local_304 - fVar27) * pfVar4[0x90] +
              (local_300 - fVar24) * pfVar4[0xa0] + (local_2fc - fVar22) * pfVar4[0xb0] +
              (local_2f8 - fVar26) * pfVar4[0xc0] + (local_2f4 - fVar21) * pfVar4[0xd0] +
              (local_2f0 - fVar33) * pfVar4[0xe0] + (local_2ec - fVar34) * pfVar4[0xf0];
    pfVar9 = pfVar9 + 1;
    pfVar4 = pfVar14;
  } while (pfVar14 != (float *)&DAT_0008ce8c);
  local_2a8[1] = ABS(local_2e8[1]);
  local_2a8[0] = ABS(local_2e8[0]);
  local_2a8[2] = ABS(local_2e8[2]);
  local_2a8[3] = ABS(local_2e8[3]);
  local_298 = ABS(local_2d8);
  local_294 = ABS(local_2d4);
  local_290 = ABS(local_2d0);
  local_28c = ABS(local_2cc);
  local_288 = ABS(local_2c8);
  local_284 = ABS(local_2c4);
  local_280 = ABS(local_2c0);
  local_27c = ABS(local_2bc);
  local_278 = ABS(local_2b8);
  local_274 = ABS(local_2b4);
  local_270 = ABS(local_2b0);
  local_26c = ABS(local_2ac);
  fVar27 = (float)FPMaxNum(local_26c +
                           local_270 +
                           local_274 +
                           local_278 +
                           local_27c +
                           local_280 +
                           local_284 +
                           local_288 +
                           local_28c +
                           local_290 +
                           local_294 +
                           local_298 + local_2a8[3] + local_2a8[2] + local_2a8[1] + local_2a8[0],
                           0xc01ceb3);
  fVar27 = 5.0 / fVar27;
  fVar22 = (float)FPRoundInt(fVar27 * local_2a8[0],0x20,2,0);
  fVar29 = (float)FPRoundInt(fVar27 * local_278,0x20,2,0);
  fVar23 = (float)FPRoundInt(fVar27 * local_2a8[1],0x20,2,0);
  fVar24 = (float)FPRoundInt(fVar27 * local_274,0x20,2,0);
  fVar31 = (float)FPRoundInt(local_26c * fVar27,0x20,2,0);
  fVar25 = (float)FPRoundInt(fVar27 * local_270,0x20,2,0);
  local_168[0x30] = (float)(int)fVar22;
  fVar30 = (float)FPRoundInt(fVar27 * local_2a8[2],0x20,2,0);
  local_168[0x31] = (float)(int)fVar23;
  local_168[0x32] = (float)(int)fVar30;
  fVar26 = (float)FPRoundInt(fVar27 * local_2a8[3],0x20,2,0);
  local_168[0x33] = (float)(int)fVar26;
  fVar28 = (float)FPRoundInt(fVar27 * local_298,0x20,2,0);
  local_168[0x34] = (float)(int)fVar28;
  fVar21 = (float)FPRoundInt(fVar27 * local_294,0x20,2,0);
  local_168[0x35] = (float)(int)fVar21;
  fVar20 = (float)FPRoundInt(fVar27 * local_290,0x20,2,0);
  local_168[0x36] = (float)(int)fVar20;
  fVar16 = (float)FPRoundInt(fVar27 * local_28c,0x20,2,0);
  local_168[0x37] = (float)(int)fVar16;
  fVar32 = (float)FPRoundInt(fVar27 * local_288,0x20,2,0);
  local_168[0x38] = (float)(int)fVar32;
  fVar33 = (float)FPRoundInt(fVar27 * local_284,0x20,2,0);
  local_168[0x39] = (float)(int)fVar33;
  fVar34 = (float)FPRoundInt(fVar27 * local_280,0x20,2,0);
  local_168[0x3a] = (float)(int)fVar34;
  fVar27 = (float)FPRoundInt(fVar27 * local_27c,0x20,2,0);
  local_168[0x3b] = (float)(int)fVar27;
  local_168[0x3c] = (float)(int)fVar29;
  local_168[0x3d] = (float)(int)fVar24;
  iVar18 = (int)fVar25;
  local_168[0x3f] = (float)(int)fVar31;
  local_168[0x3e] = (float)iVar18;
  iVar10 = (int)local_168[0x31] + (int)local_168[0x30] + (int)local_168[0x32] + (int)local_168[0x33]
           + (int)local_168[0x34] + (int)local_168[0x35] + (int)local_168[0x36] +
           (int)local_168[0x37] + (int)local_168[0x38] + (int)local_168[0x39] + (int)local_168[0x3a]
           + (int)local_168[0x3b] + (int)local_168[0x3c] + (int)local_168[0x3d] + iVar18 +
           (int)local_168[0x3f];
  fVar21 = local_2a8[1] * fVar23 + local_2a8[0] * fVar22 + local_2a8[2] * fVar30 +
           local_2a8[3] * fVar26 + local_298 * fVar28 + local_294 * fVar21 + local_290 * fVar20 +
           local_28c * fVar16 + local_288 * fVar32 + local_284 * fVar33 + local_280 * fVar34 +
           local_27c * fVar27 + local_278 * fVar29 + local_274 * fVar24 + local_270 * fVar25 +
           local_26c * fVar31;
  fVar20 = (float)(longlong)((int)local_168[0x3f] * (int)local_168[0x3f]) +
           (float)(longlong)(iVar18 * iVar18) +
           (float)(longlong)((int)local_168[0x3d] * (int)local_168[0x3d]) +
           (float)(longlong)((int)local_168[0x3c] * (int)local_168[0x3c]) +
           (float)(longlong)((int)local_168[0x3b] * (int)local_168[0x3b]) +
           (float)(longlong)((int)local_168[0x3a] * (int)local_168[0x3a]) +
           (float)(longlong)((int)local_168[0x39] * (int)local_168[0x39]) +
           (float)(longlong)((int)local_168[0x38] * (int)local_168[0x38]) +
           (float)(longlong)((int)local_168[0x37] * (int)local_168[0x37]) +
           (float)(longlong)((int)local_168[0x36] * (int)local_168[0x36]) +
           (float)(longlong)((int)local_168[0x35] * (int)local_168[0x35]) +
           (float)(longlong)((int)local_168[0x34] * (int)local_168[0x34]) +
           (float)(longlong)((int)local_168[0x33] * (int)local_168[0x33]) +
           (float)(longlong)((int)local_168[0x32] * (int)local_168[0x32]) +
           (float)(longlong)((int)local_168[0x31] * (int)local_168[0x31]) +
           (float)(longlong)((int)local_168[0x30] * (int)local_168[0x30]);
  fVar16 = fVar21;
  if (iVar10 < 6) {
    do {
      while( true ) {
        fVar22 = (local_2a8[0] + fVar21) * (local_2a8[0] + fVar21);
        fVar23 = (float)(longlong)((int)local_168[0x30] << 1) + 1.0 + fVar20;
        fVar30 = (local_2a8[1] + fVar21) * (local_2a8[1] + fVar21);
        fVar16 = (float)(longlong)((int)local_168[0x31] << 1) + 1.0 + fVar20;
        iVar5 = (uint)(fVar16 * fVar22 < fVar30 * fVar23) << 0x1f;
        fVar28 = (local_2a8[2] + fVar21) * (local_2a8[2] + fVar21);
        fVar26 = (float)(longlong)((int)local_168[0x32] << 1) + 1.0 + fVar20;
        if (-1 < iVar5) {
          fVar30 = fVar22;
          fVar16 = fVar23;
        }
        iVar1 = (uint)(fVar26 * fVar30 < fVar28 * fVar16) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 1;
        }
        if (-1 < iVar5) {
          iVar18 = 0;
        }
        if (-1 < iVar1) {
          fVar28 = fVar30;
        }
        if (-1 < iVar1) {
          fVar26 = fVar16;
        }
        fVar30 = (float)(longlong)((int)local_168[0x33] << 1) + 1.0 + fVar20;
        fVar16 = (local_2a8[3] + fVar21) * (local_2a8[3] + fVar21);
        iVar5 = (uint)(fVar30 * fVar28 < fVar16 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 2;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar16 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x34] << 1) + 1.0 + fVar20;
        fVar28 = (local_298 + fVar21) * (local_298 + fVar21);
        iVar1 = (uint)(fVar26 * fVar16 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 3;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar16;
        }
        fVar30 = (float)(longlong)((int)local_168[0x35] << 1) + 1.0 + fVar20;
        fVar16 = (local_294 + fVar21) * (local_294 + fVar21);
        iVar5 = (uint)(fVar30 * fVar28 < fVar16 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 4;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar16 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x36] << 1) + 1.0 + fVar20;
        fVar28 = (local_290 + fVar21) * (local_290 + fVar21);
        iVar1 = (uint)(fVar26 * fVar16 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 5;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar16;
        }
        fVar30 = (float)(longlong)((int)local_168[0x37] << 1) + 1.0 + fVar20;
        fVar16 = (local_28c + fVar21) * (local_28c + fVar21);
        iVar5 = (uint)(fVar30 * fVar28 < fVar16 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 6;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar16 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x38] << 1) + 1.0 + fVar20;
        fVar28 = (local_288 + fVar21) * (local_288 + fVar21);
        iVar1 = (uint)(fVar26 * fVar16 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 7;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar16;
        }
        fVar30 = (float)(longlong)((int)local_168[0x39] << 1) + 1.0 + fVar20;
        fVar16 = (local_284 + fVar21) * (local_284 + fVar21);
        iVar5 = (uint)(fVar30 * fVar28 < fVar16 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 8;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar16 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x3a] << 1) + 1.0 + fVar20;
        fVar28 = (local_280 + fVar21) * (local_280 + fVar21);
        iVar1 = (uint)(fVar26 * fVar16 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 9;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar16;
        }
        fVar30 = (float)(longlong)((int)local_168[0x3b] << 1) + 1.0 + fVar20;
        fVar16 = (local_27c + fVar21) * (local_27c + fVar21);
        iVar5 = (uint)(fVar30 * fVar28 < fVar16 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 10;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar16 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x3c] << 1) + 1.0 + fVar20;
        fVar28 = (local_278 + fVar21) * (local_278 + fVar21);
        iVar1 = (uint)(fVar26 * fVar16 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 0xb;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar16;
        }
        fVar16 = (float)(longlong)((int)local_168[0x3d] << 1) + 1.0 + fVar20;
        fVar30 = (local_274 + fVar21) * (local_274 + fVar21);
        iVar5 = (uint)(fVar16 * fVar28 < fVar30 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 0xc;
        }
        if (-1 < iVar5) {
          fVar16 = fVar26;
        }
        if (-1 < iVar5) {
          fVar30 = fVar28;
        }
        fVar28 = (local_270 + fVar21) * (local_270 + fVar21);
        fVar26 = (float)(longlong)((int)local_168[0x3e] << 1) + 1.0 + fVar20;
        iVar1 = (uint)(fVar26 * fVar30 < fVar28 * fVar16) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 0xd;
        }
        if (-1 < iVar1) {
          fVar26 = fVar16;
        }
        fVar16 = local_26c + fVar21;
        if (-1 < iVar1) {
          fVar28 = fVar30;
        }
        if (iVar1 < 0) {
          iVar18 = 0xe;
        }
        if ((int)((uint)(((float)(longlong)((int)local_168[0x3f] * 2) + 1.0 + fVar20) * fVar28 <
                        fVar16 * fVar16 * fVar26) << 0x1f) < 0) break;
        fVar21 = fVar21 + local_2a8[iVar18];
        iVar10 = iVar10 + 1;
        fVar20 = fVar20 + (float)(longlong)((int)local_168[iVar18 + 0x30] * 2 + 1);
        local_168[iVar18 + 0x30] = (float)((int)local_168[iVar18 + 0x30] + 1);
        fVar16 = fVar21;
        if (iVar10 == 6) goto LAB_0006d982;
      }
      iVar10 = iVar10 + 1;
      fVar20 = fVar20 + (float)(longlong)((int)local_168[0x3f] * 2 + 1);
      local_168[0x3f] = (float)((int)local_168[0x3f] + 1);
      fVar21 = fVar16;
    } while (iVar10 != 6);
  }
LAB_0006d982:
  local_168[0x20] = local_168[0x30];
  local_168[0x21] = local_168[0x31];
  local_168[0x22] = local_168[0x32];
  local_168[0x23] = local_168[0x33];
  local_168[0x24] = local_168[0x34];
  local_168[0x25] = local_168[0x35];
  local_168[0x26] = local_168[0x36];
  local_168[0x27] = local_168[0x37];
  local_168[0x28] = local_168[0x38];
  local_168[0x29] = local_168[0x39];
  local_168[0x2a] = local_168[0x3a];
  local_168[0x2b] = local_168[0x3b];
  iVar18 = 2;
  local_168[0x2c] = local_168[0x3c];
  local_168[0x2d] = local_168[0x3d];
  local_168[0x2e] = local_168[0x3e];
  local_168[0x2f] = local_168[0x3f];
  fVar21 = local_168[0x3e];
  while( true ) {
    fVar23 = (local_2a8[0] + fVar16) * (local_2a8[0] + fVar16);
    fVar24 = (float)(longlong)((int)local_168[0x20] << 1) + 1.0 + fVar20;
    fVar22 = (local_2a8[1] + fVar16) * (local_2a8[1] + fVar16);
    fVar28 = (float)(longlong)((int)local_168[0x21] << 1) + 1.0 + fVar20;
    iVar10 = (uint)(fVar28 * fVar23 < fVar22 * fVar24) << 0x1f;
    fVar26 = (local_2a8[2] + fVar16) * (local_2a8[2] + fVar16);
    fVar30 = (float)(longlong)((int)local_168[0x22] << 1) + 1.0 + fVar20;
    if (-1 < iVar10) {
      fVar22 = fVar23;
      fVar28 = fVar24;
    }
    iVar5 = (uint)(fVar30 * fVar22 < fVar26 * fVar28) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 1.4013e-45;
    }
    if (-1 < iVar10) {
      fVar21 = 0.0;
    }
    if (-1 < iVar5) {
      fVar26 = fVar22;
    }
    if (-1 < iVar5) {
      fVar30 = fVar28;
    }
    fVar22 = (float)(longlong)((int)local_168[0x23] << 1) + 1.0 + fVar20;
    fVar28 = (local_2a8[3] + fVar16) * (local_2a8[3] + fVar16);
    iVar10 = (uint)(fVar22 * fVar26 < fVar28 * fVar30) << 0x1f;
    if (iVar5 < 0) {
      fVar21 = 2.8026e-45;
    }
    if (-1 < iVar10) {
      fVar22 = fVar30;
    }
    if (-1 < iVar10) {
      fVar28 = fVar26;
    }
    fVar30 = (float)(longlong)((int)local_168[0x24] << 1) + 1.0 + fVar20;
    fVar26 = (local_298 + fVar16) * (local_298 + fVar16);
    iVar5 = (uint)(fVar30 * fVar28 < fVar26 * fVar22) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 4.2039e-45;
    }
    if (-1 < iVar5) {
      fVar30 = fVar22;
    }
    if (-1 < iVar5) {
      fVar26 = fVar28;
    }
    fVar22 = (float)(longlong)((int)local_168[0x25] << 1) + 1.0 + fVar20;
    fVar28 = (local_294 + fVar16) * (local_294 + fVar16);
    iVar10 = (uint)(fVar22 * fVar26 < fVar28 * fVar30) << 0x1f;
    if (iVar5 < 0) {
      fVar21 = 5.60519e-45;
    }
    if (-1 < iVar10) {
      fVar22 = fVar30;
    }
    if (-1 < iVar10) {
      fVar28 = fVar26;
    }
    fVar30 = (float)(longlong)((int)local_168[0x26] << 1) + 1.0 + fVar20;
    fVar26 = (local_290 + fVar16) * (local_290 + fVar16);
    iVar5 = (uint)(fVar30 * fVar28 < fVar26 * fVar22) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 7.00649e-45;
    }
    if (-1 < iVar5) {
      fVar30 = fVar22;
    }
    if (-1 < iVar5) {
      fVar26 = fVar28;
    }
    fVar22 = (float)(longlong)((int)local_168[0x27] << 1) + 1.0 + fVar20;
    fVar28 = (local_28c + fVar16) * (local_28c + fVar16);
    iVar10 = (uint)(fVar22 * fVar26 < fVar28 * fVar30) << 0x1f;
    if (iVar5 < 0) {
      fVar21 = 8.40779e-45;
    }
    if (-1 < iVar10) {
      fVar22 = fVar30;
    }
    if (-1 < iVar10) {
      fVar28 = fVar26;
    }
    fVar30 = (float)(longlong)((int)local_168[0x28] << 1) + 1.0 + fVar20;
    fVar26 = (local_288 + fVar16) * (local_288 + fVar16);
    iVar5 = (uint)(fVar30 * fVar28 < fVar26 * fVar22) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 9.80909e-45;
    }
    if (-1 < iVar5) {
      fVar30 = fVar22;
    }
    if (-1 < iVar5) {
      fVar26 = fVar28;
    }
    fVar22 = (float)(longlong)((int)local_168[0x29] << 1) + 1.0 + fVar20;
    fVar28 = (local_284 + fVar16) * (local_284 + fVar16);
    iVar10 = (uint)(fVar22 * fVar26 < fVar28 * fVar30) << 0x1f;
    if (iVar5 < 0) {
      fVar21 = 1.12104e-44;
    }
    if (-1 < iVar10) {
      fVar22 = fVar30;
    }
    if (-1 < iVar10) {
      fVar28 = fVar26;
    }
    fVar30 = (float)(longlong)((int)local_168[0x2a] << 1) + 1.0 + fVar20;
    fVar26 = (local_280 + fVar16) * (local_280 + fVar16);
    iVar5 = (uint)(fVar30 * fVar28 < fVar26 * fVar22) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 1.26117e-44;
    }
    if (-1 < iVar5) {
      fVar30 = fVar22;
    }
    if (-1 < iVar5) {
      fVar26 = fVar28;
    }
    fVar22 = (float)(longlong)((int)local_168[0x2b] << 1) + 1.0 + fVar20;
    fVar28 = (local_27c + fVar16) * (local_27c + fVar16);
    iVar10 = (uint)(fVar22 * fVar26 < fVar28 * fVar30) << 0x1f;
    if (iVar5 < 0) {
      fVar21 = 1.4013e-44;
    }
    if (-1 < iVar10) {
      fVar22 = fVar30;
    }
    if (-1 < iVar10) {
      fVar28 = fVar26;
    }
    fVar30 = (float)(longlong)((int)local_168[0x2c] << 1) + 1.0 + fVar20;
    fVar26 = (local_278 + fVar16) * (local_278 + fVar16);
    iVar5 = (uint)(fVar30 * fVar28 < fVar26 * fVar22) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 1.54143e-44;
    }
    if (-1 < iVar5) {
      fVar30 = fVar22;
    }
    if (-1 < iVar5) {
      fVar26 = fVar28;
    }
    fVar22 = (float)(longlong)((int)local_168[0x2d] << 1) + 1.0 + fVar20;
    fVar28 = (local_274 + fVar16) * (local_274 + fVar16);
    iVar10 = (uint)(fVar22 * fVar26 < fVar28 * fVar30) << 0x1f;
    if (iVar5 < 0) {
      fVar21 = 1.68156e-44;
    }
    if (-1 < iVar10) {
      fVar22 = fVar30;
    }
    if (-1 < iVar10) {
      fVar28 = fVar26;
    }
    fVar26 = (local_270 + fVar16) * (local_270 + fVar16);
    fVar30 = (float)(longlong)((int)local_168[0x2e] << 1) + 1.0 + fVar20;
    iVar5 = (uint)(fVar30 * fVar28 < fVar26 * fVar22) << 0x1f;
    if (iVar10 < 0) {
      fVar21 = 1.82169e-44;
    }
    if (-1 < iVar5) {
      fVar30 = fVar22;
    }
    iVar10 = (int)local_168[0x2f] * 2;
    fVar22 = local_26c + fVar16;
    if (-1 < iVar5) {
      fVar26 = fVar28;
    }
    if (iVar5 < 0) {
      fVar21 = 1.96182e-44;
    }
    if ((int)((uint)(((float)(longlong)iVar10 + 1.0 + fVar20) * fVar26 < fVar22 * fVar22 * fVar30)
             << 0x1f) < 0) {
      local_168[0x2f] = (float)((int)local_168[0x2f] + 1);
      fVar16 = fVar22;
    }
    else {
      fVar28 = local_2a8[(int)fVar21];
      iVar10 = (int)local_168[(int)fVar21 + 0x20] * 2;
      local_168[(int)fVar21 + 0x20] = (float)((int)local_168[(int)fVar21 + 0x20] + 1);
      fVar16 = fVar16 + fVar28;
    }
    fVar20 = fVar20 + (float)(longlong)(iVar10 + 1);
    if (iVar18 == 1) break;
    iVar18 = 1;
  }
  local_168[0x10] = local_168[0x20];
  local_168[0x11] = local_168[0x21];
  local_168[0x12] = local_168[0x22];
  local_168[0x13] = local_168[0x23];
  local_168[0x14] = local_168[0x24];
  local_168[0x15] = local_168[0x25];
  local_168[0x16] = local_168[0x26];
  local_168[0x17] = local_168[0x27];
  local_168[0x18] = local_168[0x28];
  local_168[0x19] = local_168[0x29];
  local_168[0x1a] = 0.0;
  local_168[0x1b] = 0.0;
  local_168[0x1c] = 0.0;
  local_168[0x1d] = 0.0;
  local_168[0x1e] = 0.0;
  local_168[0x1f] = 0.0;
  iVar18 = (int)local_168[0x2f] * (int)local_168[0x2f];
  iVar10 = (((((8 - (int)local_168[0x2a]) - (int)local_168[0x2b]) - (int)local_168[0x2c]) -
            (int)local_168[0x2d]) - (int)local_168[0x2e]) - (int)local_168[0x2f];
  fVar16 = fVar16 - ((float)(longlong)(int)local_168[0x2b] * local_27c +
                     local_280 * (float)(longlong)(int)local_168[0x2a] +
                     local_278 * (float)(longlong)(int)local_168[0x2c] +
                     local_274 * (float)(longlong)(int)local_168[0x2d] +
                     local_270 * (float)(longlong)(int)local_168[0x2e] +
                    local_26c * (float)(longlong)(int)local_168[0x2f]);
  fVar20 = fVar20 - ((float)(longlong)iVar18 +
                    (float)(longlong)((int)local_168[0x2e] * (int)local_168[0x2e]) +
                    (float)(longlong)((int)local_168[0x2d] * (int)local_168[0x2d]) +
                    (float)(longlong)((int)local_168[0x2c] * (int)local_168[0x2c]) +
                    (float)(longlong)((int)local_168[0x2b] * (int)local_168[0x2b]) +
                    (float)(longlong)((int)local_168[0x2a] * (int)local_168[0x2a]));
  fVar21 = fVar16;
  if (iVar10 < 10) {
    do {
      while( true ) {
        fVar22 = (local_2a8[0] + fVar16) * (local_2a8[0] + fVar16);
        fVar23 = (float)(longlong)((int)local_168[0x10] << 1) + 1.0 + fVar20;
        fVar30 = (local_2a8[1] + fVar16) * (local_2a8[1] + fVar16);
        fVar21 = (float)(longlong)((int)local_168[0x11] << 1) + 1.0 + fVar20;
        iVar5 = (uint)(fVar21 * fVar22 < fVar30 * fVar23) << 0x1f;
        fVar28 = (local_2a8[2] + fVar16) * (local_2a8[2] + fVar16);
        fVar26 = (float)(longlong)((int)local_168[0x12] << 1) + 1.0 + fVar20;
        if (-1 < iVar5) {
          fVar30 = fVar22;
          fVar21 = fVar23;
        }
        iVar1 = (uint)(fVar26 * fVar30 < fVar28 * fVar21) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 4;
        }
        if (-1 < iVar5) {
          iVar18 = 0;
        }
        if (-1 < iVar1) {
          fVar28 = fVar30;
        }
        if (-1 < iVar1) {
          fVar26 = fVar21;
        }
        fVar30 = (float)(longlong)((int)local_168[0x13] << 1) + 1.0 + fVar20;
        fVar21 = (local_2a8[3] + fVar16) * (local_2a8[3] + fVar16);
        iVar5 = (uint)(fVar30 * fVar28 < fVar21 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 8;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar21 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x14] << 1) + 1.0 + fVar20;
        fVar28 = (local_298 + fVar16) * (local_298 + fVar16);
        iVar1 = (uint)(fVar26 * fVar21 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 0xc;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar21;
        }
        fVar30 = (float)(longlong)((int)local_168[0x15] << 1) + 1.0 + fVar20;
        fVar21 = (local_294 + fVar16) * (local_294 + fVar16);
        iVar5 = (uint)(fVar30 * fVar28 < fVar21 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 0x10;
        }
        if (-1 < iVar5) {
          fVar30 = fVar26;
        }
        if (-1 < iVar5) {
          fVar21 = fVar28;
        }
        fVar26 = (float)(longlong)((int)local_168[0x16] << 1) + 1.0 + fVar20;
        fVar28 = (local_290 + fVar16) * (local_290 + fVar16);
        iVar1 = (uint)(fVar26 * fVar21 < fVar28 * fVar30) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 0x14;
        }
        if (-1 < iVar1) {
          fVar26 = fVar30;
        }
        if (-1 < iVar1) {
          fVar28 = fVar21;
        }
        fVar21 = (float)(longlong)((int)local_168[0x17] << 1) + 1.0 + fVar20;
        fVar30 = (local_28c + fVar16) * (local_28c + fVar16);
        iVar5 = (uint)(fVar21 * fVar28 < fVar30 * fVar26) << 0x1f;
        if (iVar1 < 0) {
          iVar18 = 0x18;
        }
        if (-1 < iVar5) {
          fVar21 = fVar26;
        }
        if (-1 < iVar5) {
          fVar30 = fVar28;
        }
        fVar28 = (local_288 + fVar16) * (local_288 + fVar16);
        fVar26 = (float)(longlong)((int)local_168[0x18] << 1) + 1.0 + fVar20;
        iVar1 = (uint)(fVar26 * fVar30 < fVar28 * fVar21) << 0x1f;
        if (iVar5 < 0) {
          iVar18 = 0x1c;
        }
        if (-1 < iVar1) {
          fVar26 = fVar21;
        }
        fVar21 = local_284 + fVar16;
        if (-1 < iVar1) {
          fVar28 = fVar30;
        }
        if (iVar1 < 0) {
          iVar18 = 0x20;
        }
        if ((int)((uint)(((float)(longlong)((int)local_168[0x19] * 2) + 1.0 + fVar20) * fVar28 <
                        fVar21 * fVar21 * fVar26) << 0x1f) < 0) break;
        iVar5 = *(int *)((int)local_168 + iVar18 + 0x40);
        fVar21 = fVar16 + *(float *)((int)local_2a8 + iVar18);
        iVar10 = iVar10 + 1;
        fVar20 = fVar20 + (float)(longlong)(iVar5 * 2 + 1);
        *(int *)((int)local_168 + iVar18 + 0x40) = iVar5 + 1;
        fVar16 = fVar21;
        if (iVar10 == 10) goto LAB_0006e15e;
      }
      iVar10 = iVar10 + 1;
      fVar20 = fVar20 + (float)(longlong)((int)local_168[0x19] * 2 + 1);
      local_168[0x19] = (float)((int)local_168[0x19] + 1);
      fVar16 = fVar21;
    } while (iVar10 != 10);
  }
LAB_0006e15e:
  local_168[0] = local_168[0x10];
  local_168[1] = local_168[0x11];
  local_168[2] = local_168[0x12];
  local_168[3] = local_168[0x13];
  local_168[4] = local_168[0x14];
  local_168[5] = local_168[0x15];
  local_168[6] = local_168[0x16];
  local_168[7] = local_168[0x17];
  local_168[8] = local_168[0x18];
  local_168[9] = local_168[0x19];
  local_168[10] = local_168[0x1a];
  local_168[0xb] = local_168[0x1b];
  local_168[0xc] = local_168[0x1c];
  local_168[0xd] = local_168[0x1d];
  local_168[0xe] = local_168[0x1e];
  local_168[0xf] = local_168[0x1f];
  fVar22 = (float)(longlong)((int)local_168[0x1a] << 1) + 1.0 + fVar20;
  fVar25 = (fVar21 + local_280) * (fVar21 + local_280);
  fVar27 = (fVar21 + local_27c) * (fVar21 + local_27c);
  fVar23 = (float)(longlong)((int)local_168[0x1b] << 1) + 1.0 + fVar20;
  fVar26 = fVar22 * fVar27;
  fVar30 = fVar23 * fVar25;
  fVar16 = (float)(longlong)((int)local_168[0x1c] << 1) + 1.0 + fVar20;
  fVar28 = (fVar21 + local_278) * (fVar21 + local_278);
  fVar24 = (float)((uint)(fVar30 < fVar26) * (int)fVar23 + (uint)(fVar26 <= fVar30) * (int)fVar22);
  fVar25 = (float)((uint)(fVar30 < fVar26) * (int)fVar27 + (uint)(fVar26 <= fVar30) * (int)fVar25);
  fVar22 = fVar28 * fVar24;
  fVar23 = fVar25 * fVar16;
  if (fVar30 < fVar26) {
    iVar18 = 4;
  }
  else {
    iVar18 = 0;
  }
  if (fVar22 <= fVar23) {
    fVar16 = fVar24;
  }
  fVar30 = (fVar21 + local_274) * (fVar21 + local_274);
  fVar26 = (float)(longlong)((int)local_168[0x1d] << 1) + 1.0 + fVar20;
  if (fVar22 <= fVar23) {
    fVar28 = fVar25;
  }
  fVar24 = fVar30 * fVar16;
  fVar25 = fVar28 * fVar26;
  if (fVar23 < fVar22) {
    iVar18 = 8;
  }
  if (fVar24 <= fVar25) {
    fVar26 = fVar16;
  }
  if (fVar24 <= fVar25) {
    fVar30 = fVar28;
  }
  fVar28 = (fVar21 + local_270) * (fVar21 + local_270);
  fVar16 = (float)(longlong)((int)local_168[0x1e] << 1) + 1.0 + fVar20;
  fVar22 = fVar28 * fVar26;
  fVar23 = fVar30 * fVar16;
  if (fVar25 < fVar24) {
    iVar18 = 0xc;
  }
  if (fVar22 <= fVar23) {
    fVar16 = fVar26;
  }
  if (fVar22 <= fVar23) {
    fVar28 = fVar30;
  }
  if (fVar23 < fVar22) {
    iVar18 = 0x10;
  }
  if (((float)(longlong)((int)local_168[0x1f] << 1) + 1.0 + fVar20) * fVar28 <
      (local_26c + fVar21) * (local_26c + fVar21) * fVar16) {
    iVar18 = 0x14;
  }
  *(int *)((int)local_168 + iVar18 + 0x28) = *(int *)((int)local_168 + iVar18 + 0x28) + 1;
  if ((int)((uint)(local_2e8[0] < 0.0) << 0x1f) < 0) {
    local_168[0] = (float)-(int)local_168[0x10];
    local_168[0x10] = (float)-(int)local_168[0x10];
    local_168[0x20] = (float)-(int)local_168[0x20];
    local_168[0x30] = (float)-(int)local_168[0x30];
  }
  if ((int)((uint)(local_2e8[1] < 0.0) << 0x1f) < 0) {
    local_168[1] = (float)-(int)local_168[0x11];
    local_168[0x11] = (float)-(int)local_168[0x11];
    local_168[0x21] = (float)-(int)local_168[0x21];
    local_168[0x31] = (float)-(int)local_168[0x31];
  }
  if ((int)((uint)(local_2e8[2] < 0.0) << 0x1f) < 0) {
    local_168[2] = (float)-(int)local_168[0x12];
    local_168[0x12] = (float)-(int)local_168[0x12];
    local_168[0x22] = (float)-(int)local_168[0x22];
    local_168[0x32] = (float)-(int)local_168[0x32];
  }
  if ((int)((uint)(local_2e8[3] < 0.0) << 0x1f) < 0) {
    local_168[3] = (float)-(int)local_168[0x13];
    local_168[0x13] = (float)-(int)local_168[0x13];
    local_168[0x23] = (float)-(int)local_168[0x23];
    local_168[0x33] = (float)-(int)local_168[0x33];
  }
  if ((int)((uint)(local_2d8 < 0.0) << 0x1f) < 0) {
    local_168[4] = (float)-(int)local_168[0x14];
    local_168[0x14] = (float)-(int)local_168[0x14];
    local_168[0x24] = (float)-(int)local_168[0x24];
    local_168[0x34] = (float)-(int)local_168[0x34];
  }
  if ((int)((uint)(local_2d4 < 0.0) << 0x1f) < 0) {
    local_168[5] = (float)-(int)local_168[0x15];
    local_168[0x15] = (float)-(int)local_168[0x15];
    local_168[0x25] = (float)-(int)local_168[0x25];
    local_168[0x35] = (float)-(int)local_168[0x35];
  }
  if ((int)((uint)(local_2d0 < 0.0) << 0x1f) < 0) {
    local_168[6] = (float)-(int)local_168[0x16];
    local_168[0x16] = (float)-(int)local_168[0x16];
    local_168[0x26] = (float)-(int)local_168[0x26];
    local_168[0x36] = (float)-(int)local_168[0x36];
  }
  if ((int)((uint)(local_2cc < 0.0) << 0x1f) < 0) {
    local_168[7] = (float)-(int)local_168[0x17];
    local_168[0x17] = (float)-(int)local_168[0x17];
    local_168[0x27] = (float)-(int)local_168[0x27];
    local_168[0x37] = (float)-(int)local_168[0x37];
  }
  if ((int)((uint)(local_2c8 < 0.0) << 0x1f) < 0) {
    local_168[8] = (float)-(int)local_168[0x18];
    local_168[0x18] = (float)-(int)local_168[0x18];
    local_168[0x28] = (float)-(int)local_168[0x28];
    local_168[0x38] = (float)-(int)local_168[0x38];
  }
  if ((int)((uint)(local_2c4 < 0.0) << 0x1f) < 0) {
    local_168[9] = (float)-(int)local_168[0x19];
    local_168[0x19] = (float)-(int)local_168[0x19];
    local_168[0x29] = (float)-(int)local_168[0x29];
    local_168[0x39] = (float)-(int)local_168[0x39];
  }
  if ((int)((uint)(local_2c0 < 0.0) << 0x1f) < 0) {
    local_168[10] = (float)-(int)local_168[10];
    local_168[0x1a] = (float)-(int)local_168[0x1a];
    local_168[0x2a] = (float)-(int)local_168[0x2a];
    local_168[0x3a] = (float)-(int)local_168[0x3a];
  }
  if ((int)((uint)(local_2bc < 0.0) << 0x1f) < 0) {
    local_168[0xb] = (float)-(int)local_168[0xb];
    local_168[0x1b] = (float)-(int)local_168[0x1b];
    local_168[0x2b] = (float)-(int)local_168[0x2b];
    local_168[0x3b] = (float)-(int)local_168[0x3b];
  }
  if ((int)((uint)(local_2b8 < 0.0) << 0x1f) < 0) {
    local_168[0xc] = (float)-(int)local_168[0xc];
    local_168[0x1c] = (float)-(int)local_168[0x1c];
    local_168[0x2c] = (float)-(int)local_168[0x2c];
    local_168[0x3c] = (float)-(int)local_168[0x3c];
  }
  if ((int)((uint)(local_2b4 < 0.0) << 0x1f) < 0) {
    local_168[0xd] = (float)-(int)local_168[0xd];
    local_168[0x1d] = (float)-(int)local_168[0x1d];
    local_168[0x2d] = (float)-(int)local_168[0x2d];
    local_168[0x3d] = (float)-(int)local_168[0x3d];
  }
  if ((int)((uint)(local_2b0 < 0.0) << 0x1f) < 0) {
    local_168[0xe] = (float)-(int)local_168[0xe];
    local_168[0x1e] = (float)-(int)local_168[0x1e];
    local_168[0x2e] = (float)-(int)local_168[0x2e];
    local_168[0x3e] = (float)-(int)local_168[0x3e];
  }
  if ((int)((uint)(local_2ac < 0.0) << 0x1f) < 0) {
    local_168[0xf] = (float)-(int)local_168[0xf];
    local_168[0x1f] = (float)-(int)local_168[0x1f];
    local_168[0x2f] = (float)-(int)local_168[0x2f];
    local_168[0x3f] = (float)-(int)local_168[0x3f];
  }
  pfVar9 = local_268;
  pfVar4 = local_168;
  pfVar14 = pfVar9;
  local_168[0] = local_168[0x10];
  local_168[1] = local_168[0x11];
  local_168[2] = local_168[0x12];
  local_168[3] = local_168[0x13];
  local_168[4] = local_168[0x14];
  local_168[5] = local_168[0x15];
  local_168[6] = local_168[0x16];
  local_168[7] = local_168[0x17];
  local_168[8] = local_168[0x18];
  local_168[9] = local_168[0x19];
  do {
    fVar16 = pfVar4[1];
    pfVar15 = pfVar14 + 0x10;
    fVar20 = *pfVar4;
    fVar21 = pfVar4[2];
    fVar28 = pfVar4[3];
    fVar26 = pfVar4[4];
    fVar30 = pfVar4[5];
    fVar22 = pfVar4[6];
    fVar23 = pfVar4[7];
    fVar24 = pfVar4[8];
    fVar25 = pfVar4[9];
    fVar27 = pfVar4[10];
    fVar29 = pfVar4[0xb];
    fVar31 = pfVar4[0xc];
    fVar32 = pfVar4[0xd];
    fVar33 = pfVar4[0xe];
    fVar34 = pfVar4[0xf];
    fVar35 = 1.0 / SQRT((float)(longlong)
                               ((int)fVar34 * (int)fVar34 +
                               (int)fVar33 * (int)fVar33 +
                               (int)fVar32 * (int)fVar32 +
                               (int)fVar31 * (int)fVar31 +
                               (int)fVar29 * (int)fVar29 +
                               (int)fVar27 * (int)fVar27 +
                               (int)fVar25 * (int)fVar25 +
                               (int)fVar24 * (int)fVar24 +
                               (int)fVar23 * (int)fVar23 +
                               (int)fVar22 * (int)fVar22 +
                               (int)fVar30 * (int)fVar30 +
                               (int)fVar26 * (int)fVar26 +
                               (int)fVar28 * (int)fVar28 +
                               (int)fVar21 * (int)fVar21 +
                               (int)fVar20 * (int)fVar20 + (int)fVar16 * (int)fVar16));
    *pfVar14 = (float)(longlong)(int)fVar20 * fVar35;
    pfVar14[1] = (float)(longlong)(int)fVar16 * fVar35;
    pfVar14[2] = (float)(longlong)(int)fVar21 * fVar35;
    pfVar14[3] = (float)(longlong)(int)fVar28 * fVar35;
    pfVar14[4] = (float)(longlong)(int)fVar26 * fVar35;
    pfVar14[5] = (float)(longlong)(int)fVar30 * fVar35;
    pfVar14[6] = (float)(longlong)(int)fVar22 * fVar35;
    pfVar14[7] = (float)(longlong)(int)fVar23 * fVar35;
    pfVar14[8] = (float)(longlong)(int)fVar24 * fVar35;
    pfVar14[9] = (float)(longlong)(int)fVar25 * fVar35;
    pfVar14[10] = (float)(longlong)(int)fVar27 * fVar35;
    pfVar14[0xb] = (float)(longlong)(int)fVar29 * fVar35;
    pfVar14[0xc] = (float)(longlong)(int)fVar31 * fVar35;
    pfVar14[0xd] = (float)(longlong)(int)fVar32 * fVar35;
    pfVar14[0xe] = (float)(longlong)(int)fVar33 * fVar35;
    pfVar14[0xf] = (float)(longlong)(int)fVar34 * fVar35;
    pfVar4 = pfVar4 + 0x10;
    pfVar14 = pfVar15;
  } while (pfVar15 != local_168);
  iVar18 = 0;
  local_33c = INFINITY;
  param_5[2] = 0;
  param_5[3] = 0;
  do {
    if (0 < (int)(&DAT_000903e8)[iVar18 * 2]) {
      iVar10 = 0;
      fVar16 = INFINITY;
      iVar5 = 0;
      pfVar4 = (float *)(&DAT_000903ec)[iVar18 * 2];
      do {
        fVar34 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar35 = local_2e8[1] + -pfVar9[1] * fVar34;
        fVar20 = local_2e8[0] + -*pfVar9 * fVar34;
        fVar21 = local_2e8[2] + -pfVar9[2] * fVar34;
        fVar28 = local_2e8[3] + -pfVar9[3] * fVar34;
        fVar26 = local_2d8 + -pfVar9[4] * fVar34;
        fVar30 = local_2d4 + -pfVar9[5] * fVar34;
        fVar22 = local_2d0 + -pfVar9[6] * fVar34;
        fVar23 = local_2cc + -pfVar9[7] * fVar34;
        fVar24 = local_2c8 + fVar34 * -pfVar9[8];
        fVar25 = local_2c4 + -pfVar9[9] * fVar34;
        fVar27 = local_2c0 + -pfVar9[10] * fVar34;
        fVar29 = local_2bc + -pfVar9[0xb] * fVar34;
        fVar32 = local_2b8 + -pfVar9[0xc] * fVar34;
        fVar33 = local_2b4 + -pfVar9[0xd] * fVar34;
        fVar31 = local_2b0 + -pfVar9[0xe] * fVar34;
        fVar34 = local_2ac + -pfVar9[0xf] * fVar34;
        fVar20 = fVar35 * fVar35 + fVar20 * fVar20 + fVar21 * fVar21 + fVar28 * fVar28 +
                 fVar26 * fVar26 + fVar30 * fVar30 + fVar22 * fVar22 + fVar23 * fVar23 +
                 fVar24 * fVar24 + fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 +
                 fVar32 * fVar32 + fVar33 * fVar33 + fVar31 * fVar31 + fVar34 * fVar34;
        iVar1 = (uint)(fVar20 < fVar16) << 0x1f;
        if (iVar1 < 0) {
          iVar10 = iVar5;
        }
        iVar5 = iVar5 + 1;
        if (iVar1 < 0) {
          fVar16 = fVar20;
        }
      } while ((&DAT_000903e8)[iVar18 * 2] != iVar5);
      if (fVar16 < local_33c) {
        param_5[3] = iVar10;
        param_5[2] = iVar18;
        local_33c = fVar16;
      }
    }
    iVar18 = iVar18 + 1;
    pfVar9 = pfVar9 + 0x10;
  } while (iVar18 != 4);
  iVar18 = param_5[2];
  FUN_0006bd74(iVar3,iVar13,local_268 + iVar18 * 0x10,iVar18,param_5[3],&local_328);
  if (iVar18 < 2) {
    iVar13 = 0x28;
  }
  else {
    iVar13 = 0x40;
  }
  iVar13 = iVar18 * 0x40 + iVar13;
  uVar11 = *(uint *)((int)auStack_170 + iVar13 + 4);
  if (iVar18 < 2) {
    iVar3 = 10;
  }
  else {
    iVar3 = 0x10;
  }
  puVar7 = (uint *)((int)auStack_170 + iVar13 + 4);
  if (uVar11 == 0) {
    iVar10 = 0;
    do {
      iVar13 = iVar10;
      puVar6 = puVar7;
      puVar7 = puVar6 + -1;
      uVar11 = *puVar7;
      iVar10 = iVar13 + 1;
    } while (uVar11 == 0);
    iVar13 = iVar13 + 2;
    param_5[4] = 0;
    *(byte *)(param_5 + 6) = (byte)(uVar11 >> 0x1f);
    uVar12 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
    if (iVar13 < iVar3) {
      uVar8 = puVar6[-2];
      if (uVar8 != 0) goto LAB_0006e820;
      uVar11 = 0;
LAB_0006e82c:
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      iVar10 = iVar13 * 0xb + uVar12;
      uVar12 = uVar12 + uVar8;
      uVar11 = uVar11 + *(int *)(&LAB_00090128 + iVar10 * 4);
      iVar10 = iVar13 + 1;
      if (iVar10 < iVar3) goto LAB_0006e864;
      goto LAB_0006eb52;
    }
  }
  else {
    uVar8 = *(uint *)((int)auStack_170 + iVar13);
    param_5[4] = 0;
    uVar12 = uVar11;
    if ((int)uVar11 < 0) {
      uVar12 = -uVar11;
    }
    *(byte *)(param_5 + 6) = (byte)(uVar11 >> 0x1f);
    if (uVar8 != 0) {
      iVar13 = 1;
LAB_0006e820:
      uVar11 = uVar11 >> 0x1f;
      *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
      goto LAB_0006e82c;
    }
    iVar13 = 1;
    iVar10 = 2;
    uVar11 = *(uint *)(&LAB_00090128 + (uVar12 + 0xb) * 4);
LAB_0006e864:
    uVar8 = puVar7[-2];
    if (uVar8 != 0) {
      uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 << 1;
      *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
    }
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
    }
    uVar11 = uVar11 + *(int *)(&LAB_00090128 + (iVar10 * 0xb + uVar12) * 4);
    if (iVar13 + 2 < iVar3) {
      uVar17 = puVar7[-3];
      if (uVar17 != 0) {
        uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
        *(byte *)(param_5 + 6) = (byte)(uVar17 >> 0x1f);
      }
      uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 2) * 0xb + uVar8 + uVar12) * 4);
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
      }
      iVar10 = uVar8 + uVar12 + uVar17;
      if (iVar13 + 3 < iVar3) {
        uVar8 = puVar7[-4];
        if (uVar8 != 0) {
          uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
          *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
        }
        uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 3) * 0xb + iVar10) * 4);
        if ((int)uVar8 < 0) {
          uVar8 = -uVar8;
        }
        iVar10 = iVar10 + uVar8;
        if (iVar13 + 4 < iVar3) {
          uVar8 = puVar7[-5];
          if (uVar8 != 0) {
            uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
            *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
          }
          uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 4) * 0xb + iVar10) * 4);
          if ((int)uVar8 < 0) {
            uVar8 = -uVar8;
          }
          iVar10 = iVar10 + uVar8;
          if (iVar13 + 5 < iVar3) {
            uVar8 = puVar7[-6];
            if (uVar8 != 0) {
              uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
              *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
            }
            uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 5) * 0xb + iVar10) * 4);
            if ((int)uVar8 < 0) {
              uVar8 = -uVar8;
            }
            iVar10 = iVar10 + uVar8;
            if (iVar13 + 6 < iVar3) {
              uVar8 = puVar7[-7];
              if (uVar8 != 0) {
                uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
              }
              uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 6) * 0xb + iVar10) * 4);
              if ((int)uVar8 < 0) {
                uVar8 = -uVar8;
              }
              iVar10 = iVar10 + uVar8;
              if (iVar13 + 7 < iVar3) {
                uVar8 = puVar7[-8];
                if (uVar8 != 0) {
                  uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                  *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                }
                if ((int)uVar8 < 0) {
                  uVar8 = -uVar8;
                }
                iVar5 = iVar10 + uVar8;
                uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 7) * 0xb + iVar10) * 4);
                if (iVar13 + 8 < iVar3) {
                  uVar8 = puVar7[-9];
                  if (uVar8 != 0) {
                    uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                    *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                  }
                  uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 8) * 0xb + iVar5) * 4);
                  if ((int)uVar8 < 0) {
                    uVar8 = -uVar8;
                  }
                  iVar5 = uVar8 + iVar5;
                  if (iVar13 + 9 < iVar3) {
                    uVar8 = puVar7[-10];
                    if (uVar8 != 0) {
                      uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                      *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                    }
                    if ((int)uVar8 < 0) {
                      uVar8 = -uVar8;
                    }
                    uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 9) * 0xb + iVar5) * 4);
                    iVar5 = uVar8 + iVar5;
                    if (iVar13 != 6) {
                      uVar8 = puVar7[-0xb];
                      if (uVar8 != 0) {
                        uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                        *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                      }
                      if ((int)uVar8 < 0) {
                        uVar8 = -uVar8;
                      }
                      uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 10) * 0xb + iVar5) * 4);
                      iVar5 = iVar5 + uVar8;
                      if (iVar13 != 5) {
                        uVar8 = puVar7[-0xc];
                        if (uVar8 != 0) {
                          uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                          *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                        }
                        if ((int)uVar8 < 0) {
                          uVar8 = -uVar8;
                        }
                        uVar11 = uVar11 + *(int *)(&LAB_00090128 +
                                                  ((iVar13 + 0xb) * 0xb + iVar5) * 4);
                        iVar5 = iVar5 + uVar8;
                        if (iVar13 != 4) {
                          uVar8 = puVar7[-0xd];
                          if (uVar8 != 0) {
                            uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                            *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                          }
                          if ((int)uVar8 < 0) {
                            uVar8 = -uVar8;
                          }
                          uVar11 = uVar11 + *(int *)(&LAB_00090128 +
                                                    ((iVar13 + 0xc) * 0xb + iVar5) * 4);
                          iVar5 = iVar5 + uVar8;
                          if (iVar13 != 3) {
                            uVar8 = puVar7[-0xe];
                            if (uVar8 != 0) {
                              uVar11 = (uint)*(byte *)(param_5 + 6) | uVar11 * 2;
                              *(byte *)(param_5 + 6) = (byte)(uVar8 >> 0x1f);
                            }
                            if ((int)uVar8 < 0) {
                              uVar8 = -uVar8;
                            }
                            uVar11 = uVar11 + *(int *)(&LAB_00090128 +
                                                      ((iVar13 + 0xd) * 0xb + iVar5) * 4);
                            if (iVar13 == 1) {
                              if (puVar7[-0xf] != 0) {
                                bVar2 = *(byte *)(param_5 + 6);
                                *(byte *)(param_5 + 6) = (byte)(puVar7[-0xf] >> 0x1f);
                                uVar11 = (uint)bVar2 | uVar11 * 2;
                              }
                              uVar11 = uVar11 + *(int *)(&LAB_00090128 + (uVar8 + iVar5 + 0xa5) * 4)
                              ;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0006eb52:
    param_5[4] = uVar11;
  }
  if (iVar18 != 0) goto LAB_0006eb5c;
  if (local_168[0xf] == 0.0) {
    pfVar9 = local_168 + 0xf;
    iVar3 = 0;
    do {
      iVar13 = iVar3;
      pfVar4 = pfVar9;
      pfVar9 = pfVar4 + -1;
      fVar16 = *pfVar9;
      iVar3 = iVar13 + 1;
    } while (fVar16 == 0.0);
    iVar13 = iVar13 + 2;
    param_5[5] = 0;
    *(byte *)((int)param_5 + 0x19) = (byte)((uint)fVar16 >> 0x1f);
    fVar16 = (float)(((uint)fVar16 ^ (int)fVar16 >> 0x1f) - ((int)fVar16 >> 0x1f));
    if (5 < iVar13) goto LAB_0006eb5c;
    fVar20 = pfVar4[-2];
    if (fVar20 != 0.0) goto LAB_0006ee14;
    uVar11 = 0;
LAB_0006ee20:
    iVar3 = iVar13 * 0xb + (int)fVar16;
    fVar16 = (float)((int)fVar16 + (((uint)fVar20 ^ (int)fVar20 >> 0x1f) - ((int)fVar20 >> 0x1f)));
    uVar11 = uVar11 + *(int *)(&LAB_00090128 + iVar3 * 4);
    iVar3 = iVar13 + 1;
    if (iVar13 != 5) goto LAB_0006ee46;
  }
  else {
    *(byte *)((int)param_5 + 0x19) = (byte)((uint)local_168[0xf] >> 0x1f);
    fVar16 = local_168[0xf];
    if ((int)local_168[0xf] < 0) {
      fVar16 = (float)-(int)local_168[0xf];
    }
    if (local_168[0xe] != 0.0) {
      iVar13 = 1;
      pfVar9 = local_168 + 0xf;
      fVar20 = local_168[0xe];
LAB_0006ee14:
      uVar11 = (uint)*(byte *)((int)param_5 + 0x19);
      *(byte *)((int)param_5 + 0x19) = (byte)((uint)fVar20 >> 0x1f);
      goto LAB_0006ee20;
    }
    iVar13 = 1;
    iVar3 = 2;
    uVar11 = *(uint *)(&LAB_00090128 + ((int)fVar16 + 0xb) * 4);
    pfVar9 = local_168 + 0xf;
LAB_0006ee46:
    fVar20 = pfVar9[-2];
    if (fVar20 != 0.0) {
      uVar11 = (uint)*(byte *)((int)param_5 + 0x19) | uVar11 << 1;
      *(byte *)((int)param_5 + 0x19) = (byte)((uint)fVar20 >> 0x1f);
    }
    if ((int)fVar20 < 0) {
      fVar20 = (float)-(int)fVar20;
    }
    uVar11 = uVar11 + *(int *)(&LAB_00090128 + (iVar3 * 0xb + (int)fVar16) * 4);
    if (iVar13 != 4) {
      fVar21 = pfVar9[-3];
      if (fVar21 != 0.0) {
        uVar11 = (uint)*(byte *)((int)param_5 + 0x19) | uVar11 * 2;
        *(byte *)((int)param_5 + 0x19) = (byte)((uint)fVar21 >> 0x1f);
      }
      if ((int)fVar21 < 0) {
        fVar21 = (float)-(int)fVar21;
      }
      uVar11 = uVar11 + *(int *)(&LAB_00090128 +
                                ((iVar13 + 2) * 0xb + (int)fVar20 + (int)fVar16) * 4);
      iVar3 = (int)fVar21 + (int)fVar20 + (int)fVar16;
      if (iVar13 != 3) {
        fVar16 = pfVar9[-4];
        if (fVar16 != 0.0) {
          uVar11 = (uint)*(byte *)((int)param_5 + 0x19) | uVar11 * 2;
          *(byte *)((int)param_5 + 0x19) = (byte)((uint)fVar16 >> 0x1f);
        }
        if ((int)fVar16 < 0) {
          fVar16 = (float)-(int)fVar16;
        }
        uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((iVar13 + 3) * 0xb + iVar3) * 4);
        if (iVar13 == 1) {
          if (pfVar9[-5] != 0.0) {
            bVar2 = *(byte *)((int)param_5 + 0x19);
            *(byte *)((int)param_5 + 0x19) = (byte)((uint)pfVar9[-5] >> 0x1f);
            uVar11 = (uint)bVar2 | uVar11 * 2;
          }
          uVar11 = uVar11 + *(int *)(&LAB_00090128 + ((int)fVar16 + iVar3 + 0x37) * 4);
        }
      }
    }
  }
  param_5[5] = uVar11;
LAB_0006eb5c:
  FUN_0006bfc8(param_1,param_2,&local_328,0,param_6,param_7);
  return;
}


