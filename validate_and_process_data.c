/*
 * Function: validate_and_process_data
 * Entry:    00012c80
 * Prototype: undefined validate_and_process_data()
 */


undefined4 validate_and_process_data(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = calculate_exponential_function();
  if ((DAT_200035af != -1) && (iVar1 = check_high_bit_set(param_1), iVar1 != 0)) {
    iVar1 = float_compare_boolean_inverted_swapped();
    if (iVar1 == 0) {
      iVar1 = float_compare_boolean_inverted();
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)calculate_data_structure_offset();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
    else {
      puVar2 = (undefined4 *)calculate_data_structure_offset();
      uVar3 = 0;
      *puVar2 = 0x22;
    }
  }
  return uVar3;
}


