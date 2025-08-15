/*
 * Function: copy_ble_connection_data
 * Entry:    00083062
 * Prototype: undefined copy_ble_connection_data()
 */


void copy_ble_connection_data(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_2 + 6);
  return;
}


