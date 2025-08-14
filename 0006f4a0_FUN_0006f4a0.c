/*
 * Function: FUN_0006f4a0
 * Entry:    0006f4a0
 * Prototype: undefined FUN_0006f4a0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 */


void FUN_0006f4a0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 float *param_6,int param_7,undefined4 param_8,int *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 local_a0 [3];
  int aiStack_94 [2];
  undefined4 *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_6c [16];
  
  iVar8 = param_2 * (param_1 + 3) + param_1 + 3;
  iVar12 = iVar8 * 5;
  iVar10 = (0x10 < iVar12) + 5;
  if (0x20 < iVar12) {
    iVar10 = (0x10 < iVar12) + 6;
  }
  if (0x40 < iVar12) {
    iVar10 = iVar10 + 1;
  }
  if (param_3 < 0x141) {
    iVar12 = (param_3 + -1) / 0xa0;
    iVar7 = (param_3 + -1) * 0x66666667;
  }
  else {
    iVar12 = 2;
    iVar7 = param_3;
  }
  local_88 = param_3;
  local_84 = param_1;
  local_78 = param_2;
  iVar2 = FUN_00068b14(param_2,iVar7);
  iVar3 = FUN_0006b36c(param_4);
  iVar4 = FUN_0006efd8();
  iVar5 = FUN_000709d8(param_5);
  uVar18 = FPMaxNum((float)(longlong)(int)param_6[1] + *param_6,0xc2200000);
  fVar20 = (float)FPMinNum(uVar18,0x42200000);
  iVar7 = (param_2 + 1) * 5;
  local_7c = (((((param_3 * 8 - (iVar10 + 3 + iVar12)) - iVar2) - iVar3) - iVar4) - iVar5) + -0xb;
  local_80 = (param_3 * 8) / ((param_2 + 1) * 10);
  if (local_80 < 0x74) {
    local_80 = iVar7 + 0x69 + local_80;
  }
  else {
    local_80 = iVar7 + 0xdc;
  }
  iVar12 = iVar8 * 0x14 >> 2;
  fVar14 = 0.0;
  fVar20 = fVar20 * 0.2 + *param_6 * 0.8;
  local_8c = local_a0;
  iVar8 = -(iVar12 * 4 + 7U & 0xfffff8);
  iVar7 = param_7 + 0x10;
  iVar10 = iVar12 + -1;
  piVar1 = (int *)((int)aiStack_94 + iVar8 + 4);
  iVar12 = iVar7 + iVar12 * 0x10;
  piVar6 = (int *)((int)aiStack_94 + iVar8);
  do {
    fVar19 = *(float *)(iVar7 + -0x10) * *(float *)(iVar7 + -0x10);
    fVar15 = *(float *)(iVar7 + -0xc) * *(float *)(iVar7 + -0xc);
    fVar16 = *(float *)(iVar7 + -8) * *(float *)(iVar7 + -8);
    fVar17 = *(float *)(iVar7 + -4) * *(float *)(iVar7 + -4);
    uVar18 = FPMaxNum(fVar19,fVar15);
    uVar18 = FPMaxNum(uVar18,fVar16);
    uVar18 = FPMaxNum(uVar18,fVar17);
    fVar15 = (float)FPMaxNum(fVar19 + fVar15 + fVar16 + fVar17,0x2edbe6ff);
    fVar14 = (float)FPMaxNum(fVar14,uVar18);
    fVar15 = fVar15 * fVar15;
    uVar9 = (uint)((int)fVar15 << 9) >> 0x1b;
    iVar7 = iVar7 + 0x10;
    piVar6 = piVar6 + 1;
    *piVar6 = (((uint)fVar15 >> 0x16) - 0xfe) * 0xc0a9 +
              (uint)*(ushort *)(&DAT_0008d350 + uVar9 * 4) +
              ((int)((uint)*(ushort *)(&LAB_0008d352 + uVar9 * 4) *
                    ((uint)((int)fVar15 << 0xe) >> 0x10)) >> 0x10);
  } while (iVar12 != iVar7);
  iVar8 = 0xff - local_80;
  iVar7 = 8;
  iVar12 = 0x80;
LAB_0006f66c:
  iVar3 = iVar8 - iVar12;
  iVar2 = iVar10;
  if (iVar10 < 0) {
    iVar4 = 0;
  }
  else {
    piVar6 = piVar1 + iVar10 + 1;
    do {
      piVar6 = piVar6 + -1;
      if (iVar3 * 0xb6db - *piVar6 == 0 || iVar3 * 0xb6db < *piVar6) {
        iVar4 = 0;
        piVar6 = piVar1 + iVar2 + 1;
        local_74 = iVar3;
        goto LAB_0006f6c2;
      }
      bVar13 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar13);
    iVar4 = 0;
  }
  goto LAB_0006f6d6;
  while (iVar4 = iVar4 + 0x2b333, piVar1 != piVar6) {
LAB_0006f6c2:
    piVar6 = piVar6 + -1;
    iVar5 = *piVar6 + iVar3 * -0xb6db;
    if (-1 < iVar5) {
      if (iVar5 < 0x2b0000) {
        iVar5 = iVar5 + 0x70000;
      }
      else {
        iVar5 = (iVar5 + -0x120000) * 2;
      }
      iVar4 = iVar4 + iVar5;
      if (piVar1 == piVar6) break;
      goto LAB_0006f6c2;
    }
  }
