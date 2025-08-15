/*
 * Function: validate_special_data_buffer_alignment
 * Entry:    0007e6a6
 * Prototype: undefined validate_special_data_buffer_alignment()
 */


uint validate_special_data_buffer_alignment
               (int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = validate_data_structure_with_checksum_and_alignment();
  if (uVar1 != 0) {
    if (param_2[2] == 0) {
      uVar1 = 0;
      if (*param_2 == -1) {
        uVar1 = calculate_aligned_address(*(undefined4 *)(param_1 + 0x2c),8,0xffff,0xffff,param_4);
        uVar2 = (uint)*(ushort *)(param_1 + 0xc) - (uint)(ushort)param_2[1];
        uVar1 = (uint)(uVar2 == (uVar2 / uVar1) * uVar1);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


