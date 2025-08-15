/*
 * Function: derive_ble_pairing_keys
 * Entry:    0005ecdc
 * Prototype: undefined derive_ble_pairing_keys(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


int derive_ble_pairing_keys
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
              undefined1 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 auStack_53 [3];
  undefined4 local_50;
  undefined1 local_4c [9];
  undefined1 auStack_43 [16];
  undefined1 local_33;
  undefined1 auStack_32 [6];
  undefined1 local_2c;
  undefined1 auStack_2b [11];
  
  puVar2 = &local_58;
  puVar3 = &BLE_PAIRING_KEY_DERIVATION_CONFIG;
  do {
    puVar7 = puVar3;
    puVar6 = puVar2;
    uVar5 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar5;
    puVar2 = puVar6 + 2;
    puVar3 = puVar7 + 2;
  } while (puVar7 + 2 != (undefined4 *)&UNK_0008882d);
  uVar1 = *(undefined1 *)(puVar7 + 3);
  puVar6[2] = 0x1000000;
  *(undefined1 *)(puVar6 + 3) = uVar1;
  safe_memory_copy_with_overlap_handling(auStack_78,param_1,0x20);
  iVar4 = sha256_hash_data(&DAT_000f5380,auStack_78,0x20,auStack_88);
  if (iVar4 == 0) {
    safe_memory_copy_with_overlap_handling(auStack_53,param_2,0x10);
    safe_memory_copy_with_overlap_handling(auStack_43,param_3,0x10);
    local_33 = *param_4;
    safe_memory_copy_with_overlap_handling(auStack_32,param_4 + 1,6);
    local_2c = *param_5;
    safe_memory_copy_with_overlap_handling(auStack_2b,param_5 + 1,6);
    iVar4 = sha256_hash_data(auStack_88,&local_58,0x35,param_6);
    if (iVar4 == 0) {
      reverse_byte_order(param_6);
      local_58._0_1_ = 1;
      iVar4 = sha256_hash_data(auStack_88,&local_58,0x35,param_7);
      if (iVar4 == 0) {
        reverse_byte_order(param_7);
      }
    }
  }
  return iVar4;
}


