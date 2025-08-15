/*
 * Function: cleanup_with_callback
 * Entry:    00080b0e
 * Prototype: undefined __stdcall cleanup_with_callback(undefined4 data_ptr, undefined4 ctx)
 */


void cleanup_with_callback(int data_ptr,int ctx)

{
  if (data_ptr != 0) {
    if (*(code **)(ctx + 0x38) != (code *)0x0) {
      (**(code **)(ctx + 0x38))(data_ptr + 0x18);
    }
    decrement_reference_count_and_cleanup_memory(data_ptr);
    return;
  }
  return;
}


