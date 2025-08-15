/*
 * Function: initialize_data_structure_with_extraction_and_flag_configuration
 * Entry:    0008496c
 * Prototype: undefined initialize_data_structure_with_extraction_and_flag_configuration()
 */


void initialize_data_structure_with_extraction_and_flag_configuration
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_1c;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar2 = *piVar3;
  uStack_1c = param_2;
  extract_byte_from_nested_data_structure(param_1,(int)&uStack_1c + 3,param_3,param_4,param_1);
  if (uStack_1c._3_1_ == '\0') {
    *(undefined4 *)(iVar2 + 0x544) = param_2;
    *(undefined4 *)(iVar2 + 0x548) = param_3;
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x158) = 0;
    if (piVar3[1] << 0x1b < 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) | 1;
      }
      *(undefined4 *)(**(int **)(param_1 + 4) + 0x500) = 8;
      *(undefined4 *)(iVar2 + 0x304) = 0x400000;
    }
    *(undefined4 *)(iVar2 + 8) = 1;
  }
  return;
}


