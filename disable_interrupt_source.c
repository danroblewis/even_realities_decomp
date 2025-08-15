/*
 * Function: disable_interrupt_source
 * Entry:    00065acc
 * Prototype: void disable_interrupt_source(uint interrupt_source_id)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void disable_interrupt_source(uint interrupt_source_id) */

void disable_interrupt_source(uint interrupt_source_id)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_shifted_bit_status_from_offset();
  if ((iVar1 != 0) &&
     (iVar1 = check_interrupt_source_enabled_status(interrupt_source_id), iVar1 == 0)) {
    uVar2 = get_interrupt_priority_or_channel(interrupt_source_id);
    _DAT_5000d308 = 1 << (uVar2 & 0xff);
    iVar1 = (short)uVar2 * 4;
    *(uint *)(iVar1 + 0x5000d510) = *(uint *)(iVar1 + 0x5000d510) & 0xfffffffc;
    return;
  }
  configure_hardware_registers_wrapper(interrupt_source_id,0);
  return;
}


