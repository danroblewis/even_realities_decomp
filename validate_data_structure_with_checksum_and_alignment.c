/*
 * Function: validate_data_structure_with_checksum_and_alignment
 * Entry:    0007e672
 * Prototype: undefined __stdcall validate_data_structure_with_checksum_and_alignment(undefined4 data_context, undefined4 data_buffer)
 */


undefined4 validate_data_structure_with_checksum_and_alignment(int data_context,int data_buffer)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = calculate_aligned_address(*(undefined4 *)(data_context + 0x2c),8);
  uVar2 = execute_empty_loop(0xff,data_buffer,7);
  if (*(byte *)(data_buffer + 7) == uVar2) {
    if ((uint)*(ushort *)(data_buffer + 2) < (uint)*(ushort *)(data_context + 0xc) - iVar1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


