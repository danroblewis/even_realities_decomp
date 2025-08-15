/*
 * Function: check_interrupt_source_enabled_status
 * Entry:    00065494
 * Prototype: undefined check_interrupt_source_enabled_status()
 */


uint check_interrupt_source_enabled_status(void)

{
  int iVar1;
  
  iVar1 = calculate_bit_offset_with_lookup();
  return ((uint)*(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) << 0x1e) >> 0x1f;
}


