/*
 * Function: handle_configuration_setting_with_flags
 * Entry:    0004e83c
 * Prototype: undefined handle_configuration_setting_with_flags()
 */


/* WARNING: Type propagation algorithm not settling */

int handle_configuration_setting_with_flags
              (int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_20 [3];
  uint local_14;
  
  local_20[1] = 1;
  local_20[0] = param_1;
  local_20[2] = param_3;
  local_14 = param_4;
  iVar1 = setup_device_buffer_with_validation(9,local_20);
  if ((iVar1 == 0) &&
     ((iVar1 = setup_device_buffer_with_parameters(9,local_20 + 1,local_20 + 2), iVar1 == 0 ||
      (iVar1 == -0xc)))) {
    if (local_14 < 0x10000) {
      uVar3 = 0;
      uVar2 = 0;
      do {
        uVar2 = uVar2 + local_14;
        if (*(uint *)(local_20[0] + 8) < uVar2) {
          uVar3 = uVar3 & 0xffff;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != 8);
      CONFIGURATION_SETTING_WITH_FLAGS_STATE_2 = (undefined2)local_14;
      CONFIGURATION_SETTING_WITH_FLAGS_STATE_3 = (undefined2)uVar3;
      CONFIGURATION_SETTING_WITH_FLAGS_STATE_1 = *(undefined4 *)(local_20[0] + 4);
      CONFIGURATION_SETTING_WITH_FLAGS_STATE_4 = *(undefined4 *)(local_20[0] + 0xc);
      iVar1 = initialize_and_process_complex_data_structure(&DAT_2000a114);
      if (iVar1 == 0) {
        DAT_2000a118 = &DAT_200027fc;
        initialize_buffer_structure_with_flags(&DAT_2000a114);
        DAT_2000a118 = &DAT_200027fc;
        initialize_buffer_structure_with_size(&DAT_2000a114);
      }
    }
    else {
      iVar1 = -0x21;
    }
  }
  return iVar1;
}


