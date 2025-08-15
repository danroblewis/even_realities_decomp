/*
 * Function: process_imu_sensor_data
 * Entry:    0000e53c
 * Prototype: undefined process_imu_sensor_data()
 */


void process_imu_sensor_data
               (float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int param_7,undefined4 *param_8,float *param_9)

{
  byte bVar1;
  undefined4 *puVar2;
  float *pfVar4;
  bool bVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 auStack_50 [4];
  int local_4c;
  float local_48 [3];
  int aiStack_3c [3];
  undefined4 *puVar3;
  int *piVar8;
  
  param_8[1] = 0x40000000;
  *param_8 = 0x3f800000;
  memcpy(param_8 + 2,param_6,0x40);
  param_8[0x12] = param_4;
  param_8[0x13] = param_5;
  uVar12 = DAT_20002d1c;
  param_8[0x15] = 0;
  param_8[0x14] = 0x40a00000;
  param_8[0x16] = 0;
  param_8[0x17] = 0;
  puVar2 = param_8 + 0x18;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = uVar12;
    puVar2[0x19] = uVar12;
    puVar2 = puVar3;
  } while (param_8 + 0x31 != puVar3);
  param_8[0x4b] = uVar12;
  param_8[0x4c] = uVar12;
  param_8[0x4d] = uVar12;
  param_8[0x50] = uVar12;
  param_8[0x4a] = 0x3f800000;
  param_8[0x4e] = 0;
  param_8[0x4f] = 0;
  memcpy(param_8 + 0x51,param_7,0x1600);
  fVar16 = *(float *)(param_7 + 0x324);
  fVar15 = *(float *)(param_7 + 0x328);
  bVar1 = (byte)(((uint)(fVar16 == fVar15) << 0x1e) >> 0x18);
  cVar11 = -((char)((byte)(((uint)(fVar16 < fVar15) << 0x1f) >> 0x18) | bVar1) >> 7);
  if ((bool)cVar11 == (NAN(fVar16) || NAN(fVar15))) {
    uVar6 = 1;
    fVar14 = fVar16;
    fVar15 = fVar16;
  }
  else {
    fVar14 = fVar15;
    if ((cVar11 == '\0') && (fVar14 = fVar16, !(bool)(bVar1 >> 6) && (!NAN(fVar16) && !NAN(fVar15)))
       ) {
      fVar16 = fVar15;
    }
    fVar17 = *(float *)(param_7 + 0x32c);
    if (fVar17 <= fVar15) {
      uVar6 = 2;
    }
    else {
      fVar15 = fVar17;
      if (((int)((uint)(fVar14 < fVar17) << 0x1f) < 0) || (fVar15 = fVar14, fVar16 <= fVar17)) {
        uVar6 = 3;
        fVar14 = fVar15;
      }
      else {
        uVar6 = 3;
        fVar16 = fVar17;
      }
    }
    fVar15 = fVar16;
    if (-1 < (int)((uint)(param_3 < fVar16) << 0x1f)) {
      fVar15 = (float)((uint)(fVar14 < param_3) * (int)fVar14 +
                      (uint)(param_3 <= fVar14) * (int)param_3);
    }
  }
  param_8[0x5d1] = fVar14;
  iVar10 = param_7 + 0x324;
  param_8[0x5d2] = fVar16;
  *(undefined1 *)(param_8 + 0x5d3) = uVar6;
  uVar12 = find_minimum_float_value(iVar10);
  uVar12 = initialize_audio_streaming(fVar15,uVar12);
  uVar13 = find_maximum_float_value(iVar10);
  fVar16 = (float)setup_audio_compression(uVar12,uVar13);
  local_54 = *(float *)(param_7 + 0x324) == fVar16;
  local_53 = *(float *)(param_7 + 0x328) == fVar16;
  local_52 = *(float *)(param_7 + 0x32c) == fVar16;
  process_array_indices(&local_54,aiStack_3c,auStack_50);
  if (local_4c == 0) {
    fVar16 = (float)interpolate_1d_value(fVar16,iVar10,param_7 + 0x1578);
  }
  else {
    fVar16 = local_48[0];
    if (0 < local_4c) {
      pfVar4 = local_48;
      piVar7 = aiStack_3c;
      do {
        piVar8 = piVar7 + 1;
        *pfVar4 = *(float *)(param_7 + (*piVar7 + 0x55d) * 4);
        pfVar4 = pfVar4 + 1;
        piVar7 = piVar8;
        fVar16 = local_48[0];
      } while (aiStack_3c + local_4c != piVar8);
    }
  }
  param_8[0x5d4] = 0x40400000;
  param_1 = param_1 + param_2 * fVar16;
  fVar14 = *(float *)(param_7 + 0x330);
  fVar17 = *(float *)(param_7 + 0x514);
  fVar18 = *(float *)(param_7 + 0x334) - fVar14;
  if ((-1 < (int)((uint)(fVar14 < param_1) << 0x1f)) || (fVar17 <= param_1)) {
    if (param_1 <= fVar14) {
      bVar5 = false;
      goto LAB_0000e8ae;
    }
    if (param_1 < fVar17) {
      fVar17 = 0.0;
      goto LAB_0000e80a;
    }
    bVar5 = false;
LAB_0000e754:
    fVar17 = (((*(float *)(param_7 + 0x1574) + *(float *)(param_7 + 0x138c) * fVar15) -
              (*(float *)(param_7 + 0x1570) + *(float *)(param_7 + 5000) * fVar15)) *
             (param_1 - fVar17)) / fVar18 + *(float *)(param_7 + 0x1574) +
             *(float *)(param_7 + 0x138c) * fVar15;
LAB_0000e794:
    if (!bVar5) goto LAB_0000e80a;
  }
  else {
    if (fVar14 == param_1) {
      bVar5 = true;
LAB_0000e8ae:
      if (fVar17 <= param_1) goto LAB_0000e754;
      fVar17 = ((param_1 - fVar14) *
               ((*(float *)(param_7 + 0x1394) + *(float *)(param_7 + 0x11ac) * fVar15) -
               (*(float *)(param_7 + 0x1390) + *(float *)(param_7 + 0x11a8) * fVar15))) / fVar18 +
               *(float *)(param_7 + 0x1390) + *(float *)(param_7 + 0x11a8) * fVar15;
      goto LAB_0000e794;
    }
    if (fVar17 == param_1) {
      bVar5 = true;
      goto LAB_0000e754;
    }
  }
  fVar14 = (float)initialize_audio_effects((param_1 - fVar14) / fVar18);
  iVar10 = param_7 + (int)(fVar14 + 1.0) * 4;
  iVar9 = param_7 + (int)(fVar14 + 2.0) * 4;
  fVar14 = (param_1 - *(float *)(param_7 + 0x330)) / fVar18 - fVar14;
  fVar17 = fVar14 * *(float *)(iVar9 + 0x138c) + *(float *)(iVar10 + 0x138c) * (1.0 - fVar14) +
           fVar15 * (fVar14 * *(float *)(iVar9 + 0x11a4) +
                    *(float *)(iVar10 + 0x11a4) * (1.0 - fVar14));
LAB_0000e80a:
  iVar10 = validate_float_value(param_1);
  param_8[0x5d5] = 0x40800000;
  param_8[0x5d6] = 0;
  param_8[0x5d7] = 0;
  param_8[0x5d8] = 0;
  param_8[0x5d9] = (uint)(iVar10 == 0) * (int)fVar17;
  param_8[0x5da] = fVar16;
  param_8[0x5db] = fVar16;
  param_8[0x5dc] = fVar16;
  param_8[0x5dd] = fVar16;
  *param_9 = param_1;
  return;
}


