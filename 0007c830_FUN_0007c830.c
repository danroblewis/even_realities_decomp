/*
 * Function: FUN_0007c830
 * Entry:    0007c830
 * Prototype: undefined FUN_0007c830()
 */


undefined4 FUN_0007c830(int *param_1)

{
  int iVar1;
  
  iVar1 = adc_nfc_run();
  *param_1 = iVar1 * 10;
  return 1;
}


