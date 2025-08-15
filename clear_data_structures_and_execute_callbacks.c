/*
 * Function: clear_data_structures_and_execute_callbacks
 * Entry:    0007f40c
 * Prototype: undefined clear_data_structures_and_execute_callbacks()
 */


void clear_data_structures_and_execute_callbacks(undefined4 *param_1,undefined4 param_2)

{
  clear_and_reinitialize_linked_list_with_microphone_initialization();
  apply_bitwise_and_mask(param_1 + 0x4e,0xfffffffe);
  if (*(code **)(param_1[0x57] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x57] + 8))(*param_1,param_2,param_1[1]);
    return;
  }
  return;
}


