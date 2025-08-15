/*
 * Function: prepare_system_settings_and_collect_status_data
 * Entry:    0007c34a
 * Prototype: undefined prepare_system_settings_and_collect_status_data()
 */


undefined4 prepare_system_settings_and_collect_status_data(undefined4 param_1,undefined4 param_2)

{
  prepare_system_settings_for_verification();
  handle_data_verification_with_system_state_extraction(param_1,param_2);
  return 0;
}


