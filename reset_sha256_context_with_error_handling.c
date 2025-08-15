/*
 * Function: reset_sha256_context_with_error_handling
 * Entry:    0007abc0
 * Prototype: undefined reset_sha256_context_with_error_handling()
 */


void reset_sha256_context_with_error_handling(int param_1)

{
  if (param_1 != 0) {
    FUN_0007a3d4(param_1,0xf4);
    return;
  }
  initialize_memory_with_jump_table_handling("\nctx is NULL\n");
  FUN_0007a3d4(0,0xf4);
  return;
}


