/*
 * Function: calculate_checksum_with_bit_operations
 * Entry:    0007fec8
 * Prototype: undefined calculate_checksum_with_bit_operations()
 */


uint calculate_checksum_with_bit_operations(uint param_1)

{
  return ((param_1 >> 7) * 0x1b ^ param_1 << 1) & 0xff;
}


