/*
 * Function: fill_memory_buffer
 * Entry:    00086c78
 * Prototype: undefined __stdcall fill_memory_buffer(undefined4 buffer_start, undefined1 fill_value, undefined4 fill_length)
 */


void fill_memory_buffer(undefined1 *buffer_start,undefined1 fill_value,int fill_length)

{
  undefined1 *one_spot;
  
  one_spot = buffer_start + fill_length;
  for (; buffer_start != one_spot; buffer_start = buffer_start + 1) {
    *buffer_start = fill_value;
  }
  return;
}


