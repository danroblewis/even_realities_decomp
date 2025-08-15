/*
 * Function: cleanup_and_validate_ble_connections
 * Entry:    0005a6b0
 * Prototype: undefined cleanup_and_validate_ble_connections()
 */


void cleanup_and_validate_ble_connections
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined1 *puVar2;
  int iVar3;
  
  clear_bits_in_value(&DAT_20006448,0xfffffff7,param_3,param_4,param_4);
  process_data_with_parameter_validation_and_compression_alt(&DAT_200063a0,extraout_r1,0x148,0);
  iVar3 = 0;
  puVar2 = &DAT_2000aed4;
  do {
    iVar1 = compare_byte_arrays_7_bytes(puVar2 + 1,&DAT_000f2b3a);
    if ((iVar1 == 0) && ((int)((uint)(byte)puVar2[8] << 0x1f) < 0)) {
      iVar1 = bt_connection_disconnect_with_validation_and_callback(0,puVar2 + 1);
      if (iVar1 != 0) {
        cleanup_ble_connection_list();
        validate_and_process_ble_characteristics_with_callback_validation_and_state_management
                  (iVar1);
      }
      clear_bits_in_value(puVar2 + 0xc,0xfffffffd);
      conditional_ble_service_discovery_processing(puVar2,0);
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
  } while (iVar3 != 3);
  return;
}


