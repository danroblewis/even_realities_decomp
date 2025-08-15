/*
 * Function: process_sha256_context_with_comprehensive_state_management
 * Entry:    0007b694
 * Prototype: undefined process_sha256_context_with_comprehensive_state_management()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_sha256_context_with_comprehensive_state_management
              (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    return 0xf1000b;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0xf10000;
  }
  if (param_1[0x17] == 0) {
    if (0xfff < param_4) {
      return 0xf10005;
    }
  }
  else if ((param_1[0x17] == 1) && (0xffff < param_4)) {
    return 0xf10005;
  }
  if (*(char *)(param_1 + 0xf) == '\x04') {
    iVar3 = validate_sha256_parameters_with_size_checking(param_1[0x10],param_1[0xc]);
    if (iVar3 == 0) {
      _DAT_50845400 = *INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY;
      _DAT_50845404 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[1];
      _DAT_50845408 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[2];
      _DAT_5084540c = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[3];
      _DAT_50845410 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[4];
      _DAT_50845414 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[5];
      _DAT_50845418 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[6];
      _DAT_5084541c = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[7];
      uVar5 = param_1[0xc];
      if (uVar5 < 3) {
        iVar4 = uVar5 * 8 + 0x10;
        iVar3 = derive_sha256_key_with_counter_increment
                          (param_1[0x10],uVar5,param_1[0x11],param_1[0x12],param_1[0x13],
                           param_1[0x14],param_1 + 4,iVar4);
        if (iVar3 != 0) {
          _DAT_50845400 = *INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY;
          _DAT_50845404 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[1];
          _DAT_50845408 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[2];
          _DAT_5084540c = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[3];
          _DAT_50845410 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[4];
          _DAT_50845414 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[5];
          _DAT_50845418 = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[6];
          _DAT_5084541c = INTERRUPT_PRIORITY_LEVEL_CONFIGURATION_ARRAY[7];
          fill_memory_buffer_with_zeros_wrapper(param_1 + 4,iVar4);
        }
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar3 = execute_function_pointer_with_jump_table(&DAT_20002f50,0xffffffff);
  if (iVar3 != 0) {
    initialize_memory_with_jump_table_handling("Fail to acquire mutex\n");
  }
  iVar3 = manage_system_reference_counter_with_state_transitions(0);
  if (iVar3 != 0) {
    initialize_memory_with_jump_table_handling("Fail to increase PM counter\n");
  }
  _DAT_50845810 = 1;
  _DAT_50845820 = 1;
  iVar3 = validate_sha256_parameters_with_complex_state_checking(param_1);
  if ((iVar3 != 0) ||
     (iVar3 = initialize_sha256_state_with_type_based_processing(param_1), iVar3 != 0))
  goto joined_r0x0007b70e;
  if ((uint)param_1[0xd] < 8) {
    uVar5 = 1 << (param_1[0xd] & 0xff);
    if ((uVar5 & 0x8a) == 0) {
      if ((uVar5 & 0x44) == 0) {
        if ((uVar5 & 1) == 0) goto LAB_0007b8f6;
      }
      else {
        _DAT_50845460 = *param_1;
        _DAT_50845464 = param_1[1];
        _DAT_50845468 = param_1[2];
        _DAT_5084546c = param_1[3];
      }
    }
    else {
      _DAT_50845440 = *param_1;
      _DAT_50845444 = param_1[1];
      _DAT_50845448 = param_1[2];
      _DAT_5084544c = param_1[3];
    }
    _DAT_50845b0c = (*(byte *)(param_2 + 1) & 1) << 1 | *(byte *)(param_3 + 1) & 1;
    uVar2 = _DAT_50845d28;
    uVar5 = _DAT_50845d2c;
    if (((param_1[0xd] & 0xfffffffb) != 3) &&
       (uVar2 = *param_3, uVar5 = param_4, param_1[0x18] != 1)) {
      uVar2 = _DAT_50845d28;
      uVar5 = _DAT_50845d2c;
      _DAT_50845d30 = *param_3;
      _DAT_50845d34 = param_4;
    }
    _DAT_50845d2c = uVar5;
    _DAT_50845d28 = uVar2;
    uVar2 = *param_2;
    uVar5 = param_4;
    if (param_1[0x17] != 1) {
      uVar2 = _DAT_50845c28;
      uVar5 = _DAT_50845c2c;
      _DAT_50845c30 = *param_2;
      _DAT_50845c34 = param_4;
    }
    _DAT_50845c2c = uVar5;
    _DAT_50845c28 = uVar2;
    iVar3 = wait_for_system_status_with_flag_checking(0x800);
    if (iVar3 == 0) {
      if ((uint)param_1[0xd] < 8) {
        uVar5 = 1 << (param_1[0xd] & 0xff);
        if ((uVar5 & 0x8a) == 0) {
          if ((uVar5 & 0x44) != 0) {
            *param_1 = _DAT_50845460;
            param_1[1] = _DAT_50845464;
            param_1[2] = _DAT_50845468;
            param_1[3] = _DAT_5084546c;
          }
        }
        else {
          *param_1 = _DAT_50845440;
          param_1[1] = _DAT_50845444;
          param_1[2] = _DAT_50845448;
          param_1[3] = _DAT_5084544c;
        }
      }
      param_1[0x16] = 1;
    }
  }
  else {
LAB_0007b8f6:
    iVar3 = 0xf10001;
  }
joined_r0x0007b70e:
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xf) = 4;
    fill_memory_buffer_with_zeros_wrapper(param_1 + 4,0x20);
  }
  _DAT_50845810 = 0;
  _DAT_50845820 = 0;
  iVar4 = manage_system_reference_counter_with_state_transitions(1);
  if (iVar4 != 0) {
    initialize_memory_with_jump_table_handling("Fail to decrease PM counter\n");
  }
  iVar4 = execute_function_pointer_with_offset_handling(&DAT_20002f50);
  if (iVar4 == 0) {
    return iVar3;
  }
  initialize_memory_with_jump_table_handling("Fail to release mutex\n");
  return iVar3;
}


