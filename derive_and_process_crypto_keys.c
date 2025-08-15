/*
 * Function: derive_and_process_crypto_keys
 * Entry:    0005aba8
 * Prototype: undefined derive_and_process_crypto_keys()
 */


void derive_and_process_crypto_keys(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_120;
  char *local_11c;
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [176];
  
  local_140 = 0;
  uStack_13c = 0;
  local_138 = 0;
  uStack_134 = 0;
  iVar2 = derive_encryption_keys(auStack_118,&local_140,auStack_b8);
  if (iVar2 == 0) {
    local_11c = "Unable to setup AES CMAC";
  }
  else {
    ble_handle_mapping_utility(1,0xffff,0x8260d,auStack_118);
    iVar2 = sha256_finalize_and_reset(&DAT_20006380,auStack_118);
    if (iVar2 != 0) {
      iVar2 = 0;
      puVar3 = &DAT_20006390;
      puVar4 = &DAT_20006380;
      do {
        uVar1 = *puVar4;
        puVar3 = puVar3 + -1;
        iVar2 = iVar2 + 1;
        *puVar4 = *puVar3;
        *puVar3 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar2 != 8);
      set_bits_in_value(&DAT_20006448);
      return;
    }
    local_11c = "Unable to calculate hash";
  }
  local_120 = 2;
  ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_120);
  return;
}


