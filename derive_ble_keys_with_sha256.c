/*
 * Function: derive_ble_keys_with_sha256
 * Entry:    0005edac
 * Prototype: undefined derive_ble_keys_with_sha256(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void derive_ble_keys_with_sha256
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               uint *param_5)

{
  int iVar1;
  undefined1 auStack_70 [12];
  uint local_64;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [16];
  
  safe_memory_copy_with_overlap_handling(auStack_60,param_1,0x20);
  safe_memory_copy_with_overlap_handling(auStack_40,param_2,0x20);
  safe_memory_copy_with_overlap_handling(auStack_20,param_4,0x10);
  safe_memory_copy_with_overlap_handling(auStack_70,param_3,0x10);
  iVar1 = sha256_hash_data(auStack_70,auStack_60,0x50);
  if (iVar1 == 0) {
    *param_5 = (local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 | (local_64 >> 0x10 & 0xff) << 8 |
               local_64 >> 0x18) % 1000000;
  }
  return;
}


