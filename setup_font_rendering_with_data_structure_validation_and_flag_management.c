/*
 * Function: setup_font_rendering_with_data_structure_validation_and_flag_management
 * Entry:    000849da
 * Prototype: undefined setup_font_rendering_with_data_structure_validation_and_flag_management()
 */


undefined4
setup_font_rendering_with_data_structure_validation_and_flag_management
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(iVar5 + 0xc) + 0x58);
  if (iVar2 == 0) {
    uVar1 = 0xfffffff2;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar5 + 0xc) + 100);
    if (iVar3 != 0) {
      *(uint *)(iVar4 + 0x200) = *(uint *)(iVar4 + 0x200) & 0xffffffdf;
      *(undefined4 *)(iVar4 + 0x14c) = 0;
      iVar3 = *(int *)(iVar4 + 0x14c);
    }
    setup_font_rendering(*(int *)(iVar5 + 0xc) + 0x80,param_2,iVar2,iVar3,param_4);
    uVar1 = 0;
    *(undefined1 *)(*(int *)(iVar5 + 0xc) + 0xca) = 0;
    *(undefined1 *)(*(int *)(iVar5 + 0xc) + 0xcb) = 1;
    *(undefined4 *)(iVar4 + 4) = 1;
  }
  return uVar1;
}


