/*
 * Function: finalize_sha256_hash_with_key_derivation
 * Entry:    00079c50
 * Prototype: undefined finalize_sha256_hash_with_key_derivation(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int finalize_sha256_hash_with_key_derivation
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_40 [32];
  
  fill_memory_buffer(auStack_40,0,0x20);
  iVar1 = (*CRYPTOGRAPHIC_KEY_DERIVATION_COUNTER_2)(param_1 + 0x9c);
  if (iVar1 != 0) {
    return iVar1;
  }
  initialize_sha256_context_with_error_handling(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x94) = param_2;
  *(undefined4 *)(param_1 + 0x98) = param_3;
  if (uVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 0x20;
    if ((int)uVar4 < 0) {
      uVar4 = 0x10;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x10);
    if ((int)uVar4 < 0) {
      if (uVar3 < 0x30) {
        uVar4 = uVar3 + 1 >> 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  iVar1 = initialize_sha256_key_with_size_validation(param_1 + 0x20,auStack_40,0x100);
  if (iVar1 == 0) {
    iVar1 = update_sha256_hash_with_buffer_management(param_1,param_4,param_5,uVar4);
  }
  iVar2 = (*CRYPTOGRAPHIC_KEY_DERIVATION_COUNTER)(param_1 + 0x9c);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


