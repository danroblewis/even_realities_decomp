/*
 * Function: add_entry_to_connection_list
 * Entry:    000859c2
 * Prototype: undefined add_entry_to_connection_list()
 */


undefined4 add_entry_to_connection_list(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + -8);
  manage_ble_connection_state_wrapper_alt(param_1 + 0x58);
  *(short *)(param_2 + -8) = (short)uVar1;
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 0xb8);
  *(int *)(param_2 + -0x10) = param_1 + 0xb4;
  *(int *)(param_1 + 0xb8) = param_2 + -0x10;
  **(int **)(param_2 + -0xc) = param_2 + -0x10;
  z_spin_lock_valid(param_1 + 0x58);
  return 0;
}


