/*
 * Function: calculate_sensor_threshold_limit
 * Entry:    00068a10
 * Prototype: undefined __stdcall calculate_sensor_threshold_limit(undefined4 sensor_type, undefined4 threshold_count, undefined4 param_3)
 */


uint calculate_sensor_threshold_limit(int sensor_type,uint threshold_count,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float afStack_30 [5];
  
  if (threshold_count != 0) {
    uVar7 = 0;
    uVar6 = 0;
    iVar2 = (threshold_count - 1) + sensor_type * 4;
    do {
      iVar3 = (int)(char)(&DAT_0008bbe0)[uVar7 * 4 + iVar2 * 0x10];
      iVar1 = (int)(char)(&DAT_0008bbe0)[uVar7 * 4 + iVar2 * 0x10 + 1];
      fVar10 = *(float *)(param_3 + iVar3 * 4);
      if (iVar3 + 1 < iVar1) {
        pfVar4 = (float *)(iVar3 * 4 + 4 + param_3);
        do {
          fVar9 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          fVar10 = fVar10 + fVar9;
        } while ((float *)(param_3 + iVar1 * 4) != pfVar4);
      }
      if (uVar7 == 0) {
        iVar5 = 0x14;
      }
      else {
        iVar5 = 10;
      }
      uVar7 = uVar7 + 1 & 0xff;
      if ((float)(longlong)((iVar1 - iVar3) * iVar5) <= fVar10) {
        uVar6 = uVar7;
      }
    } while (uVar7 < threshold_count);
    if (threshold_count <= uVar6) {
      return uVar6;
    }
    iVar3 = (int)(char)(&DAT_0008bbe0)[uVar6 * 4 + iVar2 * 0x10];
    iVar1 = *(int *)(&DAT_0008bbc0 + (sensor_type * 4 + uVar6) * 4);
    afStack_30[3] = 100.0;
    afStack_30[2] = 100.0;
    afStack_30[1] = 199.52623;
    afStack_30[0] = 31.622776;
    iVar2 = iVar3 - iVar1;
    if (-1 < iVar1) {
      pfVar4 = (float *)(param_3 + ((iVar2 + 1) - iVar1) * 4);
      pfVar8 = (float *)(param_3 + (iVar2 + 1) * 4);
      do {
        fVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar10 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        iVar2 = iVar2 + 1;
        if (fVar9 * afStack_30[uVar6] < fVar10) {
          return uVar6;
        }
      } while (iVar2 <= iVar3);
    }
  }
  return threshold_count;
}


