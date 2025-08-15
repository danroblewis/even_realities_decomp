/*
 * Function: process_complex_data_with_alignment_and_validation
 * Entry:    0007e83a
 * Prototype: undefined process_complex_data_with_alignment_and_validation()
 */


int process_complex_data_with_alignment_and_validation(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int extraout_r2;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint local_6c;
  uint local_68;
  uint local_64;
  char acStack_60 [2];
  ushort local_5e;
  short local_58;
  ushort local_56;
  ushort local_54;
  short local_50 [4];
  undefined1 auStack_48 [36];
  
  iVar3 = calculate_aligned_address(param_1[0xb],8);
  local_6c = param_1[1] & 0xffff0000;
  increment_counter_with_overflow_wrapping(param_1,(int)&local_6c);
  uVar1 = local_6c;
  uVar8 = (*(ushort *)(param_1 + 3) + local_6c) - iVar3;
  local_68 = uVar8;
  iVar4 = execute_function_pointer_from_structure_offset(param_1,uVar8,acStack_60,8);
  if (iVar4 < 0) {
    return iVar4;
  }
  iVar4 = 0;
  pcVar7 = acStack_60;
  while (*(char *)(param_1[0xb] + 4) == *pcVar7) {
    iVar4 = iVar4 + 1;
    pcVar7 = pcVar7 + 1;
    if (iVar4 == 8) goto LAB_0007e892;
  }
  iVar4 = validate_special_data_buffer_alignment(param_1,acStack_60);
  if (iVar4 == 0) {
    iVar4 = process_data_buffer_with_alignment_handling(param_1,&local_68);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  else {
    local_68 = (uVar8 & 0xffff0000) + (uint)local_5e;
  }
  do {
    uVar2 = local_68;
    iVar4 = process_data_with_alignment_and_validation(param_1,&local_68,&local_58);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = validate_data_structure_with_checksum_and_alignment(param_1,&local_58);
    if (iVar4 != 0) {
      local_64 = param_1[1];
      do {
        uVar11 = local_64;
        iVar4 = process_data_with_alignment_and_validation(param_1,&local_64,local_50);
        if (iVar4 != 0) {
          return iVar4;
        }
      } while (((local_50[0] != local_58) ||
               (iVar4 = validate_data_structure_with_checksum_and_alignment(param_1,local_50),
               iVar4 == 0)) && (param_1[1] != local_64));
      if ((uVar11 == uVar2) && (local_54 != 0)) {
        iVar9 = (uint)local_56 + (uVar2 & 0xffff0000);
        local_56 = (ushort)param_1[2];
        process_data_and_store_result(&local_58);
        iVar4 = *(int *)param_1[0xb];
        for (uVar11 = (uint)local_54; uVar11 != 0; uVar11 = uVar11 - uVar10) {
          uVar10 = -iVar4 & 0x20U;
          if (uVar11 <= (-iVar4 & 0x20U)) {
            uVar10 = uVar11;
          }
          iVar5 = execute_function_pointer_from_structure_offset(param_1,iVar9,auStack_48,uVar10);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar6 = process_data_with_memory_bounds_validation_and_padding
                            (param_1,param_1[2],auStack_48,uVar10);
          iVar5 = calculate_aligned_address(param_1[0xb],uVar10,uVar6);
          param_1[2] = param_1[2] + iVar5;
          if (extraout_r2 != 0) {
            return extraout_r2;
          }
          iVar9 = iVar9 + uVar10;
        }
        iVar4 = update_data_offset_with_alignment(param_1,&local_58);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  } while (uVar2 != uVar8 - iVar3);
LAB_0007e892:
  if (((uint)param_1[1] < (uint)(param_1[2] + iVar3)) ||
     (iVar3 = finalize_data_processing_and_update_offset(param_1), iVar3 == 0)) {
    iVar3 = process_data_with_offset_calculation(param_1,uVar1);
  }
  return iVar3;
}


