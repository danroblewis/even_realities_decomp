/*
 * Function: set_hardware_register_bit_and_update_bitmap
 * Entry:    00065418
 * Prototype: undefined __stdcall set_hardware_register_bit_and_update_bitmap(undefined4 bit_position)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_hardware_register_bit_and_update_bitmap(uint bit_position)

{
  _DAT_50017508 = 1 << (bit_position & 0xff);
  set_bit_in_bitmap(&DAT_20002bbc,bit_position);
  return;
}


