/*
 * Function: configure_hardware_interrupt_registers
 * Entry:    00066050
 * Prototype: undefined __stdcall configure_hardware_interrupt_registers(undefined4 interrupt_config_data, undefined4 unused_param)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_hardware_interrupt_registers(byte *interrupt_config_data,uint unused_param)

{
  int iVar1;
  byte *pbVar2;
  uint local_1c;
  
  pbVar2 = interrupt_config_data;
  local_1c = unused_param;
  if (interrupt_config_data[0x15] == 0) {
    local_1c = *(uint *)(interrupt_config_data + 4);
    iVar1 = calculate_interrupt_bit_mask(&local_1c);
    *(int *)(iVar1 + 0xc) = 1 << (local_1c & 0xff);
    local_1c = *(uint *)(interrupt_config_data + 4);
    iVar1 = calculate_interrupt_bit_mask(&local_1c);
    iVar1 = iVar1 + local_1c * 4;
    *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | 3;
    local_1c = *(uint *)(interrupt_config_data + 8);
    iVar1 = calculate_interrupt_bit_mask(&local_1c);
    iVar1 = iVar1 + local_1c * 4;
    *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0;
  }
  if (interrupt_config_data[0x16] == 0) {
    _DAT_50026540 = *(undefined4 *)(interrupt_config_data + 4);
    _DAT_50026544 = *(undefined4 *)(interrupt_config_data + 8);
  }
  _DAT_50026504 = *(undefined4 *)(interrupt_config_data + 0xc);
  _DAT_50026518 = (uint)interrupt_config_data[0x10];
  _DAT_5002651c = (uint)interrupt_config_data[0x11];
  _DAT_5002654c = (uint)interrupt_config_data[0x14];
  _DAT_50026520 = (uint)interrupt_config_data[0x13];
  _DAT_50026508 = (interrupt_config_data[1] & 1) << 1 | *interrupt_config_data & 1;
  if (interrupt_config_data[0x16] == 0) {
    _DAT_50026540 = *(undefined4 *)(interrupt_config_data + 4);
    _DAT_50026544 = *(undefined4 *)(interrupt_config_data + 8);
  }
  _DAT_50026100 = 0;
  _DAT_50026104 = 0;
  process_data_with_parameter_validation_alt4
            (0x26,*(undefined4 *)(interrupt_config_data + 8),0,0,pbVar2);
  _DAT_50026304 = 3;
  return;
}


