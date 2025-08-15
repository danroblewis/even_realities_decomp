/*
 * Function: clear_memory_buffer_with_fixed_size
 * Entry:    0007abe8
 * Prototype: undefined clear_memory_buffer_with_fixed_size()
 */


void clear_memory_buffer_with_fixed_size(int param_1)

{
  if (param_1 != 0) {
    clear_memory_buffer_with_size_validation(param_1,0xf4);
    return;
  }
  return;
}


