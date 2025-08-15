/*
 * Function: initialize_data_structure_alt2
 * Entry:    000250c4
 * Prototype: undefined initialize_data_structure_alt2()
 */


undefined4 initialize_data_structure_alt2(undefined1 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = 8;
    *(undefined1 **)(param_1 + 4) = &LAB_0007c39c_1;
    *(undefined1 **)(param_1 + 8) = &LAB_00024ad8_1;
    *(undefined1 **)(param_1 + 0xc) = &LAB_00025058_1;
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    param_1[0x18] = *(undefined1 *)(param_2 + 2);
    return 0;
  }
  return 7;
}


