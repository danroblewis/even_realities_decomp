/*
 * Function: derive_encryption_keys
 * Entry:    0008016a
 * Prototype: undefined derive_encryption_keys()
 */


int derive_encryption_keys(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      fill_memory_buffer(param_1,0,0x58);
      *(undefined4 *)(param_1 + 0x48) = param_3;
      process_data_with_parameter_validation_alt3(param_3,param_2);
      fill_memory_buffer(param_1,0,0x10);
      sha256_finalize(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
      aes_key_expansion(param_1 + 0x10,param_1);
      aes_key_expansion(param_1 + 0x20,param_1 + 0x10);
      sha256_reset_context(param_1);
      param_1 = 1;
    }
  }
  return param_1;
}


