/*
 * Function: update_data_offset_with_alignment
 * Entry:    0007e7ea
 * Prototype: undefined update_data_offset_with_alignment()
 */


undefined4 update_data_offset_with_alignment(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  
  uVar1 = process_data_with_memory_bounds_validation_and_padding
                    (param_1,*(undefined4 *)(param_1 + 4),param_2,8);
  iVar2 = calculate_aligned_address(*(undefined4 *)(param_1 + 0x2c),8,uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar2;
  return extraout_r2;
}


