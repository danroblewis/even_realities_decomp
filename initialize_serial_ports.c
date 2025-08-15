/*
 * Function: initialize_serial_ports
 * Entry:    00086588
 * Prototype: undefined initialize_serial_ports()
 */


void initialize_serial_ports(int param_1)

{
  if (param_1 != 0) {
    process_ble_connection_data_with_priority(param_1 + 0xe0,0);
    return;
  }
  return;
}


