/*
 * Function: check_timeout_message_states_and_set_flag
 * Entry:    0002c1fc
 * Prototype: undefined check_timeout_message_states_and_set_flag()
 */


void check_timeout_message_states_and_set_flag(void)

{
  int iVar1;
  
  get_high_resolution_timestamp();
  iVar1 = calculate_next_timeout_message_state();
  if (iVar1 != 0) {
    DAT_20018d9e = 1;
  }
  return;
}


