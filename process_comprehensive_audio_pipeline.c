/*
 * Function: process_comprehensive_audio_pipeline
 * Entry:    00069238
 * Prototype: undefined process_comprehensive_audio_pipeline(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


undefined4
process_comprehensive_audio_pipeline
          (byte *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int aiStack_1e0 [4];
  int aiStack_1d0 [2];
  undefined1 auStack_1c8 [4];
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined1 *local_1b8;
  uint local_1b4;
  undefined1 local_1ac;
  byte local_1ab;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [28];
  undefined1 auStack_184 [80];
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [28];
  uint local_10c;
  uint local_108;
  
  if (param_1 != (byte *)0x0) {
    if (param_5 - 0x14U < 0x17d) {
      iVar6 = (uint)param_1[1] * (*param_1 + 3) + *param_1 + 3;
      piVar7 = aiStack_1e0 + iVar6 * -10;
      (*(code *)(&PTR_LAB_00068cb8_1_0008bc88)[param_2])(param_1,param_3,param_4);
      uVar9 = (uint)param_1[1];
      iVar11 = *(int *)(param_1 + 0x4a0);
      iVar12 = uVar9 + 1;
      if (uVar9 == 4) {
        iVar12 = 6;
      }
      uVar8 = (uint)*param_1;
      bVar1 = param_1[2];
      *piVar7 = iVar11;
      local_1bc = *(int *)(param_1 + 0x4a8);
      iVar10 = *(int *)(param_1 + 0x4a4);
      local_1b4 = (uint)bVar1;
      uVar5 = calculate_sensor_data_metrics(uVar8,(uint)bVar1,param_5,param_1 + 4);
      *piVar7 = (int)auStack_1a8;
      local_1b8 = auStack_1c8 + iVar6 * -0x28;
      local_1c4 = iVar12 * 10;
      local_1c0 = iVar12 * 5;
      local_1ab = process_audio_and_detect_voice_activity(uVar8,local_1b4,param_1 + 0x10,iVar11);
      iVar12 = local_1b4 + 1;
      if (local_1b4 == 4) {
        iVar12 = 6;
      }
      copy_memory_safe(iVar11 + local_1c0 * -4,
                       iVar11 + ((uVar8 + 3) * iVar12 * 0x14 - local_1c4) * 2,local_1c0 << 2);
      *piVar7 = local_1bc;
      uVar3 = local_1b4;
      aiStack_1e0[iVar6 * -10 + 1] = iVar10;
      process_audio_signal_transformation_matrix(uVar8,uVar3,uVar9,iVar10);
      iVar11 = calculate_sensor_statistics_and_thresholds(uVar8,uVar9,iVar10,auStack_128);
      if (iVar11 != 0) {
        reset_audio_state_flag(auStack_1a8);
      }
      uVar4 = calculate_sensor_threshold_limit(uVar8,uVar9,auStack_128);
      aiStack_1e0[iVar6 * -10 + 1] = iVar10;
      aiStack_1e0[iVar6 * -10 + 2] = iVar10;
      local_1ac = uVar4;
      *piVar7 = (int)auStack_1a0;
      process_audio_signal_transformation_matrix_alt(uVar8,uVar9,auStack_128,uVar5);
      *piVar7 = (int)auStack_184;
      aiStack_1e0[iVar6 * -10 + 1] = iVar10;
      process_audio_data_with_complex_filtering(uVar8,local_1ac,iVar11,param_5);
      aiStack_1e0[iVar6 * -10 + 2] = iVar10;
      aiStack_1e0[iVar6 * -10 + 3] = (int)local_1b8;
      *piVar7 = (int)auStack_184;
      *(undefined1 **)(auStack_1c8 + iVar6 * -0x28 + -8) = auStack_134;
      aiStack_1e0[iVar6 * -10 + 1] = (int)(param_1 + 0x498);
      process_audio_data_with_threshold_calculations(uVar8,uVar9,param_5,local_1ab);
      uVar4 = local_1ac;
      bVar1 = param_1[1];
      bVar2 = *param_1;
      iVar11 = *(int *)(param_1 + 0x4a4);
      initialize_buffer_structure_with_bit_manipulation(auStack_128,1,param_6,param_5);
      write_mode_data_to_buffer(auStack_128,bVar1,uVar4);
      write_audio_mode_data_to_buffer_with_bit_manipulation(auStack_128,bVar2,bVar1,auStack_134);
      process_audio_data_with_complex_encoding(auStack_128,auStack_184);
      if ((int)(local_108 + 1) < 0x21) {
        local_10c = local_10c | (uint)local_1ab << (local_108 & 0xff);
        local_108 = local_108 + 1;
      }
      else {
        write_data_to_buffer_with_bit_manipulation(auStack_128,(uint)local_1ab,1);
      }
      write_audio_data_to_buffer_with_bit_manipulation(auStack_128,auStack_1a0);
      if (local_1ab != 0) {
        write_bits_to_buffer_with_overflow_handling(auStack_128,auStack_1a8);
      }
      aiStack_1e0[iVar6 * -10 + 2] = (int)auStack_134;
      aiStack_1e0[iVar6 * -10 + 3] = iVar11;
      aiStack_1e0[iVar6 * -10 + 1] = (int)local_1b8;
      *piVar7 = param_5;
      process_audio_data_with_complex_bit_manipulation(auStack_128,bVar2,bVar1,uVar4);
      process_buffer_and_format_data(auStack_128);
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  return 0xffffffff;
}


