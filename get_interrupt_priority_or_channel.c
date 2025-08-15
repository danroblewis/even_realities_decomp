/*
 * Function: get_interrupt_priority_or_channel
 * Entry:    000654ac
 * Prototype: undefined get_interrupt_priority_or_channel()
 */


ushort get_interrupt_priority_or_channel(void)

{
  int iVar1;
  
  iVar1 = calculate_bit_offset_with_lookup();
  return *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + (iVar1 + 8) * 2) >> 0xd;
}


