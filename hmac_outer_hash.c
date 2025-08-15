/*
 * Function: hmac_outer_hash
 * Entry:    000804d4
 * Prototype: undefined __stdcall hmac_outer_hash(undefined4 hmac_ctx)
 */


int hmac_outer_hash(int hmac_ctx)

{
  if (hmac_ctx != 0) {
    process_crypto_stream();
    hmac_ctx = 1;
  }
  return hmac_ctx;
}


