/*
 * Function: wait_for_hardware_flag_and_write_with_barrier
 * Entry:    00065f04
 * Prototype: undefined __stdcall wait_for_hardware_flag_and_write_with_barrier(undefined4 target_pointer, undefined4 data_value)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_hardware_flag_and_write_with_barrier(undefined4 *target_pointer,undefined4 data_value)

{
  do {
  } while (-1 < _DAT_50039400 << 0x1f);
  *target_pointer = data_value;
  DataMemoryBarrier(0x1f);
  return;
}


