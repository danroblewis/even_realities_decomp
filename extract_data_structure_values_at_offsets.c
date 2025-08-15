/*
 * Function: extract_data_structure_values_at_offsets
 * Entry:    0007c65c
 * Prototype: undefined extract_data_structure_values_at_offsets()
 */


undefined4 extract_data_structure_values_at_offsets(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    param_2[1] = *(undefined4 *)(param_1 + 0x10);
    return 0;
  }
  return 7;
}


