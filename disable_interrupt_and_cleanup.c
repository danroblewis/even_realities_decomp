/*
 * Function: disable_interrupt_and_cleanup
 * Entry:    00065b18
 * Prototype: undefined disable_interrupt_and_cleanup()
 */


undefined4 disable_interrupt_and_cleanup(uint param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c;
  
  local_c = param_2;
  iVar2 = get_bit_status_from_offset();
  if (iVar2 == 0) {
    uVar3 = 0xbad0004;
  }
  else {
    disable_interrupt_source(param_1);
    iVar2 = get_shifted_bit_status_from_offset(param_1);
    if (iVar2 != 0) {
      sVar1 = get_interrupt_priority_or_channel(param_1);
      *(undefined4 *)(sVar1 * 4 + 0x5000d510) = 0;
      *(undefined4 *)(sVar1 * 4 + 0x5000d510) = 0;
    }
    clear_callback_state_and_update_bitmap(param_1);
    iVar2 = calculate_bit_offset_with_lookup(param_1);
    *(undefined2 *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + (iVar2 + 8) * 2) = 0;
    local_c = param_1;
    iVar2 = process_data_with_validation_and_error_handling(&local_c);
    iVar2 = iVar2 + local_c * 4;
    *(uint *)(iVar2 + 0x200) = *(uint *)(iVar2 + 0x200) & 0xfffcf0f0 | 2;
    uVar3 = 0xbad0000;
  }
  return uVar3;
}


