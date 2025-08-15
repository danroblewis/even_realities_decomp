/*
 * Function: cleanup_sha256_context_with_memory_clearing
 * Entry:    0007ab20
 * Prototype: undefined cleanup_sha256_context_with_memory_clearing()
 */


void cleanup_sha256_context_with_memory_clearing(int param_1)

{
  if (param_1 != 0) {
    fill_memory_buffer_utility(param_1,0,0x74);
    return;
  }
  return;
}


