/*
 * Function: handle_device_state_change
 * Entry:    000609f4
 * Prototype: undefined handle_device_state_change()
 */


void handle_device_state_change(int param_1,int param_2)

{
  if (param_2 == 0xbad0000) {
    manage_ble_connection_state_comprehensive(param_1 + 0x30,0xbad0000,0xffffffff,0xffffffff);
    return;
  }
  return;
}


