/*
 * Function: check_adc_nfc_threshold_exceeded
 * Entry:    00025458
 * Prototype: undefined check_adc_nfc_threshold_exceeded()
 */


bool check_adc_nfc_threshold_exceeded(void)

{
  update_adc_nfc_reference_value();
  return 0x13ec < ADC_NFC_SENSOR_REFERENCE_VALUE;
}


