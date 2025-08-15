/*
 * Function: extract_byte_from_nested_data_structure
 * Entry:    0007ef1c
 * Prototype: undefined extract_byte_from_nested_data_structure()
 */


undefined4 extract_byte_from_nested_data_structure(int param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *param_2 = *(undefined1 *)(*(int *)(param_1 + 0x14) + 8);
    return 0;
  }
  return 0xffffffa8;
}


