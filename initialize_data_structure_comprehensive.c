/*
 * Function: initialize_data_structure_comprehensive
 * Entry:    0007c4b6
 * Prototype: undefined initialize_data_structure_comprehensive()
 */


undefined4 initialize_data_structure_comprehensive(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  uStack_14 = 0;
  local_20 = 0;
  local_1c = 0;
  if (param_1 == (undefined1 *)0x0) {
    uVar1 = 7;
  }
  else {
    *param_1 = 0xc0;
    set_data_structure_flags_and_values(param_1,0,&local_20);
    set_data_structure_flags_and_offset_values(param_1,extraout_r2);
    set_data_structure_flags_and_size_values(param_1,&local_18);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return uVar1;
}


