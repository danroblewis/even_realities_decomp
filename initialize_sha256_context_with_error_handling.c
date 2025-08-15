/*
 * Function: initialize_sha256_context_with_error_handling
 * Entry:    0007ab00
 * Prototype: undefined initialize_sha256_context_with_error_handling()
 */


void initialize_sha256_context_with_error_handling(int param_1)

{
  if (param_1 == 0) {
    initialize_memory_with_jump_table_handling("ctx cannot be NULL");
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}


