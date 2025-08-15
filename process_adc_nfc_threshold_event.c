/*
 * Function: process_adc_nfc_threshold_event
 * Entry:    000254a0
 * Prototype: undefined process_adc_nfc_threshold_event()
 */


void process_adc_nfc_threshold_event(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = monitor_adc_nfc_threshold_event();
  *(bool *)param_2 = iVar1 != 0;
  if (iVar1 != 0) {
    if (ADC_NFC_THRESHOLD_EVENT_BUFFER == '\0') {
      ADC_NFC_THRESHOLD_EVENT_BUFFER = '\x01';
    }
  }
  else if ((ADC_NFC_THRESHOLD_EVENT_BUFFER != '\0') &&
          (ADC_NFC_THRESHOLD_EVENT_BUFFER = '\0', *(char *)(param_1 + 2) == '\0')) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}


