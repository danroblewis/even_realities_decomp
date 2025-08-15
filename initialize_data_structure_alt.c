/*
 * Function: initialize_data_structure_alt
 * Entry:    00025090
 * Prototype: undefined initialize_data_structure_alt()
 */


undefined4 initialize_data_structure_alt(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = 7;
    uVar1 = 0;
    *(undefined1 **)(param_1 + 4) = &LAB_0007c38a_1;
    *(undefined1 **)(param_1 + 8) = &LAB_00024a40_1;
    *(undefined1 **)(param_1 + 0xc) = &LAB_00025020_1;
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 2);
  }
  return uVar1;
}


