/*
 * Function: process_complex_data_structure_with_encoding
 * Entry:    0004c548
 * Prototype: undefined __stdcall process_complex_data_structure_with_encoding(undefined4 data_context)
 */


int process_complex_data_structure_with_encoding(int *data_context)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint data_length;
  undefined8 uVar10;
  undefined4 local_70;
  char *local_6c;
  uint local_68;
  uint local_64;
  void *local_60;
  byte local_5c [2];
  ushort local_5a;
  ushort local_58;
  short local_54 [2];
  short local_50;
  undefined1 auStack_4c [4];
  uint local_48;
  undefined4 local_30;
  char *local_2c;
  
  piVar9 = data_context + 5;
  init_mutex(piVar9);
  iVar1 = (**(code **)(*(int *)(data_context[10] + 8) + 0xc))();
  data_context[0xb] = iVar1;
  if (iVar1 == 0) {
    local_2c = "Could not obtain flash parameters";
LAB_0004c56a:
    local_30 = 2;
    wrapper_set_r3_to_zero(&DAT_000881b8,0x1040,&local_30);
    return -0x16;
  }
  piVar2 = (int *)(**(code **)(*(int *)(data_context[10] + 8) + 0xc))();
  if (0x1f < *piVar2 - 1U) {
    local_2c = "Unsupported write block size";
    goto LAB_0004c56a;
  }
  uVar10 = process_data_structure_iteration_with_calculation
                     (data_context[10],*data_context,auStack_4c);
  if ((int)uVar10 != 0) {
    local_2c = "Unable to get page info";
    goto LAB_0004c56a;
  }
  uVar7 = (uint)*(ushort *)(data_context + 3);
  if ((uVar7 == 0) ||
     (local_60 = (void *)(uVar7 - local_48 * (uVar7 / local_48)), local_60 != (void *)0x0)) {
    local_2c = "Invalid sector size";
    goto LAB_0004c56a;
  }
  if (*(ushort *)((int)data_context + 0xe) < 2) {
    local_2c = "Configuration error - sector count";
    goto LAB_0004c56a;
  }
  data_length = (uint)*(byte *)(data_context[0xb] + 4);
  resource_mutex_acquire(piVar9,(int)((ulonglong)uVar10 >> 0x20),0xffffffff,0xffffffff);
  iVar1 = calculate_aligned_address(data_context[0xb],8);
  uVar8 = 0;
  for (uVar7 = 0; (uVar7 & 0xffff) < (uint)*(ushort *)((int)data_context + 0xe); uVar7 = uVar7 + 1)
  {
    local_60 = (void *)(uVar7 * 0x10000 + ((uint)*(ushort *)(data_context + 3) - iVar1 & 0xffff));
    iVar3 = process_data_with_alignment_and_comparison(data_context,local_60,data_length,8);
    if (iVar3 != 0) {
      increment_counter_with_overflow_wrapping(data_context,(int)&local_60);
      uVar8 = uVar8 + 1 & 0xffff;
      iVar3 = process_data_with_alignment_and_comparison(data_context,local_60,data_length,8);
      if (iVar3 == 0) break;
    }
  }
  if (*(ushort *)((int)data_context + 0xe) == uVar8) {
    mutex_unlock(piVar9);
    return -0x2d;
  }
  if (((uint)*(ushort *)((int)data_context + 0xe) == (uVar7 & 0xffff)) &&
     (iVar3 = process_data_with_alignment_and_comparison
                        (data_context,(void *)((int)local_60 - iVar1),data_length,8), iVar3 == 0)) {
    increment_counter_with_overflow_wrapping(data_context,(int)&local_60);
  }
  iVar3 = process_data_buffer_with_alignment_handling(data_context,&local_60);
  if (iVar3 == 0) {
    uVar7 = (uint)local_60 & 0xffff0000;
    data_context[1] = (int)local_60;
    data_context[2] = uVar7;
    while ((uint)data_context[2] <= (uint)data_context[1]) {
      iVar3 = execute_function_pointer_from_structure_offset
                        (data_context,data_context[1],local_5c,8);
      if (iVar3 != 0) goto LAB_0004c672;
      iVar3 = 0;
      pbVar5 = local_5c;
      while (data_length == *pbVar5) {
        iVar3 = iVar3 + 1;
        pbVar5 = pbVar5 + 1;
        if (iVar3 == 8) goto LAB_0004c6b2;
      }
      iVar4 = validate_data_structure_with_checksum_and_alignment(data_context,local_5c);
      iVar3 = data_context[1];
      if (iVar4 != 0) {
        uVar8 = (uint)local_58;
        data_context[2] = uVar7;
        iVar4 = calculate_aligned_address(data_context[0xb],local_5a + uVar8);
        data_context[2] = iVar4 + uVar7;
        iVar3 = extraout_r2;
        if ((iVar4 + uVar7 == extraout_r2) && (uVar8 != 0)) {
          iVar1 = -0x1d;
          goto LAB_0004c8a4;
        }
      }
      data_context[1] = iVar3 - iVar1;
    }
LAB_0004c6b2:
    local_60 = (void *)(data_context[1] & 0xffff0000);
    increment_counter_with_overflow_wrapping(data_context,(int)&local_60);
    iVar3 = process_data_with_alignment_and_comparison
                      (data_context,local_60,data_length,(uint)*(ushort *)(data_context + 3));
    if (iVar3 < 0) goto LAB_0004c672;
    pvVar6 = (void *)data_context[1];
    if (iVar3 == 0) {
      while( true ) {
        pvVar6 = (void *)data_context[2];
        if ((void *)data_context[1] <= pvVar6) break;
        iVar3 = process_data_with_alignment_and_comparison
                          (data_context,pvVar6,data_length,data_context[1] - (int)pvVar6);
        if (iVar3 < 0) goto LAB_0004c672;
        if (iVar3 == 0) break;
        data_context[2] = data_context[2] + *(int *)data_context[0xb];
      }
      if ((data_context[1] + iVar1 * 2 == (uint)*(ushort *)(data_context + 3)) &&
         (data_context[2] != (data_context[1] & 0xffff0000U))) {
        iVar3 = process_data_with_offset_calculation(data_context);
        if (iVar3 != 0) goto LAB_0004c672;
        data_context[2] = data_context[1] & 0xffff0000;
        goto LAB_0004c814;
      }
    }
    else {
      do {
        pvVar6 = (void *)(iVar1 + (int)pvVar6);
        local_60 = pvVar6;
        if ((uint)*(ushort *)(data_context + 3) - iVar1 <= ((uint)pvVar6 & 0xffff)) {
          local_2c = "No GC Done marker found: restarting gc";
          local_30 = 2;
          wrapper_set_r3_to_zero(&DAT_000881b8,0x10c0,&local_30);
          iVar3 = process_data_with_offset_calculation(data_context,data_context[1]);
          if (iVar3 != 0) goto LAB_0004c672;
          uVar7 = (data_context[1] & 0xffff0000U) + (uint)*(ushort *)(data_context + 3) + iVar1 * -2
          ;
          data_context[1] = uVar7;
          data_context[2] = uVar7 & 0xffff0000;
          iVar3 = process_complex_data_with_alignment_and_validation(data_context);
          goto LAB_0004c730;
        }
        iVar3 = execute_function_pointer_from_structure_offset(data_context,pvVar6,local_54,8);
        if (iVar3 != 0) goto LAB_0004c672;
        iVar3 = validate_data_structure_with_checksum_and_alignment(data_context,local_54);
      } while (((iVar3 == 0) || (local_54[0] != -1)) || (local_50 != 0));
      local_2c = "GC Done marker found";
      local_30 = 2;
      wrapper_set_r3_to_zero(&DAT_000881b8,0x10c0,&local_30);
      local_60 = (void *)(data_context[1] & 0xffff0000);
      increment_counter_with_overflow_wrapping(data_context,(int)&local_60);
      iVar3 = process_data_with_offset_calculation(data_context,local_60);
    }
LAB_0004c730:
    if (iVar3 == 0) {
LAB_0004c814:
      if ((uint)*(ushort *)(data_context + 1) == (uint)*(ushort *)(data_context + 3) + iVar1 * -2) {
        iVar1 = finalize_data_processing_and_update_offset(data_context);
LAB_0004c8a4:
        mutex_unlock(piVar9);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        mutex_unlock(piVar9);
      }
      *(undefined1 *)(data_context + 4) = 1;
      local_68 = (uint)*(ushort *)((int)data_context + 0xe);
      local_64 = (uint)*(ushort *)(data_context + 3);
      local_6c = "%d Sectors of %d bytes";
      local_70 = 4;
      wrapper_set_r3_to_zero(&DAT_000881b8,0x20c0,&local_70);
      local_6c = "alloc wra: %d, %x";
      local_68 = (uint)data_context[1] >> 0x10;
      local_64 = data_context[1] & 0xffff;
      local_70 = 4;
      wrapper_set_r3_to_zero(&DAT_000881b8,0x20c0,&local_70);
      local_70 = 4;
      local_6c = "data wra: %d, %x";
      local_68 = (uint)data_context[2] >> 0x10;
      local_64 = data_context[2] & 0xffff;
      wrapper_set_r3_to_zero(&DAT_000881b8,0x20c0,&local_70);
      return 0;
    }
  }
LAB_0004c672:
  mutex_unlock(piVar9);
  return iVar3;
}


