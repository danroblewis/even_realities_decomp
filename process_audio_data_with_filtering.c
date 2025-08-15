/*
 * Function: process_audio_data_with_filtering
 * Entry:    00069468
 * Prototype: undefined process_audio_data_with_filtering()
 */


void process_audio_data_with_filtering(short *param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  param_3 = param_3 * 8;
  iVar10 = (int)param_1[-2];
  iVar7 = (int)param_1[-1];
  iVar8 = (int)*param_1;
  if (param_4 < param_4 + param_2 * 2) {
    psVar5 = param_1 + 5;
    iVar6 = param_4 + 8;
    do {
      sVar1 = psVar5[-4];
      sVar4 = (short)iVar8;
      iVar9 = (int)*(short *)(&DAT_0008bc98 + param_3);
      *(short *)(iVar6 + -8) =
           (short)((int)(short)iVar10 * (int)*(short *)(&DAT_0008bc9e + param_3) +
                   (int)(short)iVar7 * (int)*(short *)(&DAT_0008bc9c + param_3) +
                   sVar1 * iVar9 + (int)*(short *)(&DAT_0008bc9a + param_3) * (int)sVar4 >> 0xf);
      sVar2 = psVar5[-3];
      iVar10 = (int)sVar2;
      *(short *)(iVar6 + -6) =
           (short)((int)(short)iVar7 * (int)*(short *)(&DAT_0008bc9e + param_3) +
                   (int)sVar4 * (int)*(short *)(&DAT_0008bc9c + param_3) +
                   iVar9 * iVar10 + (int)*(short *)(&DAT_0008bc9a + param_3) * (int)sVar1 >> 0xf);
      sVar3 = psVar5[-2];
      iVar7 = (int)sVar3;
      *(short *)(iVar6 + -4) =
           (short)((int)sVar4 * (int)*(short *)(&DAT_0008bc9e + param_3) +
                   (int)sVar1 * (int)*(short *)(&DAT_0008bc9c + param_3) +
                   iVar9 * iVar7 + (int)*(short *)(&DAT_0008bc9a + param_3) * (int)sVar2 >> 0xf);
      iVar8 = (int)psVar5[-1];
      psVar5 = psVar5 + 4;
      *(short *)(iVar6 + -2) =
           (short)((int)sVar1 * (int)*(short *)(&DAT_0008bc9e + param_3) +
                   (int)sVar2 * (int)*(short *)(&DAT_0008bc9c + param_3) +
                   iVar9 * iVar8 + (int)*(short *)(&DAT_0008bc9a + param_3) * (int)sVar3 >> 0xf);
      iVar6 = iVar6 + 8;
    } while (psVar5 != (short *)((int)param_1 + (param_2 * 2 - 1U & 0xfffffff8) + 0x12));
  }
  return;
}


