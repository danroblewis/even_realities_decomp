/*
 * Function: configure_interrupt_source_registers
 * Entry:    000657e4
 * Prototype: uint __stdcall configure_interrupt_source_registers(uint interrupt_source_id, uint interrupt_priority, byte * interrupt_config_data)
 */


/* Setting prototype: uint apply_interrupt_configuration_settings(uint interrupt_source_id, uint
   interrupt_priority, byte *interrupt_config_data) */

uint configure_interrupt_source_registers
               (uint interrupt_source_id,uint interrupt_priority,byte *interrupt_config_data)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_19 [5];
  
  uVar8 = calculate_bit_offset_with_lookup();
  if ((int)((ulonglong)uVar8 >> 0x20) == 0) {
LAB_00065840:
    if (interrupt_config_data != (byte *)0x0) {
      iVar4 = check_interrupt_source_enabled_status(interrupt_source_id);
      if (iVar4 == 0) goto LAB_000658ca;
      bVar3 = *interrupt_config_data;
      iVar4 = (int)uVar8 + 8;
      iVar6 = (uint)bVar3 * 4;
      uVar7 = *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + iVar4 * 2) & 0x1fdf;
      *(undefined4 *)(iVar6 + 0x5000d510) = 0;
      *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + iVar4 * 2) = uVar7;
      *(undefined4 *)(iVar6 + 0x5000d510) = 0;
      bVar1 = interrupt_config_data[1];
      if (bVar1 != 0) {
        bVar2 = interrupt_config_data[2];
        *(uint *)(iVar6 + 0x5000d510) = *(uint *)(iVar6 + 0x5000d510) & 0xffecc0ff;
        *(uint *)(iVar6 + 0x5000d510) =
             (interrupt_source_id & 0x3f) << 8 | (bVar1 & 3) << 0x10 | *(uint *)(iVar6 + 0x5000d510)
             | (bVar2 & 1) << 0x14;
        *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + iVar4 * 2) =
             uVar7 | (ushort)bVar3 << 0xd | 0x20;
      }
    }
    uVar5 = 0xbad0000;
  }
  else {
    iVar4 = check_interrupt_source_enabled_status(interrupt_source_id);
    if (((iVar4 != 0) ||
        (iVar4 = get_shifted_bit_status_from_offset(interrupt_source_id), iVar4 == 0)) &&
       ((uVar9 = check_bits_set_in_status_array(interrupt_source_id),
        iVar4 = (int)((ulonglong)uVar9 >> 0x20), (int)uVar9 == 0 || (*(char *)(iVar4 + 1) != '\x01')
        ))) {
      local_19[0] = 1;
      configure_hardware_registers_with_bit_manipulation
                (interrupt_source_id,local_19,iVar4 + 1,iVar4 + 2,iVar4,0);
      iVar4 = (int)uVar8 + 8;
      *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + iVar4 * 2) =
           *(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + iVar4 * 2) | 3;
      goto LAB_00065840;
    }
LAB_000658ca:
    uVar5 = 0xbad0004;
  }
  return uVar5;
}


