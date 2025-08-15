/*
 * Function: initialize_debug_system
 * Entry:    00086502
 * Prototype: undefined initialize_debug_system()
 */


void initialize_debug_system(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  manage_ble_connection_list_with_priority_control(param_1,0,param_2,0,1,param_2,param_3);
  return;
}


