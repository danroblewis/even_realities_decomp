/*
 * Function: set_bits
 * Entry:    00080e6a
 * Prototype: undefined __stdcall set_bits(undefined4 flags_ptr, undefined4 bits_to_set)
 */


void set_bits(uint *flags_ptr,uint bits_to_set)

{
  *flags_ptr = *flags_ptr | bits_to_set;
  return;
}


