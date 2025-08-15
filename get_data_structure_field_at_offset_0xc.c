/*
 * Function: get_data_structure_field_at_offset_0xc
 * Entry:    0007f00e
 * Prototype: undefined __stdcall get_data_structure_field_at_offset_0xc(undefined4 data_structure)
 */


undefined4 get_data_structure_field_at_offset_0xc(int data_structure)

{
  return *(undefined4 *)(data_structure + 0xc);
}


