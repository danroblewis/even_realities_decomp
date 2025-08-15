/*
 * Function: apply_audio_filter_with_bias_and_scaling
 * Entry:    0006bd74
 * Prototype: undefined apply_audio_filter_with_bias_and_scaling(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


void apply_audio_filter_with_bias_and_scaling
               (int param_1,int param_2,float *param_3,int param_4,int param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)((&DAT_000903ec)[param_4 * 2] + param_5 * 4);
  pfVar2 = (float *)&DAT_0008ce4c;
  pfVar3 = param_6;
  do {
    *pfVar3 = 0.0;
    fVar5 = *pfVar2;
    fVar6 = *param_3;
    *pfVar3 = fVar6 * fVar5;
    fVar5 = fVar6 * fVar5 + param_3[1] * pfVar2[1];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[2] * pfVar2[2];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[3] * pfVar2[3];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[4] * pfVar2[4];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[5] * pfVar2[5];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[6] * pfVar2[6];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[7] * pfVar2[7];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[8] * pfVar2[8];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[9] * pfVar2[9];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[10] * pfVar2[10];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[0xb] * pfVar2[0xb];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[0xc] * pfVar2[0xc];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[0xd] * pfVar2[0xd];
    *pfVar3 = fVar5;
    fVar5 = fVar5 + param_3[0xe] * pfVar2[0xe];
    *pfVar3 = fVar5;
    pfVar1 = pfVar2 + 0xf;
    pfVar2 = pfVar2 + 0x10;
    *pfVar3 = fVar5 + param_3[0xf] * *pfVar1;
    pfVar3 = pfVar3 + 1;
  } while (pfVar2 != (float *)&DAT_0008d24c);
  *param_6 = (float)(&DAT_00090850)[param_1 * 8] + fVar4 * *param_6;
  param_6[1] = (float)(&DAT_00090854)[param_1 * 8] + fVar4 * param_6[1];
  param_6[2] = (float)(&DAT_00090858)[param_1 * 8] + fVar4 * param_6[2];
  param_6[3] = (float)(&DAT_0009085c)[param_1 * 8] + fVar4 * param_6[3];
  param_6[4] = (float)(&DAT_00090860)[param_1 * 8] + fVar4 * param_6[4];
  param_6[5] = (float)(&DAT_00090864)[param_1 * 8] + fVar4 * param_6[5];
  param_6[6] = (float)(&DAT_00090868)[param_1 * 8] + fVar4 * param_6[6];
  param_6[7] = (float)(&DAT_0009086c)[param_1 * 8] + param_6[7] * fVar4;
  param_6[8] = (float)(&DAT_00090450)[param_2 * 8] + fVar4 * param_6[8];
  param_6[9] = (float)(&DAT_00090454)[param_2 * 8] + param_6[9] * fVar4;
  param_6[10] = (float)(&DAT_00090458)[param_2 * 8] + fVar4 * param_6[10];
  param_6[0xb] = (float)(&DAT_0009045c)[param_2 * 8] + fVar4 * param_6[0xb];
  param_6[0xc] = (float)(&DAT_00090460)[param_2 * 8] + fVar4 * param_6[0xc];
  param_6[0xd] = (float)(&DAT_00090464)[param_2 * 8] + fVar4 * param_6[0xd];
  param_6[0xe] = (float)(&DAT_00090468)[param_2 * 8] + fVar4 * param_6[0xe];
  param_6[0xf] = (float)(&DAT_0009046c)[param_2 * 8] + param_6[0xf] * fVar4;
  return;
}


