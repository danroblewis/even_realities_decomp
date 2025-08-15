/*
 * Function: get_adc_nfc_current_value
 * Entry:    00025448
 * Prototype: undefined get_adc_nfc_current_value()
 */


undefined4 get_adc_nfc_current_value(void)

{
  update_adc_nfc_reference_value();
  return ADC_NFC_SENSOR_REFERENCE_VALUE;
}


