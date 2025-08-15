/*
 * Function: sha256_init_context
 * Entry:    0008012e
 * Prototype: undefined __stdcall sha256_init_context(undefined4 sha256_ctx, undefined4 unused1, undefined4 unused2, undefined4 unused3)
 */


int sha256_init_context(int sha256_ctx,undefined4 param_2,undefined4 param_3,undefined4 unused3)

{
  if (sha256_ctx != 0) {
    fill_memory_buffer(sha256_ctx,0,0x58,unused3,unused3);
    sha256_ctx = 1;
  }
  return sha256_ctx;
}


