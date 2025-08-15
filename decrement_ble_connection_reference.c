/*
 * Function: decrement_ble_connection_reference
 * Entry:    00083778
 * Prototype: undefined decrement_ble_connection_reference()
 */


void decrement_ble_connection_reference(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -8);
  *(int *)(param_1 + -8) = iVar1 + 1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    return;
  }
  initialize_device_configuration_flags();
  return;
}


