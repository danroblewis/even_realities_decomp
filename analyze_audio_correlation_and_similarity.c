/*
 * Function: analyze_audio_correlation_and_similarity
 * Entry:    000698d0
 * Prototype: undefined analyze_audio_correlation_and_similarity()
 */


bool analyze_audio_correlation_and_similarity(int param_1,short *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_26c;
  float local_1b0 [99];
  
  iVar8 = *(int *)(param_1 + 0x484);
  iVar9 = iVar8;
  if (iVar8 < 4) {
    iVar9 = 4;
  }
  if (0x5c < iVar8) {
    iVar8 = 0x5d;
  }
  process_audio_data_with_complex_filtering(param_2,param_2 + -0x11,param_3,local_1b0,0x62);
  fVar11 = 0.9948454;
  iVar3 = 0;
  iVar6 = 1;
  iVar9 = iVar9 + -4;
  iVar8 = (iVar8 + 4) - iVar9;
  pfVar5 = local_1b0;
  fVar12 = local_1b0[0];
  do {
    pfVar5 = pfVar5 + 1;
    fVar10 = *pfVar5 * fVar11;
    fVar11 = fVar11 - 0.005154639;
    if (fVar12 < fVar10) {
      iVar3 = iVar6;
      local_1b0[0] = *pfVar5;
      fVar12 = fVar10;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x62);
  pfVar5 = local_1b0 + iVar9;
  fVar12 = *pfVar5;
  if (0 < iVar8) {
    iVar6 = 0;
    iVar7 = 1;
    do {
      pfVar5 = pfVar5 + 1;
      fVar11 = *pfVar5;
      if (fVar12 < fVar11) {
        iVar6 = iVar7;
      }
      iVar7 = iVar7 + 1;
      fVar12 = (float)((uint)(fVar12 < fVar11) * (int)fVar11 +
                      (uint)(fVar11 <= fVar12) * (int)fVar12);
    } while (iVar7 != iVar8 + 1);
    iVar9 = iVar9 + iVar6;
  }
  local_26c = iVar9 + 0x11;
  param_3 = param_3 >> 4;
  if (local_1b0[0] <= 0.0) {
    local_1b0[0] = 0.0;
    fVar11 = local_1b0[0];
  }
  else {
    lVar1 = (longlong)((int)param_2[0x2f] * (int)param_2[0x2f]) +
            (longlong)((int)param_2[0x2e] * (int)param_2[0x2e]) +
            (longlong)((int)param_2[0x2d] * (int)param_2[0x2d]) +
            (longlong)((int)param_2[0x2c] * (int)param_2[0x2c]) +
            (longlong)((int)param_2[0x2b] * (int)param_2[0x2b]) +
            (longlong)((int)param_2[0x2a] * (int)param_2[0x2a]) +
            (longlong)((int)param_2[0x29] * (int)param_2[0x29]) +
            (longlong)((int)param_2[0x28] * (int)param_2[0x28]) +
            (longlong)((int)param_2[0x27] * (int)param_2[0x27]) +
            (longlong)((int)param_2[0x26] * (int)param_2[0x26]) +
            (longlong)((int)param_2[0x25] * (int)param_2[0x25]) +
            (longlong)((int)param_2[0x24] * (int)param_2[0x24]) +
            (longlong)((int)param_2[0x23] * (int)param_2[0x23]) +
            (longlong)((int)param_2[0x22] * (int)param_2[0x22]) +
            (longlong)((int)param_2[0x21] * (int)param_2[0x21]) +
            (longlong)((int)param_2[0x20] * (int)param_2[0x20]) +
            (longlong)((int)param_2[0x1f] * (int)param_2[0x1f]) +
            (longlong)((int)param_2[0x1e] * (int)param_2[0x1e]) +
            (longlong)((int)param_2[0x1d] * (int)param_2[0x1d]) +
            (longlong)((int)param_2[0x1c] * (int)param_2[0x1c]) +
            (longlong)((int)param_2[0x1b] * (int)param_2[0x1b]) +
            (longlong)((int)param_2[0x1a] * (int)param_2[0x1a]) +
            (longlong)((int)param_2[0x19] * (int)param_2[0x19]) +
            (longlong)((int)param_2[0x18] * (int)param_2[0x18]) +
            (longlong)((int)param_2[0x17] * (int)param_2[0x17]) +
            (longlong)((int)param_2[0x16] * (int)param_2[0x16]) +
            (longlong)((int)param_2[0x15] * (int)param_2[0x15]) +
            (longlong)((int)param_2[0x14] * (int)param_2[0x14]) +
            (longlong)((int)param_2[0x13] * (int)param_2[0x13]) +
            (longlong)((int)param_2[0x12] * (int)param_2[0x12]) +
            (longlong)((int)param_2[0x11] * (int)param_2[0x11]) +
            (longlong)((int)param_2[0x10] * (int)param_2[0x10]) +
            (longlong)((int)param_2[0xf] * (int)param_2[0xf]) +
            (longlong)((int)param_2[0xe] * (int)param_2[0xe]) +
            (longlong)((int)param_2[0xd] * (int)param_2[0xd]) +
            (longlong)((int)param_2[0xc] * (int)param_2[0xc]) +
            (longlong)((int)param_2[0xb] * (int)param_2[0xb]) +
            (longlong)((int)param_2[10] * (int)param_2[10]) +
            (longlong)((int)param_2[9] * (int)param_2[9]) +
            (longlong)((int)param_2[8] * (int)param_2[8]) +
            (longlong)((int)param_2[7] * (int)param_2[7]) +
            (longlong)((int)param_2[6] * (int)param_2[6]) +
            (longlong)((int)param_2[5] * (int)param_2[5]) +
            (longlong)((int)param_2[4] * (int)param_2[4]) +
            (longlong)((int)param_2[3] * (int)param_2[3]) +
            (longlong)((int)param_2[2] * (int)param_2[2]) +
            (longlong)((int)*param_2 * (int)*param_2) +
            (longlong)((int)param_2[1] * (int)param_2[1]);
    if (param_3 == 4) {
      lVar1 = (longlong)((int)param_2[0x3f] * (int)param_2[0x3f]) +
              (longlong)((int)param_2[0x3e] * (int)param_2[0x3e]) +
              (longlong)((int)param_2[0x3d] * (int)param_2[0x3d]) +
              (longlong)((int)param_2[0x3c] * (int)param_2[0x3c]) +
              (longlong)((int)param_2[0x3b] * (int)param_2[0x3b]) +
              (longlong)((int)param_2[0x3a] * (int)param_2[0x3a]) +
              (longlong)((int)param_2[0x39] * (int)param_2[0x39]) +
              (longlong)((int)param_2[0x38] * (int)param_2[0x38]) +
              (longlong)((int)param_2[0x37] * (int)param_2[0x37]) +
              (longlong)((int)param_2[0x36] * (int)param_2[0x36]) +
              (longlong)((int)param_2[0x35] * (int)param_2[0x35]) +
              (longlong)((int)param_2[0x34] * (int)param_2[0x34]) +
              (longlong)((int)param_2[0x33] * (int)param_2[0x33]) +
              (longlong)((int)param_2[0x32] * (int)param_2[0x32]) +
              (longlong)((int)param_2[0x31] * (int)param_2[0x31]) +
              (int)param_2[0x30] * (int)param_2[0x30] + lVar1;
    }
    psVar4 = param_2 + -(iVar3 + 0x11);
    lVar2 = (longlong)((int)psVar4[0x2f] * (int)psVar4[0x2f]) +
            (longlong)((int)psVar4[0x2e] * (int)psVar4[0x2e]) +
            (longlong)((int)psVar4[0x2d] * (int)psVar4[0x2d]) +
            (longlong)((int)psVar4[0x2c] * (int)psVar4[0x2c]) +
            (longlong)((int)psVar4[0x2b] * (int)psVar4[0x2b]) +
            (longlong)((int)psVar4[0x2a] * (int)psVar4[0x2a]) +
            (longlong)((int)psVar4[0x29] * (int)psVar4[0x29]) +
            (longlong)((int)psVar4[0x28] * (int)psVar4[0x28]) +
            (longlong)((int)psVar4[0x27] * (int)psVar4[0x27]) +
            (longlong)((int)psVar4[0x26] * (int)psVar4[0x26]) +
            (longlong)((int)psVar4[0x25] * (int)psVar4[0x25]) +
            (longlong)((int)psVar4[0x24] * (int)psVar4[0x24]) +
            (longlong)((int)psVar4[0x23] * (int)psVar4[0x23]) +
            (longlong)((int)psVar4[0x22] * (int)psVar4[0x22]) +
            (longlong)((int)psVar4[0x21] * (int)psVar4[0x21]) +
            (longlong)((int)psVar4[0x20] * (int)psVar4[0x20]) +
            (longlong)((int)psVar4[0x1f] * (int)psVar4[0x1f]) +
            (longlong)((int)psVar4[0x1e] * (int)psVar4[0x1e]) +
            (longlong)((int)psVar4[0x1d] * (int)psVar4[0x1d]) +
            (longlong)((int)psVar4[0x1c] * (int)psVar4[0x1c]) +
            (longlong)((int)psVar4[0x1b] * (int)psVar4[0x1b]) +
            (longlong)((int)psVar4[0x1a] * (int)psVar4[0x1a]) +
            (longlong)((int)psVar4[0x19] * (int)psVar4[0x19]) +
            (longlong)((int)psVar4[0x18] * (int)psVar4[0x18]) +
            (longlong)((int)psVar4[0x17] * (int)psVar4[0x17]) +
            (longlong)((int)psVar4[0x16] * (int)psVar4[0x16]) +
            (longlong)((int)psVar4[0x15] * (int)psVar4[0x15]) +
            (longlong)((int)psVar4[0x14] * (int)psVar4[0x14]) +
            (longlong)((int)psVar4[0x13] * (int)psVar4[0x13]) +
            (longlong)((int)psVar4[0x12] * (int)psVar4[0x12]) +
            (longlong)((int)psVar4[0x11] * (int)psVar4[0x11]) +
            (longlong)((int)psVar4[0x10] * (int)psVar4[0x10]) +
            (longlong)((int)psVar4[0xf] * (int)psVar4[0xf]) +
            (longlong)((int)psVar4[0xe] * (int)psVar4[0xe]) +
            (longlong)((int)psVar4[0xd] * (int)psVar4[0xd]) +
            (longlong)((int)psVar4[0xc] * (int)psVar4[0xc]) +
            (longlong)((int)psVar4[0xb] * (int)psVar4[0xb]) +
            (longlong)((int)psVar4[10] * (int)psVar4[10]) +
            (longlong)((int)psVar4[9] * (int)psVar4[9]) +
            (longlong)((int)psVar4[8] * (int)psVar4[8]) +
            (longlong)((int)psVar4[7] * (int)psVar4[7]) +
            (longlong)((int)psVar4[6] * (int)psVar4[6]) +
            (longlong)((int)psVar4[5] * (int)psVar4[5]) +
            (longlong)((int)psVar4[4] * (int)psVar4[4]) +
            (longlong)((int)psVar4[3] * (int)psVar4[3]) +
            (longlong)((int)psVar4[2] * (int)psVar4[2]) +
            (longlong)((int)psVar4[1] * (int)psVar4[1]) + (longlong)((int)*psVar4 * (int)*psVar4);
    if (param_3 == 4) {
      lVar2 = (longlong)((int)psVar4[0x3f] * (int)psVar4[0x3f]) +
              (longlong)((int)psVar4[0x3e] * (int)psVar4[0x3e]) +
              (longlong)((int)psVar4[0x3d] * (int)psVar4[0x3d]) +
              (longlong)((int)psVar4[0x3c] * (int)psVar4[0x3c]) +
              (longlong)((int)psVar4[0x3b] * (int)psVar4[0x3b]) +
              (longlong)((int)psVar4[0x3a] * (int)psVar4[0x3a]) +
              (longlong)((int)psVar4[0x39] * (int)psVar4[0x39]) +
              (longlong)((int)psVar4[0x38] * (int)psVar4[0x38]) +
              (longlong)((int)psVar4[0x37] * (int)psVar4[0x37]) +
              (longlong)((int)psVar4[0x36] * (int)psVar4[0x36]) +
              (longlong)((int)psVar4[0x35] * (int)psVar4[0x35]) +
              (longlong)((int)psVar4[0x34] * (int)psVar4[0x34]) +
              (longlong)((int)psVar4[0x33] * (int)psVar4[0x33]) +
              (longlong)((int)psVar4[0x32] * (int)psVar4[0x32]) +
              (longlong)((int)psVar4[0x31] * (int)psVar4[0x31]) +
              (int)psVar4[0x30] * (int)psVar4[0x30] + lVar2;
    }
    local_1b0[0] = local_1b0[0] /
                   SQRT((float)(longlong)
                               (int)((uint)(lVar2 + 0x20) >> 6 |
                                    (int)((ulonglong)(lVar2 + 0x20) >> 0x20) * 0x4000000) *
                        (float)(longlong)
                               (int)((uint)(lVar1 + 0x20) >> 6 |
                                    (int)((ulonglong)(lVar1 + 0x20) >> 0x20) * 0x4000000));
    fVar11 = local_1b0[0] * 0.85;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  else {
    lVar1 = (longlong)((int)param_2[0x2f] * (int)param_2[0x2f]) +
            (longlong)((int)param_2[0x2e] * (int)param_2[0x2e]) +
            (longlong)((int)param_2[0x2d] * (int)param_2[0x2d]) +
            (longlong)((int)param_2[0x2c] * (int)param_2[0x2c]) +
            (longlong)((int)param_2[0x2b] * (int)param_2[0x2b]) +
            (longlong)((int)param_2[0x2a] * (int)param_2[0x2a]) +
            (longlong)((int)param_2[0x29] * (int)param_2[0x29]) +
            (longlong)((int)param_2[0x28] * (int)param_2[0x28]) +
            (longlong)((int)param_2[0x27] * (int)param_2[0x27]) +
            (longlong)((int)param_2[0x26] * (int)param_2[0x26]) +
            (longlong)((int)param_2[0x25] * (int)param_2[0x25]) +
            (longlong)((int)param_2[0x24] * (int)param_2[0x24]) +
            (longlong)((int)param_2[0x23] * (int)param_2[0x23]) +
            (longlong)((int)param_2[0x22] * (int)param_2[0x22]) +
            (longlong)((int)param_2[0x21] * (int)param_2[0x21]) +
            (longlong)((int)param_2[0x20] * (int)param_2[0x20]) +
            (longlong)((int)param_2[0x1f] * (int)param_2[0x1f]) +
            (longlong)((int)param_2[0x1e] * (int)param_2[0x1e]) +
            (longlong)((int)param_2[0x1d] * (int)param_2[0x1d]) +
            (longlong)((int)param_2[0x1c] * (int)param_2[0x1c]) +
            (longlong)((int)param_2[0x1b] * (int)param_2[0x1b]) +
            (longlong)((int)param_2[0x1a] * (int)param_2[0x1a]) +
            (longlong)((int)param_2[0x19] * (int)param_2[0x19]) +
            (longlong)((int)param_2[0x18] * (int)param_2[0x18]) +
            (longlong)((int)param_2[0x17] * (int)param_2[0x17]) +
            (longlong)((int)param_2[0x16] * (int)param_2[0x16]) +
            (longlong)((int)param_2[0x15] * (int)param_2[0x15]) +
            (longlong)((int)param_2[0x14] * (int)param_2[0x14]) +
            (longlong)((int)param_2[0x13] * (int)param_2[0x13]) +
            (longlong)((int)param_2[0x12] * (int)param_2[0x12]) +
            (longlong)((int)param_2[0x11] * (int)param_2[0x11]) +
            (longlong)((int)param_2[0x10] * (int)param_2[0x10]) +
            (longlong)((int)param_2[0xf] * (int)param_2[0xf]) +
            (longlong)((int)param_2[0xe] * (int)param_2[0xe]) +
            (longlong)((int)param_2[0xd] * (int)param_2[0xd]) +
            (longlong)((int)param_2[0xc] * (int)param_2[0xc]) +
            (longlong)((int)param_2[0xb] * (int)param_2[0xb]) +
            (longlong)((int)param_2[10] * (int)param_2[10]) +
            (longlong)((int)param_2[9] * (int)param_2[9]) +
            (longlong)((int)param_2[8] * (int)param_2[8]) +
            (longlong)((int)param_2[7] * (int)param_2[7]) +
            (longlong)((int)param_2[6] * (int)param_2[6]) +
            (longlong)((int)param_2[5] * (int)param_2[5]) +
            (longlong)((int)param_2[4] * (int)param_2[4]) +
            (longlong)((int)param_2[3] * (int)param_2[3]) +
            (longlong)((int)param_2[2] * (int)param_2[2]) +
            (longlong)((int)param_2[1] * (int)param_2[1]) +
            (longlong)((int)*param_2 * (int)*param_2);
    if (param_3 == 4) {
      lVar1 = (longlong)((int)param_2[0x3f] * (int)param_2[0x3f]) +
              (longlong)((int)param_2[0x3e] * (int)param_2[0x3e]) +
              (longlong)((int)param_2[0x3d] * (int)param_2[0x3d]) +
              (longlong)((int)param_2[0x3c] * (int)param_2[0x3c]) +
              (longlong)((int)param_2[0x3b] * (int)param_2[0x3b]) +
              (longlong)((int)param_2[0x3a] * (int)param_2[0x3a]) +
              (longlong)((int)param_2[0x39] * (int)param_2[0x39]) +
              (longlong)((int)param_2[0x38] * (int)param_2[0x38]) +
              (longlong)((int)param_2[0x37] * (int)param_2[0x37]) +
              (longlong)((int)param_2[0x36] * (int)param_2[0x36]) +
              (longlong)((int)param_2[0x35] * (int)param_2[0x35]) +
              (longlong)((int)param_2[0x34] * (int)param_2[0x34]) +
              (longlong)((int)param_2[0x33] * (int)param_2[0x33]) +
              (longlong)((int)param_2[0x32] * (int)param_2[0x32]) +
              (longlong)((int)param_2[0x31] * (int)param_2[0x31]) +
              (int)param_2[0x30] * (int)param_2[0x30] + lVar1;
    }
    param_2 = param_2 + -local_26c;
    lVar2 = (longlong)((int)param_2[0x2f] * (int)param_2[0x2f]) +
            (longlong)((int)param_2[0x2e] * (int)param_2[0x2e]) +
            (longlong)((int)param_2[0x2d] * (int)param_2[0x2d]) +
            (longlong)((int)param_2[0x2c] * (int)param_2[0x2c]) +
            (longlong)((int)param_2[0x2b] * (int)param_2[0x2b]) +
            (longlong)((int)param_2[0x2a] * (int)param_2[0x2a]) +
            (longlong)((int)param_2[0x29] * (int)param_2[0x29]) +
            (longlong)((int)param_2[0x28] * (int)param_2[0x28]) +
            (longlong)((int)param_2[0x27] * (int)param_2[0x27]) +
            (longlong)((int)param_2[0x26] * (int)param_2[0x26]) +
            (longlong)((int)param_2[0x25] * (int)param_2[0x25]) +
            (longlong)((int)param_2[0x24] * (int)param_2[0x24]) +
            (longlong)((int)param_2[0x23] * (int)param_2[0x23]) +
            (longlong)((int)param_2[0x22] * (int)param_2[0x22]) +
            (longlong)((int)param_2[0x21] * (int)param_2[0x21]) +
            (longlong)((int)param_2[0x20] * (int)param_2[0x20]) +
            (longlong)((int)param_2[0x1f] * (int)param_2[0x1f]) +
            (longlong)((int)param_2[0x1e] * (int)param_2[0x1e]) +
            (longlong)((int)param_2[0x1d] * (int)param_2[0x1d]) +
            (longlong)((int)param_2[0x1c] * (int)param_2[0x1c]) +
            (longlong)((int)param_2[0x1b] * (int)param_2[0x1b]) +
            (longlong)((int)param_2[0x1a] * (int)param_2[0x1a]) +
            (longlong)((int)param_2[0x19] * (int)param_2[0x19]) +
            (longlong)((int)param_2[0x18] * (int)param_2[0x18]) +
            (longlong)((int)param_2[0x17] * (int)param_2[0x17]) +
            (longlong)((int)param_2[0x16] * (int)param_2[0x16]) +
            (longlong)((int)param_2[0x15] * (int)param_2[0x15]) +
            (longlong)((int)param_2[0x14] * (int)param_2[0x14]) +
            (longlong)((int)param_2[0x13] * (int)param_2[0x13]) +
            (longlong)((int)param_2[0x12] * (int)param_2[0x12]) +
            (longlong)((int)param_2[0x11] * (int)param_2[0x11]) +
            (longlong)((int)param_2[0x10] * (int)param_2[0x10]) +
            (longlong)((int)param_2[0xf] * (int)param_2[0xf]) +
            (longlong)((int)param_2[0xe] * (int)param_2[0xe]) +
            (longlong)((int)param_2[0xd] * (int)param_2[0xd]) +
            (longlong)((int)param_2[0xc] * (int)param_2[0xc]) +
            (longlong)((int)param_2[0xb] * (int)param_2[0xb]) +
            (longlong)((int)param_2[10] * (int)param_2[10]) +
            (longlong)((int)param_2[9] * (int)param_2[9]) +
            (longlong)((int)param_2[8] * (int)param_2[8]) +
            (longlong)((int)param_2[7] * (int)param_2[7]) +
            (longlong)((int)param_2[6] * (int)param_2[6]) +
            (longlong)((int)param_2[5] * (int)param_2[5]) +
            (longlong)((int)param_2[4] * (int)param_2[4]) +
            (longlong)((int)param_2[3] * (int)param_2[3]) +
            (longlong)((int)param_2[2] * (int)param_2[2]) +
            (longlong)((int)*param_2 * (int)*param_2) +
            (longlong)((int)param_2[1] * (int)param_2[1]);
    if (param_3 == 4) {
      lVar2 = (longlong)((int)param_2[0x3f] * (int)param_2[0x3f]) +
              (longlong)((int)param_2[0x3e] * (int)param_2[0x3e]) +
              (longlong)((int)param_2[0x3d] * (int)param_2[0x3d]) +
              (longlong)((int)param_2[0x3c] * (int)param_2[0x3c]) +
              (longlong)((int)param_2[0x3b] * (int)param_2[0x3b]) +
              (longlong)((int)param_2[0x3a] * (int)param_2[0x3a]) +
              (longlong)((int)param_2[0x39] * (int)param_2[0x39]) +
              (longlong)((int)param_2[0x38] * (int)param_2[0x38]) +
              (longlong)((int)param_2[0x37] * (int)param_2[0x37]) +
              (longlong)((int)param_2[0x36] * (int)param_2[0x36]) +
              (longlong)((int)param_2[0x35] * (int)param_2[0x35]) +
              (longlong)((int)param_2[0x34] * (int)param_2[0x34]) +
              (longlong)((int)param_2[0x33] * (int)param_2[0x33]) +
              (longlong)((int)param_2[0x32] * (int)param_2[0x32]) +
              (longlong)((int)param_2[0x31] * (int)param_2[0x31]) +
              (int)param_2[0x30] * (int)param_2[0x30] + lVar2;
    }
    fVar12 = fVar12 / SQRT((float)(longlong)
                                  (int)((uint)(lVar2 + 0x20) >> 6 |
                                       (int)((ulonglong)(lVar2 + 0x20) >> 0x20) * 0x4000000) *
                           (float)(longlong)
                                  (int)((uint)(lVar1 + 0x20) >> 6 |
                                       (int)((ulonglong)(lVar1 + 0x20) >> 0x20) * 0x4000000));
  }
  if (fVar12 <= fVar11) {
    iVar9 = iVar3;
    local_26c = iVar3 + 0x11;
    fVar12 = local_1b0[0];
  }
  *(int *)(param_1 + 0x484) = iVar9;
  *param_4 = local_26c;
  return 0.6 < fVar12;
}


