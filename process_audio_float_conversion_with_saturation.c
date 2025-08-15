/*
 * Function: process_audio_float_conversion_with_saturation
 * Entry:    00068de8
 * Prototype: undefined process_audio_float_conversion_with_saturation()
 */


void process_audio_float_conversion_with_saturation(byte *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  
  iVar4 = param_1[2] + 1;
  if (param_1[2] == 4) {
    iVar4 = 6;
  }
  pfVar2 = *(float **)(param_1 + 0x4a4);
  puVar3 = (undefined2 *)(*(int *)(param_1 + 0x4a0) + -2);
  pfVar5 = pfVar2 + (*param_1 + 3) * iVar4 * 0x14;
  do {
    fVar6 = (float)setup_audio_buffers(*param_2,0xf);
    *pfVar2 = fVar6;
    pfVar2 = pfVar2 + 1;
    uVar1 = SignedSaturate((int)fVar6,0xf);
    SignedDoesSaturate((int)fVar6,0xf);
    param_2 = param_2 + param_3;
    puVar3 = puVar3 + 1;
    *puVar3 = (short)uVar1;
  } while (pfVar2 != pfVar5);
  return;
}


