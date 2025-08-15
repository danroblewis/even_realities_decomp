/*
 * Function: calculate_sensor_statistics_and_thresholds
 * Entry:    00068b68
 * Prototype: undefined calculate_sensor_statistics_and_thresholds()
 */


float * calculate_sensor_statistics_and_thresholds
                  (int param_1,int param_2,float *param_3,float *param_4)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float local_28 [2];
  
  fVar11 = 0.0;
  iVar5 = *(int *)(&DAT_0008bc60 + (param_1 * 5 + param_2) * 4);
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  if (iVar5 < 1) {
    iVar5 = 0;
    iVar3 = iVar5;
  }
  else {
    pfVar7 = param_4 + iVar5;
    pfVar2 = param_3;
    do {
      fVar10 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      fVar10 = fVar10 * fVar10;
      *param_4 = fVar10;
      param_4 = param_4 + 1;
      fVar11 = fVar11 + fVar10;
    } while (param_4 != pfVar7);
    local_28[0] = fVar11;
    iVar3 = iVar5 << 2;
    param_4 = pfVar7;
  }
  iVar6 = param_2 + 1;
  if (param_2 == 4) {
    iVar6 = 6;
  }
  iVar6 = (param_1 + 3) * iVar6 * 0x14;
  if (0x3f < iVar6) {
    iVar6 = 0x40;
  }
  iVar8 = param_1 * 0x514 + param_2 * 0x104;
  pfVar2 = param_4;
  iVar4 = iVar5;
  if (iVar5 < iVar6) {
    piVar9 = (int *)(&DAT_00090c50 + iVar5 * 4 + iVar8);
    pfVar2 = param_4 + (iVar6 - iVar5);
    iVar3 = *(int *)(&DAT_00090c50 + iVar3 + iVar8);
    do {
      piVar9 = piVar9 + 1;
      iVar8 = *piVar9;
      fVar11 = param_3[iVar3] * param_3[iVar3];
      iVar4 = iVar3 + 1;
      if (iVar3 + 1 < iVar8) {
        pfVar7 = param_3 + iVar3 + 1;
        do {
          fVar10 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar11 = fVar11 + fVar10 * fVar10;
          iVar4 = iVar8;
        } while (pfVar7 != param_3 + iVar8);
      }
      bVar1 = iVar6 + (2 - param_1) * -2 <= iVar5;
      fVar11 = fVar11 / (float)(longlong)(iVar8 - iVar3);
      fVar10 = local_28[bVar1];
      *param_4 = fVar11;
      param_4 = param_4 + 1;
      local_28[bVar1] = fVar10 + fVar11;
      iVar5 = iVar5 + 1;
      iVar3 = iVar4;
      iVar4 = iVar6;
    } while (param_4 != pfVar2);
  }
  fVar10 = local_28[1];
  fVar11 = local_28[0];
  if (iVar4 < 0x40) {
    pfVar2 = (float *)fill_memory_buffer(pfVar2,0,(0x40 - iVar4) * 4);
  }
  iVar5 = (uint)(fVar11 * 30.0 < fVar10) << 0x1f;
  if (iVar5 < 0) {
    pfVar2 = (float *)0x1;
  }
  if (-1 < iVar5) {
    pfVar2 = (float *)0x0;
  }
  return pfVar2;
}


