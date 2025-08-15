/*
 * Function: calculate_offset
 * Entry:    00080c7c
 * Prototype: undefined __stdcall calculate_offset(undefined4 data_ptr)
 */


uint calculate_offset(int data_ptr)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(data_ptr + 0x18);
  if (uVar1 != 0) {
    iVar2 = thunk_FUN_000823fa();
    uVar1 = iVar2 - 3U & 0xffff;
  }
  return uVar1;
}


