/*
 * Function: process_audio_and_detect_voice_activity
 * Entry:    0006ab80
 * Prototype: undefined process_audio_and_detect_voice_activity(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


/* WARNING: Type propagation algorithm not settling */

int process_audio_and_detect_voice_activity
              (int param_1,int param_2,char *param_3,undefined4 param_4,char *param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  short *psVar11;
  undefined4 uVar12;
  float fVar13;
  char cVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
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
  int aiStack_98 [2];
  undefined1 auStack_90 [4];
  undefined1 *local_8c;
  int local_88;
  undefined1 *local_84;
  float local_80;
  float local_7c [3];
  float afStack_70 [17];
  
  local_88 = param_1;
  if (param_1 == 0) {
    copy_memory_safe(param_3 + 0x20,param_3 + 0xe0,0x240);
    pcVar20 = param_3 + 0x260;
    (*(code *)(&PTR_calculate_audio_correlation_alt_with_scaling_1_0008c938)[param_2])
              (param_3 + 0x10,param_4,pcVar20,0x60);
    local_7c[0] = 6.72623e-44;
    iVar8 = 0x60;
    local_84 = (undefined1 *)0xc0;
    iVar19 = 6;
    iVar17 = 0x104;
    iVar15 = -0x58;
    local_80 = 1.34525e-43;
  }
  else {
    copy_memory_safe(param_3 + 0x20,param_3 + 0x120,0x200);
    pcVar20 = param_3 + 0x220;
    (*(code *)(&PTR_calculate_audio_correlation_alt_with_scaling_1_0008c938)[param_2])
              (param_3 + 0x10,param_4,pcVar20,0x80);
    iVar8 = 0x80;
    local_7c[0] = 8.96831e-44;
    iVar19 = 8;
    local_84 = (undefined1 *)0x100;
    iVar17 = 0xe4;
    iVar15 = -0x30;
    local_80 = 1.79366e-43;
  }
  pcVar20 = pcVar20 + iVar15;
  iVar8 = copy_memory_safe(param_3 + 800,param_3 + 800 + iVar8,iVar17);
  psVar11 = (short *)(pcVar20 + -2);
  for (pcVar18 = (char *)(iVar8 + iVar17); pcVar18 < param_3 + 0x484; pcVar18 = pcVar18 + 2) {
    psVar1 = psVar11 + 1;
    psVar2 = psVar11 + -1;
    sVar4 = *psVar11;
    psVar3 = psVar11 + -2;
    psVar11 = psVar11 + 2;
    *(short *)pcVar18 =
         (short)((uint)(((int)*psVar3 + (int)*psVar11) * 0x1fa9 +
                       sVar4 * 0x482d + ((int)*psVar2 + (int)*psVar1) * 0x3c40) >> 0x10);
  }
  iVar8 = analyze_audio_correlation_and_similarity
                    (param_3,(char *)(iVar8 + iVar17),local_7c[0],local_7c + 1);
  fVar33 = local_80;
  if (iVar8 == 0) {
    if (*param_3 == '\0') {
      fVar33 = 0.0;
      cVar14 = '\0';
      uVar21 = 0;
    }
    else {
      fVar33 = 0.0;
      cVar14 = '\0';
      uVar21 = 0;
    }
    goto LAB_0006ac4e;
  }
  iVar15 = ((int)local_7c[1] + -2) * 2;
  local_7c[0] = (float)iVar15;
  if (iVar15 < 0x20) {
    local_7c[0] = 4.48416e-44;
  }
  iVar22 = iVar15 + 8;
  iVar17 = (int)local_7c[0];
  if (iVar22 < 0xe5) {
    iVar17 = iVar22 - (int)local_7c[0];
  }
  if (iVar22 != 0xe4 && iVar15 + -0xdc < 0 == SBORROW4(iVar22,0xe4)) {
    iVar17 = 0xe4 - iVar17;
  }
  iVar15 = -(int)local_84;
  iVar22 = (int)local_84 * -2;
  iVar9 = 4 - (int)local_7c[0];
  local_8c = auStack_90 + iVar22;
  local_84 = (undefined1 *)aiStack_98;
  *(int *)((int)aiStack_98 + iVar22) = iVar17 + 9;
  process_audio_data_with_complex_filtering(pcVar20,pcVar20 + iVar9 * 2,fVar33,local_7c + 2);
  fVar33 = local_80;
  if (iVar17 < 1) {
    iVar17 = 0x10;
  }
  else {
    iVar22 = 0;
    iVar9 = 1;
    pfVar10 = afStack_70 + 4;
    do {
      fVar31 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      if (afStack_70[3] < fVar31) {
        iVar22 = iVar9;
      }
      iVar9 = iVar9 + 1;
      afStack_70[3] =
           (float)((uint)(afStack_70[3] < fVar31) * (int)fVar31 +
                  (uint)(fVar31 <= afStack_70[3]) * (int)afStack_70[3]);
    } while (iVar17 + 1 != iVar9);
    local_7c[0] = (float)((int)local_7c[0] + iVar22);
    iVar17 = (iVar22 + 4) * 4;
  }
  fVar26 = *(float *)((int)local_7c + iVar17);
  fVar25 = *(float *)((int)&local_80 + iVar17);
  fVar27 = *(float *)((int)local_7c + iVar17 + 4U);
  fVar31 = *(float *)((int)afStack_70 + iVar17 + -4);
  fVar28 = *(float *)((int)afStack_70 + iVar17);
  fVar29 = *(float *)((int)afStack_70 + iVar17 + 4);
  fVar30 = *(float *)((int)afStack_70 + iVar17 + 8);
  fVar32 = fVar26 * -0.047296323 + fVar25 * 0.015357277 + fVar27 * 0.083578855 + fVar31 * 0.8986383
           + fVar28 * 0.083578855 + fVar29 * -0.047296323 + fVar30 * 0.015357277;
  if ((int)local_7c[0] < 0x7f) {
    fVar24 = *(float *)((int)afStack_70 + iVar17 + 0xc);
    fVar34 = fVar25 * 0.0027454717 + fVar24 * -0.0028745611 + fVar26 * 0.0045983344 +
             fVar27 * -0.07544047 + fVar31 * 0.8174887 + fVar28 * 0.33018258 + fVar29 * -0.105835915
             + fVar30 * 0.02868234;
    iVar22 = (uint)(fVar32 < fVar34) << 0x1f;
    fVar13 = local_7c[0];
    if (-1 < iVar22) {
      fVar13 = 0.0;
      fVar34 = fVar32;
    }
    if (iVar22 < 0) {
      fVar13 = 1.4013e-45;
    }
    if ((local_7c[0] != 4.48416e-44) &&
       (fVar32 = fVar31 * 0.8174887 + *(float *)((int)&local_84 + iVar17) * -0.0028745611 +
                 fVar25 * 0.02868234 + fVar26 * -0.105835915 + fVar27 * 0.33018258 +
                 fVar28 * -0.07544047 + fVar29 * 0.0045983344 + fVar30 * 0.0027454717,
       fVar34 < fVar32)) {
      fVar13 = -NAN;
      fVar34 = fVar32;
    }
LAB_0006b168:
    fVar32 = (fVar25 + fVar24) * -0.003001251 + fVar26 * 0.02950385 + fVar27 * -0.13030502 +
             fVar31 * 0.603297 + fVar28 * 0.603297 + fVar29 * -0.13030502 + fVar30 * 0.02950385;
    iVar22 = (uint)(fVar34 < fVar32) << 0x1f;
    if (-1 < iVar22) {
      fVar32 = fVar34;
    }
    if (iVar22 < 0) {
      fVar13 = 2.8026e-45;
    }
    if (local_7c[0] == 4.48416e-44) {
LAB_0006b21c:
      fVar34 = fVar25 * -0.0028745611 + fVar24 * 0.0027454717 + fVar26 * 0.02868234 +
               fVar27 * -0.105835915 + fVar31 * 0.33018258 + fVar28 * 0.8174887 +
               fVar29 * -0.07544047 + fVar30 * 0.0045983344;
      iVar22 = (uint)(fVar32 < fVar34) << 0x1f;
      if (-1 < iVar22) {
        fVar34 = fVar32;
      }
      if (iVar22 < 0) {
        fVar13 = 4.2039e-45;
      }
      if ((local_7c[0] != 4.48416e-44) &&
         ((int)((uint)(fVar34 < fVar31 * 0.33018258 +
                                *(float *)((int)&local_84 + iVar17) * 0.0027454717 +
                                fVar25 * 0.0045983344 + fVar26 * -0.07544047 + fVar27 * 0.8174887 +
                                fVar28 * -0.105835915 + fVar29 * 0.02868234 + fVar30 * -0.0028745611
                      ) << 0x1f) < 0)) {
        fVar13 = -NAN;
      }
    }
    else {
      fVar34 = fVar31 * 0.603297 + *(float *)((int)&local_84 + iVar17) * -0.003001251 +
               fVar25 * 0.02950385 + fVar26 * -0.13030502 + fVar27 * 0.603297 + fVar28 * -0.13030502
               + fVar29 * 0.02950385 + fVar30 * -0.003001251;
      if (fVar32 < fVar34) {
        fVar13 = -NAN;
        fVar32 = fVar34;
      }
      if ((int)local_7c[0] < 0x7f) goto LAB_0006b21c;
    }
    local_7c[0] = (float)((int)local_7c[0] + ((int)fVar13 >> 0x1f));
    iVar17 = ((int)fVar13 >> 0x1d & 4U) + (int)fVar13;
    uVar21 = iVar17 + (int)local_7c[0] * 4;
    if ((int)local_7c[0] < 0x7f) {
      iVar17 = uVar21 - 0x80;
    }
    else {
      if (0x9c < (int)local_7c[0]) goto LAB_0006adce;
      iVar17 = (iVar17 >> 1) + (int)local_7c[0] * 2 + 0x7e;
    }
  }
  else {
    if ((int)local_7c[0] < 0x9d) {
      fVar24 = *(float *)((int)afStack_70 + iVar17 + 0xc);
      fVar13 = 0.0;
      fVar34 = fVar32;
      goto LAB_0006b168;
    }
    uVar21 = (int)local_7c[0] << 2;
LAB_0006adce:
    iVar17 = (int)local_7c[0] + 0x11b;
  }
  *(int *)(param_5 + 4) = iVar17;
  process_audio_data_with_filtering(pcVar20,local_80,0,auStack_90 + iVar15);
  puVar16 = local_8c;
  process_audio_data_with_filtering(pcVar20 + ((int)uVar21 >> 2) * -2,fVar33,uVar21 & 3,local_8c);
  iVar15 = (int)afStack_70 + iVar15;
  iVar22 = 0;
  lVar5 = 0;
  iVar17 = iVar15;
  puVar23 = puVar16 + 0x20;
  do {
    iVar22 = iVar22 + 1;
    lVar5 = (longlong)((int)*(short *)(iVar17 + -2) * (int)*(short *)(puVar23 + -2)) +
            (longlong)((int)*(short *)(iVar17 + -4) * (int)*(short *)(puVar23 + -4)) +
            (longlong)((int)*(short *)(iVar17 + -6) * (int)*(short *)(puVar23 + -6)) +
            (longlong)((int)*(short *)(iVar17 + -8) * (int)*(short *)(puVar23 + -8)) +
            (longlong)((int)*(short *)(iVar17 + -10) * (int)*(short *)(puVar23 + -10)) +
            (longlong)((int)*(short *)(iVar17 + -0xc) * (int)*(short *)(puVar23 + -0xc)) +
            (longlong)((int)*(short *)(iVar17 + -0xe) * (int)*(short *)(puVar23 + -0xe)) +
            (longlong)((int)*(short *)(iVar17 + -0x10) * (int)*(short *)(puVar23 + -0x10)) +
            (longlong)((int)*(short *)(iVar17 + -0x12) * (int)*(short *)(puVar23 + -0x12)) +
            (longlong)((int)*(short *)(iVar17 + -0x14) * (int)*(short *)(puVar23 + -0x14)) +
            (longlong)((int)*(short *)(iVar17 + -0x16) * (int)*(short *)(puVar23 + -0x16)) +
            (longlong)((int)*(short *)(iVar17 + -0x18) * (int)*(short *)(puVar23 + -0x18)) +
            (longlong)((int)*(short *)(iVar17 + -0x1a) * (int)*(short *)(puVar23 + -0x1a)) +
            (longlong)((int)*(short *)(iVar17 + -0x1c) * (int)*(short *)(puVar23 + -0x1c)) +
            (longlong)((int)*(short *)(iVar17 + -0x1e) * (int)*(short *)(puVar23 + -0x1e)) +
            (int)*(short *)(iVar17 + -0x20) * (int)*(short *)(puVar23 + -0x20) + lVar5;
    iVar17 = iVar17 + 0x20;
    puVar23 = puVar23 + 0x20;
  } while (iVar22 < iVar19);
  iVar17 = 0;
  lVar6 = 0;
  do {
    iVar17 = iVar17 + 1;
    lVar6 = (longlong)((int)*(short *)(iVar15 + -2) * (int)*(short *)(iVar15 + -2)) +
            (longlong)((int)*(short *)(iVar15 + -4) * (int)*(short *)(iVar15 + -4)) +
            (longlong)((int)*(short *)(iVar15 + -6) * (int)*(short *)(iVar15 + -6)) +
            (longlong)((int)*(short *)(iVar15 + -8) * (int)*(short *)(iVar15 + -8)) +
            (longlong)((int)*(short *)(iVar15 + -10) * (int)*(short *)(iVar15 + -10)) +
            (longlong)((int)*(short *)(iVar15 + -0xc) * (int)*(short *)(iVar15 + -0xc)) +
            (longlong)((int)*(short *)(iVar15 + -0xe) * (int)*(short *)(iVar15 + -0xe)) +
            (longlong)((int)*(short *)(iVar15 + -0x10) * (int)*(short *)(iVar15 + -0x10)) +
            (longlong)((int)*(short *)(iVar15 + -0x12) * (int)*(short *)(iVar15 + -0x12)) +
            (longlong)((int)*(short *)(iVar15 + -0x14) * (int)*(short *)(iVar15 + -0x14)) +
            (longlong)((int)*(short *)(iVar15 + -0x16) * (int)*(short *)(iVar15 + -0x16)) +
            (longlong)((int)*(short *)(iVar15 + -0x18) * (int)*(short *)(iVar15 + -0x18)) +
            (longlong)((int)*(short *)(iVar15 + -0x1a) * (int)*(short *)(iVar15 + -0x1a)) +
            (longlong)((int)*(short *)(iVar15 + -0x1c) * (int)*(short *)(iVar15 + -0x1c)) +
            (longlong)((int)*(short *)(iVar15 + -0x1e) * (int)*(short *)(iVar15 + -0x1e)) +
            (int)*(short *)(iVar15 + -0x20) * (int)*(short *)(iVar15 + -0x20) + lVar6;
    iVar15 = iVar15 + 0x20;
  } while (iVar17 < iVar19);
  iVar15 = 0;
  lVar7 = 0;
  puVar16 = puVar16 + 0x20;
  do {
    iVar15 = iVar15 + 1;
    lVar7 = (longlong)((int)*(short *)(puVar16 + -2) * (int)*(short *)(puVar16 + -2)) +
            (longlong)((int)*(short *)(puVar16 + -4) * (int)*(short *)(puVar16 + -4)) +
            (longlong)((int)*(short *)(puVar16 + -6) * (int)*(short *)(puVar16 + -6)) +
            (longlong)((int)*(short *)(puVar16 + -8) * (int)*(short *)(puVar16 + -8)) +
            (longlong)((int)*(short *)(puVar16 + -10) * (int)*(short *)(puVar16 + -10)) +
            (longlong)((int)*(short *)(puVar16 + -0xc) * (int)*(short *)(puVar16 + -0xc)) +
            (longlong)((int)*(short *)(puVar16 + -0xe) * (int)*(short *)(puVar16 + -0xe)) +
            (longlong)((int)*(short *)(puVar16 + -0x10) * (int)*(short *)(puVar16 + -0x10)) +
            (longlong)((int)*(short *)(puVar16 + -0x12) * (int)*(short *)(puVar16 + -0x12)) +
            (longlong)((int)*(short *)(puVar16 + -0x14) * (int)*(short *)(puVar16 + -0x14)) +
            (longlong)((int)*(short *)(puVar16 + -0x16) * (int)*(short *)(puVar16 + -0x16)) +
            (longlong)((int)*(short *)(puVar16 + -0x18) * (int)*(short *)(puVar16 + -0x18)) +
            (longlong)((int)*(short *)(puVar16 + -0x1a) * (int)*(short *)(puVar16 + -0x1a)) +
            (longlong)((int)*(short *)(puVar16 + -0x1c) * (int)*(short *)(puVar16 + -0x1c)) +
            (longlong)((int)*(short *)(puVar16 + -0x1e) * (int)*(short *)(puVar16 + -0x1e)) +
            (int)*(short *)(puVar16 + -0x20) * (int)*(short *)(puVar16 + -0x20) + lVar7;
    puVar16 = puVar16 + 0x20;
  } while (iVar15 < iVar19);
  cVar14 = *param_3;
  fVar33 = (float)(longlong)
                  (int)((uint)(lVar5 + 0x20) >> 6 |
                       (int)((ulonglong)(lVar5 + 0x20) >> 0x20) * 0x4000000) /
           SQRT((float)(longlong)
                       (int)((uint)(lVar7 + 0x20) >> 6 |
                            (int)((ulonglong)(lVar7 + 0x20) >> 0x20) * 0x4000000) *
                (float)(longlong)
                       (int)((uint)(lVar6 + 0x20) >> 6 |
                            (int)((ulonglong)(lVar6 + 0x20) >> 0x20) * 0x4000000));
  if (cVar14 == '\0') {
    if (((local_88 == 1) || (0.94 < *(float *)(param_3 + 0xc))) && (0.94 < *(float *)(param_3 + 8)))
    {
      cVar14 = 0.94 < fVar33;
    }
  }
  else if (fVar33 <= 0.9) {
    if (0.84 < fVar33) {
      iVar15 = *(int *)(param_3 + 4);
      if (iVar15 < (int)uVar21) {
        iVar15 = uVar21 - iVar15;
      }
      else {
        iVar15 = iVar15 - uVar21;
      }
      if (iVar15 < 8) {
        cVar14 = -0.1 < fVar33 - *(float *)(param_3 + 8);
        goto LAB_0006ac4e;
      }
    }
    cVar14 = '\0';
  }
LAB_0006ac4e:
  *param_5 = cVar14;
  uVar12 = *(undefined4 *)(param_3 + 8);
  *param_3 = cVar14;
  *(float *)(param_3 + 8) = fVar33;
  *(uint *)(param_3 + 4) = uVar21;
  *(undefined4 *)(param_3 + 0xc) = uVar12;
  return iVar8;
}


