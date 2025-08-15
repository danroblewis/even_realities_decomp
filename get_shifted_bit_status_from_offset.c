/*
 * Function: get_shifted_bit_status_from_offset
 * Entry:    00065460
 * Prototype: undefined get_shifted_bit_status_from_offset()
 */


uint get_shifted_bit_status_from_offset(void)

{
  int iVar1;
  
  iVar1 = calculate_bit_offset_with_lookup();
  return ((uint)*(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) << 0x1a) >> 0x1f;
}


