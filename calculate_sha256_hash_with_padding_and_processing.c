/*
 * Function: calculate_sha256_hash_with_padding_and_processing
 * Entry:    0007981c
 * Prototype: undefined calculate_sha256_hash_with_padding_and_processing()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int calculate_sha256_hash_with_padding_and_processing(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined1 local_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [120];
  
  if (param_3 < 0x181) {
    fill_memory_buffer(&DAT_2000ce00,0,0x1a0);
    initialize_sha256_context_with_error_handling(auStack_9c);
    SHA256_HASH_PADDING_AND_PROCESSING_STATE_2 = 0x30;
    SHA256_HASH_PADDING_AND_PROCESSING_STATE_1 =
         (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    _DAT_2000ce10 = 0;
    memcpy(&DAT_2000ce18,param_2,param_3);
    iVar1 = 0;
    *(undefined1 *)((int)&DAT_2000ce18 + param_3) = 0x80;
    puVar3 = (undefined1 *)((int)&local_f0 + 3);
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = (char)iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x20);
    iVar1 = initialize_sha256_key_with_size_validation(auStack_9c,local_ec,0x100);
    if (iVar1 == 0) {
      puVar3 = auStack_cc;
      do {
        fill_memory_buffer(&local_fc,0,0x10);
        puVar4 = &DAT_2000ce10;
        uVar5 = param_3 + 0x19;
        do {
          local_f0 = *(uint *)(puVar4 + -4) ^ local_f0;
          local_f8 = *(uint *)(puVar4 + -0xc) ^ local_f8;
          local_f4 = *(uint *)(puVar4 + -8) ^ local_f4;
          local_fc = local_fc ^ *(uint *)(puVar4 + -0x10);
          iVar1 = process_sha256_hmac_with_validation(auStack_9c,1,&local_fc);
          if (uVar5 < 0x11) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 - 0x10;
          }
          puVar4 = puVar4 + 0x10;
          if (iVar1 != 0) goto LAB_000799a0;
        } while (uVar5 != 0);
        memcpy(puVar3,&local_fc,0x10);
        puVar3 = puVar3 + 0x10;
        DAT_2000ce00._3_1_ = DAT_2000ce00._3_1_ + '\x01';
      } while (puVar3 != auStack_9c);
      iVar1 = initialize_sha256_key_with_size_validation(auStack_9c,auStack_cc,0x100);
      if (iVar1 == 0) {
        iVar2 = param_1;
        while (iVar1 = process_sha256_hmac_with_validation(auStack_9c,1,auStack_ac), iVar1 == 0) {
          iVar1 = iVar2 + 0x10;
          memcpy(iVar2,auStack_ac);
          iVar2 = iVar1;
          if (param_1 + 0x30 == iVar1) {
            cleanup_sha256_context_with_memory_clearing(auStack_9c);
            clear_memory_buffer_with_zero_fill(&DAT_2000ce00,0x1a0);
            clear_memory_buffer_with_zero_fill(auStack_cc,0x30);
            clear_memory_buffer_with_zero_fill(local_ec,0x20);
            clear_memory_buffer_with_zero_fill(&local_fc,0x10);
            return 0;
          }
        }
      }
    }
LAB_000799a0:
    cleanup_sha256_context_with_memory_clearing(auStack_9c);
    clear_memory_buffer_with_zero_fill(&DAT_2000ce00,0x1a0);
    clear_memory_buffer_with_zero_fill(auStack_cc,0x30);
    clear_memory_buffer_with_zero_fill(local_ec,0x20);
    clear_memory_buffer_with_zero_fill(&local_fc,0x10);
    clear_memory_buffer_with_zero_fill(param_1,0x30);
  }
  else {
    iVar1 = -0x38;
  }
  return iVar1;
}


