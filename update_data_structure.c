/*
 * Function: update_data_structure
 * Entry:    00080864
 * Prototype: undefined __stdcall update_data_structure(undefined4 struct_ptr, undefined4 new_data)
 */


void update_data_structure(int *struct_ptr,undefined4 *new_data)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*struct_ptr + 0xc);
  *puVar1 = *new_data;
  puVar1[1] = new_data[1];
  return;
}


