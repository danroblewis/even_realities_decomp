/*
 * Function: extract_nested_data_structure_value
 * Entry:    00083b1a
 * Prototype: undefined extract_nested_data_structure_value()
 */


undefined4 extract_nested_data_structure_value(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10);
  return 0;
}


