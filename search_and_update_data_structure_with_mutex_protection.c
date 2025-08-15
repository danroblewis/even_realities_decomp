/*
 * Function: search_and_update_data_structure_with_mutex_protection
 * Entry:    0004c8f8
 * Prototype: undefined __stdcall search_and_update_data_structure_with_mutex_protection(undefined4 data_context, undefined4 search_key, undefined4 update_data, undefined4 update_size)
 */


uint search_and_update_data_structure_with_mutex_protection
               (int *data_context,uint search_key,int update_data,uint update_size)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_4c;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  undefined2 local_40;
  short local_3e;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_30;
  char *local_2c;
  
  if ((char)data_context[4] == '\0') {
    uVar4 = 0xfffffff3;
    local_2c = "NVS not initialized";
    local_30 = 2;
    wrapper_set_r3_to_zero(&DAT_000881b8,0x1040,&local_30);
  }
  else {
    iVar1 = calculate_aligned_address(data_context[0xb],8);
    uVar2 = calculate_aligned_address(extraout_r2,update_size);
    if (((uint)*(ushort *)(data_context + 3) + iVar1 * -4 < update_size) ||
       ((update_size != 0 && (update_data == 0)))) {
      uVar4 = 0xffffffea;
    }
    else {
      local_4c = data_context[1];
      do {
        uVar4 = local_4c;
        uVar6 = process_data_with_alignment_and_validation(data_context,&local_4c,&local_48);
        uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((uint)uVar6 != 0) {
          return (uint)uVar6;
        }
        if (local_48 == search_key) {
          uVar6 = validate_data_structure_with_checksum_and_alignment(data_context,&local_48);
          uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 != 0) {
            if (update_size == 0) {
              if (local_44 == 0) {
                return 0;
              }
            }
            else if (local_44 == update_size) {
              uVar6 = process_data_with_function_pointer
                                (data_context,(uVar4 & 0xffff0000) + (uint)local_46,update_data,
                                 update_size);
              uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
              if ((int)(uint)uVar6 < 1) {
                return (uint)uVar6;
              }
            }
            goto LAB_0004c9ba;
          }
        }
      } while (data_context[1] != local_4c);
      uVar4 = 0;
      if (update_size != 0) {
LAB_0004c9ba:
        if (uVar2 != 0) {
          uVar2 = uVar2 + iVar1 & 0xffff;
        }
        resource_mutex_acquire(data_context + 5,uVar3,0xffffffff,0xffffffff);
        for (uVar5 = 0; uVar5 != *(ushort *)((int)data_context + 0xe); uVar5 = uVar5 + 1) {
          if (uVar2 + data_context[2] <= (uint)data_context[1]) {
            local_3e = (short)data_context[2];
            local_3a = 0xff;
            local_40 = (undefined2)search_key;
            local_3c = (undefined2)update_size;
            process_data_and_store_result(&local_40);
            uVar4 = process_data_with_memory_bounds_validation_and_padding
                              (data_context,data_context[2],update_data,update_size);
            iVar1 = calculate_aligned_address(data_context[0xb],update_size);
            data_context[2] = data_context[2] + iVar1;
            if ((uVar4 == 0) &&
               (uVar4 = update_data_offset_with_alignment(data_context,&local_40), uVar4 == 0)) {
              uVar4 = update_size;
            }
            goto LAB_0004ca30;
          }
          iVar1 = calculate_aligned_address(data_context[0xb],8);
          local_40 = 0xffff;
          local_3a = 0xff;
          local_3c = 0;
          local_3e = (short)extraout_r2_00 + (short)iVar1;
          data_context[1] =
               ((extraout_r2_00 & 0xffff0000) + (uint)*(ushort *)(data_context + 3)) - iVar1;
          process_data_and_store_result(&local_40);
          update_data_offset_with_alignment(data_context,&local_40);
          increment_counter_with_overflow_wrapping(data_context,(int)(data_context + 1));
          data_context[2] = data_context[1] & 0xffff0000;
          uVar4 = process_complex_data_with_alignment_and_validation(data_context);
          if (uVar4 != 0) goto LAB_0004ca30;
        }
        uVar4 = 0xffffffe4;
LAB_0004ca30:
        mutex_unlock(data_context + 5);
      }
    }
  }
  return uVar4;
}


