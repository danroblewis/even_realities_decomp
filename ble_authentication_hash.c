/*
 * Function: ble_authentication_hash
 * Entry:    000835ea
 * Prototype: undefined ble_authentication_hash(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int ble_authentication_hash
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
              undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  undefined1 local_1c;
  
  safe_memory_copy_with_overlap_handling(auStack_5c,param_1,0x20);
  safe_memory_copy_with_overlap_handling(auStack_3c,param_2,0x20);
  local_1c = param_4;
  safe_memory_copy_with_overlap_handling(auStack_6c,param_3,0x10);
  iVar1 = sha256_hash_data(auStack_6c,auStack_5c,0x41,param_5);
  if (iVar1 == 0) {
    reverse_byte_order(param_5);
  }
  return iVar1;
}


