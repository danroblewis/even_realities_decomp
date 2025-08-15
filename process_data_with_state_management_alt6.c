/*
 * Function: process_data_with_state_management_alt6
 * Entry:    00052744
 * Prototype: undefined process_data_with_state_management_alt6()
 */


void process_data_with_state_management_alt6(int param_1)

{
  initialize_debug_system_with_validation(param_1 + 0x10);
  initialize_accelerometer(&DAT_20005bb8,param_1);
  return;
}


