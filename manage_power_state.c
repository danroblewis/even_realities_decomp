/*
 * Function: manage_power_state
 * Entry:    00080c46
 * Prototype: undefined __stdcall manage_power_state(undefined4 power_data)
 */


void manage_power_state(undefined4 power_data)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = process_data_with_callback_validation_alt5();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = validate_and_update_ble_connection_parameters(power_data);
  if (((int)uVar2 != 0) && ((int)uVar2 != -0x78)) {
    handle_ble_connection_timeout_with_uart_setup
              (iVar1 + 0x38,(int)((ulonglong)uVar2 >> 0x20),0x8000,0);
    return;
  }
  acquire_mutex_with_priority_control(iVar1 + 0x38);
  return;
}


