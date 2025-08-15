/*
 * Function: bt_connection_update_flags
 * Entry:    000813b4
 * Prototype: undefined bt_connection_update_flags()
 */


void bt_connection_update_flags(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & param_2;
  return;
}


