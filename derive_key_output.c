/*
 * Function: derive_key_output
 * Entry:    000806c4
 * Prototype: undefined __stdcall derive_key_output(undefined4 output, undefined4 output_size, undefined4 kdf_ctx)
 */


undefined4 derive_key_output(int output,uint output_size,int kdf_ctx)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (((output == 0) || (kdf_ctx == 0)) || (0x7ffff < output_size - 1)) {
    uVar1 = 0;
  }
  else if (*(int *)(kdf_ctx + 0x130) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(kdf_ctx + 0x130) = *(int *)(kdf_ctx + 0x130) + -1;
    iVar3 = kdf_ctx + 0x110;
    do {
      hmac_sha256(kdf_ctx,kdf_ctx + 0xf0,0x20);
      hmac_inner_hash(kdf_ctx);
      hmac_outer_hash(kdf_ctx,iVar3,0x20);
      hmac_finalize(iVar3,0x20,kdf_ctx);
      uVar2 = output_size;
      if (0x1f < output_size) {
        uVar2 = 0x20;
      }
      safe_memory_copy_with_bounds_check_alt(output,uVar2,iVar3,uVar2);
      if (output_size < 0x20) {
        output_size = 0x20;
      }
      output_size = output_size - 0x20;
      output = output + uVar2;
    } while (output_size != 0);
    pbkdf2_hmac_sha256(kdf_ctx,0,0,0,0);
    uVar1 = 1;
  }
  return uVar1;
}


