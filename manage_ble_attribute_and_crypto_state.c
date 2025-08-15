/*
 * Function: manage_ble_attribute_and_crypto_state
 * Entry:    0005ac30
 * Prototype: undefined manage_ble_attribute_and_crypto_state(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void manage_ble_attribute_and_crypto_state
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5)

{
  int iVar1;
  int iVar2;
  
  handle_ble_connection_state_management_with_privilege_and_sensors(&DAT_200063a0);
  iVar1 = get_ble_handle_value(&DAT_20006448);
  if (-1 < iVar1 << 0x1c) {
    derive_and_process_crypto_keys();
    check_and_log_ble_characteristic_status();
    format_ble_log_message_16byte();
  }
  iVar1 = find_ble_attribute_by_handle(param_1);
  if (iVar1 != 0) {
    if ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0) {
      iVar2 = get_ble_handle_value(iVar1 + 0xc);
      if (-1 < iVar2 << 0x1f) {
        set_bits_in_value(iVar1 + 0xc,2);
      }
    }
  }
  safe_memory_copy_with_bounds_check(param_3,param_4,param_5,&BLE_LOG_MESSAGE_FORMATTING_BUFFER);
  return;
}


