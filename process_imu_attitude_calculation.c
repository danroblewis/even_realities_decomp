/*
 * Function: process_imu_attitude_calculation
 * Entry:    0000c358
 * Prototype: undefined process_imu_attitude_calculation()
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void process_imu_attitude_calculation
               (float param_1,float param_2,float param_3,float param_4,float *param_5,
               float *param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 *puVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int *piVar20;
  float *pfVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float extraout_s12;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  int local_280;
  float *local_27c;
  float *local_278;
  float *local_270;
  int local_26c;
  int local_268;
  undefined1 local_258 [4];
  float local_254 [2];
  undefined4 local_24c;
  int local_248;
  undefined1 auStack_244 [4];
  int local_240;
  float local_23c [12];
  int aiStack_20c [3];
  float local_200 [12];
  float local_1d0 [6];
  float local_1b8 [6];
  float local_1a0 [4];
  float local_190 [4];
  float local_180 [12];
  float local_150 [7];
  float afStack_134 [5];
  float local_120 [8];
  float local_100 [4];
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [4];
  float local_c0 [4];
  float local_b0 [4];
  float local_a0 [16];
  float fStack_60;
  float *pfVar11;
  
  fVar37 = param_5[0x5d2];
  if (((*(char *)(param_5 + 0x5d3) != '\x01') && (-1 < (int)((uint)(param_3 < fVar37) << 0x1f))) &&
     (fVar37 = param_5[0x5d1], -1 < (int)((uint)(param_5[0x5d1] < param_3) << 0x1f))) {
    fVar37 = param_3;
  }
  pfVar7 = param_5 + 0x11a;
  uVar22 = find_minimum_float_value(pfVar7);
  pfVar6 = param_5 + 0x11b;
  pfVar12 = param_5 + 0x11c;
  uVar23 = find_maximum_float_value(pfVar7);
  uVar24 = initialize_audio_streaming(fVar37,uVar22);
  fVar25 = (float)setup_audio_compression(uVar24,uVar23);
  local_258[0] = *pfVar7 == fVar25;
  local_258[1] = *pfVar6 == fVar25;
  local_258[2] = *pfVar12 == fVar25;
  process_array_indices(local_258,aiStack_20c,auStack_244);
  local_26c = local_240;
  if (local_240 == 0) {
    local_23c[0] = (float)interpolate_1d_value(fVar25,pfVar7,param_5 + 0x5be);
    local_26c = 1;
  }
  else if (0 < local_240) {
    pfVar5 = local_23c;
    piVar4 = aiStack_20c;
    do {
      piVar9 = piVar4 + 1;
      *pfVar5 = param_5[*piVar4 + 0x5bd];
      pfVar5 = pfVar5 + 1;
      piVar4 = piVar9;
    } while (piVar9 != aiStack_20c + local_240);
  }
  local_278 = local_23c;
  uVar24 = initialize_audio_streaming(fVar37,uVar22);
  fVar25 = (float)setup_audio_compression(uVar24,uVar23);
  local_258[0] = *pfVar7 == fVar25;
  local_258[1] = *pfVar6 == fVar25;
  local_258[2] = *pfVar12 == fVar25;
  process_array_indices(local_258,aiStack_20c,auStack_244);
  if (local_240 == 0) {
    interpolate_2d_coordinates(fVar25,pfVar7,param_5 + 0x5b2,local_254);
    iVar18 = 2;
    local_1b8[0] = local_254[0];
    local_268 = 4;
    iVar15 = iVar18;
LAB_0000c51e:
    local_27c = local_1b8;
    pfVar5 = local_1d0;
    iVar14 = 0;
    do {
      fVar25 = *local_27c;
      local_27c = local_27c + 1;
      fVar25 = (float)setup_audio_mixing(fVar25);
      iVar14 = iVar14 + 1;
      *pfVar5 = fVar25;
      pfVar5 = pfVar5 + 1;
    } while (iVar14 < iVar18);
    if (0 < iVar15) {
LAB_0000c546:
      local_270 = local_1d0;
      iVar14 = 0;
      do {
        iVar14 = iVar14 + 1;
        *local_270 = -param_4 / *local_270;
        local_270 = local_270 + 1;
      } while (iVar14 < iVar15);
      if (iVar18 < 1) goto LAB_0000c580;
    }
    local_270 = local_1d0;
    iVar15 = 0;
    do {
      fVar25 = (float)FUN_00075c90(*local_270);
      iVar15 = iVar15 + 1;
      *local_270 = fVar25;
      local_270 = local_270 + 1;
    } while (iVar18 != iVar15);
  }
  else {
    iVar18 = local_240 * 2;
    if (0 < local_240) {
      local_268 = local_240 * 4;
      piVar9 = aiStack_20c + local_240;
      piVar4 = aiStack_20c;
      pfVar5 = local_1b8;
      do {
        piVar20 = piVar4 + 1;
        *pfVar5 = param_5[*piVar4 + 0x5b1];
        piVar4 = piVar20;
        pfVar5 = pfVar5 + 1;
      } while (piVar9 != piVar20);
      piVar4 = aiStack_20c;
      pfVar5 = local_1b8 + local_240;
      do {
        piVar20 = piVar4 + 1;
        *pfVar5 = param_5[*piVar4 + 0x5b4];
        piVar4 = piVar20;
        pfVar5 = pfVar5 + 1;
      } while (piVar20 != piVar9);
      iVar15 = iVar18;
      if (0 < iVar18) goto LAB_0000c51e;
      iVar15 = 0x7fffffff;
      goto LAB_0000c546;
    }
    if (0 < iVar18) {
      local_268 = local_240 << 2;
      iVar15 = -0x80000000;
      goto LAB_0000c51e;
    }
    local_268 = local_240 << 2;
  }
LAB_0000c580:
  local_27c = local_1b8;
  uVar24 = initialize_audio_streaming(fVar37,uVar22);
  fVar25 = (float)setup_audio_compression(uVar24,uVar23);
  local_258[0] = *pfVar7 == fVar25;
  local_258[1] = *pfVar6 == fVar25;
  local_258[2] = *pfVar12 == fVar25;
  process_array_indices(local_258,aiStack_20c,auStack_244);
  if (local_240 == 0) {
    interpolate_2d_coordinates(fVar25,pfVar7,param_5 + 0x5b8,local_254);
    iVar15 = 4;
    fVar25 = local_254[0];
  }
  else {
    fVar25 = local_1b8[0];
    if (local_240 < 1) {
      iVar15 = local_240 << 2;
    }
    else {
      iVar15 = local_240 * 4;
      piVar9 = aiStack_20c + local_240;
      piVar4 = aiStack_20c;
      pfVar5 = local_27c;
      do {
        piVar20 = piVar4 + 1;
        *pfVar5 = param_5[*piVar4 + 0x5b7];
        piVar4 = piVar20;
        pfVar5 = pfVar5 + 1;
      } while (piVar9 != piVar20);
      pfVar5 = local_27c + local_240;
      piVar4 = aiStack_20c;
      do {
        piVar20 = piVar4 + 1;
        *pfVar5 = param_5[*piVar4 + 0x5ba];
        pfVar5 = pfVar5 + 1;
        piVar4 = piVar20;
      } while (piVar9 != piVar20);
    }
  }
  uVar22 = initialize_audio_streaming(fVar37,uVar22);
  fVar26 = (float)setup_audio_compression(uVar22,uVar23);
  local_258[0] = *pfVar7 == fVar26;
  local_258[1] = *pfVar6 == fVar26;
  local_258[2] = *pfVar12 == fVar26;
  process_array_indices(local_258,aiStack_20c,auStack_244);
  local_280 = local_240;
  if (local_240 == 0) {
    local_23c[3] = (float)interpolate_1d_value(fVar26,pfVar7,param_5 + 0x5af);
    local_280 = 1;
  }
  else if (0 < local_240) {
    pfVar12 = local_23c + 3;
    piVar4 = aiStack_20c;
    do {
      piVar9 = piVar4 + 1;
      *pfVar12 = param_5[*piVar4 + 0x5ae];
      pfVar12 = pfVar12 + 1;
      piVar4 = piVar9;
    } while (aiStack_20c + local_240 != piVar9);
  }
  fVar39 = *(float *)((int)local_27c + iVar15);
  fVar26 = (float)setup_audio_mixing(param_1 - param_5[0x17]);
  fVar27 = (float)setup_audio_mixing(param_5[0x15] - param_2);
  uVar41 = float_divide_64bit_complex(fVar27);
  iVar15 = float_compare_boolean_inverted_swapped
                     ((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),0xd2f1a9fc,0x3f70624d);
  if (iVar15 == 0) {
LAB_0000c72a:
    fVar26 = param_5[0x5da];
  }
  else {
    uVar41 = float_divide_64bit_complex(fVar26);
    iVar15 = float_compare_boolean_inverted_swapped
                       ((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),0xd2f1a9fc,0x3f70624d);
    if ((iVar15 == 0) || (-1 < (int)((uint)(param_3 < 0.0) << 0x1f))) goto LAB_0000c72a;
    fVar26 = fVar26 / fVar27;
  }
  fVar27 = param_5[0x5dd] * 0.9999 + fVar26 * 0.0001;
  fVar38 = param_5[0x5dc] * 0.9999 + fVar27 * 0.0001;
  local_23c[6] = -fVar38 + fVar27 * 2.0;
  if (((int)((uint)(param_5[0x5d2] < param_3) << 0x1f) < 0) || (0.0 <= param_3)) {
    memcpy(local_23c + 6,local_23c + 3,local_280 << 2);
  }
  else {
    local_280 = 1;
  }
  fill_memory_buffer(local_120,0,0x40);
  fVar33 = local_23c[0];
  local_200[0] = 0.0;
  local_200[1] = 0.0;
  local_200[2] = 0.0;
  local_200[3] = 0.0;
  iVar15 = (int)param_5[0x5d5] + -1;
  local_120[(int)param_5[0x5d5] + iVar15 * 4 + -1] = 1.0;
  if (0 < local_26c) {
    pfVar12 = local_278;
    do {
      *pfVar12 = *pfVar12 * 3600.0;
      pfVar12 = pfVar12 + 1;
    } while (local_278 + local_26c != pfVar12);
  }
  fVar36 = param_5[1];
  fVar40 = 0.0;
  fVar32 = param_5[0x15];
  fVar34 = *param_5;
  fVar35 = *(float *)((int)local_1d0 + local_268);
  local_200[iVar15] = -param_4 / local_23c[0];
  iVar15 = (int)fVar34 + -1;
  local_120[(int)fVar34 + iVar15 * 4 + -1] = local_1d0[0];
  iVar18 = (int)fVar36 + -1;
  local_120[(int)fVar36 + iVar18 * 4 + -1] = fVar35;
  local_200[iVar15] = 1.0 - local_1d0[0];
  local_200[iVar18] = 1.0 - fVar35;
  local_200[7] = fVar35;
  fVar32 = (float)FUN_00075c90(-((fVar32 * 0.0 * param_4) / local_23c[0]));
  local_1a0[0] = local_200[0];
  local_1a0[1] = local_200[1];
  local_190[0] = local_200[0] * 0.0;
  local_190[1] = local_200[1] * 0.0;
  local_1a0[2] = local_200[2];
  local_1a0[3] = local_200[3];
  local_190[2] = local_200[2] * 0.0;
  local_190[3] = local_200[3] * 0.0;
  fVar34 = param_5[0x15];
  afStack_134[(int)param_5[0x5d4] * 5] = fVar32;
  iVar15 = validate_float_value(fVar34);
  if (iVar15 == 0) {
    fVar34 = param_5[0x15];
    if (fVar34 < 0.0) {
      fVar40 = -1.0;
    }
    else if (fVar34 != 0.0) {
      fVar40 = 1.0;
    }
  }
  else {
    fVar34 = param_5[0x15];
    fVar40 = DAT_20002d1c;
  }
  iVar18 = (int)param_5[0x5d4];
  fVar35 = param_5[0x5d6];
  fVar36 = param_5[0x5d7];
  fVar31 = param_5[0x5d9];
  local_190[iVar18 + -1] = fVar32 - 1.0;
  pfVar12 = local_120;
  pfVar6 = local_a0;
  iVar15 = 0;
  local_200[iVar18 + -1] =
       -(((param_4 * 0.0) / fVar33) * fVar32) * (param_5[iVar18 + 0x5d5] * fVar40 + 1.0);
  fVar33 = param_5[0x5d8];
  pfVar19 = local_200 + 8;
  pfVar16 = param_5 + 0x10;
  pfVar7 = pfVar12;
  pfVar5 = local_e0;
  pfVar17 = local_1a0;
  pfVar21 = pfVar6;
  do {
    fVar32 = pfVar7[4];
    fVar29 = pfVar7[8];
    fVar30 = pfVar7[0xc];
    fVar28 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    *pfVar19 = fVar36 * fVar32 + fVar28 * fVar35 + fVar29 * fVar33 + fVar30 * fVar31 +
               fVar40 * pfVar17[4] + *pfVar17 * fVar34;
    pfVar19 = pfVar19 + 1;
    pfVar10 = param_5;
    pfVar13 = pfVar5;
    do {
      pfVar11 = pfVar10 + 3;
      pfVar1 = pfVar10 + 2;
      pfVar2 = pfVar10 + 4;
      pfVar3 = pfVar10 + 5;
      pfVar10 = pfVar10 + 4;
      *pfVar13 = fVar32 * *pfVar11 + fVar28 * *pfVar1 + fVar29 * *pfVar2 + fVar30 * *pfVar3;
      pfVar13 = pfVar13 + 4;
    } while (pfVar16 != pfVar10);
    fVar32 = *pfVar5;
    fVar28 = pfVar5[4];
    fVar29 = pfVar5[8];
    fVar30 = pfVar5[0xc];
    pfVar10 = local_120;
    pfVar13 = pfVar21;
    do {
      pfVar11 = pfVar10 + 1;
      *pfVar13 = fVar28 * pfVar10[4] + *pfVar10 * fVar32 + fVar29 * pfVar10[8] +
                 fVar30 * pfVar10[0xc];
      pfVar13 = pfVar13 + 4;
      pfVar10 = pfVar11;
    } while (local_120 + 4 != pfVar11);
    iVar15 = iVar15 + 1;
    pfVar21 = pfVar21 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar17 = pfVar17 + 1;
  } while (iVar15 != 4);
  uVar22 = setup_audio_compression(0xbf800000,local_200[iVar18 + 7]);
  fVar40 = param_5[0x5d4];
  fVar33 = (float)initialize_audio_streaming(0x3f800000,uVar22);
  fVar32 = param_5[0x5d5];
  local_200[(int)fVar40 + 7] = fVar33;
  uVar22 = setup_audio_compression(0xbd4ccccd,local_200[(int)fVar32 + 7]);
  fVar40 = param_5[0x5d5];
  fVar33 = (float)initialize_audio_streaming(0x3f866666,uVar22);
  fVar32 = param_5[0x13];
  pfVar17 = local_200;
  local_200[(int)fVar40 + 7] = fVar33;
  pfVar7 = pfVar17;
  pfVar5 = local_120;
  do {
    fVar33 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    *pfVar5 = fVar32 * local_200[0] * fVar33;
    pfVar5[1] = fVar33 * fVar32 * local_200[1];
    pfVar5[2] = fVar33 * fVar32 * local_200[2];
    pfVar5[3] = fVar33 * fVar32 * local_200[3];
    pfVar5 = pfVar5 + 4;
  } while (local_200 + 4 != pfVar7);
  pfVar7 = param_5 + 2;
  do {
    fVar40 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    fVar33 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    *pfVar7 = fVar40 + fVar33;
    pfVar7 = pfVar7 + 1;
  } while (&fStack_60 != pfVar6);
  fVar40 = param_5[0x119];
  pfVar12 = local_200 + (int)param_5[0x5d5] + 8;
  fVar33 = param_5[0x51];
  fVar32 = local_200[(int)param_5[0x5d5] + 7];
  fVar34 = param_5[0x52] - fVar33;
  if (fVar33 < fVar32) {
    if ((fVar33 < fVar32) && ((int)((uint)(fVar32 < fVar40) << 0x1f) < 0)) {
      if (fVar32 == fVar40) {
        pfVar12 = (float *)0x1;
        goto LAB_0000d2ac;
      }
      goto LAB_0000cc1a;
    }
    if (fVar40 <= fVar32) goto LAB_0000d2aa;
    fVar40 = 0.0;
  }
  else {
    iVar15 = (uint)(fVar33 < fVar32) << 0x1f;
    if (fVar40 <= fVar32) {
      if (iVar15 < 0) {
        iVar15 = (uint)(fVar32 < fVar40) << 0x1f;
        if (iVar15 < 0) {
          pfVar12 = (float *)0x1;
        }
        if (-1 < iVar15) {
          pfVar12 = (float *)0x0;
        }
      }
      else {
LAB_0000d2aa:
        pfVar12 = (float *)0x0;
      }
LAB_0000d2ac:
      fVar40 = (((param_5[0x328] + param_5[0x25f] * fVar37) -
                (param_5[0x327] + param_5[0x25e] * fVar37)) * (fVar32 - fVar40)) / fVar34 +
               param_5[0x328] + param_5[0x25f] * fVar37;
    }
    else {
      if (iVar15 < 0) {
        iVar15 = (uint)(fVar32 < fVar40) << 0x1f;
        if (iVar15 < 0) {
          pfVar12 = (float *)0x1;
        }
        if (-1 < iVar15) {
          pfVar12 = (float *)0x0;
        }
      }
      else {
        pfVar12 = (float *)0x0;
      }
      fVar40 = ((fVar32 - fVar33) *
               ((param_5[0x261] + param_5[0x198] * fVar37) -
               (param_5[0x260] + param_5[0x197] * fVar37))) / fVar34 + param_5[0x260] +
               param_5[0x197] * fVar37;
    }
    if (pfVar12 != (float *)0x0) {
LAB_0000cc1a:
      fVar33 = (float)initialize_audio_effects((fVar32 - fVar33) / fVar34);
      fVar40 = (local_200[(int)param_5[0x5d5] + 7] - param_5[0x51]) / fVar34 - fVar33;
      fVar40 = fVar40 * param_5[(int)(fVar33 + 2.0) + 0x25f] +
               param_5[(int)(fVar33 + 1.0) + 0x25f] * (1.0 - fVar40) +
               fVar37 * (fVar40 * param_5[(int)(fVar33 + 2.0) + 0x196] +
                        param_5[(int)(fVar33 + 1.0) + 0x196] * (1.0 - fVar40));
    }
  }
  iVar15 = validate_float_value(fVar32);
  fVar33 = local_200[(int)param_5[1] + 7];
  fVar34 = local_200[(int)*param_5 + 7];
  if (0 < local_280) {
    pfVar12 = local_23c + 6;
    pfVar7 = pfVar12 + local_280;
    pfVar6 = local_278;
    do {
      fVar35 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      *pfVar6 = (float)((uint)(iVar15 == 0) * (int)fVar40) + -fVar33 * fVar39 + -fVar34 * fVar25 +
                -fVar35 * param_2;
      pfVar6 = pfVar6 + 1;
    } while (pfVar7 != pfVar12);
  }
  fVar35 = param_5[0x5d5];
  fVar34 = 0.0;
  local_200[0] = 0.0;
  local_200[1] = 0.0;
  local_200[2] = 0.0;
  local_200[3] = 0.0;
  fVar33 = (float)interpolate_imu_data(fVar32,fVar37,param_5 + 0x51,param_5 + 0x329,param_5 + 0x3f2)
  ;
  fVar40 = *param_5;
  fVar36 = param_5[1];
  fVar32 = param_5[0x5d4];
  local_200[(int)fVar35 + -1] = fVar33;
  local_200[(int)fVar32 + -1] = 0.0;
  local_200[(int)fVar40 + -1] = -fVar25;
  local_200[(int)fVar36 + -1] = -fVar39;
  pfVar12 = param_5;
  do {
    pfVar6 = pfVar12 + 3;
    pfVar7 = pfVar12 + 2;
    pfVar5 = pfVar12 + 4;
    pfVar21 = pfVar12 + 5;
    fVar25 = *pfVar17;
    pfVar17 = pfVar17 + 1;
    pfVar12 = pfVar12 + 4;
    fVar34 = fVar34 + (local_200[1] * *pfVar6 + local_200[0] * *pfVar7 + local_200[2] * *pfVar5 +
                      local_200[3] * *pfVar21) * fVar25;
  } while (pfVar16 != pfVar12);
  pfVar12 = local_200 + 4;
  fVar34 = fVar34 + param_5[0x12];
  pfVar6 = pfVar12;
  pfVar7 = param_5 + 2;
  do {
    pfVar5 = pfVar7 + 1;
    *pfVar6 = (local_200[1] * pfVar7[4] + local_200[0] * *pfVar7 + local_200[2] * pfVar7[8] +
              local_200[3] * pfVar7[0xc]) / fVar34;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar5;
  } while (param_5 + 6 != pfVar5);
  if (local_280 < 1) {
    local_24c = 1;
    local_248 = local_280;
    iVar15 = validate_string_length(local_258,&local_24c);
    if (iVar15 != 0) {
      local_200[4] = 0.0;
      local_200[5] = 0.0;
      local_200[6] = 0.0;
      local_200[7] = 0.0;
    }
  }
  else {
    pfVar6 = local_23c + 3;
    pfVar5 = local_278 + local_280;
    pfVar7 = pfVar6;
    do {
      fVar25 = *local_278;
      local_278 = local_278 + 1;
      *pfVar7 = param_1 - fVar25;
      pfVar7 = pfVar7 + 1;
    } while (pfVar5 != local_278);
    pfVar7 = local_23c + 9;
    pfVar5 = pfVar7;
    do {
      fVar25 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      *pfVar5 = local_23c[3] * fVar25;
      pfVar5 = pfVar5 + 1;
    } while (local_23c + local_280 + 3 != pfVar6);
    local_24c = 1;
    local_248 = local_280;
    pfVar6 = pfVar7 + local_280;
    puVar8 = local_258;
    do {
      fVar25 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      *puVar8 = fVar34 * 100.0 < fVar25;
      puVar8 = puVar8 + 1;
    } while (pfVar6 != pfVar7);
    iVar15 = validate_string_length(local_258,&local_24c);
    if (iVar15 != 0) {
      local_200[4] = 0.0;
      local_200[5] = 0.0;
      local_200[6] = 0.0;
      local_200[7] = 0.0;
    }
    pfVar6 = local_23c + 3;
    pfVar5 = pfVar6 + local_280;
    pfVar7 = local_150;
    do {
      fVar25 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      *pfVar7 = local_200[4] * fVar25;
      pfVar7[1] = local_200[5] * fVar25;
      pfVar7[2] = local_200[6] * fVar25;
      pfVar7[3] = local_200[7] * fVar25;
      pfVar7 = pfVar7 + 4;
    } while (pfVar5 != pfVar6);
    pfVar6 = local_180;
    pfVar7 = local_150;
    do {
      fVar25 = *pfVar7;
      fVar39 = pfVar7[1];
      fVar33 = pfVar7[2];
      fVar40 = pfVar7[3];
      pfVar7 = pfVar7 + 4;
      *pfVar6 = fVar25 + local_200[8];
      pfVar6[1] = fVar39 + local_200[9];
      pfVar6[2] = fVar33 + local_200[10];
      pfVar6[3] = fVar40 + local_200[0xb];
      pfVar6 = pfVar6 + 4;
    } while (local_150 + local_280 * 4 != pfVar7);
    pfVar6 = local_150;
    pfVar7 = local_180;
    do {
      pfVar5 = pfVar7 + 4;
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      pfVar6[3] = pfVar7[3];
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar5;
    } while (local_180 + local_280 * 4 != pfVar5);
  }
  fVar40 = local_200[7];
  fVar33 = local_200[6];
  fVar39 = local_200[5];
  fVar25 = local_200[4];
  uVar22 = setup_audio_compression(0xbf800000,local_150[(int)param_5[0x5d4] + -1]);
  fVar35 = param_5[0x5d4];
  fVar32 = (float)initialize_audio_streaming(0x3f800000,uVar22);
  fVar36 = param_5[0x5d5];
  local_150[(int)fVar35 + -1] = fVar32;
  uVar22 = setup_audio_compression(0xbd4ccccd,local_150[(int)fVar36 + -1]);
  fVar35 = param_5[0x5d5];
  fVar32 = (float)initialize_audio_streaming(0x3f866666,uVar22);
  local_150[(int)fVar35 + -1] = fVar32;
  pfVar6 = param_5;
  do {
    fVar32 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    pfVar7 = pfVar6 + 4;
    pfVar6[2] = pfVar6[2] + fVar32 * -(fVar25 * fVar34);
    pfVar6[3] = pfVar6[3] + -fVar32 * fVar34 * fVar39;
    *pfVar7 = pfVar6[4] + -fVar32 * fVar34 * fVar33;
    pfVar6[5] = pfVar6[5] + -fVar32 * fVar34 * fVar40;
    pfVar6 = pfVar7;
  } while (pfVar16 != pfVar7);
  local_24c = 1;
  local_248 = local_280;
  if (0 < local_280) {
    pfVar12 = local_23c + 9;
    pfVar6 = pfVar12 + local_280;
    puVar8 = local_258;
    do {
      fVar25 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      *puVar8 = fVar34 * 100.0 < fVar25;
      puVar8 = puVar8 + 1;
    } while (pfVar6 != pfVar12);
  }
  iVar15 = validate_string_length(local_258,&local_24c);
  if (iVar15 == 0) {
    iVar15 = (int)param_5[0x5d5] + -1;
  }
  else {
    iVar15 = (int)param_5[0x5d5] + -1;
    iVar18 = (int)param_5[0x5d5] + iVar15 * 4;
    param_5[iVar18 + 1] = param_5[iVar18 + 1] * param_5[0x14];
  }
  param_5[0x15] = param_2;
  param_5[0x5d6] = local_150[0];
  param_5[0x5d7] = local_150[1];
  param_5[0x5d8] = local_150[2];
  param_5[0x5d9] = local_150[3];
  *param_6 = local_150[iVar15];
  fVar25 = (float)FUN_00075dc8(param_5[(int)param_5[0x5d5] * 5 + -3]);
  *param_7 = fVar25 * 3.0;
  param_5[0x17] = param_1;
  param_5[0x5db] = local_23c[6];
  param_5[0x5da] = fVar26;
  param_5[0x5dc] = fVar38;
  param_5[0x5dd] = fVar27;
  iVar15 = validate_float_value(param_5[0x4b]);
  if (iVar15 != 0) goto LAB_0000d162;
  iVar15 = validate_float_value(param_2);
  fVar25 = DAT_20002d1c;
  if (iVar15 == 0) {
    if (param_2 < 0.0) {
      fVar25 = -1.0;
    }
    else if (param_2 == 0.0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = 1.0;
    }
    iVar15 = validate_float_value(param_5[0x4b]);
    if (iVar15 == 0) goto LAB_0000d4ac;
LAB_0000d34a:
    fVar26 = fVar25 * DAT_20002d1c;
  }
  else {
    iVar15 = validate_float_value(param_5[0x4b]);
    if (iVar15 != 0) goto LAB_0000d34a;
LAB_0000d4ac:
    if (param_5[0x4b] < 0.0) {
      fVar26 = -fVar25;
    }
    else {
      fVar26 = fVar25;
      if (param_5[0x4b] == 0.0) {
        fVar26 = fVar25 * 0.0;
      }
    }
  }
  fVar27 = DAT_20002d1c;
  if (fVar26 == -1.0) {
    pfVar12 = param_5 + 0x18;
    do {
      pfVar6 = pfVar12 + 1;
      *pfVar12 = fVar27;
      pfVar12[0x19] = fVar27;
      pfVar12 = pfVar6;
    } while (pfVar6 != param_5 + 0x31);
    param_5[0x4f] = 0.0;
    param_5[0x4e] = 0.0;
    if (fVar25 == -1.0) {
      param_5[0x50] = local_150[(int)param_5[0x5d5] + -1];
    }
    else {
      param_5[0x50] = fVar27;
    }
  }
LAB_0000d162:
  fVar26 = (float)setup_audio_mixing(param_2);
  fVar27 = (float)setup_audio_mixing(param_5[0x4b]);
  fVar27 = fVar27 * 5.0;
  fVar25 = extraout_s12;
  if (fVar27 < fVar26) {
    fVar25 = 0.0;
  }
  fVar39 = fVar25;
  if (fVar26 <= fVar27) {
    fVar39 = param_5[0x4f];
  }
  param_5[0x4f] = param_4 + fVar39;
  fVar38 = param_5[0x4a] + 1.0;
  fVar39 = local_150[(int)param_5[0x5d5] + -1];
  iVar15 = (int)param_5[0x4a];
  if (fVar26 <= fVar27) {
    fVar25 = param_5[0x4e];
  }
  fVar26 = fVar39 - param_5[0x4d];
  param_5[0x4b] = param_2;
  param_5[0x4c] = fVar37;
  param_5[0x4d] = fVar39;
  param_5[0x4e] = fVar26 + fVar25;
  param_5[iVar15 + 0x17] = fVar26;
  param_5[iVar15 + 0x30] = param_4;
  param_5[0x4a] = (float)((uint)(25.0 < fVar38) * 0x3f800000 + (uint)(fVar38 <= 25.0) * (int)fVar38)
  ;
  param_8[2] = fVar40;
  param_8[3] = fVar37;
  *param_8 = local_23c[0];
  param_8[1] = local_23c[6];
  return;
}


