/*
 * Function: prepare_hmac_keys
 * Entry:    00080406
 * Prototype: undefined __stdcall prepare_hmac_keys(undefined4 hmac_ctx, undefined4 key, undefined4 key_len)
 */


void prepare_hmac_keys(int hmac_ctx,byte *key,uint key_len)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar1 = key + key_len;
  pbVar2 = (byte *)(hmac_ctx + -1);
  for (; pbVar1 != key; key = key + 1) {
    pbVar2[1] = *key ^ 0x36;
    pbVar2[0x41] = *key ^ 0x5c;
    pbVar2 = pbVar2 + 1;
  }
  iVar3 = 0x40 - key_len;
  if (0x40 < key_len) {
    iVar3 = 0;
  }
  fill_memory_buffer(key_len + 0x40 + hmac_ctx,0x5c,iVar3);
  fill_memory_buffer(hmac_ctx + key_len,0x36,iVar3);
  return;
}


