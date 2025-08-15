/*
 * Function: validate_data_structure_and_update_state
 * Entry:    00085d82
 * Prototype: undefined validate_data_structure_and_update_state()
 */


int validate_data_structure_and_update_state
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *extraout_r2;
  
  iVar1 = is_data_structure_ready_alt
                    (*(undefined4 *)(param_1 + 0x14),param_2,param_1,param_4,param_4);
  if (iVar1 != 0) {
    if (*extraout_r2 < extraout_r2[3]) {
      return iVar1;
    }
    update_data_structure_state_alt(extraout_r2,8);
  }
  return 0;
}


