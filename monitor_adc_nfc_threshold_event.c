/*
 * Function: monitor_adc_nfc_threshold_event
 * Entry:    00025474
 * Prototype: undefined monitor_adc_nfc_threshold_event()
 */


undefined4 monitor_adc_nfc_threshold_event(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_adc_nfc_threshold_exceeded();
  if (iVar1 == 0) {
    iVar1 = calculate_ble_connection_timing_with_validation();
    if (iVar1 - ADC_NFC_THRESHOLD_EVENT_MONITORING < 0) {
      calculate_ble_connection_timing_with_validation();
    }
    uVar2 = 0;
  }
  else {
    ADC_NFC_THRESHOLD_EVENT_MONITORING = calculate_ble_connection_timing_with_validation();
    uVar2 = 1;
  }
  return uVar2;
}


