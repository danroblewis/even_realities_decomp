/*
 * Function: process_sha256_context_with_special_case_handling
 * Entry:    0007b9cc
 * Prototype: undefined process_sha256_context_with_special_case_handling()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_sha256_context_with_special_case_handling
              (undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    return 0xf1000b;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0xf10000;
  }
  if (param_1[0xd] != 7) {
    if (param_4 == 0) {
      if ((param_1[0xd] != 3) || (param_1[0x16] != 0)) {
        return 0;
      }
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_4 = 0x10;
      *param_2 = param_1 + 0x19;
    }
    iVar2 = process_sha256_context_with_comprehensive_state_management
                      (param_1,param_2,param_3,param_4);
    return iVar2;
  }
  if (param_1[0x17] == 0) {
    if (0xfff < param_4) {
      return 0xf10005;
    }
  }
  else if ((param_1[0x17] == 1) && (0xffff < param_4)) {
    return 0xf10005;
  }
  if ((param_4 == 0) && (param_1[0x16] != 0)) {
    return 0xf10005;
  }
  iVar2 = execute_function_pointer_with_jump_table(&DAT_20002f50,0xffffffff);
  if (iVar2 != 0) {
    initialize_memory_with_jump_table_handling("Fail to acquire mutex\n");
  }
  iVar2 = manage_system_reference_counter_with_state_transitions(0);
  if (iVar2 != 0) {
    initialize_memory_with_jump_table_handling("Fail to increase PM counter\n");
  }
  _DAT_50845810 = 1;
  _DAT_50845820 = 1;
  iVar2 = validate_sha256_parameters_with_complex_state_checking(param_1);
  if ((iVar2 != 0) ||
     (iVar3 = initialize_sha256_state_with_type_based_processing(param_1), iVar2 = iVar3, iVar3 != 0
     )) goto LAB_0007ba5e;
  if ((uint)param_1[0xd] < 8) {
    uVar4 = 1 << (param_1[0xd] & 0xff);
    if ((uVar4 & 0x8a) == 0) {
      if ((uVar4 & 0x44) == 0) {
        if ((uVar4 & 1) == 0) goto LAB_0007bac0;
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
    _DAT_5084547c = 1;
    _DAT_50845b0c = (*(byte *)(param_2 + 1) & 1) << 1;
    _DAT_508454bc = param_4;
    if (param_4 == 0) {
      if (param_1[0x16] == 0) {
        _DAT_50845524 = 1;
      }
    }
    else {
      uVar1 = *param_2;
      uVar4 = param_4;
      if (param_1[0x17] != 1) {
        uVar1 = _DAT_50845c28;
        uVar4 = _DAT_50845c2c;
        _DAT_50845c30 = *param_2;
        _DAT_50845c34 = param_4;
      }
      _DAT_50845c2c = uVar4;
      _DAT_50845c28 = uVar1;
      iVar2 = wait_for_system_status_with_flag_checking(0x800);
      if (iVar2 != 0) goto LAB_0007ba5e;
    }
    iVar2 = iVar3;
    if ((uint)param_1[0xd] < 8) {
      uVar4 = 1 << (param_1[0xd] & 0xff);
      if ((uVar4 & 0x8a) == 0) {
        if ((uVar4 & 0x44) != 0) {
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
  }
  else {
LAB_0007bac0:
    iVar2 = 0xf10001;
  }
LAB_0007ba5e:
  _DAT_50845810 = 0;
  _DAT_50845820 = 0;
  iVar3 = manage_system_reference_counter_with_state_transitions(1);
  if (iVar3 != 0) {
    initialize_memory_with_jump_table_handling("Fail to decrease PM counter\n");
  }
  iVar3 = execute_function_pointer_with_offset_handling(&DAT_20002f50);
  if (iVar3 != 0) {
    initialize_memory_with_jump_table_handling("Fail to release mutex\n");
    return iVar2;
  }
  return iVar2;
}


