/*
 * Function: initialize_and_process_comprehensive_audio_data_structure
 * Entry:    00071358
 * Prototype: undefined __stdcall initialize_and_process_comprehensive_audio_data_structure(undefined4 audio_data_structure, undefined4 audio_context, undefined4 audio_config, undefined4 audio_buffer, undefined4 audio_parameters, undefined4 audio_settings)
 */


int initialize_and_process_comprehensive_audio_data_structure
              (int audio_data_structure,int audio_context,undefined4 audio_config,int *audio_buffer,
              int audio_parameters,undefined4 *audio_settings)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  undefined *local_2c;
  int local_28;
  undefined4 local_24;
  
  if (((audio_data_structure == 0) || (audio_context == 0)) || (audio_buffer == (int *)0x0)) {
    return -0x7d3;
  }
  fill_memory_buffer(audio_data_structure,0,0x94);
  setup_bluetooth_stack(audio_data_structure + 0x58,1);
  *(int *)(audio_data_structure + 0xa0) = audio_context;
  *(undefined4 *)(audio_data_structure + 0x70) = audio_config;
  *(int *)(audio_context + 0x24) = audio_data_structure;
  *(undefined4 *)(audio_data_structure + 0x78) = 0x71295;
  iVar6 = *(int *)(audio_data_structure + 0xa0);
  *(undefined1 **)(audio_data_structure + 0x7c) = &LAB_000859a2_1;
  *(undefined4 *)(audio_data_structure + 0x80) = 0x85a9d;
  *(undefined4 *)(audio_data_structure + 0x84) = 0x85b0d;
  *(undefined4 *)(audio_data_structure + 0x88) = 0x710b5;
  *(undefined4 *)(audio_data_structure + 0x8c) = 0x859c3;
  iVar4 = *(int *)(iVar6 + 0x18);
  if (iVar4 == 0) {
    if (audio_settings == (undefined4 *)0x0) {
      return -0x7d3;
    }
    uVar1 = audio_settings[1];
    uVar3 = audio_settings[2];
    *(undefined4 *)(audio_data_structure + 0x94) = *audio_settings;
    *(undefined4 *)(audio_data_structure + 0x98) = uVar1;
    *(undefined4 *)(audio_data_structure + 0x9c) = uVar3;
  }
  uVar1 = (**(code **)(*(int *)(iVar6 + 0x20) + 0x10))(iVar6);
  *(undefined4 *)(audio_context + 0x10) = uVar1;
  *(undefined4 *)(audio_context + 0x14) = 0;
  *(byte *)(audio_data_structure + 0x90) = (byte)uVar1 & 1;
  if (iVar4 == 0) {
    iVar6 = audio_parameters;
    if (*(char *)(audio_settings + 2) != '\0') {
      iVar6 = audio_parameters + 0xc;
    }
    *(int *)(audio_data_structure + 0xb0) = iVar6;
    if (audio_parameters == 0) {
      return -0x7d3;
    }
    if ((*(int *)(audio_parameters + 8) == 0) || (*(int *)(iVar6 + 8) == 0)) {
      return -0x7d2;
    }
    local_38 = "rx_vq";
    local_34 = "tx_vq";
    local_30 = 0x7118d;
    local_2c = &DAT_000859b1;
    *(undefined4 *)(audio_data_structure + 0xa4) = **(undefined4 **)(audio_context + 0x2c);
    *(undefined4 *)(audio_data_structure + 0xa8) =
         *(undefined4 *)(*(int *)(audio_context + 0x2c) + 0x18);
  }
  *(int *)(audio_data_structure + 0xb4) = audio_data_structure + 0xb4;
  *(int *)(audio_data_structure + 0xb8) = audio_data_structure + 0xb4;
  *(int **)(audio_data_structure + 0xac) = audio_buffer;
  iVar6 = process_audio_data_with_callback_execution
                    (*(undefined4 *)(audio_data_structure + 0xa0),0,2,&local_38,&local_30);
  if (iVar6 != 0) {
    return iVar6;
  }
  update_buffer_status_flags(*(undefined4 *)(audio_data_structure + 0xa8));
  *(int **)(**(int **)(audio_context + 0x2c) + 0x28) = audio_buffer;
  *(int **)(*(int *)(*(int *)(audio_context + 0x2c) + 0x18) + 0x28) = audio_buffer;
  if (iVar4 == 0) {
    local_24 = *(undefined4 *)(audio_data_structure + 0x98);
    for (uVar5 = 0; uVar5 < *(ushort *)(*(int *)(audio_data_structure + 0xa4) + 10);
        uVar5 = uVar5 + 1) {
      iVar6 = adjust_buffer_pointer_and_size
                        (audio_parameters,*(undefined4 *)(audio_data_structure + 0x98));
      if (iVar6 == 0) {
        return -0x7d2;
      }
      uVar2 = iVar6 - *audio_buffer;
      if ((uint)audio_buffer[2] <= uVar2) {
        uVar2 = 0xffffffff;
      }
      local_28 = iVar6;
      fill_circular_buffer_with_value
                (audio_buffer,uVar2,0,*(undefined4 *)(audio_data_structure + 0x98));
      iVar6 = process_audio_buffer_descriptors
                        (*(undefined4 *)(audio_data_structure + 0xa4),&local_28,0,1,iVar6);
      if (iVar6 != 0) {
        return iVar6;
      }
    }
    *(int *)audio_data_structure = audio_data_structure;
    *(int *)(audio_data_structure + 4) = audio_data_structure;
    if (*(char *)(audio_data_structure + 0x90) == '\0') goto LAB_00071498;
  }
  else {
    *(int *)audio_data_structure = audio_data_structure;
    *(int *)(audio_data_structure + 4) = audio_data_structure;
    if (*(char *)(audio_data_structure + 0x90) == '\0') {
      return 0;
    }
  }
  initialize_data_structure_with_linked_list
            (audio_data_structure,audio_data_structure + 8,&DAT_000f7c34,0x35,0x35,0x85a05,0);
  if (iVar4 != 0) {
    return 0;
  }
LAB_00071498:
  (**(code **)(*(int *)(*(int *)(audio_data_structure + 0xa0) + 0x20) + 0xc))
            (*(int *)(audio_data_structure + 0xa0),4);
  return 0;
}


