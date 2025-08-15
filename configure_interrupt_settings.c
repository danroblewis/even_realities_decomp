/*
 * Function: configure_interrupt_settings
 * Entry:    00066e70
 * Prototype: undefined __stdcall configure_interrupt_settings(undefined4 interrupt_number, undefined4 interrupt_type, undefined4 interrupt_priority, undefined4 interrupt_mode, undefined4 param_5)
 */


void configure_interrupt_settings
               (uint interrupt_number,uint interrupt_type,int interrupt_priority,int interrupt_mode,
               int param_5)

{
  int iVar1;
  uint local_1c;
  int iStack_18;
  
  if (interrupt_number != 0xffffffff) {
    iStack_18 = interrupt_priority;
    if (interrupt_type == 1) {
      local_1c = interrupt_type;
      if (param_5 == 0) {
        calculate_and_set_interrupt_bit_mask_alt();
      }
      else {
        calculate_and_set_interrupt_bit_mask();
      }
    }
    local_1c = interrupt_number;
    iVar1 = calculate_interrupt_bit_mask_alt(&local_1c);
    iVar1 = iVar1 + local_1c * 4;
    *(uint *)(iVar1 + 0x200) =
         interrupt_mode << 8 | interrupt_priority << 2 | interrupt_type |
         *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | interrupt_type << 1;
  }
  return;
}


