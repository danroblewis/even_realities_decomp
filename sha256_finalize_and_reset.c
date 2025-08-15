/*
 * Function: sha256_finalize_and_reset
 * Entry:    00080294
 * Prototype: undefined __stdcall sha256_finalize_and_reset(undefined4 hash_output, undefined4 sha256_ctx)
 */


int sha256_finalize_and_reset(int hash_output,int sha256_ctx)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  
  if (hash_output != 0) {
    if (sha256_ctx == 0) {
      hash_output = 0;
    }
    else {
      iVar3 = *(int *)(sha256_ctx + 0x44);
      if (iVar3 == 0x10) {
        iVar3 = sha256_ctx + 0x10;
      }
      else {
        fill_memory_buffer(iVar3 + 0x30 + sha256_ctx,0,0x10 - iVar3);
        iVar3 = sha256_ctx + 0x20;
        *(undefined1 *)(*(int *)(sha256_ctx + 0x44) + sha256_ctx + 0x30) = 0x80;
      }
      pbVar2 = (byte *)(iVar3 + -1);
      pbVar4 = (byte *)(sha256_ctx + -1);
      do {
        pbVar1 = pbVar4 + 1;
        pbVar2 = pbVar2 + 1;
        *pbVar1 = *pbVar1 ^ pbVar4[0x31] ^ *pbVar2;
        pbVar4 = pbVar1;
      } while ((byte *)(sha256_ctx + 0xf) != pbVar1);
      sha256_finalize(hash_output,sha256_ctx,*(undefined4 *)(sha256_ctx + 0x48));
      sha256_init_context(sha256_ctx);
      hash_output = 1;
    }
  }
  return hash_output;
}


