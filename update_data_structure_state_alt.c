/*
 * Function: update_data_structure_state_alt
 * Entry:    00085d70
 * Prototype: undefined update_data_structure_state_alt()
 */


void update_data_structure_state_alt(int param_1)

{
  int extraout_r2;
  undefined8 uVar1;
  
  uVar1 = is_data_structure_ready_alt(*(undefined4 *)(param_1 + 0x14));
  if (((int)uVar1 != 0) && (extraout_r2 != 0)) {
    *(int *)(extraout_r2 + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}


