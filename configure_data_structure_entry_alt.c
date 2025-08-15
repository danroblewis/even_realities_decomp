/*
 * Function: configure_data_structure_entry_alt
 * Entry:    0007f79e
 * Prototype: undefined configure_data_structure_entry_alt()
 */


undefined4 configure_data_structure_entry_alt(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (0xff < param_4 - 1U)) || (param_2 != 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    *(short *)(param_1 + 0x8f0) = (short)param_4;
    *(undefined1 *)(param_1 + 0x8e8) = 1;
    *(int *)(param_1 + 0x8f4) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}


