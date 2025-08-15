/*
 * Function: get_bit_status_from_offset
 * Entry:    00065448
 * Prototype: undefined get_bit_status_from_offset()
 */


ushort get_bit_status_from_offset(void)

{
  int iVar1;
  
  iVar1 = calculate_bit_offset_with_lookup();
  return *(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) & 1;
}


