/*
 * Function: FUN_0006ffd8
 * Entry:    0006ffd8
 * Prototype: undefined FUN_0006ffd8(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


void FUN_0006ffd8(int param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  undefined1 uVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  undefined **ppuVar23;
  uint *puVar24;
  int *piVar25;
  float *pfVar26;
  float *pfVar27;
  int *piVar28;
  uint *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined *puVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_154 [10];
  float local_12c;
  float local_128;
  float local_124;
  undefined *local_11c [4];
  undefined *local_10c;
  undefined *local_108;
  undefined *puStack_104;
  undefined *local_100;
  undefined *local_fc;
  undefined *local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4 [18];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float *pfVar17;
  
  if (2 < param_2) {
    iVar20 = 2;
  }
  else {
    iVar20 = 1;
  }
  if (param_1 == 0) {
    iVar9 = 0x2d;
  }
  else {
    iVar9 = 0x3c;
  }
  iVar15 = param_4;
  if (iVar9 <= param_4) {
    iVar15 = 0;
  }
  uVar14 = (undefined1)iVar15;
  if (param_4 < iVar9) {
    uVar14 = 1;
  }
  *(undefined1 *)(param_5 + 1) = uVar14;
  *param_5 = iVar20;
  local_11c[0] = &DAT_00098584;
  local_11c[1] = &DAT_00098594;
  local_11c[2] = &DAT_000985a4;
  local_11c[3] = &DAT_000985b4;
  local_10c = &DAT_000985d0;
  local_108 = &DAT_000985ec;
  puStack_104 = &DAT_000985fc;
  local_100 = &DAT_0009860c;
  pfVar18 = local_e4;
  local_fc = &DAT_0009861c;
  local_f8 = &DAT_00098638;
  piVar7 = (int *)local_11c[param_1 * 5 + param_2];
  piVar25 = piVar7 + iVar20 * 3;
  pfVar10 = (float *)(param_6 + *piVar7 * 4);
  pfVar22 = pfVar18;
  do {
    pfVar8 = &local_9c;
    piVar28 = piVar7 + 3;
    pfVar11 = pfVar10;
    do {
      piVar7 = piVar7 + 1;
      pfVar10 = (float *)(param_6 + *piVar7 * 4);
      iVar15 = (int)pfVar10 - (int)pfVar11 >> 2;
      pfVar26 = pfVar10;
      iVar9 = iVar15;
      pfVar12 = pfVar8;
      do {
        fVar46 = 0.0;
        iVar21 = iVar9 + -1;
        pfVar27 = (float *)(((int)pfVar11 + iVar15 * 2) * 2 - (int)pfVar26);
        pfVar16 = pfVar11;
        if (iVar9 != 0) {
          do {
            pfVar17 = pfVar16 + 1;
            fVar40 = *pfVar27;
            pfVar27 = pfVar27 + 1;
            fVar46 = fVar46 + *pfVar16 * fVar40;
            pfVar16 = pfVar17;
          } while (pfVar17 != pfVar26);
        }
        *pfVar12 = fVar46;
        fVar32 = local_94;
        fVar40 = local_98;
        fVar46 = local_9c;
        pfVar12 = pfVar12 + 3;
        pfVar26 = pfVar26 + -1;
        iVar9 = iVar21;
      } while (iVar15 + -9 != iVar21);
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar10;
    } while (piVar7 != piVar28);
    bVar1 = local_9c == 0.0;
    *pfVar22 = 3.0;
    if (((bVar1) || (fVar40 == 0.0)) || (fVar32 == 0.0)) {
      fVar46 = 0.0;
      pfVar22[1] = 0.0;
      pfVar22[2] = 0.0;
      pfVar22[3] = 0.0;
      pfVar22[4] = 0.0;
      pfVar22[5] = 0.0;
      pfVar22[6] = 0.0;
      pfVar22[7] = 0.0;
    }
    else {
      fVar40 = 1.0 / fVar40;
      fVar46 = 1.0 / fVar46;
      fVar32 = 1.0 / fVar32;
      fVar38 = fVar40 * local_50;
      fVar42 = fVar40 * local_8c;
      fVar34 = fVar40 * local_74;
      fVar35 = fVar40 * local_68;
      fVar37 = fVar40 * local_5c;
      fVar39 = fVar40 * local_44;
      fVar48 = fVar40 * local_38;
      fVar47 = local_78 * fVar46;
      fVar30 = local_6c * fVar46;
      fVar31 = local_60 * fVar46;
      fVar36 = local_54 * fVar46;
      fVar41 = local_48 * fVar46;
      fVar49 = local_3c * fVar46;
      fVar43 = local_90 * fVar46;
      fVar33 = local_70 * fVar32;
      fVar45 = local_64 * fVar32;
      fVar2 = local_58 * fVar32;
      fVar3 = local_88 * fVar32;
      fVar4 = local_4c * fVar32;
      fVar5 = local_40 * fVar32;
      fVar6 = local_34 * fVar32;
      pfVar22[2] = (fVar40 * local_80 + local_84 * fVar46 + local_7c * fVar32) * 0.9921354;
      pfVar22[3] = (fVar34 + fVar47 + fVar33) * 0.9823916;
      pfVar22[4] = (fVar35 + fVar30 + fVar45) * 0.9689108;
      pfVar22[1] = (fVar42 + fVar43 + fVar3) * 0.99802804;
      pfVar22[5] = (fVar37 + fVar31 + fVar2) * 0.9518498;
      fVar46 = (fVar48 + fVar49 + fVar6) * 0.88132316;
      pfVar22[6] = (fVar38 + fVar36 + fVar4) * 0.93140495;
      pfVar22[7] = (fVar39 + fVar41 + fVar5) * 0.90780824;
    }
    pfVar22[8] = fVar46;
    pfVar22 = pfVar22 + 9;
  } while (piVar7 != piVar25);
  pfVar22 = local_154 + 3;
  pfVar10 = &local_9c;
  pfVar8 = pfVar10;
  pfVar11 = pfVar22;
  do {
    fVar40 = *pfVar18;
    *pfVar8 = 1.0;
    iVar9 = 1;
    pfVar26 = local_154 + 5;
    pfVar12 = pfVar18;
    pfVar16 = pfVar8;
    fVar46 = fVar40;
    while( true ) {
      while( true ) {
        while( true ) {
          fVar32 = pfVar12[1];
          if (iVar9 != 1) break;
          fVar47 = -fVar32 / fVar46;
          pfVar26[1] = fVar47;
          fVar46 = fVar46 * (-fVar47 * fVar47 + 1.0);
          fVar32 = -(pfVar12[2] + fVar32 * local_154[6]) / fVar46;
          pfVar16 = pfVar16 + 2;
          pfVar8[1] = local_154[6] + fVar32 * fVar47;
          pfVar12 = pfVar12 + 2;
          pfVar26 = pfVar26 + 2;
          iVar9 = 3;
          fVar46 = fVar46 * (-fVar32 * fVar32 + 1.0);
          *pfVar16 = fVar32;
        }
        fVar36 = pfVar8[1];
        fVar30 = *pfVar12;
        fVar41 = pfVar8[2];
        fVar31 = pfVar12[-1];
        fVar47 = -fVar32 + -fVar36 * fVar30 + -fVar41 * fVar31;
        if (iVar9 == 3) {
          fVar47 = fVar47 / fVar46;
          fVar46 = (-fVar47 * fVar47 + 1.0) * fVar46;
          local_154[6] = fVar36 + fVar47 * *pfVar16;
          local_154[7] = fVar41 + fVar47 * pfVar16[-1];
        }
        else {
          fVar47 = fVar47 + -pfVar8[3] * pfVar12[-2] + -pfVar12[-3] * pfVar8[4];
          if (iVar9 != 5) {
            fVar47 = fVar47 + -pfVar8[5] * pfVar12[-4] + -pfVar12[-5] * pfVar8[6];
          }
          fVar47 = fVar47 / fVar46;
          fVar46 = fVar46 * (-fVar47 * fVar47 + 1.0);
          local_154[6] = fVar36 + *pfVar16 * fVar47;
          local_154[7] = fVar41 + pfVar16[-1] * fVar47;
          local_154[8] = pfVar8[3] + pfVar16[-2] * fVar47;
          local_154[9] = pfVar8[4] + pfVar16[-3] * fVar47;
          if (iVar9 != 5) {
            local_12c = pfVar8[5] + fVar47 * pfVar16[-4];
            local_128 = pfVar8[6] + pfVar16[-5] * fVar47;
          }
        }
        pfVar26[1] = fVar47;
        fVar41 = local_124;
        fVar36 = local_128;
        fVar32 = -(pfVar12[2] + fVar32 * local_154[6]) + -fVar30 * local_154[7] +
                 -fVar31 * local_154[8];
        if ((iVar9 != 3) &&
           (fVar32 = fVar32 + -pfVar12[-2] * local_154[9] + -pfVar12[-3] * local_12c, iVar9 != 5)) {
          fVar32 = fVar32 + -pfVar12[-4] * local_128 + -pfVar12[-5] * local_124;
        }
        fVar32 = fVar32 / fVar46;
        fVar30 = *pfVar26;
        fVar31 = pfVar26[-1];
        fVar46 = (-fVar32 * fVar32 + 1.0) * fVar46;
        pfVar8[1] = local_154[6] + fVar32 * fVar47;
        pfVar8[2] = local_154[7] + fVar32 * fVar30;
        pfVar8[3] = local_154[8] + fVar32 * fVar31;
        if (iVar9 != 3) break;
        pfVar16 = pfVar16 + 2;
        iVar9 = 5;
        pfVar12 = pfVar12 + 2;
        pfVar26 = pfVar26 + 2;
        *pfVar16 = fVar32;
      }
      fVar47 = pfVar26[-3];
      pfVar8[4] = local_154[9] + fVar32 * pfVar26[-2];
      pfVar8[5] = local_12c + fVar32 * fVar47;
      if (iVar9 != 5) break;
      pfVar16 = pfVar16 + 2;
      iVar9 = 7;
      pfVar12 = pfVar12 + 2;
      pfVar26 = pfVar26 + 2;
      *pfVar16 = fVar32;
    }
    fVar47 = pfVar26[-4];
    fVar30 = pfVar26[-5];
    *pfVar11 = fVar40 / fVar46;
    pfVar11 = pfVar11 + 1;
    pfVar8[6] = fVar36 + fVar32 * fVar47;
    pfVar8[7] = fVar41 + fVar32 * fVar30;
    pfVar18 = pfVar18 + 9;
    pfVar16[2] = fVar32;
    pfVar8 = pfVar8 + 9;
  } while (pfVar11 != pfVar22 + iVar20);
  piVar25 = param_5 + 1;
  pfVar18 = local_e4;
  puVar29 = (uint *)(param_5 + 3);
  iVar15 = 0;
  iVar9 = iVar20;
  piVar7 = piVar25;
  pfVar8 = pfVar18;
  do {
    piVar7 = piVar7 + 1;
    *piVar7 = 0;
    if ((param_3 == 0) && (fVar46 = *pfVar22, 1.5 < fVar46)) {
      fVar30 = pfVar10[1];
      fVar47 = pfVar10[2];
      fVar32 = pfVar10[3];
      fVar40 = pfVar10[4];
      fVar31 = pfVar10[5];
      fVar36 = pfVar10[6];
      fVar41 = pfVar10[7];
      fVar49 = pfVar10[8];
      if (((char)param_5[1] != '\0') && ((int)((uint)(fVar46 < 2.0) << 0x1f) < 0)) {
        fVar33 = (fVar46 - 2.0) * 0.29999995 + 1.0;
        fVar46 = fVar33 * fVar33 * fVar33;
        fVar47 = fVar47 * fVar33 * fVar33;
        fVar43 = fVar33 * fVar46;
        fVar32 = fVar32 * fVar46;
        fVar46 = fVar33 * fVar43;
        fVar40 = fVar40 * fVar43;
        fVar43 = fVar33 * fVar46;
        fVar30 = fVar30 * fVar33;
        fVar45 = fVar33 * fVar43;
        fVar31 = fVar31 * fVar46;
        fVar36 = fVar36 * fVar43;
        fVar41 = fVar41 * fVar45;
        fVar49 = fVar33 * fVar49 * fVar45;
        pfVar10[1] = fVar30;
        pfVar10[2] = fVar47;
        pfVar10[3] = fVar32;
        pfVar10[4] = fVar40;
        pfVar10[5] = fVar31;
        pfVar10[6] = fVar36;
        pfVar10[7] = fVar41;
        pfVar10[8] = fVar49;
      }
      pfVar8[7] = fVar49;
      fVar46 = 1.0 / (-fVar49 * fVar49 + 1.0);
      pfVar11 = pfVar8 + 7;
      iVar9 = 0x18;
      uVar13 = 6;
      local_100 = (undefined *)((fVar30 + -fVar49 * fVar41) * fVar46);
      local_fc = (undefined *)((fVar47 + -fVar49 * fVar36) * fVar46);
      local_f8 = (undefined *)((fVar32 + -fVar49 * fVar31) * fVar46);
      local_f4 = (1.0 - fVar49) * fVar40 * fVar46;
      local_f0 = (fVar31 + -fVar49 * fVar32) * fVar46;
      local_ec = (fVar36 + -fVar49 * fVar47) * fVar46;
      local_e8 = (fVar41 + -fVar49 * fVar30) * fVar46;
      ppuVar23 = local_11c + 7;
      while( true ) {
        pfVar26 = (float *)((int)ppuVar23 + iVar9);
        fVar40 = *pfVar26;
        fVar46 = 1.0 / (-fVar40 * fVar40 + 1.0);
        puVar44 = (undefined *)(fVar46 * ((float)*ppuVar23 + -fVar40 * pfVar26[-1]));
        uVar19 = uVar13 & 1;
        pfVar11 = pfVar11 + -1;
        *pfVar11 = fVar40;
        local_11c[uVar19 * 7] = puVar44;
        fVar40 = -fVar40;
        if (uVar13 == 1) break;
        local_11c[uVar19 * 7 + 1] =
             (undefined *)(fVar46 * ((float)ppuVar23[1] + fVar40 * pfVar26[-2]));
        if ((((uVar13 != 2) &&
             (local_11c[uVar19 * 7 + 2] =
                   (undefined *)(fVar46 * ((float)ppuVar23[2] + fVar40 * pfVar26[-3])), uVar13 != 3)
             ) && (local_11c[uVar19 * 7 + 3] =
                        (undefined *)(fVar46 * ((float)ppuVar23[3] + fVar40 * pfVar26[-4])),
                  uVar13 != 4)) &&
           (local_11c[uVar19 * 7 + 4] =
                 (undefined *)(fVar46 * ((float)ppuVar23[4] + fVar40 * pfVar26[-5])), uVar13 == 6))
        {
          local_11c[uVar19 * 7 + 5] =
               (undefined *)(((float)ppuVar23[5] + fVar40 * pfVar26[-6]) * fVar46);
        }
        uVar13 = uVar13 - 1;
        iVar9 = iVar9 + -4;
        ppuVar23 = local_11c + uVar19 * 7;
      }
      *pfVar8 = (float)puVar44;
      *piVar7 = 8;
      puVar24 = puVar29;
      pfVar11 = pfVar8;
      do {
        fVar40 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        fVar32 = ABS(fVar40);
        uVar19 = (uint)(0.7390089 <= fVar32);
        fVar46 = *(float *)(&DAT_00098564 + uVar19 * 0x10);
        uVar13 = uVar19 * 4;
        puVar24 = puVar24 + 1;
        *puVar24 = uVar13;
        if (fVar32 < fVar46) {
          if ((int)((uint)(fVar40 < 0.0) << 0x1f) < 0) {
            uVar13 = uVar19 * -4;
            *puVar24 = uVar13;
          }
          if (uVar13 != 0) goto LAB_000708d4;
          iVar21 = *piVar7 + -1;
        }
        else {
          uVar19 = uVar13 + 1;
          fVar46 = *(float *)(&DAT_00098564 + uVar19 * 4);
          *puVar24 = uVar19;
          if (fVar46 <= fVar32) {
            uVar19 = uVar13 + 2;
            fVar46 = *(float *)(&DAT_00098564 + uVar19 * 4);
            *puVar24 = uVar19;
            if (fVar46 <= fVar32) {
              uVar19 = uVar13 + 3;
              fVar46 = *(float *)(&DAT_00098564 + uVar19 * 4);
              *puVar24 = uVar19;
              if (fVar46 <= fVar32) {
                uVar19 = uVar13 + 4;
                *puVar24 = uVar19;
              }
            }
          }
          if ((int)((uint)(fVar40 < 0.0) << 0x1f) < 0) {
            *puVar24 = -uVar19;
          }
LAB_000708d4:
          iVar21 = 8;
        }
        *piVar7 = iVar21;
      } while (pfVar8 + 8 != pfVar11);
      iVar9 = *param_5;
      if (0 < iVar21) {
        puVar24 = puVar29;
        pfVar11 = pfVar8;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar24;
          fVar46 = *(float *)(&DAT_00098540 +
                             ((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) * 4);
          if ((int)uVar13 < 0) {
            fVar46 = -fVar46;
          }
          *pfVar11 = fVar46;
          pfVar11 = pfVar11 + 1;
        } while (puVar24 != puVar29 + iVar21);
      }
    }
    pfVar8 = pfVar8 + 8;
    iVar15 = iVar15 + 1;
    pfVar22 = pfVar22 + 1;
    puVar29 = puVar29 + 8;
    pfVar10 = pfVar10 + 9;
    if (iVar9 <= iVar15) {
      fVar46 = 0.0;
      param_1 = param_1 + 3;
      iVar15 = (int)((param_2 * param_1 + param_1) * 0x14) >> (uint)(2 < param_2);
      piVar7 = piVar25 + iVar20;
      pfVar22 = (float *)(param_6 + iVar15 * 4);
      iVar20 = iVar15;
      iVar9 = param_1 * 3;
      fVar40 = fVar46;
      fVar32 = fVar46;
      fVar47 = fVar46;
      fVar30 = fVar46;
      fVar31 = fVar46;
      fVar36 = fVar46;
      fVar41 = fVar46;
      do {
        iVar21 = iVar20;
        piVar25 = piVar25 + 1;
        iVar20 = *piVar25;
        if ((iVar20 != 0) && (iVar9 < iVar21)) {
          pfVar10 = (float *)(param_6 + iVar9 * 4);
          while( true ) {
            fVar43 = *pfVar10;
            fVar49 = fVar43;
            if (0 < iVar20) {
              fVar33 = fVar41 + *pfVar18 * fVar43;
              fVar49 = fVar43 + *pfVar18 * fVar41;
              fVar41 = fVar43;
              if (iVar20 != 1) {
                fVar43 = fVar36 + fVar49 * pfVar18[1];
                fVar49 = fVar49 + pfVar18[1] * fVar36;
                fVar36 = fVar33;
                if (iVar20 != 2) {
                  fVar33 = fVar31 + fVar49 * pfVar18[2];
                  fVar49 = fVar49 + fVar31 * pfVar18[2];
                  fVar31 = fVar43;
                  if (iVar20 != 3) {
                    fVar43 = fVar47 + fVar49 * pfVar18[3];
                    fVar49 = fVar49 + fVar47 * pfVar18[3];
                    fVar47 = fVar33;
                    if (iVar20 != 4) {
                      fVar33 = fVar32 + fVar49 * pfVar18[4];
                      fVar49 = fVar49 + fVar32 * pfVar18[4];
                      fVar32 = fVar43;
                      if (iVar20 != 5) {
                        fVar43 = fVar40 + pfVar18[5] * fVar49;
                        fVar49 = fVar49 + fVar40 * pfVar18[5];
                        fVar40 = fVar33;
                        if (iVar20 != 6) {
                          fVar33 = fVar30 + pfVar18[6] * fVar49;
                          fVar49 = fVar49 + fVar30 * pfVar18[6];
                          fVar30 = fVar43;
                          if (iVar20 != 7) {
                            fVar43 = pfVar18[7] * fVar46;
                            fVar46 = fVar33;
                            fVar49 = fVar49 + fVar43;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            *pfVar10 = fVar49;
            if (pfVar10 + 1 == pfVar22) break;
            iVar20 = *piVar25;
            pfVar10 = pfVar10 + 1;
          }
        }
        pfVar22 = pfVar22 + iVar15;
        pfVar18 = pfVar18 + 8;
        iVar20 = iVar21 + iVar15;
        iVar9 = iVar21;
      } while (piVar7 != piVar25);
      return;
    }
  } while( true );
}


