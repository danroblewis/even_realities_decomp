/*
 * Function: process_data_with_function_pointer
 * Entry:    0007e574
 * Prototype: undefined process_data_with_function_pointer()
 */


int process_data_with_function_pointer(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_40 [36];
  
  uVar2 = -**(int **)(param_1 + 0x2c) & 0x20;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar3 = param_4;
    if (uVar2 <= param_4) {
      uVar3 = uVar2;
    }
    iVar1 = execute_function_pointer_from_structure_offset(param_1,param_2,auStack_40,uVar3);
    if (iVar1 != 0) break;
    iVar1 = memcmp_byte_arrays(param_3,auStack_40,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    param_4 = param_4 - uVar3;
    param_2 = param_2 + uVar3;
    param_3 = param_3 + uVar3;
  }
  return iVar1;
}


