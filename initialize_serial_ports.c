/*
 * Function: initialize_serial_ports
 * Entry:    00086588
 * Prototype: undefined initialize_serial_ports()
 */


void initialize_serial_ports(int param_1)

{
  if (param_1 != 0) {
    FUN_00074a54(param_1 + 0xe0,0);
    return;
  }
  return;
}


