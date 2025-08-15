/*
 * Function: init_data_structure
 * Entry:    00080830
 * Prototype: undefined __stdcall init_data_structure(undefined4 struct_ptr, undefined4 data_ptr, undefined4 unused)
 */


void init_data_structure(int *struct_ptr,int data_ptr,undefined4 unused)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = data_ptr;
  FUN_0005ee6c(data_ptr);
  *struct_ptr = data_ptr;
  *(undefined2 *)(data_ptr + 0x10) = 8;
  iVar2 = *(int *)(data_ptr + 0xc);
  uVar1 = FUN_00083730((int *)(data_ptr + 0xc));
  thunk_FUN_00085cf2(struct_ptr + 1,2,iVar2 + 8,uVar1,0,iVar3,unused);
  return;
}


