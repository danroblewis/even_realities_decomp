/*
 * Function: process_hardware_interrupt_and_set_priority
 * Entry:    000659e4
 * Prototype: undefined __stdcall process_hardware_interrupt_and_set_priority(undefined4 interrupt_source, undefined4 enable_flag)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_hardware_interrupt_and_set_priority(uint interrupt_source,uint enable_flag)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_14;
  
  uVar2 = interrupt_source;
  local_14 = enable_flag;
  iVar1 = check_bits_set_in_status_array();
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","pin_has_trigger(pin)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x364,uVar2);
    uVar3 = 0x364;
  }
  else {
    iVar1 = get_shifted_bit_status_from_offset(interrupt_source);
    if ((iVar1 != 0) &&
       (iVar1 = check_interrupt_source_enabled_status(interrupt_source), iVar1 == 0)) {
      uVar2 = get_interrupt_priority_or_channel(interrupt_source);
      iVar1 = validate_index_and_calculate_offset();
      *(undefined4 *)(iVar1 + 0x5000d000) = 0;
      iVar1 = (short)uVar2 * 4;
      *(uint *)(iVar1 + 0x5000d510) = *(uint *)(iVar1 + 0x5000d510) | 1;
      if (enable_flag != 0) {
        _DAT_5000d304 = 1 << (uVar2 & 0xff);
      }
      return;
    }
    if (enable_flag != 0) {
      iVar1 = calculate_bit_offset_with_lookup(interrupt_source);
      uVar2 = ((uint)*(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) << 0x1b) >> 0x1d;
      if (uVar2 == 4) {
        iVar1 = 3;
      }
      else if (uVar2 == 5) {
        iVar1 = 2;
      }
      else {
        local_14 = interrupt_source;
        iVar1 = process_data_with_validation_and_error_handling(&local_14);
        iVar1 = (*(uint *)(iVar1 + 0x10) >> (local_14 & 0xff) & 1) + 2;
      }
      configure_hardware_registers_wrapper(interrupt_source,iVar1);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","int_enable",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x373,uVar2);
    uVar3 = 0x373;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",uVar3)
  ;
}


