/*
 * Function: update_adc_nfc_reference_value
 * Entry:    0002542c
 * Prototype: undefined update_adc_nfc_reference_value()
 */


void update_adc_nfc_reference_value(void)

{
  run_adc_nfc_and_scale_result(&DAT_20007a34);
  ADC_NFC_SENSOR_REFERENCE_VALUE = DAT_20007a34;
  return;
}


