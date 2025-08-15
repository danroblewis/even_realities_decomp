/*
 * Function: process_sha256_block_with_counter_increment
 * Entry:    000799ec
 * Prototype: undefined process_sha256_block_with_counter_increment()
 */


int process_sha256_block_with_counter_increment(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  puVar3 = &local_48;
  fill_memory_buffer(&local_48,0,0x30);
  do {
    cVar1 = param_1[0xf];
    param_1[0xf] = cVar1 + '\x01';
    if ((((((char)(cVar1 + '\x01') == '\0') &&
          (cVar1 = param_1[0xe], param_1[0xe] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
         (cVar1 = param_1[0xd], param_1[0xd] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
        (((cVar1 = param_1[0xc], param_1[0xc] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
          (cVar1 = param_1[0xb], param_1[0xb] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
         ((cVar1 = param_1[10], param_1[10] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
          ((cVar1 = param_1[9], param_1[9] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
           (cVar1 = param_1[8], param_1[8] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))))))))
       && ((cVar1 = param_1[7], param_1[7] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
           (((((cVar1 = param_1[6], param_1[6] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
               (cVar1 = param_1[5], param_1[5] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
              (cVar1 = param_1[4], param_1[4] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
             ((cVar1 = param_1[3], param_1[3] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
              (cVar1 = param_1[2], param_1[2] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))))
            && (cVar1 = param_1[1], param_1[1] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')))))
       ) {
      *param_1 = *param_1 + '\x01';
    }
    iVar2 = process_sha256_hmac_with_validation(param_1 + 0x20,1,param_1,puVar3);
    if (iVar2 != 0) goto LAB_00079b44;
    puVar3 = (uint *)((int)puVar3 + 0x10);
  } while (puVar3 != (uint *)&stack0xffffffe8);
  local_40 = param_2[2] ^ local_40;
  local_3c = param_2[3] ^ local_3c;
  local_38 = param_2[4] ^ local_38;
  local_34 = param_2[5] ^ local_34;
  local_30 = param_2[6] ^ local_30;
  local_2c = param_2[7] ^ local_2c;
  local_28 = param_2[8] ^ local_28;
  local_24 = param_2[9] ^ local_24;
  local_20 = param_2[10] ^ local_20;
  local_1c = param_2[0xb] ^ local_1c;
  local_48 = local_48 ^ *param_2;
  local_44 = param_2[1] ^ local_44;
  iVar2 = initialize_sha256_key_with_size_validation(param_1 + 0x20,&local_48,0x100);
  if (iVar2 == 0) {
    memcpy(param_1,&local_28,0x10);
  }
LAB_00079b44:
  clear_memory_buffer_with_zero_fill(&local_48,0x30);
  return iVar2;
}


