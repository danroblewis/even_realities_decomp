/*
 * Function: handle_ble_connection_error
 * Entry:    0005e3e0
 * Prototype: undefined handle_ble_connection_error()
 */


void handle_ble_connection_error(int param_1)

{
  undefined4 local_10;
  char *local_c;
  
  local_c = "SMP Timeout";
  local_10 = 2;
  process_and_compress_data_wrapper(&DAT_00088180,0x1040,&local_10);
  handle_ble_connection_state_change(param_1 + -0x208,8);
  set_bit_in_value(param_1 + -0x204,4);
  return;
}


