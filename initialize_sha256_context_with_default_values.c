/*
 * Function: initialize_sha256_context_with_default_values
 * Entry:    00079c24
 * Prototype: undefined initialize_sha256_context_with_default_values()
 */


void initialize_sha256_context_with_default_values(int param_1)

{
  fill_memory_buffer(param_1,0,0xa4);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xfff0;
                    /* WARNING: Could not recover jumptable at 0x00079c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_20002f5c)(param_1 + 0x9c);
  return;
}


