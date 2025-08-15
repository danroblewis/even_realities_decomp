/*
 * Function: initialize_system_with_validation_and_cleanup
 * Entry:    00079608
 * Prototype: undefined initialize_system_with_validation_and_cleanup()
 */


int initialize_system_with_validation_and_cleanup
              (int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x2000cc30;
  }
  if (*param_1 != 0x5ac9bca5) {
    clear_memory_buffer_with_zero_fill(param_1,0x1c0);
    initialize_cryptographic_context_with_parameter_setup(param_1 + 1);
    initialize_sha256_context_with_default_values(param_1 + 0x47);
    iVar1 = finalize_sha256_hash_with_key_derivation
                      (param_1 + 0x47,0x7a05d,param_1 + 1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0x5ac9bca5;
  }
  return 0;
}


