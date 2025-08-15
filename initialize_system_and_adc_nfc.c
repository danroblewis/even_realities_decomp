/*
 * Function: initialize_system_and_adc_nfc
 * Entry:    00025290
 * Prototype: undefined initialize_system_and_adc_nfc()
 */


undefined4 initialize_system_and_adc_nfc(void)

{
  byte local_12;
  byte local_11;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  local_12 = 0;
  SYSTEM_CONFIGURATION_PARAMETER = initialize_driver_context();
  if ((((SYSTEM_CONFIGURATION_PARAMETER != 0) && (*(int *)(SYSTEM_CONFIGURATION_PARAMETER + 4) != 0)
       ) && (*(int *)(SYSTEM_CONFIGURATION_PARAMETER + 0x10) != 0)) &&
     (*(int *)(SYSTEM_CONFIGURATION_PARAMETER + 8) != 0)) {
    calculate_ble_schedule_timing(0x290,0);
    (**(code **)(*(int *)(SYSTEM_CONFIGURATION_PARAMETER + 8) + 8))();
    send_control_message_with_specific_parameters_if_valid(SYSTEM_CONFIGURATION_PARAMETER,&local_10)
    ;
    DEBUG_PRINT("UUID = %02X %02X %02X %02X %02X %02X %02X %02X.\n",local_10 & 0xff,
                local_10 >> 8 & 0xff,local_10 >> 0x10 & 0xff,local_10 >> 0x18,local_c & 0xff,
                local_c >> 8 & 0xff,local_c >> 0x10 & 0xff,local_c >> 0x18);
    if ((local_c >> 8 & 0xff) - 0x50 < 2) {
      DAT_20018c69 = 1;
    }
    send_control_message_with_different_parameters_if_valid
              (SYSTEM_CONFIGURATION_PARAMETER,&local_12);
    DEBUG_PRINT("REV_IC = %02X.\n",(uint)local_12);
    send_control_message_with_alternative_parameters_if_valid
              (SYSTEM_CONFIGURATION_PARAMETER,&local_11);
    DEBUG_PRINT("REF_IC = %02X.\n",(uint)local_11);
    adc_nfc_init();
    reset_sensor_data_buffers();
  }
  return 0;
}


