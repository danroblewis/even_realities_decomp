/*
 * Function: finalize_sha256_hash_with_padding_and_processing
 * Entry:    0007ace0
 * Prototype: undefined finalize_sha256_hash_with_padding_and_processing()
 */


undefined4 finalize_sha256_hash_with_padding_and_processing(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [132];
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    if (0x7f < uVar2) {
      uVar2 = 0x80;
    }
    copy_memory_safe(auStack_98,param_1 + 100,uVar2);
    uVar2 = *(uint *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  iVar1 = process_sha256_block_with_parameter_management(auStack_98,uVar2,auStack_a0,0,0,0);
  if (((iVar1 == 0) &&
      (iVar1 = process_sha256_context_with_system_integration(param_1,auStack_a0,uVar2), iVar1 == 0)
      ) && (iVar1 = reverse_sha256_byte_order_with_comprehensive_word_processing(param_1),
           iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 0;
  }
  return 1;
}


