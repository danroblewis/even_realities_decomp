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
    iVar1 = thunk_FUN_00074f68();
    if (iVar1 - DAT_20007a10 < 0) {
      thunk_FUN_00074f68();
    }
    uVar2 = 0;
  }
  else {
    DAT_20007a10 = thunk_FUN_00074f68();
    uVar2 = 1;
  }
  return uVar2;
}


