/*
 * Function: init_key_derivation
 * Entry:    00080652
 * Prototype: undefined __stdcall init_key_derivation(undefined4 kdf_ctx, undefined4 password, undefined4 password_len, undefined4 unused)
 */


int init_key_derivation(int kdf_ctx,int password,undefined4 password_len,undefined4 unused)

{
  int iVar1;
  
  iVar1 = kdf_ctx;
  if (kdf_ctx != 0) {
    if (password == 0) {
      iVar1 = 0;
    }
    else {
      fill_memory_buffer(kdf_ctx + 0xf0,0,0x20,unused,kdf_ctx,password,password_len);
      fill_memory_buffer(kdf_ctx + 0x110,1,0x20);
      pbkdf2_hmac_sha256(kdf_ctx,password,password_len,0,0);
      iVar1 = 1;
      *(undefined4 *)(kdf_ctx + 0x130) = 0;
    }
  }
  return iVar1;
}


