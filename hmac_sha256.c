/*
 * Function: hmac_sha256
 * Entry:    00080452
 * Prototype: undefined __stdcall hmac_sha256(undefined4 hmac_output, undefined4 key, undefined4 key_len)
 */


int hmac_sha256(int hmac_output,int key,uint key_len)

{
  int iVar1;
  undefined1 auStack_148 [64];
  undefined1 auStack_108 [144];
  undefined1 auStack_78 [100];
  
  if (hmac_output != 0) {
    if (key == 0) {
      hmac_output = 0;
    }
    else if (key_len == 0) {
      hmac_output = 0;
    }
    else {
      if (key_len < 0x41) {
        process_data_with_validation_and_parameter_alt2(auStack_108);
        process_crypto_stream(auStack_108,auStack_148,key_len);
        sha256_finalize_block(auStack_78,auStack_108);
        iVar1 = key;
      }
      else {
        process_data_with_validation_and_parameter_alt2();
        iVar1 = hmac_output + 0x90;
        process_crypto_stream(hmac_output,key,key_len);
        sha256_finalize_block(iVar1,hmac_output);
        key_len = 0x20;
      }
      prepare_hmac_keys(hmac_output + 0x70,iVar1,key_len);
      hmac_output = 1;
    }
  }
  return hmac_output;
}


