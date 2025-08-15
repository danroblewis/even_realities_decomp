/*
 * Function: calculate_timer_data_size_or_offset
 * Entry:    00084d64
 * Prototype: undefined calculate_timer_data_size_or_offset()
 */


int calculate_timer_data_size_or_offset(int param_1)

{
  return (*(int *)(param_1 + 8) - 0x18U & 0xfffffff8) - 0x10;
}


