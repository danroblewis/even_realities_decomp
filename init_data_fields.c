/*
 * Function: init_data_fields
 * Entry:    00080b28
 * Prototype: undefined __stdcall init_data_fields(undefined4 data_ptr)
 */


void init_data_fields(int data_ptr)

{
  *(undefined4 *)(data_ptr + 0x40) = 0;
  *(undefined2 *)(data_ptr + 0x44) = 0;
  return;
}


