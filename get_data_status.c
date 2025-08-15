/*
 * Function: get_data_status
 * Entry:    00080b32
 * Prototype: undefined __stdcall get_data_status(undefined4 data_ptr)
 */


uint get_data_status(int data_ptr)

{
  if (*(int *)(data_ptr + 0x40) != 0) {
    return (uint)*(ushort *)(data_ptr + 0x44);
  }
  return 0xffffffea;
}


