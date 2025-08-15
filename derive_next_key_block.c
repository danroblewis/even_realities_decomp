/*
 * Function: derive_next_key_block
 * Entry:    00080692
 * Prototype: undefined __stdcall derive_next_key_block(undefined4 kdf_ctx, undefined4 output, undefined4 output_size, undefined4 unused1, undefined4 unused2)
 */


undefined4 derive_next_key_block(int kdf_ctx,int output,uint output_size,int unused1,int unused2)

{
  undefined4 uVar1;
  
  if (((kdf_ctx == 0) || (output == 0)) || (output_size < 0x20)) {
    uVar1 = 0;
  }
  else if ((unused1 == 0) || (unused2 != 0)) {
    pbkdf2_hmac_sha256();
    uVar1 = 1;
    *(undefined4 *)(kdf_ctx + 0x130) = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


