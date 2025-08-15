/*
 * Function: process_audio_data_with_scaling_and_thresholds
 * Entry:    0006f164
 * Prototype: undefined __stdcall process_audio_data_with_scaling_and_thresholds(undefined4 audio_mode, undefined4 channel_count, undefined4 scaling_factor, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */


void process_audio_data_with_scaling_and_thresholds
               (uint audio_mode,int channel_count,uint scaling_factor,int param_4,int param_5,
               int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = (scaling_factor ^ (int)scaling_factor >> 0x1f) - ((int)scaling_factor >> 0x1f);
  iVar5 = (int)uVar4 >> 6;
  fVar8 = *(float *)(&DAT_0008d24c + (uVar4 & 0x3f) * 4);
  if (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    do {
      iVar5 = iVar5 + -1;
      fVar8 = fVar8 * 193.06978;
    } while (iVar5 != -1);
  }
  if (-1 < (int)scaling_factor) {
    fVar8 = 1.0 / fVar8;
  }
  iVar7 = 0;
  iVar5 = channel_count * (audio_mode + 3) + audio_mode + 3;
  iVar3 = iVar5 * 0x14;
  *param_6 = iVar3;
  iVar6 = param_4 + 4;
  do {
    while( true ) {
      *(float *)(iVar6 + -4) = *(float *)(iVar6 + -4) * fVar8;
      fVar10 = fVar8 * *(float *)(param_4 + 4);
      *(float *)(param_4 + 4) = fVar10;
      fVar9 = (float)FPMinNum(ABS(*(float *)(iVar6 + -4)) + 0.375,0x46fffe00);
      iVar1 = (uint)(*(float *)(iVar6 + -4) < 0.0) << 0x1f;
      if (iVar1 < 0) {
        audio_mode = 1;
      }
      if (-1 < iVar1) {
        audio_mode = 0;
      }
      fVar10 = (float)FPMinNum(ABS(fVar10) + 0.375,0x46fffe00);
      uVar4 = (uint)(0.0 < fVar9) * (int)fVar9 & 0xffff;
      if (uVar4 == 0) {
        audio_mode = 0;
      }
      else {
        audio_mode = audio_mode & 1;
      }
      audio_mode = audio_mode + uVar4 * 2;
      *(short *)(param_5 + iVar7 * 2) = (short)audio_mode;
      iVar1 = (uint)(*(float *)(param_4 + 4) < 0.0) << 0x1f;
      if (iVar1 < 0) {
        audio_mode = 1;
      }
      if (-1 < iVar1) {
        audio_mode = 0;
      }
      uVar2 = (uint)(0.0 < fVar10) * (int)fVar10 & 0xffff;
      if (uVar2 == 0) {
        audio_mode = 0;
      }
      else {
        audio_mode = audio_mode & 1;
      }
      audio_mode = audio_mode + uVar2 * 2;
      *(short *)(param_5 + 2 + iVar7 * 2) = (short)audio_mode;
      if (uVar4 != 0 || uVar2 != 0) break;
      iVar7 = iVar7 + 2;
      *param_6 = *param_6 + -2;
      param_4 = param_4 + 8;
      iVar6 = iVar6 + 8;
      if (iVar7 + iVar5 * -0x14 < 0 == SBORROW4(iVar7,iVar3)) {
        return;
      }
    }
    iVar7 = iVar7 + 2;
    *param_6 = iVar3;
    param_4 = param_4 + 8;
    iVar6 = iVar6 + 8;
  } while (iVar3 - iVar7 != 0 && iVar7 <= iVar3);
  return;
}


