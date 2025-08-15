/*
 * Function: calculate_bit_offset_with_lookup
 * Entry:    00065434
 * Prototype: undefined __stdcall calculate_bit_offset_with_lookup(undefined4 bit_index)
 */


uint calculate_bit_offset_with_lookup(uint bit_index)

{
  return (bit_index & 0x1f) + (uint)(byte)(&DAT_000f6ba7)[bit_index >> 5] & 0xff;
}


