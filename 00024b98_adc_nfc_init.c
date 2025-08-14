/*
 * Function: adc_nfc_init
 * Entry:    00024b98
 * Prototype: undefined adc_nfc_init()
 */


undefined4 adc_nfc_init(void)

{
  int iVar1;
  
  iVar1 = FUN_0008638c(&DAT_00087c20);
  if (iVar1 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ADC controller device %s not ready\n\n","adc_nfc_init","adc@e000");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    iVar1 = FUN_0005f654(&DAT_00087c20,&DAT_00088a2a);
    if ((iVar1 < 0) && (0 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Could not setup channel #%d (%d)\n\n","adc_nfc_init");
      }
      else {
        handle_heartbeat("%s(): Could not setup channel #%d (%d)\n\n","adc_nfc_init",0);
      }
    }
  }
  return 0;
}


