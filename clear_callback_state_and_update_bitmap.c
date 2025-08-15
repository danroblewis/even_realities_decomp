/*
 * Function: clear_callback_state_and_update_bitmap
 * Entry:    00065504
 * Prototype: undefined clear_callback_state_and_update_bitmap()
 */


void clear_callback_state_and_update_bitmap(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = calculate_bit_offset_with_lookup();
  uVar1 = *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + (iVar2 + 8) * 2);
  if ((int)((uint)uVar1 << 0x17) < 0) {
    uVar3 = ((uint)uVar1 << 0x13) >> 0x1c;
    *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + (iVar2 + 8) * 2) = uVar1 & 0xe0ff;
    iVar2 = 0;
    puVar4 = (ushort *)((int)&DAT_20002bcc + 2);
    do {
      puVar4 = puVar4 + 1;
      if (((*puVar4 & 0x100) != 0) && (uVar3 == ((uint)*puVar4 << 0x13) >> 0x1c)) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x30);
    (&INTERRUPT_CONFIGURATION_BITMAP_ARRAY)[uVar3 * 2] = 0;
    iVar2 = set_bit_in_bitmap(&DAT_20002c34);
    if (iVar2 != 0xbad0000) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == NRFX_SUCCESS",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x15f);
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call
                ("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x15f);
    }
  }
  return;
}


