/*
 * Function: cleanup_and_reinitialize_microphone_structures_alt
 * Entry:    0007f438
 * Prototype: undefined cleanup_and_reinitialize_microphone_structures_alt()
 */


void cleanup_and_reinitialize_microphone_structures_alt(undefined4 *param_1)

{
  clear_and_reinitialize_linked_list_with_microphone_initialization();
  apply_bitwise_and_mask(param_1 + 0x4e,0xfffffffe);
  if (*(code **)(param_1[0x57] + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x57] + 4))(*param_1,param_1[1]);
    return;
  }
  return;
}


