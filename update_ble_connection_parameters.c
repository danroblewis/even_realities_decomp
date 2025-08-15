/*
 * Function: update_ble_connection_parameters
 * Entry:    00073f3c
 * Prototype: undefined update_ble_connection_parameters()
 */


void update_ble_connection_parameters(int param_1,undefined4 param_2,int param_3,int param_4)

{
  manage_ble_connection_list();
  if (param_4 != -1 || param_3 != -1) {
    schedule_ble_connection_timeout_with_priority(param_1 + 0x18,&LAB_00086660_1,param_3,param_4);
    return;
  }
  return;
}