LAB_0006f6d6:
  if (iVar4 <= (int)((float)(longlong)local_7c + fVar20 + 0.5) * 0x16666) {
    iVar8 = iVar3;
    iVar2 = iVar10;
  }
  iVar10 = iVar2;
  iVar7 = iVar7 + -1;
  iVar12 = iVar12 >> 1;
  if (iVar7 == 0) goto code_r0x0006f6e6;
  goto LAB_0006f66c;
code_r0x0006f6e6:
  if (fVar14 == 0.0) {
    iVar7 = (int)(float)(longlong)-local_80;
LAB_0006f712:
    iVar8 = iVar7;
    iVar10 = local_78;
    iVar12 = local_84;
    puVar11 = local_8c;
    fVar14 = 0.0;
    local_8c[1] = param_9 + 1;
    *puVar11 = param_8;
    FUN_0006f164(iVar12,iVar10,iVar8,param_7);
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = param_9 + 1;
    iVar12 = FUN_0006f28c(iVar12,iVar10,local_88,param_8);
    fVar20 = 0.0;
  }
  else {
    fVar14 = (float)FUN_00075d5c(SQRT(fVar14) * 3.0517927e-05);
    iVar10 = local_78;
    iVar12 = local_84;
    puVar11 = local_8c;
    fVar14 = (float)FPRoundInt(fVar14 * 28.0,0x20,1,0);
    iVar7 = (int)fVar14;
    if (iVar8 < (int)fVar14) goto LAB_0006f712;
    local_8c[1] = param_9 + 1;
    *puVar11 = param_8;
    FUN_0006f164(iVar12,iVar10,iVar8,param_7);
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = param_9 + 1;
    iVar12 = FUN_0006f28c(iVar12,iVar10,local_88,param_8);
    fVar14 = (float)(local_7c - iVar12);
  }
  param_6[1] = fVar14;
  *param_6 = fVar20;
  iVar7 = local_80 + iVar8;
  local_6c[0] = 0x50;
  local_6c[1] = 500;
  local_6c[2] = 0x352;
  local_6c[3] = 0xe6;
  local_6c[4] = 0x401;
  local_6c[5] = 0x6a4;
  local_6c[6] = 0x17c;
  local_6c[7] = 0x60e;
  local_6c[8] = 0x9f6;
  local_6c[9] = 0x212;
  local_6c[10] = 0x81b;
  local_6c[0xb] = 0xd48;
  local_6c[0xc] = 0x2a8;
  local_6c[0xd] = 0xa28;
  local_6c[0xe] = 0x109a;
  iVar10 = local_6c[local_78 * 3];
  if (iVar12 < iVar10) {
    iVar2 = 0x18;
    iVar3 = 0x30;
    iVar10 = (iVar12 + 0x30) * 3;
  }
  else {
    iVar2 = local_6c[local_78 * 3 + 1];
    if (iVar12 < iVar2) {
      iVar3 = (iVar2 - iVar10) * 0x30;
      iVar10 = (iVar2 + (iVar10 + 0x30) * -3) * (iVar12 - iVar10) +
               (iVar2 - iVar10) * (iVar10 + 0x30) * 3;
      iVar2 = iVar3 >> 1;
    }
    else {
      iVar2 = 0x18;
      iVar10 = local_6c[local_78 * 3 + 2];
      if (iVar12 <= local_6c[local_78 * 3 + 2]) {
        iVar10 = iVar12;
      }
      iVar3 = 0x30;
    }
  }
  iVar3 = (iVar10 + iVar2) / iVar3;
  if (iVar12 < local_7c - (iVar3 + 2)) {
    uVar9 = -(uint)(0 < iVar7);
LAB_0006f8ec:
    if (uVar9 == 0) goto LAB_0006f7b4;
  }
  else {
    if (iVar12 <= local_7c) goto LAB_0006f7b4;
    uVar9 = (uint)(iVar7 < 0xff);
    if ((0xfd < iVar7) || (iVar12 < iVar3 + local_7c)) goto LAB_0006f8ec;
    uVar9 = uVar9 + 1;
  }
  puVar11[1] = param_9 + 1;
  *puVar11 = param_8;
  FUN_0006f164(local_84,local_78,uVar9,param_7);
  iVar7 = local_80 + uVar9 + iVar8;
LAB_0006f7b4:
  *param_9 = iVar7;
  puVar11[2] = param_9 + 2;
  *puVar11 = param_9 + 1;
  puVar11[1] = local_7c;
  FUN_0006f28c(local_84,local_78,local_88,param_8);
  return;
}


