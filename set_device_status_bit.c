/*
 * Function: set_device_status_bit
 * Entry:    000659cc
 * Prototype: undefined set_device_status_bit()
 */


void set_device_status_bit(undefined4 param_1)

{
  set_bit_in_bitmap(&DAT_20002c30,param_1);
  return;
}


