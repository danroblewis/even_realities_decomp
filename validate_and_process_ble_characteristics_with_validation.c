/*
 * Function: validate_and_process_ble_characteristics_with_validation
 * Entry:    000559fc
 * Prototype: undefined validate_and_process_ble_characteristics_with_validation()
 */


uint validate_and_process_ble_characteristics_with_validation(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  acquire_connection_mutex(&DAT_20002018);
  apply_bitwise_and_mask(&DAT_20002028,0xffffbfff);
  iVar1 = get_ble_characteristic_value(&DAT_20002028);
  if (iVar1 << 0x18 < 0) {
    iVar1 = get_ble_characteristic_value(&DAT_20002028);
    if (iVar1 << 0x15 < 0) {
      iVar1 = handle_bluetooth_privacy_mode_management_with_validation_and_state_management
                        (&DAT_20002018);
      if (iVar1 == 0) {
        uVar4 = 4;
        puVar3 = &DAT_000f2b33;
      }
      else {
        uVar4 = 5;
        puVar3 = &DAT_20002021;
      }
      iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback
                        (DAT_20002018,puVar3,uVar4);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xc) = 0;
        bt_connection_state_transition();
        validate_and_process_ble_characteristics_with_callback_validation_and_state_management
                  (iVar1);
      }
    }
    uVar2 = send_ble_command_0x200a(&DAT_20002018,0);
    return uVar2;
  }
  return (uint)(iVar1 << 0x18) >> 0x1f;
}


