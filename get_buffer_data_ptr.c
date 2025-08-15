/*
 * Function: get_buffer_data_ptr
 * Entry:    00080bfe
 * Prototype: undefined __stdcall get_buffer_data_ptr(undefined4 buffer_ctx)
 */


int get_buffer_data_ptr(int buffer_ctx)

{
  int iVar1;
  
  iVar1 = *(int *)(buffer_ctx + 0x40);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x18;
  }
  return iVar1;
}


