/*
 * Function: hmac_inner_hash
 * Entry:    000804ba
 * Prototype: undefined __stdcall hmac_inner_hash(undefined4 hmac_ctx)
 */


int hmac_inner_hash(int hmac_ctx)

{
  if (hmac_ctx != 0) {
    process_data_with_validation_and_parameter_alt2();
    process_crypto_stream(hmac_ctx,hmac_ctx + 0x70,0x40);
    hmac_ctx = 1;
  }
  return hmac_ctx;
}


