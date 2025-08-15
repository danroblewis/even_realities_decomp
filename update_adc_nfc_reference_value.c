/*
 * Function: update_adc_nfc_reference_value
 * Entry:    0002542c
 * Prototype: undefined update_adc_nfc_reference_value()
 */


void update_adc_nfc_reference_value(void)

{
  run_adc_nfc_and_scale_result(&DAT_20007a34);
  DAT_20007a24 = DAT_20007a34;
  return;
}


