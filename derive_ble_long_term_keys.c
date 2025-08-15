/*
 * Function: derive_ble_long_term_keys
 * Entry:    00083634
 * Prototype: undefined derive_ble_long_term_keys(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined param_7, undefined4 param_8)
 */


int derive_ble_long_term_keys
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined1 *param_6,undefined1 *param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [3];
  undefined1 local_31;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_29;
  undefined2 local_25;
  
  safe_memory_copy_with_overlap_handling(auStack_64,param_2,0x10);
  safe_memory_copy_with_overlap_handling(auStack_54,param_3,0x10);
  safe_memory_copy_with_overlap_handling(auStack_44,param_4,0x10);
  safe_memory_copy_with_overlap_handling(auStack_34,param_5,3);
  local_31 = *param_6;
  local_30 = *(undefined4 *)(param_6 + 1);
  local_2c = *(undefined2 *)(param_6 + 5);
  safe_memory_copy_with_overlap_handling(&local_30,param_6 + 1,6);
  local_2a = *param_7;
  local_29 = *(undefined4 *)(param_7 + 1);
  local_25 = *(undefined2 *)(param_7 + 5);
  safe_memory_copy_with_overlap_handling(&local_29,param_7 + 1,6);
  safe_memory_copy_with_overlap_handling(auStack_74,param_1,0x10);
  iVar1 = sha256_hash_data(auStack_74,auStack_64,0x41,param_8);
  if (iVar1 == 0) {
    reverse_byte_order(param_8);
  }
  return iVar1;
}


