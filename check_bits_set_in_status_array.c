/*
 * Function: check_bits_set_in_status_array
 * Entry:    00065478
 * Prototype: undefined check_bits_set_in_status_array()
 */


ushort check_bits_set_in_status_array(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = calculate_bit_offset_with_lookup();
  uVar1 = *(ushort *)((int)&DAT_20002bc0 + (iVar3 + 8) * 2);
  uVar2 = uVar1 & 0x1c;
  if ((uVar1 & 0x1c) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


