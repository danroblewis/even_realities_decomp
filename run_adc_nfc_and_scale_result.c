/*
 * Function: run_adc_nfc_and_scale_result
 * Entry:    0007c830
 * Prototype: undefined run_adc_nfc_and_scale_result()
 */


undefined4 run_adc_nfc_and_scale_result(int *param_1)

{
  int iVar1;
  
  iVar1 = adc_nfc_run();
  *param_1 = iVar1 * 10;
  return 1;
}


