/*
 * Function: FUN_0006954c
 * Entry:    0006954c
 * Prototype: undefined FUN_0006954c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_0006954c(int param_1,short *param_2,int param_3,float *param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  short *psVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  short *psVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  
  param_3 = param_3 >> 4;
  psVar30 = param_2;
  pfVar33 = param_4;
  if (((uint)param_2 & 3) != 0) {
    lVar24 = 0;
    psVar30 = param_2 + -1;
    pfVar33 = param_4 + 1;
    psVar25 = param_2 + 0x10;
    iVar29 = param_1 + 0x20;
    do {
      iVar27 = iVar29 + 0x20;
      lVar24 = (longlong)((int)*(short *)(iVar29 + -2) * (int)psVar25[-1]) +
               (longlong)((int)*(short *)(iVar29 + -4) * (int)psVar25[-2]) +
               (longlong)((int)*(short *)(iVar29 + -6) * (int)psVar25[-3]) +
               (longlong)((int)*(short *)(iVar29 + -8) * (int)psVar25[-4]) +
               (longlong)((int)*(short *)(iVar29 + -10) * (int)psVar25[-5]) +
               (longlong)((int)*(short *)(iVar29 + -0xc) * (int)psVar25[-6]) +
               (longlong)((int)*(short *)(iVar29 + -0xe) * (int)psVar25[-7]) +
               (longlong)((int)*(short *)(iVar29 + -0x10) * (int)psVar25[-8]) +
               (longlong)((int)*(short *)(iVar29 + -0x12) * (int)psVar25[-9]) +
               (longlong)((int)*(short *)(iVar29 + -0x14) * (int)psVar25[-10]) +
               (longlong)((int)*(short *)(iVar29 + -0x16) * (int)psVar25[-0xb]) +
               (longlong)((int)*(short *)(iVar29 + -0x18) * (int)psVar25[-0xc]) +
               (longlong)((int)*(short *)(iVar29 + -0x1a) * (int)psVar25[-0xd]) +
               (longlong)((int)*(short *)(iVar29 + -0x1c) * (int)psVar25[-0xe]) +
               (longlong)((int)*(short *)(iVar29 + -0x1e) * (int)psVar25[-0xf]) +
               (int)*(short *)(iVar29 + -0x20) * (int)psVar25[-0x10] + lVar24;
      psVar25 = psVar25 + 0x10;
      iVar29 = iVar27;
    } while (param_1 + 0x20 + param_3 * 0x20 != iVar27);
    *param_4 = (float)(longlong)
                      (int)((uint)(lVar24 + 0x20) >> 6 |
                           (int)((ulonglong)(lVar24 + 0x20) >> 0x20) * 0x4000000);
    param_5 = param_5 + -1;
  }
  if (1 < param_5) {
    uVar26 = param_5 - 2U >> 1;
    pfVar31 = pfVar33 + 2;
    psVar25 = psVar30;
    do {
      lVar23 = 0;
      iVar27 = (int)psVar25[-1] << 0x10;
      lVar24 = 0;
      iVar29 = param_1 + 0x20;
      psVar1 = psVar25;
      do {
        sVar17 = (short)((uint)*(undefined4 *)psVar1 >> 0x10);
        sVar16 = (short)*(undefined4 *)psVar1;
        sVar18 = (short)*(undefined4 *)(iVar29 + -0x20);
        sVar19 = (short)((uint)*(undefined4 *)(iVar29 + -0x20) >> 0x10);
        uVar21 = (longlong)((int)sVar18 * (int)sVar16) + (longlong)((int)sVar19 * (int)sVar17) +
                 lVar24;
        uVar22 = (longlong)((int)sVar18 * (int)(short)((uint)iVar27 >> 0x10)) +
                 (longlong)((int)sVar19 * (int)sVar16) + lVar23;
        iVar28 = iVar29 + 0x20;
        sVar16 = (short)*(undefined4 *)(psVar1 + 2);
        sVar18 = (short)*(undefined4 *)(iVar29 + -0x1c);
        sVar19 = (short)((uint)*(undefined4 *)(iVar29 + -0x1c) >> 0x10);
        uVar22 = (longlong)((int)sVar18 * (int)sVar17) + (longlong)((int)sVar19 * (int)sVar16) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        sVar17 = (short)((uint)*(undefined4 *)(psVar1 + 2) >> 0x10);
        uVar21 = (longlong)((int)sVar18 * (int)sVar16) + (longlong)((int)sVar19 * (int)sVar17) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        sVar18 = (short)((uint)*(undefined4 *)(psVar1 + 4) >> 0x10);
        sVar16 = (short)*(undefined4 *)(psVar1 + 4);
        sVar19 = (short)*(undefined4 *)(iVar29 + -0x18);
        sVar20 = (short)((uint)*(undefined4 *)(iVar29 + -0x18) >> 0x10);
        uVar21 = (longlong)((int)sVar19 * (int)sVar16) + (longlong)((int)sVar20 * (int)sVar18) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        uVar22 = (longlong)((int)sVar19 * (int)sVar17) + (longlong)((int)sVar20 * (int)sVar16) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        sVar16 = (short)*(undefined4 *)(psVar1 + 6);
        sVar19 = (short)*(undefined4 *)(iVar29 + -0x14);
        sVar20 = (short)((uint)*(undefined4 *)(iVar29 + -0x14) >> 0x10);
        uVar22 = (longlong)((int)sVar19 * (int)sVar18) + (longlong)((int)sVar20 * (int)sVar16) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        sVar17 = (short)((uint)*(undefined4 *)(psVar1 + 6) >> 0x10);
        uVar21 = (longlong)((int)sVar19 * (int)sVar16) + (longlong)((int)sVar20 * (int)sVar17) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        sVar18 = (short)((uint)*(undefined4 *)(psVar1 + 8) >> 0x10);
        sVar16 = (short)*(undefined4 *)(psVar1 + 8);
        sVar19 = (short)*(undefined4 *)(iVar29 + -0x10);
        sVar20 = (short)((uint)*(undefined4 *)(iVar29 + -0x10) >> 0x10);
        uVar21 = (longlong)((int)sVar19 * (int)sVar16) + (longlong)((int)sVar20 * (int)sVar18) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        uVar22 = (longlong)((int)sVar19 * (int)sVar17) + (longlong)((int)sVar20 * (int)sVar16) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        sVar16 = (short)*(undefined4 *)(psVar1 + 10);
        sVar19 = (short)*(undefined4 *)(iVar29 + -0xc);
        sVar20 = (short)((uint)*(undefined4 *)(iVar29 + -0xc) >> 0x10);
        uVar22 = (longlong)((int)sVar19 * (int)sVar18) + (longlong)((int)sVar20 * (int)sVar16) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        sVar17 = (short)((uint)*(undefined4 *)(psVar1 + 10) >> 0x10);
        uVar21 = (longlong)((int)sVar19 * (int)sVar16) + (longlong)((int)sVar20 * (int)sVar17) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        sVar18 = (short)((uint)*(undefined4 *)(psVar1 + 0xc) >> 0x10);
        sVar16 = (short)*(undefined4 *)(psVar1 + 0xc);
        sVar19 = (short)*(undefined4 *)(iVar29 + -8);
        sVar20 = (short)((uint)*(undefined4 *)(iVar29 + -8) >> 0x10);
        uVar21 = (longlong)((int)sVar19 * (int)sVar16) + (longlong)((int)sVar20 * (int)sVar18) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        uVar22 = (longlong)((int)sVar19 * (int)sVar17) + (longlong)((int)sVar20 * (int)sVar16) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        iVar27 = *(int *)(psVar1 + 0xe);
        sVar16 = (short)*(undefined4 *)(iVar29 + -4);
        sVar17 = (short)((uint)*(undefined4 *)(iVar29 + -4) >> 0x10);
        lVar24 = (longlong)((int)sVar16 * (int)(short)iVar27) +
                 (longlong)((int)sVar17 * (int)(short)((uint)iVar27 >> 0x10)) +
                 ((longlong)(int)(uVar21 >> 0x20) << 0x20 | uVar21 & 0xffffffff);
        lVar23 = (longlong)((int)sVar16 * (int)sVar18) +
                 (longlong)((int)sVar17 * (int)(short)iVar27) +
                 ((longlong)(int)(uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff);
        iVar29 = iVar28;
        psVar1 = psVar1 + 0x10;
      } while (param_1 + 0x20 + param_3 * 0x20 != iVar28);
      pfVar32 = pfVar31 + 2;
      pfVar31[-2] = (float)(longlong)
                           (int)((uint)(lVar24 + 0x20) >> 6 |
                                (int)((ulonglong)(lVar24 + 0x20) >> 0x20) * 0x4000000);
      pfVar31[-1] = (float)(longlong)
                           (int)((uint)(lVar23 + 0x20) >> 6 |
                                (int)((ulonglong)(lVar23 + 0x20) >> 0x20) * 0x4000000);
      pfVar31 = pfVar32;
      psVar25 = psVar25 + -2;
    } while (pfVar33 + uVar26 * 2 + 4 != pfVar32);
    pfVar33 = pfVar33 + (uVar26 + 1) * 2;
    param_5 = (param_5 - 2U) + uVar26 * -2;
    psVar30 = psVar30 + (uVar26 + 1) * -2;
  }
  if (param_5 != 1) {
    return;
  }
  lVar24 = 0;
  param_1 = param_1 + 0x20;
  iVar29 = param_1 + param_3 * 0x20;
  do {
    psVar25 = (short *)(param_1 + -0x20);
    psVar1 = (short *)(param_1 + -0x1e);
    psVar2 = (short *)(param_1 + -0x1c);
    psVar3 = (short *)(param_1 + -0x1a);
    psVar4 = (short *)(param_1 + -0x18);
    psVar5 = (short *)(param_1 + -0x16);
    psVar6 = (short *)(param_1 + -0x14);
    psVar7 = (short *)(param_1 + -0x12);
    psVar8 = (short *)(param_1 + -0x10);
    psVar9 = (short *)(param_1 + -0xe);
    psVar10 = (short *)(param_1 + -0xc);
    psVar11 = (short *)(param_1 + -10);
    psVar12 = (short *)(param_1 + -8);
    psVar13 = (short *)(param_1 + -6);
    psVar14 = (short *)(param_1 + -4);
    psVar15 = (short *)(param_1 + -2);
    param_1 = param_1 + 0x20;
    lVar24 = (longlong)((int)*psVar15 * (int)psVar30[0xf]) +
             (longlong)((int)*psVar14 * (int)psVar30[0xe]) +
             (longlong)((int)*psVar13 * (int)psVar30[0xd]) +
             (longlong)((int)*psVar12 * (int)psVar30[0xc]) +
             (longlong)((int)*psVar11 * (int)psVar30[0xb]) +
             (longlong)((int)*psVar10 * (int)psVar30[10]) +
             (longlong)((int)*psVar9 * (int)psVar30[9]) +
             (longlong)((int)*psVar8 * (int)psVar30[8]) +
             (longlong)((int)*psVar7 * (int)psVar30[7]) +
             (longlong)((int)*psVar6 * (int)psVar30[6]) +
             (longlong)((int)*psVar5 * (int)psVar30[5]) +
             (longlong)((int)*psVar4 * (int)psVar30[4]) +
             (longlong)((int)*psVar3 * (int)psVar30[3]) +
             (longlong)((int)*psVar2 * (int)psVar30[2]) +
             (longlong)((int)*psVar1 * (int)psVar30[1]) + (int)*psVar25 * (int)*psVar30 + lVar24;
    psVar30 = psVar30 + 0x10;
  } while (iVar29 != param_1);
  *pfVar33 = (float)(longlong)
                    (int)((uint)(lVar24 + 0x20) >> 6 |
                         (int)((ulonglong)(lVar24 + 0x20) >> 0x20) * 0x4000000);
  return;
}


