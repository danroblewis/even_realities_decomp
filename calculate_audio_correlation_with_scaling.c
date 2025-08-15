/*
 * Function: calculate_audio_correlation_with_scaling
 * Entry:    0006a700
 * Prototype: undefined __stdcall calculate_audio_correlation_with_scaling(undefined4 correlation_result, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


void calculate_audio_correlation_with_scaling
               (longlong *correlation_result,int param_2,undefined2 *param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *local_2c;
  
  if (0 < param_4) {
    uVar9 = 0;
    uVar8 = 0xffce0000;
    uVar7 = 0;
    local_2c = param_3;
    while( true ) {
      iVar4 = ((int)uVar9 >> 4) + -0xf;
      iVar6 = param_2 + iVar4 * 4;
      uVar5 = *(undefined4 *)(param_2 + iVar4 * 4);
      uVar9 = uVar9 + 0xf;
      iVar4 = (int)(short)*(undefined4 *)(iVar6 + 0x3c) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_FINAL)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x3c) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_FINAL)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x38) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_STATE)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x38) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_STATE)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x34) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_FLAGS)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x34) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_FLAGS)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x30) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_PARAMS)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x30) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_PARAMS)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x2c) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_CONFIG)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x2c) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_CONFIG)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x28) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_STATUS)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x28) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_STATUS)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x24) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_ENABLE)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x24) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_ENABLE)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x20) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_MASK)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x20) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_MASK)[uVar7 * 0x10] >>
                          0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x1c) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_TYPE)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x1c) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_TYPE)[uVar7 * 0x10] >>
                          0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x18) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_PRIORITY)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x18) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_PRIORITY)
                                 [uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x14) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_OFFSET)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x14) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_OFFSET)[uVar7 * 0x10]
                          >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x10) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_BASE)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0x10) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_BASE)[uVar7 * 0x10] >>
                          0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0xc) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_EXTENDED)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0xc) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_EXTENDED)
                                 [uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 8) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_ALT)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 8) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING_ALT)[uVar7 * 0x10] >>
                          0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 4) *
              (int)(short)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 4) >> 0x10) *
              (int)(short)((uint)(&AUDIO_CORRELATION_CALCULATION_WITH_SCALING)[uVar7 * 0x10] >> 0x10
                          ) +
              (int)(short)uVar5 * (int)(short)uVar8 +
              (int)(short)((uint)uVar5 >> 0x10) * (int)(short)((uint)uVar8 >> 0x10);
      lVar2 = (longlong)iVar4 * 0x3ee61bc6;
      lVar3 = lVar2 + *correlation_result;
      uVar7 = (uint)lVar3 >> 0x1e | (int)((ulonglong)lVar3 >> 0x20) * 4;
      uVar1 = (longlong)iVar4 * -0x7dcc378e + correlation_result[1];
      *correlation_result =
           (longlong)(int)uVar7 * 0x7dc75ddb +
           ((longlong)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff);
      correlation_result[1] = (longlong)(int)uVar7 * -0x3dd11141 + lVar2;
      *local_2c = (short)(uVar7 + 0x8000 >> 0x10);
      if (param_4 * 0xf <= (int)uVar9) break;
      uVar8 = *(undefined4 *)(&UNK_0008bfb8 + (uVar9 & 0xf) * 0x40);
      uVar7 = uVar9 & 0xf;
      local_2c = local_2c + 1;
    }
  }
  return;
}


