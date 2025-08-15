/*
 * Function: hmac_finalize
 * Entry:    000804e0
 * Prototype: undefined __stdcall hmac_finalize(undefined4 hmac_output, undefined4 output_size, undefined4 hmac_ctx)
 */


undefined4 hmac_finalize(int hmac_output,int output_size,int hmac_ctx)

{
  undefined4 uVar1;
  
  if ((hmac_output == 0) || (output_size != 0x20)) {
    uVar1 = 0;
  }
  else if (hmac_ctx == 0) {
    uVar1 = 0;
  }
  else {
    sha256_finalize_block(hmac_output,hmac_ctx);
    process_data_with_validation_and_parameter_alt2(hmac_ctx);
    process_crypto_stream(hmac_ctx,hmac_ctx + 0xb0,0x40);
    process_crypto_stream(hmac_ctx,hmac_output,0x20);
    sha256_finalize_block(hmac_output,hmac_ctx);
    fill_memory_buffer(hmac_ctx,0,0xf0);
    uVar1 = 1;
  }
  return uVar1;
}


